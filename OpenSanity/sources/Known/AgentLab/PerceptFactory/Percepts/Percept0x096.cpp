#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x096.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x096::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x096::GetUtilityScore(Percept0x096 *this,InstanceContext *param_1){
		float *pfVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceNodeAbstract_VTable *pIVar3;
		uint uVar4;
		float fVar5;
		UpdateTime *local_50;
		Step *local_4c;
		Method8 *local_48;
		GetBuilderIndex *local_44;
		UpdateTime *local_40;
		float local_3c;
		Method8 *local_38;
		GetBuilderIndex *local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_20;
		float local_1c;
		float local_18;
		pIVar2 = (param_1->nodes).array[0xc];
		if ((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar2 = (param_1->nodes).array[0xc];
		if (pIVar2 != (InstanceNodeAbstract *)0x0) {
		pIVar3 = pIVar2[1].vtable;
		if ((*(byte *)&pIVar3[2].GetIndex & 4) != 0) {
		pIVar3[1].UpdateTime = (UpdateTime *)pIVar3[1].SetCtx;
		pIVar3[1].Step = (Step *)pIVar3[1].IsA;
		pIVar3[1].Method8 = (Method8 *)pIVar3[1].GetIndex;
		pIVar3[1].GetBuilderIndex = (GetBuilderIndex *)pIVar3[1].Method5;
		pIVar3[2].GetIndex = (GetIndex *)((uint)pIVar3[2].GetIndex & 0xfffffffa);
		}
		local_50 = pIVar3[1].UpdateTime;
		local_4c = pIVar3[1].Step;
		local_48 = pIVar3[1].Method8;
		local_44 = pIVar3[1].GetBuilderIndex;
		uVar4 = FUN_00172520((int)(param_1->parent).ctx,(byte)((uint)(this->parent).PerceptID >> 0x11),&local_30,&local_20);
		if ((char)uVar4 != '\0') {
		local_3c = (float)local_4c + FLOAT_00394384;
		local_40 = local_50;
		local_30 = (float)local_50 - local_30;
		local_34 = local_44;
		local_2c = local_3c - local_2c;
		local_38 = local_48;
		local_28 = (float)local_48 - local_28;
		fVar5 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
		if (fVar5 <= _DAT_004963dc) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = FLOAT_0038639c / SQRT(fVar5);
		}
		local_50 = (UpdateTime *)(fVar5 * local_30);
		local_4c = (Step *)(fVar5 * local_2c);
		local_48 = (Method8 *)(local_28 * fVar5);
		fVar5 = local_18 * (float)local_48 + local_1c * (float)local_4c + local_20 * (float)local_50;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
		uVar4 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,&local_50,0);
		if ((char)uVar4 == '\0') {
		fVar5 = (this->parent).Threshold;
		return fVar5 + fVar5;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x096::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x096 * __thiscall Percept0x096::Dispose(Percept0x096 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x096::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x096::Construct(Percept0x096 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x96;
		(this->parent).vtable = &Percept_VT_ID_0x96;
		return;
		}
		
	*/
	return;
}

