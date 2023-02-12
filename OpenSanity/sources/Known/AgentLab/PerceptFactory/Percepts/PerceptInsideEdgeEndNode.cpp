#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptInsideEdgeEndNode.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptInsideEdgeEndNode::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptInsideEdgeEndNode::GetUtilityScore(PerceptInsideEdgeEndNode *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *this_00;
		void *this_01;
		uint uVar2;
		pIVar1 = (param_1->nodes).array[0xf];
		this_00 = pIVar1[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		param_1._0_1_ = *(char *)&pIVar1[2].time - 1;
		if ((byte)param_1 == 0xff) {
		param_1._0_1_ = 0;
		}
		this_01 = (void *)FUN_0015d930((int)this_00,(byte)param_1);
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

void PerceptInsideEdgeEndNode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptInsideEdgeEndNode * __thiscall PerceptInsideEdgeEndNode::Dispose(PerceptInsideEdgeEndNode *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptInsideEdgeEndNode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptInsideEdgeEndNode::Construct(PerceptInsideEdgeEndNode *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x15;
		(this->parent).vtable = &Percept_VT_InsideEdgeEndNode;
		return;
		}
		
	*/
	return;
}

