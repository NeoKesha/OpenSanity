#include "headers/Known/Graphics/Renderer/RendererSubStruct.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"

RendererSubStruct::RendererSubStruct() {
	cnt1 = 0;
	field2_0x6 = 10;
	cnt2 = 0;
	lastIndex = -1;
	indexArray = null;
	pointerArray = null;
}

RendererSubStruct::~RendererSubStruct() {
	delete indexArray;
	delete pointerArray;
}

void RendererSubStruct::RelocateArrays() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall RendererSubStruct::RelocateArrays(RendererSubStruct *this){
		FontRenderer **ptr;
		FontRenderer **ppFVar1;
		undefined4 *puVar2;
		int iVar3;
		uint uVar4;
		uint uVar5;
		undefined4 *puVar6;
		bool bVar7;
		uVar4 = (int)this->cnt1 & 0x80000001;
		bVar7 = uVar4 == 0;
		if ((int)uVar4 < 0) {
		bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar7) {
		this->cnt1 = this->cnt1 + 1;
		}
		uVar4 = (int)this->field2_0x6 & 0x80000001;
		bVar7 = uVar4 == 0;
		if ((int)uVar4 < 0) {
		bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar7) {
		this->field2_0x6 = this->field2_0x6 + 1;
		}
		ppFVar1 = (FontRenderer **)VirtualPool::AllocateMemory(((int)this->field2_0x6 + (int)this->cnt1) * 4);
		puVar2 = (undefined4 *)VirtualPool::AllocateMemory(((int)this->field2_0x6 + (int)this->cnt1) * 2);
		if (this->cnt1 != 0) {
		ptr = this->pointerArray;
		this->pointerArray = ppFVar1;
		FUN_00119ef0((int)this,(int)ptr);
		uVar5 = (int)this->cnt1 << 1;
		puVar6 = puVar2;
		for (uVar4 = uVar5 >> 2;
		 uVar4 != 0;
		 uVar4 = uVar4 - 1) {
		*puVar6 = 0xffffffff;
		puVar6 = puVar6 + 1;
		}
		for (uVar5 = uVar5 & 3;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*(undefined *)puVar6 = 0xff;
		puVar6 = (undefined4 *)((int)puVar6 + 1);
		}
		VirtualPool::FreeMemory(ptr);
		VirtualPool::FreeMemory(this->indexArray);
		}
		iVar3 = (int)this->cnt1;
		if (iVar3 < this->field2_0x6 + iVar3) {
		do {
		*(short *)((int)puVar2 + iVar3 * 2) = (short)iVar3 + 1;
		iVar3 = iVar3 + 1;
		}
		 while (iVar3 < (int)this->field2_0x6 + (int)this->cnt1);
		}
		*(undefined2 *)((int)puVar2 + iVar3 * 2 + -2) = 0xfffe;
		this->pointerArray = ppFVar1;
		this->indexArray = (short *)puVar2;
		this->lastIndex = this->cnt1;
		this->cnt1 = this->field2_0x6 + this->cnt1;
		return;
		}
		
	*/
	return;
}

void RendererSubStruct::Expand() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall RendererSubStruct::Expand(RendererSubStruct *this){
		short i;
		if (this->cnt2 < this->cnt1) {
		i = this->lastIndex;
		this->lastIndex = this->indexArray[i];
		this->indexArray[i] = -1;
		this->cnt2 = this->cnt2 + 1;
		return;
		}
		RelocateArrays(this);
		Expand(this);
		return;
		}
		
	*/
	return;
}

void RendererSubStruct::Add(FontRenderer** fontRenderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall RendererSubStruct::Add(RendererSubStruct *this,FontRenderer **fontRenderer){
		int iVar1;
		short i;
		if (this->cnt2 < this->cnt1) {
		i = this->lastIndex;
		this->lastIndex = this->indexArray[i];
		this->indexArray[i] = -1;
		this->cnt2 = this->cnt2 + 1;
		this->pointerArray[i] = *fontRenderer;
		return;
		}
		RelocateArrays(this);
		iVar1 = Expand(this);
		this->pointerArray[iVar1] = *fontRenderer;
		return;
		}
		
	*/
	return;
}
