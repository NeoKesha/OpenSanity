#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeA.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2AA.h"
#include "headers/Known/Time/UnkTimePack.h"
void InstanceNodeA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::Dispose(InstanceNodeA *this){
		NodeRelated2Abstract *this_00;
		this_00 = this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2Abstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::Construct(NodeRelated2AA* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeA * __thiscall InstanceNodeA::Construct(InstanceNodeA *this,NodeRelated2AA *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = &param_1->parent;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeA::Dispose_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::Dispose(InstanceNodeA *this){
		NodeRelated2Abstract *this_00;
		this_00 = this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2Abstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::Dispose_3(InstanceNodeA* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::Dispose(InstanceNodeA *param_1){
		NodeRelated2Abstract *this;
		this = param_1->field1_0x18;
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this != (NodeRelated2Abstract *)0x0) {
		(*this->vtable->Dispose)(this,1);
		}
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::Dispose_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::Dispose(InstanceNodeA *this){
		NodeRelated2Abstract *this_00;
		this_00 = this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2Abstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::Dispose_5(InstanceNodeA* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::Dispose(InstanceNodeA *param_1){
		NodeRelated2Abstract *this;
		this = param_1->field1_0x18;
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this != (NodeRelated2Abstract *)0x0) {
		(*this->vtable->Dispose)(this,1);
		}
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::Dispose_6(InstanceNodeA* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::Dispose(InstanceNodeA *param_1){
		NodeRelated2Abstract *this;
		this = param_1->field1_0x18;
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this != (NodeRelated2Abstract *)0x0) {
		(*this->vtable->Dispose)(this,1);
		}
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::Dispose_7(InstanceNodeA* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::Dispose(InstanceNodeA *param_1){
		NodeRelated2Abstract *this;
		this = param_1->field1_0x18;
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this != (NodeRelated2Abstract *)0x0) {
		(*this->vtable->Dispose)(this,1);
		}
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeA::Step(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeA::Step(InstanceNodeA *this,UnkTimePack *time){
		int *piVar1;
		InstanceContext *pIVar2;
		ChunkData *pCVar3;
		NodeRelated2Abstract *this_00;
		bool bVar4;
		NodeRelated2AA *pNVar4;
		pIVar2 = (this->parent).ctx;
		pCVar3 = (pIVar2->parent).chunkData;
		this_00 = this->field1_0x18;
		if ((pCVar3 != (ChunkData *)0x0) && ((pCVar3->sceneryFlags >> 0x17 & 1) == 0)) {
		piVar1 = &(pIVar2->parent).flags;
		*piVar1 = *piVar1 & 0xfffffdff;
		}
		if ((*(byte *)&time->flags & 1) != 0) {
		(*this_00->vtable[1].Method3)(this_00);
		}
		bVar4 = InstanceNodeAbstract::Step(&this->parent,time);
		return bVar4;
		}
		
	*/
	return false;
}

void InstanceNodeA::Dispose_9(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeA::Dispose(InstanceNodeA *this,byte param_1){
		NodeRelated2Abstract *this_00;
		this_00 = this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2Abstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void InstanceNodeA::SetCtx(uint ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeA::SetCtx(InstanceNodeA *this,InstanceContext *ctx){
		NodeRelated2Abstract *this_00;
		this_00 = this->field1_0x18;
		InstanceNodeAbstract::SetCtx(&this->parent,ctx);
		NodeRelated2Abstract::FUN_001accf0(this_00);
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::UpdateTime(UnkTimePack* time, int flags) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeA::UpdateTime(InstanceNodeA *this,UnkTimePack *time,int flags){
		NodeRelated2Abstract::UpdateTime(this->field1_0x18,GameController5->gameResources,time,flags);
		(this->parent).time = time->time1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeA::IsA(InstanceNodeA *this){
		(*this->field1_0x18->vtable->IsB)();
		return;
		}
		
	*/
	return;
}

void InstanceNodeA::DisposeSomething(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeA::DisposeSomething(InstanceNodeA *this,int *param_1){
		uint uVar1;
		int iVar2;
		if (param_1 == (int *)0x0) {
		iVar2 = 0;
		}
		else {
		iVar2 = *param_1;
		}
		if (*(short *)(iVar2 + 8) == 0x1801) {
		(*this->field1_0x18->vtable[1].Dispose)(this->field1_0x18,(byte)*param_1);
		InstanceNodeAbstract::UnkMethod1((undefined *)register0x00000010);
		return;
		}
		if (param_1 != (int *)0x0) {
		uVar1 = param_1[1];
		param_1[1] = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		}
		InstanceNodeAbstract::DisposeSomething((undefined *)param_1);
		InstanceNodeAbstract::UnkMethod1((undefined *)&param_1);
		return;
		}
		
	*/
	return;
}

uint InstanceNodeA::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeA::GetBuilderIndex(void){
		return 0x1423;
		}
		
	*/
	return 0;
}

