#include "headers/Known/Graphics/Renderer/Renderer.h"

#include "headers/Known/Graphics/ScreenInfo.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Time/UnkTimePack.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramY.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramB.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/EntryDescriptorMaterial.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
#include "headers/Global.h"

Renderer::Renderer(int width, int height, bool isPal) : RendererAbstract() {
	Global* GLOBAL = Global::Get();
	float x;
	float y;

	InitSinTable();
	GLOBAL->RENDERER_WIDTH_1 = width;
	GLOBAL->RENDERER_WIDTH_2 = 640;
	GLOBAL->RENDERER_WIDTH_3 = 640;
	GLOBAL->RENDERER_HEIGHT_1 = height;
	GLOBAL->RENDERER_HEIGHT_2 = height;
	GLOBAL->RENDERER_HEIGHT_3 = height;
	if (!isPal) {
		if (-1.0 <= 0.281f) {
			if (0.281f <= 1.0) {
				vec.x = 0.281f;
			}
			else {
				vec.x = 1.0;
			}
		}
		else {
			vec.x = -1.0;
		}
		if (-1.0 <= 0.016f) {
			if (0.016f <= 1.0) {
				vec.y = 0.016f;
			}
			else {
				vec.y = 1.0;
			}
		}
		else {
			vec.y = -1.0;
		}
		y = vec.y;
		x = vec.x;
	}
	else {
		if (-1.0 <= 0.344f) {
			if (0.344f <= 1.0) {
				vec.x = 0.344f;
			}
			else {
				vec.x = 1.0;
			}
		}
		else {
			vec.x = -1.0;
		}
		if (-1.0 <= 0.5f) {
			if (0.5f <= 1.0) {
				vec.y = 0.5f;
			}
			else {
				vec.y = 1.0;
			}
		}
		else {
			vec.y = -1.0;
		}
		y = vec.y;
		x = vec.x;
	}
	GLOBAL->INT_003eaac8 = (int)(x * 256.0);
	GLOBAL->INT_003eaacc = (int)(y * 256.0);
	CreateGradientArray();
	GLOBAL->INT_003eb440 = 0;
	ConstructMaterialShaders();
	GLOBAL->INT_003ead1c = 0x44;
	GLOBAL->INT_003ead20 = 0x48;
	GLOBAL->INT_003ead24 = 0x42;
	GLOBAL->INT_003ead28 = 0x49;
	GLOBAL->INT_003ead2c = 0x46;
	GLOBAL->INT_003ead30 = 0x89;
	SetupTexture();
}

Renderer::~Renderer() {
	CleanUp();
}

void Renderer::ClearViewport(bool clearTargetAndStencil, bool clearZbuffer)
{
	Global* GLOBAL = Global::Get();

	uint clearFlags = D3DCLEAR_TARGET;
	if (clearTargetAndStencil) {
		clearFlags |= D3DCLEAR_STENCIL;
	}
	if (clearZbuffer) {
		clearFlags |= D3DCLEAR_ZBUFFER;
	}
	GLOBAL->D3D_DEVICE->Clear(0, null, clearFlags, 0xFF000000, 1.0, 0);
}

void Renderer::InitSinTable()
{
	Global* GLOBAL = Global::Get();
	for (int i = 0; i < 32768; ++i) {
		GLOBAL->SinTable[i] = sin(i * 0.0001917476);
	}
}

void Renderer::ResetGradient() {
	Global* GLOBAL = Global::Get();
	GLOBAL->INT_003eb440 = 0;
	ResetGradient(false);
}

void Renderer::ResetGradient(bool flag) {
	Global* GLOBAL = Global::Get();

	for (int i = 0; i < GLOBAL->GRADIENT_STEPS; ++i) {
		GLOBAL->GRADIENT[i].x = 0;
		GLOBAL->GRADIENT[i].y = 0;
		GLOBAL->GRADIENT[i].z = 0;
		GLOBAL->GRADIENT[i].w = 0;
	}

	if (flag == false) {
		GLOBAL->DAT_003ead38 = 0;
	}
	GLOBAL->DAT_003eb460 = 0;
	return;
}

