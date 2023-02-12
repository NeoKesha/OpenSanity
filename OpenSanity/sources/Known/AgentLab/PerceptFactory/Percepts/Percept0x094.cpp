#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x094.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x094::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x094::GetUtilityScore(Percept0x094 *this,InstanceContext *param_1){
		Vector4 *pVVar1;
		NodeRelated2C *pNVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		Vector4 local_30;
		Vector4 local_20;
		InstanceNodeCharacter *pIVar4;
		InstanceNodeCharacter *pIVar2;
		pIVar2 = (InstanceNodeCharacter *)(param_1->nodes).array[0xc];
		if ((pIVar2 != (InstanceNodeCharacter *)0x0) &&((*(byte *)&(pIVar2->parent).field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar4 = (InstanceNodeCharacter *)(param_1->nodes).array[0xc];
		if (pIVar4 != (InstanceNodeCharacter *)0x0) {
		pNVar2 = pIVar4->field1_0x18;
		if ((*(byte *)&(pNVar2->parent).field1_0x60.x & 4) != 0) {
		fVar5 = (pNVar2->parent).parent.vec1.w;
		fVar4 = (pNVar2->parent).parent.vec1.z;
		fVar3 = (pNVar2->parent).parent.vec1.y;
		(pNVar2->parent).parent.field27_0x40.x = (pNVar2->parent).parent.vec1.x;
		(pNVar2->parent).parent.field27_0x40.y = fVar3;
		(pNVar2->parent).parent.field27_0x40.z = fVar4;
		(pNVar2->parent).parent.field27_0x40.w = fVar5;
		pVVar1 = &(pNVar2->parent).field1_0x60;
		pVVar1->x = (float)((uint)pVVar1->x & 0xfffffffa);
		}
		fVar5 = (pNVar2->parent).parent.field27_0x40.x;
		fVar4 = (pNVar2->parent).parent.field27_0x40.y;
		fVar3 = (pNVar2->parent).parent.field27_0x40.z;
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_30,&local_20);
		local_30.y = (fVar4 + FLOAT_00394384) - local_30.y;
		fVar5 = fVar5 - local_30.x;
		fVar3 = fVar3 - local_30.z;
		fVar4 = fVar3 * fVar3 + fVar5 * fVar5 + local_30.y * local_30.y;
		if (fVar4 <= _DAT_004963dc) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = FLOAT_0038639c / SQRT(fVar4);
		}
		return local_20.x * fVar4 * fVar5 + local_20.y * fVar4 * local_30.y + local_20.z * fVar4 * fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x094::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x094 * __thiscall Percept0x094::Dispose(Percept0x094 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x094::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x094::Construct(Percept0x094 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x94;
		(this->parent).vtable = &Percept_VT_ID_0x94;
		return;
		}
		
	*/
	return;
}

