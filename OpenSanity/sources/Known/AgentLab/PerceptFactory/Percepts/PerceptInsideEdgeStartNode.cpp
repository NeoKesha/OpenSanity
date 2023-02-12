#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptInsideEdgeStartNode.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptInsideEdgeStartNode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptInsideEdgeStartNode * __thiscall PerceptInsideEdgeStartNode::Dispose(PerceptInsideEdgeStartNode *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptInsideEdgeStartNode::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptInsideEdgeStartNode::GetUtilityScore(PerceptInsideEdgeStartNode *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *this_00;
		void *this_01;
		uint uVar2;
		pIVar1 = (param_1->nodes).array[0xf];
		this_00 = pIVar1[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		this_01 = (void *)FUN_0015d930((int)this_00,*(byte *)&pIVar1[2].time);
		if (this_01 != (void *)0x0) {
		uVar2 = FUN_0016d480(this_01,(int)param_1);
		if ((char)uVar2 != '\0') {
		return FLOAT_0038639c;
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptInsideEdgeStartNode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptInsideEdgeStartNode::Construct(PerceptInsideEdgeStartNode *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x14;
		(this->parent).vtable = &Percept_VT_InsideEdgeStartNode;
		return;
		}
		
	*/
	return;
}

