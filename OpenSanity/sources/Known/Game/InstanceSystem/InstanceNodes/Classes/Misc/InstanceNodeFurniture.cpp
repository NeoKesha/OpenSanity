#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeFurniture.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2G.h"
void InstanceNodeFurniture::Construct(NodeRelated2G* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeFurniture * __thiscall InstanceNodeFurniture::Construct(InstanceNodeFurniture *this,NodeRelated2G *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Furniture;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeFurniture::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeFurniture::Dispose(InstanceNodeFurniture *this,byte param_1){
		NodeRelated2Abstract *this_00;
		this_00 = (NodeRelated2Abstract *)this->field1_0x18;
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

byte InstanceNodeFurniture::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeFurniture::GetIndex(void){
		return 0x10;
		}
		
	*/
	return 0;
}

uint InstanceNodeFurniture::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeFurniture::GetBuilderIndex(void){
		return 0x9009;
		}
		
	*/
	return 0;
}

