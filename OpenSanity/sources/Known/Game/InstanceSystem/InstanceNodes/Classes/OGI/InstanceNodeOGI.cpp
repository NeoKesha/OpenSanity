#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/OGI/InstanceNodeOGI.h"

#include "headers/Known/GameData/OGI/OGI.h"
void InstanceNodeOGI::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeOGI * __fastcall InstanceNodeOGI::Construct(InstanceNodeOGI *this){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->ogi = (OGI *)0x0;
		this->field3_0x20 = 0;
		this->field4_0x24 = (InstanceNodeOGISub *)0x0;
		this->field5_0x28 = 0;
		this->field6_0x2c = 0;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_OGI;
		this->field1_0x18 = 0;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeOGI::SetInfoFromOGI(InstanceNodeOGI* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGI::SetInfoFromOGI(InstanceNodeOGI *param_1){
		InstanceContext *pIVar1;
		pIVar1 = (param_1->parent).ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		AutoClass2::SetFromOGI(&(pIVar1->parent).field14_0x20,param_1->ogi);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGI::Init(OGI* ogi, int param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeOGI::Init(InstanceNodeOGI *this,OGI *ogi,int param_2,int param_3){
		InstanceContext *pIVar1;
		InstanceNodeOGISub *pvVar2;
		InstanceNodeOGISub *pIVar2;
		if (this->ogi != ogi) {
		this->ogi = ogi;
		this->field1_0x18 = this->field1_0x18 | 0x1000000;
		if ((ogi == (OGI *)0x0) || ((ogi->header[0] == 1 && (ogi->header[1] == 0)))) {
		pIVar2 = this->field4_0x24;
		if (pIVar2 != (InstanceNodeOGISub *)0x0) {
		::EmptyFunction();
		::EmptyFunction();
		InstanceNodeOGISub::Dispose(pIVar2);
		VirtualPool::FreeMemory(pIVar2);
		this->field4_0x24 = (InstanceNodeOGISub *)0x0;
		}
		}
		else if (this->field4_0x24 == (InstanceNodeOGISub *)0x0) {
		pvVar2 = (InstanceNodeOGISub *)VirtualPool::AllocateMemory(0x40);
		if (pvVar2 == (InstanceNodeOGISub *)0x0) {
		this->field4_0x24 = (InstanceNodeOGISub *)0x0;
		}
		else {
		pIVar2 = InstanceNodeOGISub::Construct(pvVar2,this->ogi,param_2,param_3);
		this->field4_0x24 = pIVar2;
		}
		}
		else {
		InstanceNodeOGISub::Init(this->field4_0x24,ogi,param_2,param_3);
		}
		pIVar1 = (this->parent).ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		AutoClass2::SetFromOGI(&(pIVar1->parent).field14_0x20,this->ogi);
		}
		}
		if (ogi != (OGI *)0x0) {
		FUN_001f8890((int)ogi);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGI::UpdateTime() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGI::UpdateTime(InstanceNodeOGI *this){
		if (this->field4_0x24 != (InstanceNodeOGISub *)0x0) {
		InstanceNodeOGISub::FUN_001fd9c0(this->field4_0x24);
		}
		this->ogi = (OGI *)0x0;
		this->field3_0x20 = 0;
		this->field5_0x28 = 0;
		this->field1_0x18 = 0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGI::SetCtx(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeOGI::SetCtx(InstanceNodeOGI *this,int param_1){
		InstanceContext *pIVar1;
		if (this->field4_0x24 != (InstanceNodeOGISub *)0x0) {
		InstanceNodeOGISub::FUN_001fb6d0(this->field4_0x24,*(undefined4 *)(param_1 + 0x18));
		}
		pIVar1 = (this->parent).ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		AutoClass2::SetFromOGI(&(pIVar1->parent).field14_0x20,this->ogi);
		}
		InstanceNodeAbstract::SetCtx(&this->parent,(InstanceContext *)param_1);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeOGI::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps bool __thiscall InstanceNodeOGI::Step(InstanceNodeOGI *this,byte *param_1){
		short *psVar1;
		OGI *pOVar2;
		InstanceNodeOGISub *this_00;
		InstanceContext *pIVar3;
		bool bVar4;
		uint uVar5;
		int iVar6;
		uint uVar7;
		uint uVar8;
		bool bVar9;
		undefined4 local_8;
		pOVar2 = this->ogi;
		this_00 = this->field4_0x24;
		this->field3_0x20 = (int)pOVar2;
		this->field5_0x28 = (int)this_00;
		if (pOVar2 == (OGI *)0x0) {
		this->field1_0x18 = this->field1_0x18 & 0xfbffffff;
		bVar4 = InstanceNodeAbstract::Step(&this->parent,(UnkTimePack *)param_1);
		return bVar4;
		}
		pIVar3 = (this->parent).ctx;
		uVar5 = (pIVar3->parent).flags;
		bVar4 = (uVar5 & 0x400) != 0x400;
		bVar9 = (uVar5 & 0x200) == 0x200;
		if (this_00 == (InstanceNodeOGISub *)0x0) {
		uVar5 = (uint)(this->parent).field3_0xa;
		uVar7 = pIVar3->field35_0x160 & 0xffffff;
		if (uVar5 == 0xffff) {
		uVar7 = 0;
		}
		else if (uVar5 < uVar7) {
		uVar7 = uVar7 - uVar5;
		if (RENDER_DISTANCE_SQR < uVar7) {
		uVar7 = uVar7 - RENDER_DISTANCE_SQR;
		}
		else {
		uVar7 = 0;
		}
		}
		else {
		uVar7 = 0;
		}
		uVar5 = this->field1_0x18 ^ (this->field1_0x18 ^ uVar7) & 0xffffff;
		this->field1_0x18 = uVar5;
		if (((!bVar4) && ((uVar5 & 0xffffff) < (uint)RENDER_DISTANCE)) && (bVar9)) goto LAB_00108978;
		}
		else {
		uVar5 = *(uint *)&this_00->field_0x20;
		uVar8 = (uint)(this->parent).field3_0xa;
		uVar7 = pIVar3->field35_0x160 & 0xffffff;
		if (uVar8 == 0xffff) {
		uVar7 = 0;
		}
		else if (uVar8 < uVar7) {
		uVar7 = uVar7 - uVar8;
		if (RENDER_DISTANCE_SQR < uVar7) {
		uVar7 = uVar7 - RENDER_DISTANCE_SQR;
		}
		else {
		uVar7 = 0;
		}
		}
		else {
		uVar7 = 0;
		}
		uVar7 = this->field1_0x18 ^ (this->field1_0x18 ^ uVar7) & 0xffffff;
		this->field1_0x18 = uVar7;
		uVar8 = uVar7 & 0xffffff;
		if (((bVar4) || (RENDER_DISTANCE <= uVar8)) || (local_8 = CONCAT31(local_8._1_3_,1), !bVar9)) {
		local_8 = local_8 & 0xffffff00;
		}
		if (((uVar7 & 0x3000000) == 0) && ((uVar5 & 0xff) == 0)) {
		if (RENDER_DISTANCE > uVar8) {
		if ((uVar7 & 0x4000000) != 0) {
		bVar4 = FUN_00116b10(uVar8,(uint)this);
		if (bVar4 == false) {
		uVar7 = FUN_001fc880(this_00,(int)pOVar2,(byte)local_8,0);
		uVar5 = this->field1_0x18;
		this->field1_0x18 = ((uVar7 << 0x1a | uVar5) ^ uVar5) & 0x4000000 ^ uVar5;
		psVar1 = &(this->parent).field2_0x8;
		*(byte *)psVar1 = *(byte *)psVar1 | 1;
		goto LAB_00108ae9;
		}
		}
		uVar7 = FUN_001fda20(this_00,(int)pOVar2,(int)param_1,local_8,0);
		uVar5 = this->field1_0x18;
		uVar5 = ((uVar7 << 0x1a | uVar5) ^ uVar5) & 0x4000000 ^ uVar5;
		goto LAB_00108ae6;
		}
		iVar6 = FUN_001f7ad0((uint *)this_00);
		this->field1_0x18 = this->field1_0x18 ^ (iVar6 << 0x1a ^ this->field1_0x18) & 0x4000000U;
		}
		else {
		uVar5 = FUN_001fda20(this_00,(int)pOVar2,(int)param_1,1,0);
		uVar5 = (uVar5 << 0x1a | this->field1_0x18) & 0x4000000 | this->field1_0x18 & 0xfaffffffU;
		LAB_00108ae6:this->field1_0x18 = uVar5;
		}
		LAB_00108ae9:if ((byte)local_8 != 0) {
		InstanceContext::RegisterCtxPtrToList((this->parent).ctx);
		goto LAB_00108978;
		}
		}
		this->field3_0x20 = 0;
		LAB_00108978:bVar4 = InstanceNodeAbstract::Step(&this->parent,(UnkTimePack *)param_1);
		return bVar4;
		}
		
	*/
	return false;
}

void InstanceNodeOGI::Dispose(InstanceNodeOGI* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGI::Dispose(InstanceNodeOGI *param_1){
		InstanceNodeOGISub *this;
		this = param_1->field4_0x24;
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_OGI;
		if (this != (InstanceNodeOGISub *)0x0) {
		::EmptyFunction();
		::EmptyFunction();
		InstanceNodeOGISub::Dispose(this);
		VirtualPool::FreeMemory(this);
		}
		if ((undefined4 *)param_1->field6_0x2c != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)param_1->field6_0x2c)(1);
		}
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGI::Dispose_7(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeOGI::Dispose(InstanceNodeOGI *this,byte param_1){
		InstanceNodeOGISub *this_00;
		this_00 = this->field4_0x24;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_OGI;
		if (this_00 != (InstanceNodeOGISub *)0x0) {
		::EmptyFunction();
		::EmptyFunction();
		InstanceNodeOGISub::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		if ((undefined4 *)this->field6_0x2c != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field6_0x2c)(1);
		}
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void InstanceNodeOGI::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined InstanceNodeOGI::GetIndex(void){
		return 3;
		}
		
	*/
	return;
}

int InstanceNodeOGI::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int InstanceNodeOGI::GetBuilderIndex(void){
		return 0x141e;
		}
		
	*/
	return 0;
}

InstanceNodeOGI* InstanceNodeOGI::FromFile(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeOGI * __cdecl InstanceNodeOGI::FromFile(char *fname){
		OGI *this;
		OGI *ogi;
		InstanceNodeOGI *pIVar1;
		this = (OGI *)VirtualPool::AllocateMemory(0x90);
		if (this == (OGI *)0x0) {
		ogi = (OGI *)0x0;
		}
		else {
		ogi = OGI::Construct(this,fname);
		}
		pIVar1 = (InstanceNodeOGI *)VirtualPool::AllocateMemory(0x30);
		if (pIVar1 != (InstanceNodeOGI *)0x0) {
		pIVar1 = Construct(pIVar1);
		Init(pIVar1,ogi,0,0);
		return pIVar1;
		}
		Init((InstanceNodeOGI *)0x0,ogi,0,0);
		return (InstanceNodeOGI *)0x0;
		}
		
	*/
	return null;
}

