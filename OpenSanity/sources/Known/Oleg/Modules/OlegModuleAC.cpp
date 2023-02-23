#include "headers/Known/Oleg/Modules/OlegModuleAC.h"

#include "headers/Known/Oleg/UIElement/UIElementImage.h"

OlegModuleAC::OlegModuleAC(UIElementImage* param_1) : OlegModuleA()
{
	this->field1_0x88 = param_1;
}

OlegModuleAC::OlegModuleAC(float x, UIElementImage* param_2) : OlegModuleA(x)
{
	this->field1_0x88 = param_2;
}

void OlegModuleAC::Render(FontRenderer* renderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAC::Render(OlegModuleAC *this,int param_1){
		float fVar1;
		uint uVar2;
		int iVar3;
		OlegModuleAbstract *this_00;
		float fVar4;
		uint uVar5;
		UIElementImage *pUVar6;
		uint local_70;
		Vector2 local_60;
		Vector2 local_58;
		Matrix4 local_50;
		uVar2 = (this->parent).parent.flags;
		if (((~(byte)(uVar2 >> 9) & 1) != 0) && (1 < ((byte)uVar2 & 0xf))) {
		local_58.x = (this->parent).array[2].x;
		local_58.y = (this->parent).array[2].y;
		local_60.x = (this->parent).array[6].x;
		local_60.y = (this->parent).array[6].y;
		pUVar6 = this->field1_0x88;
		if ((uVar2 & 0x400) != 0) {
		FUN_00104540(false,&(this->parent).parent.field2_0x8,&local_58);
		}
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(false,&local_60);
		}
		iVar3 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar3 != 0) {
		fVar1 = *(float *)(iVar3 + 0x10);
		local_60.x = fVar1 * local_60.x;
		local_60.y = local_60.y * fVar1;
		}
		local_60.y = local_60.y * FLOAT_00386ab4;
		local_58.x = local_58.x - local_60.x * FLOAT_00386ab4;
		local_58.y = local_58.y - local_60.y;
		local_60.x = local_60.x * FLOAT_00386618;
		Matrix4::Construct1(&local_50);
		local_50.m11 = local_60.x;
		local_50.m22 = local_60.y;
		*(float *)(param_1 + 0x10) = (this->parent).array[0].x;
		local_70 = 0;
		do {
		fVar1 = (float)local_70;
		uVar5 = 0;
		if ((int)local_70 < 0) {
		fVar1 = fVar1 + FLOAT_00386458;
		}
		do {
		fVar4 = (float)uVar5;
		if ((int)uVar5 < 0) {
		fVar4 = fVar4 + FLOAT_00386458;
		}
		local_50.m42 = fVar1 * local_60.y + local_58.y;
		local_50.m41 = fVar4 * local_60.x + local_58.x;
		FUN_00104260(param_1,&local_50.m11,pUVar6,uVar2 >> 0xb & 0xf);
		uVar5 = uVar5 + 1;
		pUVar6 = pUVar6 + 1;
		}
		 while (uVar5 < 4);
		local_70 = local_70 + 1;
		}
		 while (local_70 < 2);
		}
		this_00 = (this->parent).parent.next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->Render)(this_00,(FontRenderer *)param_1);
		}
		return;
		}
		
	*/
	return;
}
