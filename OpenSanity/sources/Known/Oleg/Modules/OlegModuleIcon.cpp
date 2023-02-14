#include "headers/Known/Oleg/Modules/OlegModuleIcon.h"

#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Oleg/UIElement/UIElementImage.h"
void OlegModuleIcon::Construct(UIElementImage* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleIcon * __thiscall OlegModuleIcon::Construct(OlegModuleIcon *this,UIElementImage *param_1){
		float fVar1;
		OlegModuleB::Construct(&this->parent);
		fVar1 = FLOAT_003869d8;
		this->field1_0x88 = param_1;
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Icon;
		this->field2_0x8c = (UnkFamily20Base *)0x0;
		*(undefined4 *)&this->field_0x90 = 0;
		this->field7_0x94 = fVar1;
		this->field8_0x98 = 0;
		this->field9_0x9c = 0;
		this->field10_0xa0 = fVar1;
		this->field11_0xa4 = 0;
		this->field12_0xa8 = 0;
		this->field13_0xac = 0;
		this->field14_0xb0 = fVar1;
		this->field15_0xb4 = 0;
		this->field16_0xb8 = 0;
		return this;
		}
		
	*/
	return;
}

void OlegModuleIcon::Construct_1(float param_1, UIElementImage* icons) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleIcon * __thiscall OlegModuleIcon::Construct(OlegModuleIcon *this,float param_1,UIElementImage *icons){
		float fVar1;
		OlegModuleB::Construct(&this->parent,param_1);
		fVar1 = FLOAT_003869d8;
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Icon;
		this->field1_0x88 = icons;
		this->field2_0x8c = (UnkFamily20Base *)0x0;
		*(undefined4 *)&this->field_0x90 = 0;
		this->field7_0x94 = fVar1;
		this->field8_0x98 = 0;
		this->field9_0x9c = 0;
		this->field10_0xa0 = fVar1;
		this->field11_0xa4 = 0;
		this->field12_0xa8 = 0;
		this->field13_0xac = 0;
		this->field14_0xb0 = fVar1;
		this->field16_0xb8 = 0;
		return this;
		}
		
	*/
	return;
}

