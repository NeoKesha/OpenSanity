#include "headers/Known/Oleg/Modules/OlegModuleAF.h"

#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Oleg/UIElement/UIElementImage.h"
void OlegModuleAF::FUN_001a0e30(bool param_1, Vector2* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAF::FUN_001a0e30(OlegModuleAF *this,bool param_1,Vector2 *param_2){
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_00104540(param_1,&(this->parent).parent.field2_0x8,param_2);
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleAF::FUN_001a0e60(bool param_1, Vector2* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAF::FUN_001a0e60(OlegModuleAF *this,bool param_1,Vector2 *param_2){
		float fVar1;
		int iVar2;
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(param_1,param_2);
		}
		iVar2 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar2 != 0) {
		fVar1 = *(float *)(iVar2 + 0x10);
		param_2->x = param_2->x * fVar1;
		param_2->y = fVar1 * param_2->y;
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleAF::Render(FontRenderer* renderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAF::Render(OlegModuleAF *this,int param_1){
		float fVar1;
		uint uVar2;
		Vector2 local_60;
		Vector2 local_58;
		Matrix4 local_50;
		uVar2 = (this->parent).parent.flags;
		if (((~(byte)(uVar2 >> 9) & 1) != 0) && (1 < ((byte)uVar2 & 0xf))) {
		local_58.x = (this->parent).array[2].x;
		fVar1 = (this->parent).array[0].x;
		local_58.y = (this->parent).array[2].y;
		local_60.x = (this->parent).array[6].x;
		local_60.y = (this->parent).array[6].y;
		uVar2 = uVar2 >> 0xb & 0xf;
		FUN_001a0e30(this,false,&local_58);
		FUN_001a0e60(this,false,&local_60);
		*(float *)(param_1 + 0x10) = fVar1;
		Matrix4::Construct1(&local_50);
		local_50.m22 = local_60.y * FLOAT_00386608;
		local_50.m11 = local_60.x;
		local_50.m41 = local_58.x - local_60.x * FLOAT_00386ab4;
		local_50.m42 = local_58.y - local_50.m22 * FLOAT_00386ab4;
		FUN_00104260(param_1,&local_50.m11,this->field2_0x8c,uVar2);
		local_50.m41 = this->field1_0x88 * local_60.x + local_58.x;
		local_50.m11 = local_60.y;
		local_50.m22 = local_60.y;
		local_50.m42 = local_58.y - local_60.y * FLOAT_00386ab4;
		FUN_00104260(param_1,&local_50.m11,this->field3_0x90,uVar2);
		local_50.m41 = local_58.x - (local_60.y + local_60.x) * FLOAT_00386ab4;
		local_50.m42 = local_58.y - local_60.y * FLOAT_00386ab4;
		FUN_00104260(param_1,&local_50.m11,this->image2,uVar2);
		local_50.m41 = (local_60.x - local_60.y) * FLOAT_00386ab4 + local_58.x;
		local_50.m42 = local_58.y - local_60.y * FLOAT_00386ab4;
		FUN_00104260(param_1,&local_50.m11,this->image1,uVar2);
		}
		OlegModuleAbstract::Render((OlegModuleAbstract *)this);
		return;
		}
		
	*/
	return;
}

void OlegModuleAF::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAF * __thiscall OlegModuleAF::Dispose(OlegModuleAF *this,byte param_1){
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void OlegModuleAF::Construct(float param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAF * __thiscall OlegModuleAF::Construct(OlegModuleAF *this,float param_1,UIElementImage *param_2,uint param_3){
		float fVar1;
		OlegModuleA::Construct(&this->parent,param_1);
		fVar1 = FLOAT_00386ab4;
		this->image1 = (UIElementImage *)0x0;
		this->image2 = (UIElementImage *)0x0;
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AF;
		this->field1_0x88 = fVar1;
		this->field2_0x8c = param_2;
		this->field3_0x90 = (UIElementImage *)param_3;
		return this;
		}
		
	*/
	return;
}

