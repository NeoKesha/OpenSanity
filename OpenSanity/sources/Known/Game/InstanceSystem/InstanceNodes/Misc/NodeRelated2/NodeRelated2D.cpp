#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2D.h"

#include "headers/Known/Math/Vector4.h"
bool NodeRelated2D::Method6(byte param_1, uint param_2, Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall NodeRelated2D::Method6(NodeRelated2D *this,byte param_1,undefined4 param_2,Vector4 *vec){
		bool result;
		uint uVar1;
		float sqrLen2;
		float invertedLength;
		float sqrLen;
		undefined3 in_stack_00000005;
		float x;
		float y;
		float z;
		z = vec->z;
		x = vec->x;
		y = vec->y;
		sqrLen = y * y + z * z + x * x;
		sqrLen2 = z * z + y * y + x * x;
		if (sqrLen2 <= EPSILON) {
		invertedLength = 0.0;
		}
		else {
		invertedLength = FLOAT_0038639c / SQRT(sqrLen2);
		}
		uVar1 = (uint)((this->parent).blackboard)->field1_0x4 >> 0xb;
		result = (bool)(~this->field1_0x60 & 1);
		if (FLOAT_0038b500 <= y * invertedLength) {
		if (FLOAT_0038b4fc < y * invertedLength) {
		if (sqrLen <= FLOAT_0038aed0) {
		if (FLOAT_0038807c < sqrLen) {
		NodeRelated2Abstract::FUN_001ac940(&this->parent,4,_param_1,false,false);
		return result;
		}
		goto LAB_0006af2f;
		}
		}
		else if (sqrLen <= FLOAT_0038aed0) {
		NodeRelated2Abstract::FUN_001ac940(&this->parent,3,_param_1,false,false);
		return result;
		}
		}
		else if (sqrLen <= FLOAT_0038aed0) {
		if (FLOAT_0038807c < sqrLen) {
		NodeRelated2Abstract::FUN_001ac940(&this->parent,5,_param_1,false,false);
		return result;
		}
		LAB_0006af2f:NodeRelated2Abstract::FUN_001ac940(&this->parent,3,_param_1,false,false);
		return result;
		}
		NodeRelated2Abstract::FUN_001ac940(&this->parent,2,_param_1,false,false);
		if ((uVar1 & 1) != 0) {
		return result;
		}
		*(uint *)&this->field1_0x60 = *(uint *)&this->field1_0x60 | 1;
		return (bool)((byte)uVar1 & 1);
		}
		
	*/
	return false;
}

