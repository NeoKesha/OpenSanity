#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2E.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void NodeRelated2E::FUN_0006b190(NodeRelated2E* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2E::FUN_0006b190(NodeRelated2E *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		NodeRelated1E *pNVar1;
		pNVar1 = (NodeRelated1E *)(param_1->parent).related;
		if (((uint)pNVar1->field1_0x14 >> 5 & 1) != 0) {
		(*(param_1->parent).vtable[1].Method4)(&param_1->parent);
		return;
		}
		if ((*(byte *)&pNVar1->field1_0x14 & 1) != 0) {
		thunk_FUN_0006afb0((int)param_1);
		return;
		}
		fVar1 = DAT_0039db08 * (param_1->field1_0x60).z;
		fVar3 = DAT_0039db04 * (param_1->field1_0x60).y;
		fVar2 = DAT_0039db00 * (param_1->field1_0x60).x;
		fVar4 = BlackboardAbstract::GetFloatByIndex((param_1->parent).blackboard,3);
		if (fVar4 < fVar2 + fVar3 + fVar1) {
		(*(code *)(param_1->parent).vtable[1].Method5)(1);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2E::Update(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2E::Update(NodeRelated2E *this,int param_1){
		BlackboardAbstract *this_02;
		NodeRelated1Abstract *pNVar1;
		InstanceContext *pIVar2;
		int iVar3;
		InstanceNodeAbstract *pIVar4;
		UNV004 *pvVar9;
		UNV004 *puVar10;
		UNV004 *pUVar5;
		UNV005 *this_01;
		InstanceNodeShadow *this_03;
		InstanceNodeShadow *nodeShadow;
		undefined **ppuVar6;
		float fVar7;
		float fVar8;
		UNV005 *local_24;
		this_02 = (this->parent).blackboard;
		pNVar1 = (this->parent).related;
		NodeRelated2AA::Update((NodeRelated2AA *)this,param_1);
		pNVar1[1].vtable =(undefined **)((uint)pNVar1[1].vtable ^ ((uint)this_02->field1_0x4 >> 0x12 ^ (uint)pNVar1[1].vtable) & 1);
		iVar3 = BlackboardAbstract::GetIntValue(this_02,2);
		ppuVar6 = (undefined **)((uint)pNVar1[1].vtable ^ (iVar3 << 6 ^ (uint)pNVar1[1].vtable) & 0x3fc0);
		pNVar1[1].vtable = ppuVar6;
		if (((uint)ppuVar6 & 1) != 0) {
		thunk_FUN_0006afb0((int)this);
		}
		if (param_1 == 0) {
		pIVar4 = InstanceDataList::GetNode(&((this->parent).ctx)->nodes,Shadow);
		if (pIVar4 == (InstanceNodeAbstract *)0x0) {
		pIVar2 = (this->parent).ctx;
		fVar7 = ((pIVar2->parent).field14_0x20.matrix2.m41 - (pIVar2->parent).field14_0x20.matrix2.m31) * FLOAT_00386ab4;
		fVar8 = ((pIVar2->parent).field14_0x20.matrix2.m43 - (pIVar2->parent).field14_0x20.matrix2.m33) * FLOAT_00386ab4;
		pvVar9 = (UNV004 *)VirtualPool::AllocateMemory(0x20);
		if (pvVar9 == (UNV004 *)0x0) {
		puVar10 = (UNV004 *)0x0;
		}
		else {
		puVar10 = UNV004::Construct(pvVar9,4,fVar7,fVar8);
		}
		pUVar5 = (UNV004 *)VirtualPool::AllocateMemory(0x20);
		if (pUVar5 == (UNV004 *)0x0) {
		pUVar5 = (UNV004 *)0x0;
		}
		else {
		pUVar5 = UNV004::Construct(pUVar5,30.0,0,puVar10);
		}
		this_01 = (UNV005 *)VirtualPool::AllocateMemory(0xc);
		if (this_01 == (UNV005 *)0x0) {
		local_24 = (UNV005 *)0x0;
		}
		else {
		local_24 = UNV005::Construct(this_01,0x41800000,(int)pUVar5);
		}
		this_03 = (InstanceNodeShadow *)VirtualPool::AllocateMemory(0x2c);
		if (this_03 == (InstanceNodeShadow *)0x0) {
		nodeShadow = (InstanceNodeShadow *)0x0;
		}
		else {
		nodeShadow = InstanceNodeShadow::Construct(this_03);
		}
		fVar8 = FLOAT_00386608;
		(puVar10->vec).x = 0.0;
		(puVar10->vec).z = 0.0;
		fVar7 = FLOAT_0038639c;
		(puVar10->vec).y = fVar8;
		(puVar10->vec).w = fVar7;
		InstanceNodeShadow::ReplaceElement(nodeShadow,0,local_24);
		InstanceContext::SetNode((this->parent).ctx,true,&nodeShadow->parent);
		}
		}
		return;
		}
		
	*/
	return;
}

bool NodeRelated2E::Method6(uint param_1, uint param_2, Vector4* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall NodeRelated2E::Method6(NodeRelated2E *this,InstanceContextRefCounter *param_1,undefined4 param_2,Vector4 *param_3){
		float length;
		length = param_3->y * param_3->y + param_3->z * param_3->z + param_3->x * param_3->x;
		if (FLOAT_0038ab84 < length) {
		NodeRelated2Abstract::FUN_001ac940(&this->parent,3,param_1,false,false);
		NodeRelated2Abstract::FUN_001ac940(&this->parent,2,param_1,false,false);
		return true;
		}
		if (FLOAT_0038aebc < length) {
		NodeRelated2Abstract::FUN_001ac940(&this->parent,3,param_1,false,false);
		}
		return true;
		}
		
	*/
	return false;
}

void NodeRelated2E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2E * __thiscall NodeRelated2E::Dispose(NodeRelated2E *this,byte param_1){
		BlackboardAbstract *this_00;
		NodeRelated1Abstract *pNVar1;
		this_00 = (this->parent).blackboard;
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		if (this_00 != (BlackboardAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		pNVar1 = (this->parent).related;
		if (pNVar1 != (NodeRelated1Abstract *)0x0) {
		(*(code *)*pNVar1->vtable)(1);
		}
		NodeRelated2Abstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeRelated2E::FUN_000672a0(NodeRelated2E* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2E::FUN_000672a0(NodeRelated2E *param_1){
		undefined4 unaff_retaddr;
		Vector4 *in_stack_00000004;
		if (((uint)(param_1->parent).related[1].vtable >> 2 & 1) != 0) {
		(*(param_1->parent).vtable[1].Method6)(&param_1->parent,1,unaff_retaddr,in_stack_00000004);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2E::FUN_000672c0(NodeRelated2E* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2E::FUN_000672c0(NodeRelated2E *param_1){
		NodeRelated1E *pNVar1;
		pNVar1 = (NodeRelated1E *)((param_1->parent).related + 1);
		(pNVar1->parent).vtable = (undefined **)((uint)(pNVar1->parent).vtable | 0x20);
		return;
		}
		
	*/
	return;
}

void NodeRelated2E::FUN_000672d0(NodeRelated2E* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2E::FUN_000672d0(NodeRelated2E *param_1){
		NodeRelated1E *pNVar1;
		pNVar1 = (NodeRelated1E *)((param_1->parent).related + 1);
		(pNVar1->parent).vtable = (undefined **)((uint)(pNVar1->parent).vtable & 0xffffffdf);
		return;
		}
		
	*/
	return;
}

bool NodeRelated2E::IsB(uint param_2, InstanceNodeKSubA* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall NodeRelated2E::IsB(int this,undefined4 param_2,InstanceNodeKSubA *param_3){
		if (((uint)(param_3->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139650(param_3,(Vector4 *)(this + 0x60),false);
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void NodeRelated2E::Method8(Vector4* param_1, uint param_2, char param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2E::Method8(NodeRelated2E *this,Vector4 *param_1,InstanceContextRefCounter *param_2,char param_3){
		NodeRelated1Abstract *pNVar1;
		InstanceContext *pIVar2;
		InstanceNodeInstance *pIVar3;
		pNVar1 = (this->parent).related;
		if ((param_3 != '\0') &&(pIVar2 = (this->parent).ctx, (char)((uint)(pIVar2->parent).flags >> 8) < '\0')) {
		pIVar3 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar2->nodes,Instance);
		(*pIVar3->vtable->InstanceMethod17)(pIVar3,(int **)param_2,0.0);
		}
		if (((uint)pNVar1->field7_0x10 >> 10 & 1) == 0) {
		(this->parent).vec1.x = param_1->x;
		(this->parent).vec1.y = param_1->y;
		(this->parent).vec1.z = param_1->z;
		(this->parent).vec1.w = param_1->w;
		(this->parent).field27_0x40.x = param_1[1].x;
		*(undefined *)&(this->parent).field27_0x40.y = *(undefined *)&param_1[1].y;
		NodeRelated2Abstract::FUN_001ac940(&this->parent,2,param_2,false,false);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2E::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2E::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2E::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2E::IsC(void){
		return 0;
		}
		
	*/
	return;
}

void NodeRelated2E::Construct(int* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2E * __thiscall NodeRelated2E::Construct(NodeRelated2E *this,int *param_1,BlackboardAbstract *param_2,NodeRelated1Abstract *param_3){
		NodeRelated2Abstract::Construct(&this->parent,(InstanceMasterInfo *)param_1,param_2,param_3);
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_E;
		(this->field1_0x60).x = Vector4_0039ef70.x;
		(this->field1_0x60).y = Vector4_0039ef70.y;
		(this->field1_0x60).z = Vector4_0039ef70.z;
		(this->field1_0x60).w = FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

