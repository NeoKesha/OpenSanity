#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2G.h"

#include "headers/Known/Math/Vector4.h"
void NodeRelated2G::Update(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2G::Update(NodeRelated2G *this,int param_1){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		UNV004 *pUVar3;
		UNV004 *pUVar4;
		UNV005 *pUVar5;
		InstanceNodeShadow *this_00;
		InstanceNodeShadow *actionContext;
		float fVar6;
		float fVar7;
		NodeRelated2AA::Update((NodeRelated2AA *)this,param_1);
		if (param_1 == 0) {
		pIVar2 = InstanceDataList::GetNode(&((this->parent).ctx)->nodes,Shadow);
		if (pIVar2 == (InstanceNodeAbstract *)0x0) {
		pIVar1 = (this->parent).ctx;
		fVar6 = ((pIVar1->parent).field14_0x20.matrix2.m41 - (pIVar1->parent).field14_0x20.matrix2.m31) * FLOAT_00386ab4;
		fVar7 = ((pIVar1->parent).field14_0x20.matrix2.m43 - (pIVar1->parent).field14_0x20.matrix2.m33) * FLOAT_00386ab4;
		pUVar3 = (UNV004 *)VirtualPool::AllocateMemory(0x20);
		if (pUVar3 == (UNV004 *)0x0) {
		pUVar3 = (UNV004 *)0x0;
		}
		else {
		pUVar3 = UNV004::Construct(pUVar3,5,fVar6,fVar7);
		}
		pUVar4 = (UNV004 *)VirtualPool::AllocateMemory(0x20);
		if (pUVar4 == (UNV004 *)0x0) {
		pUVar4 = (UNV004 *)0x0;
		}
		else {
		pUVar4 = UNV004::Construct(pUVar4,30.0,0,pUVar3);
		}
		pUVar5 = (UNV005 *)VirtualPool::AllocateMemory(0xc);
		if (pUVar5 == (UNV005 *)0x0) {
		pUVar5 = (UNV005 *)0x0;
		}
		else {
		pUVar5 = UNV005::Construct(pUVar5,0x41800000,(int)pUVar4);
		}
		this_00 = (InstanceNodeShadow *)VirtualPool::AllocateMemory(0x2c);
		if (this_00 == (InstanceNodeShadow *)0x0) {
		actionContext = (InstanceNodeShadow *)0x0;
		}
		else {
		actionContext = InstanceNodeShadow::Construct(this_00);
		}
		fVar7 = FLOAT_00386608;
		(pUVar3->vec).x = 0.0;
		(pUVar3->vec).z = 0.0;
		fVar6 = FLOAT_0038639c;
		(pUVar3->vec).y = fVar7;
		(pUVar3->vec).w = fVar6;
		InstanceNodeShadow::ReplaceElement(actionContext,0,pUVar5);
		InstanceContext::SetNode((this->parent).ctx,true,&actionContext->parent);
		}
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeRelated2G::Dispose(NodeRelated2G *this,byte param_1){
		NodeRelated2AA::CleanUp((NodeRelated2AA *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

bool NodeRelated2G::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool NodeRelated2G::IsB(void){
		return true;
		}
		
	*/
	return false;
}

void NodeRelated2G::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool NodeRelated2G::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool NodeRelated2G::IsD(void){
		return false;
		}
		
	*/
	return false;
}

void NodeRelated2G::EmptyFunction_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::Method13(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2G::Method13(NodeRelated2G *this,Vector4 *param_1){
		InstanceContext *pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		fVar4 = FLOAT_00386ab4;
		pIVar1 = (this->parent).ctx;
		param_1->x = (pIVar1->parent).field14_0x20.matrix2.m21;
		param_1->y = (pIVar1->parent).field14_0x20.matrix2.m22;
		param_1->z = (pIVar1->parent).field14_0x20.matrix2.m23;
		param_1->w = (pIVar1->parent).field14_0x20.matrix2.m24;
		param_1->x = param_1->x - (pIVar1->parent).field14_0x20.matrix2.m11;
		param_1->y = param_1->y - (pIVar1->parent).field14_0x20.matrix2.m12;
		param_1->z = param_1->z - (pIVar1->parent).field14_0x20.matrix2.m13;
		fVar2 = param_1->x * fVar4;
		param_1->x = fVar2;
		fVar3 = param_1->y * fVar4;
		param_1->y = fVar3;
		fVar4 = param_1->z * fVar4;
		param_1->z = fVar4;
		param_1->x = fVar2 + (pIVar1->parent).field14_0x20.matrix2.m11;
		param_1->y = (pIVar1->parent).field14_0x20.matrix2.m12 + fVar3;
		param_1->z = (pIVar1->parent).field14_0x20.matrix2.m13 + fVar4;
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint NodeRelated2G::Method6(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall NodeRelated2G::Method6(NodeRelated2G *this,InstanceContextRefCounter *param_1){
		NodeRelated1Abstract *pNVar1;
		undefined3 extraout_var;
		pNVar1 = (this->parent).related;
		if (((uint)pNVar1->field7_0x10 >> 0xd & 1) != 0) {
		NodeRelated2Abstract::FUN_001ac940(&this->parent,3,param_1,false,false);
		return CONCAT31(extraout_var,1);
		}
		return (uint)pNVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

void NodeRelated2G::EmptyFunction_13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::FUN_000677b0(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2G::FUN_000677b0(NodeRelated2G *this,undefined4 *param_1){
		InstanceNodePhysics *nodePhysics;
		nodePhysics = (InstanceNodePhysics *)InstanceDataList::GetNode(&((this->parent).ctx)->nodes,Physics);
		if (nodePhysics != (InstanceNodePhysics *)0x0) {
		InstanceNodePhysics::FUN_001dfbd0(nodePhysics,(Vector4 *)param_1);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::Method8(uint* param_1, uint param_2, char param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2G::Method8(NodeRelated2G *this,undefined4 *param_1,InstanceContextRefCounter *param_2,char param_3){
		InstanceContext *pIVar1;
		InstanceNodeInstance *pIVar2;
		InstanceNodeInstance *local_EAX_345260;
		if ((param_3 != '\0') &&(pIVar1 = (this->parent).ctx, (char)((uint)(pIVar1->parent).flags >> 8) < '\0')) {
		pIVar2 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar1->nodes,Instance);
		(*pIVar2->vtable->InstanceMethod17)(pIVar2,(int **)param_2,(float)param_1[3]);
		}
		if (*(char *)(param_1 + 5) != '\0') {
		(this->parent).vec1.x = (float)*param_1;
		(this->parent).vec1.y = (float)param_1[1];
		(this->parent).vec1.z = (float)param_1[2];
		(this->parent).vec1.w = (float)param_1[3];
		(this->parent).field27_0x40.x = (float)param_1[4];
		*(undefined *)&(this->parent).field27_0x40.y = *(undefined *)(param_1 + 5);
		NodeRelated2Abstract::FUN_001ac940(&this->parent,2,param_2,false,false);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2G::IsA(void){
		return 0;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_17() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_18() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::EmptyFunction_19() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2G::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2G::IsC(void){
		return 0;
		}
		
	*/
	return;
}

void NodeRelated2G::Construct(int* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2G * __thiscall NodeRelated2G::Construct(NodeRelated2G *this,int *param_1,BlackboardAbstract *param_2,NodeRelated1Abstract *param_3){
		NodeRelated2Abstract::Construct(&this->parent,(InstanceMasterInfo *)param_1,param_2,param_3);
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_G;
		return this;
		}
		
	*/
	return;
}