void NodeRelated2D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeRelated2D::Dispose(NodeRelated2D *this,byte param_1){
		NodeRelated2AA::CleanUp((NodeRelated2AA *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void NodeRelated2D::Method3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2D::Method3(NodeRelated2D *this){
		NodeRelated1Abstract *pNVar1;
		pNVar1 = (this->parent).related;
		if ((((uint)pNVar1[1].vtable >> 1 & 1) == 0) && ((*(byte *)&pNVar1[1].vtable & 1) == 0)) {
		*(undefined4 *)&this->field_0x64 = 0;
		*(uint *)&this->field1_0x60 = *(uint *)&this->field1_0x60 & 0xfffffe5f | 0x40;
		NodeRelated2Abstract::FUN_001ac940(&this->parent,0xb,(InstanceContextRefCounter *)0x0,false,false);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2D::Method4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2D::Method4(NodeRelated2D *this){
		NodeRelated2Abstract::FUN_001ac940(&this->parent,0xb,(InstanceContextRefCounter *)0x0,false,false);
		return;
		}
		
	*/
	return;
}

void NodeRelated2D::FUN_000671a0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2D::FUN_000671a0(NodeRelated2D *this,int param_1){
		*(undefined4 *)&this->field_0x64 = *(undefined4 *)(param_1 + 4);
		*(uint *)&this->field1_0x60 = *(uint *)&this->field1_0x60 & 0xfffffe5f | 0x40;
		return;
		}
		
	*/
	return;
}

void NodeRelated2D::FUN_0006ad60(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2D::FUN_0006ad60(NodeRelated2D *this,int param_1){
		uint uVar1;
		int local_4;
		uVar1 = *(uint *)&this->field1_0x60;
		local_4 = -1;
		if ((uVar1 & 0x1e0) != 0x60) {
		*(uint *)&this->field1_0x60 = (uVar1 & 0x1e0 | 0x600) >> 4 | uVar1 & 0xfffffe61;
		}
		uVar1 = *(uint *)&this->field1_0x60 >> 1 & 0xf;
		if (uVar1 == 0) {
		thunk_FUN_0006ab10((int)this,param_1,&local_4);
		}
		else {
		if (uVar1 == 1) {
		return;
		}
		if (uVar1 != 2) {
		return;
		}
		thunk_FUN_0006acd0((int)this,param_1,&local_4);
		}
		if (local_4 != -1) {
		*(uint *)&this->field1_0x60 =*(uint *)&this->field1_0x60 ^ (local_4 << 5 ^ *(uint *)&this->field1_0x60) & 0x1e0;
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2D::FUN_0006b990(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2D::FUN_0006b990(NodeRelated2D *this,uint param_1,InstanceContextRefCounter *param_2){
		NodeRelated1Abstract *this_00;
		int iVar1;
		uint uVar2;
		InstanceContextRefCounter *pIVar3;
		bool bVar4;
		uint index;
		uint *puVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceContext *this_01;
		pIVar3 = param_2;
		uVar2 = param_1;
		this_00 = (this->parent).related;
		if (((*(byte *)&(((this->parent).ctx)->parent).flags & 8) != 0) &&(((uint)this_00->field7_0x10 >> 10 & 1) == 0)) {
		index = thunk_FUN_00067570(param_1);
		iVar1 = *(int *)(uVar2 + 0x14);
		bVar4 = thunk_FUN_000678c0((int)this_00,iVar1);
		if (bVar4 != false) {
		puVar5 = InstanceContext::FUN_000f7220(this_01);
		param_2 = (InstanceContextRefCounter *)puVar5[1];
		FUN_001a7b30((int)this_00,(char)iVar1,&param_2);
		NodeRelated2Abstract::FUN_001ac940(&this->parent,index,pIVar3,false,false);
		}
		}
		if (((uint)this_00->field7_0x10 >> 8 & 1) != 0) {
		if (((uint)this_00->field7_0x10 >> 10 & 1) == 0) {
		iVar1 = *(int *)(param_1 + 0x14);
		puVar5 = InstanceContext::FUN_000f7220((this->parent).ctx);
		param_1 = puVar5[1];
		FUN_001a7b30((int)this_00,(char)iVar1,&param_1);
		pIVar6 = InstanceDataList::GetNode((InstanceDataList *)&pIVar3[0x1c].refCount,Character);
		if ((pIVar6[1].vtable)->Method8[0x10] != (Method8)0x3) {
		return;
		}
		if (iVar1 != 3) {
		return;
		}
		}
		NodeRelated2AA::thunk_FUN_000676d0((NodeRelated2AA *)this,(int)pIVar3);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2D::Update(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2D::Update(NodeRelated2D *this,int param_1){
		InstanceNodeAbstract *pIVar1;
		void *this_00;
		undefined4 uVar2;
		UNV004 *pUVar3;
		UNV005 *pUVar4;
		InstanceNodeShadow *this_01;
		InstanceNodeShadow *actionContext;
		NodeRelated2AA::Update((NodeRelated2AA *)this,param_1);
		*(undefined4 *)&this->field_0x64 = 0;
		*(undefined4 *)&this->field1_0x60 = 0x1e;
		if (param_1 == 0) {
		pIVar1 = InstanceDataList::GetNode(&((this->parent).ctx)->nodes,Shadow);
		if (pIVar1 == (InstanceNodeAbstract *)0x0) {
		this_00 = VirtualPool::AllocateMemory(0x20);
		if (this_00 == (void *)0x0) {
		uVar2 = 0;
		}
		else {
		uVar2 = FUN_00106860(this_00,1,0.5);
		}
		pUVar3 = (UNV004 *)VirtualPool::AllocateMemory(0x20);
		if (pUVar3 == (UNV004 *)0x0) {
		pUVar3 = (UNV004 *)0x0;
		}
		else {
		pUVar3 = UNV004::Construct(pUVar3,50.0,0,uVar2);
		}
		pUVar4 = (UNV005 *)VirtualPool::AllocateMemory(0xc);
		if (pUVar4 == (UNV005 *)0x0) {
		pUVar4 = (UNV005 *)0x0;
		}
		else {
		pUVar4 = UNV005::Construct(pUVar4,0x41200000,(int)pUVar3);
		}
		this_01 = (InstanceNodeShadow *)VirtualPool::AllocateMemory(0x2c);
		if (this_01 == (InstanceNodeShadow *)0x0) {
		actionContext = (InstanceNodeShadow *)0x0;
		}
		else {
		actionContext = InstanceNodeShadow::Construct(this_01);
		}
		InstanceNodeShadow::ReplaceElement(actionContext,0,pUVar4);
		InstanceContext::SetNode((this->parent).ctx,true,&actionContext->parent);
		}
		}
		return;
		}
		
	*/
	return;
}

bool NodeRelated2D::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool NodeRelated2D::IsA(void){
		return true;
		}
		
	*/
	return false;
}

void NodeRelated2D::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2D::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool NodeRelated2D::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool NodeRelated2D::IsC(void){
		return false;
		}
		
	*/
	return false;
}

void NodeRelated2D::Construct(int* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2D * __thiscall NodeRelated2D::Construct(NodeRelated2D *this,int *param_1,BlackboardAbstract *param_2,NodeRelated1Abstract *param_3){
		NodeRelated2Abstract::Construct(&this->parent,(InstanceMasterInfo *)param_1,param_2,param_3);
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_D;
		return this;
		}
		
	*/
	return;
}

