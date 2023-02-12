#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2J.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/InstanceMasterInfo.h"
void NodeRelated2J::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2J::Dispose(NodeRelated2J *this){
		NodeRelated1Abstract *pNVar1;
		BlackboardAbstract *blackboard;
		blackboard = (this->parent).blackboard;
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		if (blackboard != (BlackboardAbstract *)0x0) {
		(*blackboard->vtable->Dispose)(blackboard,1);
		}
		pNVar1 = (this->parent).related;
		if (pNVar1 != (NodeRelated1Abstract *)0x0) {
		(*(code *)*pNVar1->vtable)(1);
		}
		NodeRelated2Abstract::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

void NodeRelated2J::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2J * __thiscall NodeRelated2J::Dispose(NodeRelated2J *this,byte param_1){
		BlackboardAbstract *blackboard;
		NodeRelated1Abstract *related1;
		blackboard = (this->parent).blackboard;
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		if (blackboard != (BlackboardAbstract *)0x0) {
		(*blackboard->vtable->Dispose)(blackboard,1);
		}
		related1 = (this->parent).related;
		if (related1 != (NodeRelated1Abstract *)0x0) {
		(*(code *)*related1->vtable)(1);
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

void NodeRelated2J::Construct(InstanceMasterInfo* info, uint blackboard, uint related1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2J * __thiscall NodeRelated2J::Construct(NodeRelated2J *this,InstanceMasterInfo *info,BlackboardAbstract *blackboard,NodeRelated1Abstract *related1){
		NodeRelated2Abstract::Construct(&this->parent,info,blackboard,related1);
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		return this;
		}
		
	*/
	return;
}

