#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Renderer/RendererAbstract.h"

class Renderer : public RendererAbstract {
	public:

		Renderer(int width, int height, bool isPal);
		~Renderer();

		void ClearViewport(bool clearTargetAndStencil, bool clearZbuffer);
		static void InitSinTable();
		static void ResetGradient(bool flag);
		static void ResetGradient();
		static int UnkFunc();
		static void UpdateShadersClock(UnkTimePack* clockSub);
		virtual void SetXY(Vector2* vec);
		static void SwapBuffer();
		virtual FontRenderer* CreateFontRenderer(ScreenInfo* screen);

		static void CreateGradientArray();
		static void ConstructMaterialShaders();
		static void SetupTexture();
};
