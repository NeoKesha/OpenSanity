#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2I.h"

void NodeRelated2I::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2I * __thiscall NodeRelated2I::Dispose(NodeRelated2I *this,byte param_1){
		NodeRelated2AA::CleanUp((NodeRelated2AA *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeRelated2I::Method8(uint* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2I::Method8(NodeRelated2I *this,undefined4 *param_1,InstanceContextRefCounter *param_2){
		(this->parent).vec1.x = (float)*param_1;
		(this->parent).vec1.y = (float)param_1[1];
		(this->parent).vec1.z = (float)param_1[2];
		(this->parent).vec1.w = (float)param_1[3];
		(this->parent).field27_0x40.x = (float)param_1[4];
		*(undefined *)&(this->parent).field27_0x40.y = *(undefined *)(param_1 + 5);
		NodeRelated2Abstract::FUN_001ac940(&this->parent,2,param_2,false,false);
		return;
		}
		
	*/
	return;
}

void NodeRelated2I::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2I::IsC(void){
		return 0;
		}
		
	*/
	return;
}

void NodeRelated2I::Construct(int* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2I * __thiscall NodeRelated2I::Construct(NodeRelated2I *this,int *param_1,BlackboardAbstract *param_2,NodeRelated1Abstract *param_3){
		NodeRelated2Abstract::Construct(&this->parent,(InstanceMasterInfo *)param_1,param_2,param_3);
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_I;
		return this;
		}
		
	*/
	return;
}

