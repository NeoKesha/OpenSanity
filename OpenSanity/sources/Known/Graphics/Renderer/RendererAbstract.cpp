#include "headers/Known/Graphics/Renderer/RendererAbstract.h"

#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Iterators/TypeC/Iterator4/IteratorC4.h"
#include "headers/Global.h"

RendererAbstract::RendererAbstract() {
	substruct.capacity = 0;
	substruct.expansion = 10;
	substruct.count = 0;
	substruct.lastIndex = -1;
	substruct.indexArray = (short*)0x0;
	substruct.pointerArray = (FontRenderer**)0x0;

	vec = Vector2();
	return;
}

RendererAbstract::~RendererAbstract() {
	CleanUp();
	return;
}


void RendererAbstract::CleanUp() {
	IteratorC4 iterator(&substruct);
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
	delete substruct.indexArray;
	delete substruct.pointerArray;
	return;
}


void RendererAbstract::UnkMethod1() {
	uint uVar1;
	IteratorC4 iterator(&substruct);
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
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall RendererAbstract::UnkMethod2(Renderer *this){
		AutoClass25 *pAVar1;
		InstanceContextRefCounter *pIVar2;
		FontRenderer **result;
		IteratorC4 local_c;
		local_c.collection = &(this->parent).substruct;
		local_c.parent = (IteratorCBase_VTable *)&IteratorC_VT_4;
		local_c.i = 0;
		local_c.index = 0;
		IteratorC4::Reset(&local_c);
		if (local_c.index != (local_c.collection)->cnt2) {
		do {
		result = (FontRenderer **)(*(local_c.parent)->Get)((IteratorCAbstract *)&local_c);
		if (((((*(byte *)&(*result)->flags & 1) != 0) &&(pAVar1 = (*result)->field1_0x4, pAVar1 != (AutoClass25 *)0x0)) &&(pIVar2 = pAVar1->ctxPtr, pIVar2 != (InstanceContextRefCounter *)0x0)) &&(pIVar2->ctx != (InstanceContext *)0x0)) {
		_DAT_003ead18 = _DAT_003ead18 + 1;
		}
		IteratorC4::Iterate(&local_c);
		}
		 while (local_c.index != (local_c.collection)->cnt2);
		}
		return;
		}
		
	*/
	return;
}

void RendererAbstract::Render() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall RendererAbstract::Render(Renderer *this){
		FontRenderer **result;
		IteratorC4 local_c;
		local_c.collection = &(this->parent).substruct;
		local_c.parent = (IteratorCBase_VTable *)&IteratorC_VT_4;
		local_c.i = 0;
		local_c.index = 0;
		IteratorC4::Reset(&local_c);
		if (local_c.index != (local_c.collection)->cnt2) {
		do {
		result = (FontRenderer **)(*(local_c.parent)->Get)((IteratorCAbstract *)&local_c);
		FontRenderer::Render(*result);
		IteratorC4::Iterate(&local_c);
		}
		 while (local_c.index != (local_c.collection)->cnt2);
		}
		return;
		}
		
	*/
	return;
}

void RendererAbstract::UnkMethod5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall RendererAbstract::UnkMethod5(Renderer *this){
		int cnt;
		int i;
		short *index;
		FontRenderer **value;
		(*((this->parent).vtable)->Stub2)();
		value = (FontRenderer **)0x0;
		i = 0;
		cnt = (this->parent).substruct.cnt1 + -1;
		if (0 < cnt) {
		index = (this->parent).substruct.indexArray;
		do {
		if (*index == -1) {
		value = (this->parent).substruct.pointerArray + i;
		break;
		}
		i = i + 1;
		index = index + 1;
		}
		 while (i < cnt);
		}
		FontRenderer::DrawAll(*value);
		(*((this->parent).vtable)->SwapBuffer)();
		(*((this->parent).vtable)->Stub3)();
		return;
		}
		
	*/
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
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall RendererAbstract::FUN_00114940(RendererAbstract *this){
		FontRenderer **result;
		IteratorC4 local_c;
		local_c.collection = &this->substruct;
		local_c.parent = (IteratorCBase_VTable *)&IteratorC_VT_4;
		local_c.i = 0;
		local_c.index = 0;
		IteratorC4::Reset(&local_c);
		if (local_c.index != (local_c.collection)->cnt2) {
		do {
		result = (FontRenderer **)(*(local_c.parent)->Get)((IteratorCAbstract *)&local_c);
		if ((*(byte *)&(*result)->flags & 1) != 0) {
		FontRenderer::DrawAll(*result);
		}
		IteratorC4::Iterate(&local_c);
		}
		 while (local_c.index != (local_c.collection)->cnt2);
		}
		return;
		}
		
	*/
	return;
}


