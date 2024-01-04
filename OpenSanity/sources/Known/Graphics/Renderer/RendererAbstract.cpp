#include "headers/Known/Graphics/Renderer/RendererAbstract.h"

#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Unknown/AutoClasses/AutoClass25/AutoClass25.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Global.h"

RendererAbstract::RendererAbstract() {
	vec = Vector2();
	return;
}

RendererAbstract::~RendererAbstract() {
	CleanUp();
	return;
}


void RendererAbstract::CleanUp() {
	TwinArrayIterator<FontRenderer> iterator(&renderArray);
	iterator.Reset();
	if (iterator.index != (iterator.collection)->count) {
		do {
			FontRenderer* fontRenderer = *iterator.Get();
			if (fontRenderer != null) {
				if (fontRenderer->screenInfoExt != null) {
					delete fontRenderer->screenInfoExt;
				}
				fontRenderer->fontCollection.CleanUp();
				delete fontRenderer;
			}
			iterator.Iterate();
		} while (iterator.index != (iterator.collection)->count);
	}
	delete renderArray.indexArray;
	delete renderArray.pointerArray;
	return;
}


void RendererAbstract::UnkMethod1() {
	TwinArrayIterator<FontRenderer> iterator(&renderArray);
	//Stub2();
	iterator.Reset();
	while (iterator.index != (iterator.collection)->count) {
		FontRenderer*  result = *iterator.Get();
		if ((result->flags & 1) != 0) {
			result->flags = result->flags | 0x30;
		}
		iterator.Iterate();
	}
	//Stub3();
}

void RendererAbstract::UnkMethod2() {
	Global* GLOBAL = Global::Get();

	TwinArrayIterator<FontRenderer> iterator(&renderArray);
	iterator.Reset();
	while (iterator.index != (iterator.collection)->count) {
		FontRenderer* result = *iterator.Get();
		if ((result->flags & 1) == 0) {
			iterator.Iterate();
			continue;
		}
		AutoClass25* ac25 = result->field1_0x4;
		if (ac25 == null) {
			iterator.Iterate();
			continue;
		}
		InstanceContextRefCounter* refCounter = ac25->ctxPtr;
		if (refCounter == null) {
			iterator.Iterate();
			continue;
		}
		InstanceContext* ctx = refCounter->ctx;
		if (ctx == null) {
			iterator.Iterate();
			continue;
		}
		GLOBAL->DAT_003ead18 = GLOBAL->DAT_003ead18 + 1;
		iterator.Iterate();
	}
}

void RendererAbstract::Render() {
	TwinArrayIterator<FontRenderer> iterator(&renderArray);
	iterator.Reset();
	while (iterator.index != (iterator.collection)->count) {
		FontRenderer* result = *iterator.Get();
		result->Render();
		iterator.Iterate();
	}
}

void RendererAbstract::UnkMethod5() {
	FontRenderer* value = null;
	//Stub2();
	for (int i = 0; i < this->renderArray.capacity; ++i) {
		if (this->renderArray.indexArray[i] == -1) {
			value = this->renderArray.pointerArray[i];
			break;
		}
	}
	value->DrawAll();
	SwapBuffer();
	//Stub3();
	return;
}

void RendererAbstract::SetXY(Vector2* val) {
	if (-1.0 < val->x || val->x == -1.0) {
		if (val->x <= 1.0) {
			vec.x = val->x;
		}
		else {
			vec.x = 1.0;
		}
	}
	else {
		vec.x = -1.0;
	}
	if (val->y <= -1.0 && val->y != -1.0) {
		vec.y = -1.0;
		return;
	}
	if (1.0 < val->y) {
		vec.y = 1.0;
		return;
	}
	vec.y = val->y;
	return;
}

void RendererAbstract::FUN_00114940() {

	TwinArrayIterator<FontRenderer> iterator(&renderArray);
	iterator.Reset();
	while (iterator.index != (iterator.collection)->count) {
		FontRenderer* result = *iterator.Get();
		if ((result->flags & 1) != 0) {
			result->DrawAll();
		}
		iterator.Iterate();
	}
}

void RendererAbstract::SwapBuffer()
{
	//Abstract method
}