void OlegModuleIcon::Render(FontRenderer* renderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleIcon::Render(OlegModuleIcon *this,int param_1){
		uint uVar1;
		float fVar2;
		int iVar3;
		SplineA *pSVar4;
		OlegModuleAbstract *this_00;
		uint uVar5;
		float fVar6;
		float fVar7;
		Vector2 local_c8;
		Vector2 local_c0;
		Vector2 local_b8;
		float local_b0;
		Vector2 local_ac;
		float local_a4;
		Matrix4 local_a0;
		undefined4 local_54;
		Matrix4 local_50;
		 UI Icon uVar1 = (this->parent).parent.flags;
		if (((~(byte)(uVar1 >> 9) & 1) == 0) || (((byte)uVar1 & 0xf) < 2)) goto LAB_001a3aa9;
		local_ac.x = (this->parent).array[6].x;
		local_ac.y = (this->parent).array[6].y;
		local_c8.x = (this->parent).array[2].x;
		local_c8.y = (this->parent).array[2].y;
		fVar2 = (this->parent).array[0].x;
		local_b8.x = (local_ac.x - local_c8.x) / (this->field1_0x88->size).x;
		uVar5 = uVar1 >> 0xb & 0xf;
		local_b8.y = (local_ac.y - local_c8.y) / (this->field1_0x88->size).y;
		if ((uVar1 & 0x400) != 0) {
		FUN_00104540(false,&(this->parent).parent.field2_0x8,&local_c8);
		}
		if ((((this->parent).parent.flags & 0x400) != 0) &&(FUN_00104540(false,&(this->parent).parent.field2_0x8,&local_ac),((this->parent).parent.flags & 0x400) != 0)) {
		FUN_001045b0(false,&local_b8);
		}
		iVar3 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar3 != 0) {
		fVar7 = *(float *)(iVar3 + 0x10);
		local_b8.x = local_b8.x * fVar7;
		local_b8.y = local_b8.y * fVar7;
		}
		FUN_001a3470((int)this,&local_c0.x);
		local_b8.x = local_c0.x * local_b8.x;
		local_b8.y = local_c0.y * local_b8.y;
		if ((this->field1_0x88->parent).field3_0xc != 0) {
		local_c8.x = (local_ac.x + local_c8.x) * FLOAT_00386ab4;
		local_c8.y = (local_ac.y + local_c8.y) * FLOAT_00386ab4;
		}
		local_b0 = FUN_001a3520((int)this);
		local_c8.y = local_c8.y + local_b0;
		Matrix4::Construct1(&local_a0);
		local_a0.m11 = local_b8.x;
		local_a0.m22 = local_b8.y;
		local_a0.m41 = local_c8.x;
		local_a0.m42 = local_c8.y;
		FUN_001a35c0((int)this,&local_a0);
		pSVar4 = (this->parent).parent.spline;
		if (pSVar4 != (SplineA *)0x0) {
		(*((pSVar4->parent).vtable)->Transform)(&pSVar4->parent,&local_a0);
		}
		fVar7 = (this->parent).parent.field14_0x30;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (DAT_003a3910 < fVar7) {
		LAB_001a38c5:local_a4 = FUN_001a0f20((int)this);
		local_b0 = (this->parent).array[0].x;
		local_c0.x = (this->parent).parent.field14_0x30;
		local_c0.y = (this->parent).parent.field15_0x34;
		FUN_00108fc0(&local_b0,&local_54,(uint)(this->parent).parent.field13_0x2c);
		local_c0.x = local_c0.x * local_a4;
		local_c0.y = local_c0.y * local_a4;
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(false,&local_c0);
		}
		iVar3 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar3 != 0) {
		fVar7 = *(float *)(iVar3 + 0x10);
		local_c0.x = fVar7 * local_c0.x;
		local_c0.y = local_c0.y * fVar7;
		}
		local_a0.m42 = local_c0.y + local_a0.m42;
		*(float *)(param_1 + 0x10) = local_b0;
		local_a0.m41 = local_a0.m41 + local_c0.x;
		FUN_00104260(param_1,&local_a0.m11,this->field1_0x88,uVar5 - 1);
		local_a0.m41 = local_a0.m41 - local_c0.x;
		local_a0.m42 = local_a0.m42 - local_c0.y;
		}
		else {
		fVar7 = (this->parent).parent.field15_0x34;
		fVar6 = 0.0 - fVar7;
		if (0.0 <= fVar7) {
		fVar6 = fVar7;
		}
		if (DAT_003a3910 < fVar6) goto LAB_001a38c5;
		}
		*(float *)(param_1 + 0x10) = fVar2;
		FUN_00104260(param_1,&local_a0.m11,this->field1_0x88,uVar5);
		if ((this->field2_0x8c != (UnkFamily20Base *)0x0) ||((this->parent).parent.spline != (SplineA *)0x0)) {
		if ((this->field1_0x88->parent).field3_0xc == 0) {
		local_c8.x = (local_ac.x + local_c8.x) * FLOAT_00386ab4;
		local_c8.y = (local_ac.y + local_c8.y) * FLOAT_00386ab4;
		}
		Matrix4::Construct1(&local_50);
		FUN_001a35c0((int)this,&local_50);
		local_50.m41 = local_c8.x;
		local_50.m42 = local_c8.y;
		if (this->field2_0x8c != (UnkFamily20Base *)0x0) {
		(*(code *)this->field2_0x8c->vtable->field3_0xc)(&local_50);
		}
		pSVar4 = (this->parent).parent.spline;
		if (pSVar4 != (SplineA *)0x0) {
		(*((pSVar4->parent).vtable)->UnkMethod)(&pSVar4->parent);
		}
		}
		LAB_001a3aa9:this_00 = (this->parent).parent.next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->Render)(this_00,(FontRenderer *)param_1);
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleIcon::FUN_001a3ad0(Vector2* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleIcon::FUN_001a3ad0(OlegModuleIcon *this,Vector2 *param_1){
		uint uVar1;
		UnkFamily20Base *this_00;
		SplineA *pSVar2;
		float step;
		float fVar3;
		float fVar4;
		float local_8;
		float local_4;
		OlegModuleAbstract::Process((OlegModuleAbstract *)this,(SomeState *)param_1);
		uVar1 = (this->parent).parent.flags;
		if (((~(byte)(uVar1 >> 9) & 1) != 0) && (1 < ((byte)uVar1 & 0xf))) {
		step = (float)(int)param_1[1].x * TimePerTick1;
		if (0.0 < this->field7_0x94) {
		fVar4 = step + *(float *)&this->field_0x90;
		*(float *)&this->field_0x90 = fVar4;
		if (this->field7_0x94 <= fVar4) {
		*(float *)&this->field_0x90 = fVar4 - this->field7_0x94;
		}
		}
		if (0.0 < this->field10_0xa0) {
		fVar4 = (float)this->field9_0x9c + step;
		this->field9_0x9c = fVar4;
		if (this->field10_0xa0 <= fVar4) {
		this->field9_0x9c = fVar4 - this->field10_0xa0;
		}
		}
		fVar4 = this->field14_0xb0;
		if (0.0 < fVar4) {
		fVar3 = step + (float)this->field13_0xac;
		this->field13_0xac = fVar3;
		if (fVar4 <= fVar3) {
		this->field13_0xac = fVar3 - fVar4;
		}
		}
		this_00 = this->field2_0x8c;
		if ((this_00 != (UnkFamily20Base *)0x0) || ((this->parent).parent.spline != (SplineA *)0x0)) {
		local_8 = (this->parent).array[2].x;
		local_4 = (this->parent).array[2].y;
		if (this_00 != (UnkFamily20Base *)0x0) {
		UnkFamily20Base::FUN_00109e40(this_00,step,&local_8);
		}
		pSVar2 = (this->parent).parent.spline;
		if (pSVar2 != (SplineA *)0x0) {
		pSVar2 = (SplineA *)(*((pSVar2->parent).vtable)->Step)(&pSVar2->parent,step,&local_8);
		(this->parent).parent.spline = pSVar2;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleIcon::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleIcon * __thiscall OlegModuleIcon::Dispose(OlegModuleIcon *this,byte param_1){
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