int Renderer::UnkFunc() {
	return 0;
}

void Renderer::UpdateShadersClock(UnkTimePack* clockSub) {
	Global* GLOBAL = Global::Get();

	//IsFirstEven = ~*(byte*)&clockSub->flags & 1; //Is never used anywhere, not bothering
	float time = clockSub->time2 * GLOBAL->TIME_PER_TICK_1;

	for (int i = 0; i < GLOBAL->ENV_CLASS_187_SECTION_MATERIALS.entries.cnt; ++i) {
		TwinsanityMaterialShader* shader = GLOBAL->ENV_CLASS_187_SECTION_MATERIALS.entries.elements[i].matPtr->shader;
		for (int j = 0; j < shader->shaderProgramCnt; ++j) {
			shader->shaderPrograms[j]->UpdateClock(time);
		}
	}

	return;
}

void Renderer::SetXY(Vector2* val) {
	RendererAbstract::SetXY(val);

	Global* GLOBAL = Global::Get();
	GLOBAL->INT_003eaac8 = (int)(vec.x * 256.0);
	GLOBAL->INT_003eaacc = (int)(vec.y * 256.0);
	return;
}

void Renderer::SwapBuffer() {
	Global* GLOBAL = Global::Get();
	GLOBAL->D3D_DEVICE->Present(null, null, null, null); //No Swap in this SDK version
	return;
}

FontRenderer* Renderer::CreateFontRenderer(ScreenInfo* screen) {
	FontRenderer* fontRednerer = new FontRenderer(this, screen);
	renderArray.Add(&fontRednerer); //TODO: or (FontRenderer**)&screen???
	return fontRednerer;
}

void Renderer::CreateGradientArray()
{
	Global* GLOBAL = Global::Get();
	GLOBAL->GRADIENT_STEPS = 48;
	GLOBAL->GRADIENT = new Vector4[GLOBAL->GRADIENT_STEPS];

	float val = 1.0f;
	for (int i = 0; i < GLOBAL->GRADIENT_STEPS; ++i) {
		GLOBAL->GRADIENT[i].x = val;
		GLOBAL->GRADIENT[i].y = 0;
		GLOBAL->GRADIENT[i].z = 0;
		GLOBAL->GRADIENT[i].w = 0;

		val /= 2.0f;
	}
}

void Renderer::ConstructMaterialShaders()
{
	Global* GLOBAL = Global::Get();
	GLOBAL->MaterialShader1 = new TwinsanityMaterialShader();
	ShaderProgramY* shaderProgram1 = new ShaderProgramY();
	if (GLOBAL->MaterialShader1->shaderProgramCnt < 4) {
		GLOBAL->MaterialShader1->shaderPrograms[GLOBAL->MaterialShader1->shaderProgramCnt] = shaderProgram1;
		++GLOBAL->MaterialShader1->shaderProgramCnt;
	}
	//shaderProgram1->EmptyFunction();

	GLOBAL->MaterialShader2 = new TwinsanityMaterialShader();
	ShaderProgramB* shaderProgram2 = new ShaderProgramB();
	if (GLOBAL->MaterialShader2->shaderProgramCnt < 4) {
		GLOBAL->MaterialShader2->shaderPrograms[GLOBAL->MaterialShader2->shaderProgramCnt] = shaderProgram2;
		++GLOBAL->MaterialShader2->shaderProgramCnt;
	}
	//shaderProgram2->EmptyFunction();
}

void Renderer::SetupTexture()
{
	Global* GLOBAL = Global::Get();
	GLOBAL->D3D_DEVICE->CreateTexture(256,1,1,0,D3DFORMAT::D3DFMT_X8R8G8B8, D3DPOOL_DEFAULT, &GLOBAL->TEXTURE);
	GLOBAL->D3D_DEVICE->SetTexture(1, GLOBAL->TEXTURE);
	Vector4 data(1.0f, 0.0f, 0.02f, 0.5f);
	GLOBAL->D3D_DEVICE->SetVertexShaderConstant(0x6f, &data, 1);
}

