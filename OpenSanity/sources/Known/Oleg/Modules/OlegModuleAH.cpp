#include "headers/Known/Oleg/Modules/OlegModuleAH.h"

#include "headers/Known/Oleg/UIElement/UIElementImage.h"
void OlegModuleAH::Render(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAH::Render(OlegModuleAH *this,int param_1){
		uint uVar1;
		uint uVar2;
		uint uVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		uint local_70;
		Vector2 local_60;
		Vector2 local_58;
		Matrix4 local_50;
		uVar3 = (this->parent).parent.flags;
		uVar2 = **(uint **)&this->field_0x8c >> 0x11 & 7;
		uVar1 = **(uint **)&this->field_0x8c >> 0xe & 7;
		if ((((~(byte)(uVar3 >> 9) & 1) != 0) && (1 < ((byte)uVar3 & 0xf))) && (uVar2 != 0)) {
		local_60.x = (this->parent).array[2].x;
		fVar5 = (this->parent).array[0].x;
		local_60.y = (this->parent).array[2].y;
		local_58.x = (this->parent).array[6].x;
		local_58.y = (this->parent).array[6].y;
		fVar4 = *(float *)(*(int *)&this->field_0x8c + 0x74) * FLOAT_0038ab54;
		uVar3 = uVar3 >> 0xb & 0xf;
		OlegModuleAF::FUN_001a0e30((OlegModuleAF *)this,false,&local_60);
		OlegModuleAF::FUN_001a0e60((OlegModuleAF *)this,false,&local_58);
		*(float *)(param_1 + 0x10) = fVar5;
		Matrix4::Construct1(&local_50);
		fVar5 = local_58.x * FLOAT_0038bd20;
		fVar4 = local_58.x * fVar4;
		local_50.m22 = local_58.y * FLOAT_0038a828;
		fVar6 = local_58.y * FLOAT_0038abc4;
		local_50.m41 = local_60.x;
		local_50.m42 = local_60.y;
		local_50.m11 = fVar4;
		FUN_00104260(param_1,&local_50.m11,this->field1_0x88 + 3,uVar3);
		local_50.m41 = local_60.x + fVar4;
		local_50.m42 = local_60.y + fVar6;
		local_50.m11 = fVar5;
		local_50.m22 = fVar6;
		FUN_00104260(param_1,&local_50.m11,this->field1_0x88 + 0x19,uVar3);
		local_50.m41 = local_50.m41 + fVar5;
		FUN_00104260(param_1,&local_50.m11,this->field1_0x88 + 0x1a,uVar3);
		local_50.m41 = local_50.m41 + fVar5;
		local_70 = 2;
		if (1 < uVar2) {
		do {
		if (uVar1 <= local_70) break;
		FUN_00104260(param_1,&local_50.m11,this->field1_0x88 + 0x1b,uVar3);
		local_50.m41 = local_50.m41 + fVar5;
		FUN_00104260(param_1,&local_50.m11,this->field1_0x88 + 0x1a,uVar3);
		local_50.m41 = local_50.m41 + fVar5;
		local_70 = local_70 + 1;
		}
		 while (local_70 <= uVar2);
		}
		if ((uVar2 == uVar1) && (1 < uVar1)) {
		FUN_00104260(param_1,&local_50.m11,this->field1_0x88 + 0x1b,uVar3);
		local_50.m41 = local_50.m41 + fVar5;
		FUN_00104260(param_1,&local_50.m11,this->field1_0x88 + 0x1c,uVar3);
		}
		}
		OlegModuleAbstract::Render((OlegModuleAbstract *)this);
		return;
		}
		
	*/
	return;
}

void OlegModuleAH::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAH * __thiscall OlegModuleAH::Dispose(OlegModuleAH *this,byte param_1){
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void OlegModuleAH::Construct(float param_1, UIElementImage* param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAH * __thiscall OlegModuleAH::Construct(OlegModuleAH *this,float param_1,UIElementImage *param_2,undefined4 param_3){
		OlegModuleA::Construct(&this->parent,param_1);
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AH;
		this->field1_0x88 = param_2;
		*(undefined4 *)&this->field_0x8c = param_3;
		return this;
		}
		
	*/
	return;
}

