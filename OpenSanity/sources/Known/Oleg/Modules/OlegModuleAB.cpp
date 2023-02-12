#include "headers/Known/Oleg/Modules/OlegModuleAB.h"

#include "headers/Known/Oleg/UIElement/UIElementImage.h"
void OlegModuleAB::Render(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAB::Render(OlegModuleAB *this,int param_1){
		float fVar1;
		uint uVar2;
		float fVar3;
		int iVar4;
		OlegModuleAbstract *this_00;
		Vector2 local_60;
		Vector2 local_58;
		Matrix4 local_50;
		uVar2 = (this->parent).parent.flags;
		if (((~(byte)(uVar2 >> 9) & 1) != 0) && (1 < ((byte)uVar2 & 0xf))) {
		local_58.x = (this->parent).array[2].x;
		fVar3 = (this->parent).array[0].x;
		local_58.y = (this->parent).array[2].y;
		local_60.x = (this->parent).array[6].x;
		local_60.y = (this->parent).array[6].y;
		if ((uVar2 & 0x400) != 0) {
		FUN_00104540(false,&(this->parent).parent.field2_0x8,&local_58);
		}
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(false,&local_60);
		}
		iVar4 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar4 != 0) {
		fVar1 = *(float *)(iVar4 + 0x10);
		local_60.x = fVar1 * local_60.x;
		local_60.y = local_60.y * fVar1;
		}
		Matrix4::Construct1(&local_50);
		local_50.m11 = local_60.x;
		*(float *)(param_1 + 0x10) = fVar3;
		local_50.m22 = local_60.y;
		local_50.m41 = local_58.x;
		local_50.m42 = local_58.y;
		FUN_00104260(param_1,&local_50.m11,this->icons,uVar2 >> 0xb & 0xf);
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

void OlegModuleAB::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAB * __thiscall OlegModuleAB::Construct(OlegModuleAB *this,UIElementImage *param_1){
		OlegModuleA::Construct(&this->parent);
		this->icons = param_1;
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AB;
		return this;
		}
		
	*/
	return;
}

void OlegModuleAB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAB * __thiscall OlegModuleAB::Dispose(OlegModuleAB *this,byte param_1){
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void OlegModuleAB::Construct_3(float param_1, UIElementImage* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAB * __thiscall OlegModuleAB::Construct(OlegModuleAB *this,float param_1,UIElementImage *param_2){
		OlegModuleA::Construct(&this->parent,param_1);
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AB;
		this->icons = param_2;
		return this;
		}
		
	*/
	return;
}

