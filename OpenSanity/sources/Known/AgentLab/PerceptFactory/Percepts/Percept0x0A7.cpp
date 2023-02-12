#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0A7.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x0A7::GetUtilityScore(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0A7::GetUtilityScore(Percept0x0A7 *this,InstanceContext *ctx){
		InstanceNodeCharacter *this_00;
		InstanceNodeAbstract_VTable *this_01;
		float fVar1;
		float fVar2;
		Vector4 local_30;
		undefined4 local_20 [7];
		InstanceNodeCharacter *pIVar2;
		InstanceNodeCreature *pIVar3;
		pIVar2 = (InstanceNodeCharacter *)(ctx->nodes).array[0xc];
		pIVar3 = (InstanceNodeCreature *)(ctx->nodes).array[0xf];
		if ((pIVar2 != (InstanceNodeCharacter *)0x0) &&((*(byte *)&(pIVar2->parent).field6_0x14 & 1) != 0)) {
		(ctx->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		this_00 = (InstanceNodeCharacter *)(ctx->nodes).array[0xc];
		if ((pIVar3 != (InstanceNodeCreature *)0x0) && (this_00 != (InstanceNodeCharacter *)0x0)) {
		fVar1 = (float)pIVar3[1].parent.field6_0x14;
		this_01 = (&((pIVar3->parent).field5_0x10)->vtable)[*(byte *)((int)&pIVar3[2].parent.field3_0xa + 1)];
		if (this_01 != (InstanceNodeAbstract_VTable *)0x0) {
		InstanceNodeCharacter::GetPosition(this_00,&local_30);
		fVar2 = FUN_000f1ce0((int)this_01,&local_30.x,local_20);
		fVar2 = Math::ClampFloat(fVar2,0.0,1.0);
		fVar1 = (fVar2 - fVar1) * *(float *)(this_01->IsA + (int)this_01->Dispose * 4 + -0x10);
		if (fVar1 < 0.0) {
		return 0.0 - fVar1;
		}
		return fVar1;
		}
		}
		return FLOAT_003869d8;
		}
		
	*/
	return 0.0f;
}

void Percept0x0A7::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A7 * __thiscall Percept0x0A7::Dispose(Percept0x0A7 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x0A7::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0A7::Construct(Percept0x0A7 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xa7;
		(this->parent).vtable = &Percept_VT_ID_0xa7;
		return;
		}
		
	*/
	return;
}

