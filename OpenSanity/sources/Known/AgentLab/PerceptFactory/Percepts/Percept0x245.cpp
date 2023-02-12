#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x245.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x245::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x245::GetUtilityScore(Percept0x245 *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		Dispose *this_00;
		bool bVar2;
		InstanceNodeAbstract *pIVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Vector4 local_60;
		Vector4 local_50;
		Vector4 local_40;
		undefined local_30 [44];
		if ((CTX_PTR != (InstanceContextRefCounter *)0x0) &&(pIVar1 = CTX_PTR->ctx, pIVar1 != (InstanceContext *)0x0)) {
		pIVar3 = InstanceDataList::GetNode(&pIVar1->nodes,Character);
		this_00 = pIVar3[1].vtable[4].Dispose;
		if (this_00 != (Dispose *)0x0) {
		bVar2 = thunk_FUN_0007e770(this_00,(int)(TicksPerTime * FLOAT_0038ad70));
		if (bVar2 != false) {
		InstanceContext::thunk_FUN_0005a4c0(pIVar1,&local_50,&local_60);
		pIVar1 = (param_1->parent).ctx;
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)pIVar1,&local_40);
		local_40.x = local_40.x - local_50.x;
		local_40.z = local_40.z - local_50.z;
		local_40.y = local_40.y - local_50.y;
		fVar4 = local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y;
		if (fVar4 <= _DAT_0039d978) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = FLOAT_0038639c / SQRT(fVar4);
		}
		if (FLOAT_00386394 <local_60.z * local_40.z * fVar4 + local_60.y * fVar4 * local_40.y +local_60.x * fVar4 * local_40.x) {
		fVar5 = FUN_00147550(&(pIVar1->parent).field14_0x20.matrix2.m11);
		local_60.x = local_60.x * FLOAT_0038adbc + local_50.x;
		local_60.z = local_60.z * FLOAT_0038adbc + local_50.z;
		local_50.y = 0.0;
		local_60.y = 0.0;
		local_40.y = 0.0;
		thunk_FUN_0005a450(local_30,&local_50.x,&local_60.x);
		fVar6 = FUN_000d66b0(local_30,&local_40.x);
		fVar4 = FLOAT_0038639c;
		if (fVar5 * fVar5 <= fVar6) {
		fVar4 = 0.0;
		}
		return fVar4;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x245::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x245 * __fastcall Percept0x245::Construct(Percept0x245 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x245;
		(this->parent).vtable = &Percept_VT_ID_0x245;
		return this;
		}
		
	*/
	return;
}

void Percept0x245::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x245 * __thiscall Percept0x245::Dispose(Percept0x245 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

