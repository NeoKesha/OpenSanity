#include "headers/Known/GameData/CodeModel/CodeModel.h"

#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"
#include "headers/Known/GameData/GameObject/GameObjectScriptPack.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void CodeModel::FUN_001a7eb0(byte cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CodeModel::FUN_001a7eb0(CodeModel *this,byte cnt){
		uint *puVar1;
		uint packCnt;
		GameObjectScriptPack *this_00;
		packCnt = (uint)cnt;
		puVar1 = (uint *)VirtualPool::AllocateMemory(packCnt * 8 + 4);
		if (puVar1 == (uint *)0x0) {
		*(byte *)((int)&this->header + 2) = cnt;
		this->scriptPackArray = (GameObjectScriptPack *)0x0;
		return;
		}
		*puVar1 = packCnt;
		this_00 = (GameObjectScriptPack *)(puVar1 + 1);
		if (-1 < (int)(packCnt - 1)) {
		do {
		GameObjectScriptPack::Construct(this_00);
		packCnt = packCnt - 1;
		this_00 = this_00 + 1;
		}
		 while (packCnt != 0);
		}
		this->scriptPackArray = (GameObjectScriptPack *)(puVar1 + 1);
		*(byte *)((int)&this->header + 2) = cnt;
		return;
		}
		
	*/
	return;
}

void CodeModel::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall CodeModel::CleanUp(CodeModel *this){
		GameObjectScriptPack *pGVar1;
		GameObjectScriptPack *pGVar2;
		ActionAbstract *pAVar3;
		pGVar1 = this->scriptPackArray;
		if (pGVar1 != (GameObjectScriptPack *)0x0) {
		pAVar3 = pGVar1[-1].actionList;
		pGVar2 = pGVar1 + (int)pAVar3;
		if (-1 < (int)((int)&pAVar3[-1].nextAction + 3)) {
		do {
		pGVar2 = pGVar2 + -1;
		FUN_0015cf30((int)pGVar2);
		pAVar3 = (ActionAbstract *)((int)&pAVar3[-1].nextAction + 3);
		}
		 while (pAVar3 != (ActionAbstract *)0x0);
		}
		VirtualPool::FreeMemory(&pGVar1[-1].actionList);
		}
		VirtualPool::FreeMemory(this->packIds);
		pAVar3 = this->firstAction;
		if (pAVar3 != (ActionAbstract *)0x0) {
		(*pAVar3->vtable->Dispose)(pAVar3,1);
		}
		return;
		}
		
	*/
	return;
}

void CodeModel::InitCodeModelAction(byte index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl CodeModel::InitCodeModelAction(byte index){
		InstanceNodeInstanceA local_e0;
		InstanceNodeInstance::Construct((InstanceNodeInstance *)&local_e0);
		local_e0.vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_A;
		InstanceNodeInstanceA::Init(&local_e0);
		local_e0.body.parent.field61_0x9c.x =(float)((uint)local_e0.body.parent.field61_0x9c.x ^((uint)index << 10 ^ (uint)local_e0.body.parent.field61_0x9c.x) & 0x7c00);
		(*ACTION_ARRAY_1[index]->vtable->Execute)(ACTION_ARRAY_1[index],(InstanceContext *)&local_e0);
		local_e0.vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_A;
		if (DAT_00491bc1 == '\0') {
		(*(code *)PTR_InstanceMethod13_0038aad4)();
		if (local_e0.body.parent.field61_0x9c.z != 0.0) {
		FUN_001dde00(PTR_003e6bf4,(InstanceNodePhysics *)local_e0.body.parent.field61_0x9c.z);
		local_e0.body.parent.field61_0x9c.z = 0.0;
		}
		local_e0.body.parent.field50_0x84 = local_e0.body.parent.field50_0x84 & 0xfffffffb;
		}
		InstanceNodeInstance::Dispose((InstanceNodeInstance *)&local_e0);
		return;
		}
		
	*/
	return;
}

void CodeModel::InitCodeModelAction_3(byte index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl CodeModel::InitCodeModelAction(byte index){
		undefined auStack256 [204];
		InstanceContextRefCounter *apIStack52 [12];
		InstanceNodeInstanceB::Construct((InstanceNodeInstanceB *)auStack256);
		auStack256._192_4_ =(InstanceContextRefCounter *)((uint)auStack256._192_4_ ^ ((uint)index << 10 ^ (uint)auStack256._192_4_) & 0x7c00);
		(*ACTION_ARRAY_2[index]->vtable->Execute)(ACTION_ARRAY_2[index],(InstanceContext *)auStack256);
		auStack256._0_4_ = &InstanceNode_VT_Instance_B;
		if (DAT_00491bc1 == '\0') {
		(*(code *)PTR_InstanceMethod13_0038ac7c)();
		}
		InstanceContextSmartPtr::Release(apIStack52);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)(auStack256 + 200));
		InstanceNodeInstance::Dispose((InstanceNodeInstance *)auStack256);
		return;
		}
		
	*/
	return;
}

void CodeModel::InitCodeModel() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl CodeModel::InitCodeModel(CodeModel *this){
		byte index;
		float fVar1;
		float *float6;
		uint uVar2;
		index = *(byte *)((int)&this->header + 1);
		uVar2 = (uint)index;
		SCRIPT_PACK_ARRAY_1[uVar2] = this->scriptPackArray;
		ACTION_ARRAY_1[uVar2] = this->firstAction;
		if ((void *)Float5Array[uVar2] != (void *)0x0) {
		VirtualPool::FreeMemory((void *)Float5Array[uVar2]);
		}
		float6 = (float *)VirtualPool::AllocateMemory(0x18);
		fVar1 = FLOAT_0038639c;
		if (float6 == (float *)0x0) {
		float6 = (float *)0x0;
		}
		else {
		*float6 = FLOAT_0038639c;
		float6[1] = fVar1;
		float6[2] = fVar1;
		float6[3] = fVar1;
		float6[4] = (float)((uint)float6[4] & 0xfffff800);
		float6[5] = 0.0;
		}
		Float5Array[uVar2] = (float)float6;
		InitCodeModelAction(index);
		if (*(char *)((int)&UINT_003cfea0 + uVar2) == '\0') {
		DAT_003cfec0 = this->packIds;
		*(undefined *)((int)&UINT_003cfea0 + uVar2) = 1;
		}
		return;
		}
		
	*/
	return;
}

void CodeModel::InitCodeModel_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl CodeModel::InitCodeModel(CodeModel *this){
		byte index;
		float *float9;
		uint uVar1;
		index = *(byte *)((int)&this->header + 1);
		uVar1 = (uint)index;
		SCRIPT_PACK_ARRAY_2[uVar1] = this->scriptPackArray;
		ACTION_ARRAY_2[uVar1] = this->firstAction;
		if ((void *)Float9Array[uVar1] != (void *)0x0) {
		VirtualPool::FreeMemory((void *)Float9Array[uVar1]);
		}
		float9 = (float *)VirtualPool::AllocateMemory(0x24);
		if (float9 == (float *)0x0) {
		float9 = (float *)0x0;
		}
		else {
		*float9 = FLOAT_00387520;
		float9[1] = 0.0;
		float9[2] = 0.0;
		float9[3] = 0.0;
		float9[8] = 0.0;
		float9[7] = (float)((uint)float9[7] & 0xfffffc00);
		float9[6] = 0.0;
		float9[4] = 0.0;
		}
		Float9Array[uVar1] = (float)float9;
		InitCodeModelAction(index);
		if (*(char *)((int)&UINT_003cfecc + uVar1) == '\0') {
		DAT_003cfec4 = this->packIds;
		*(undefined *)((int)&UINT_003cfecc + uVar1) = 1;
		}
		return;
		}
		
	*/
	return;
}

void CodeModel::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CodeModel::Write(CodeModel *this,MemoryStream *stream){
		uint uVar1;
		(*stream->vtable->WriteInt3)(stream,this->header);
		uVar1 = 0;
		if (*(char *)((int)&this->header + 2) != '\0') {
		do {
		GameObjectScriptPack::Write(this->scriptPackArray + uVar1,stream);
		(*stream->vtable->WriteShort2)(stream,this->packIds[uVar1]);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < *(byte *)((int)&this->header + 2));
		}
		ActionAbstract::Write(this->firstAction,stream);
		return;
		}
		
	*/
	return;
}

void CodeModel::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CodeModel::Construct(CodeModel *this,MemoryStream *stream){
		short *psVar1;
		ActionAbstract *pAVar2;
		uint i;
		(*stream->vtable->ReadUInt)(stream,&this->header);
		FUN_001a7eb0(this,*(byte *)((int)&this->header + 2));
		psVar1 = (short *)VirtualPool::AllocateMemory((uint)*(byte *)((int)&this->header + 2) << 1);
		this->packIds = psVar1;
		if (*(char *)((int)&this->header + 2) != '\0') {
		i = 0;
		do {
		GameObjectScriptPack::Read(this->scriptPackArray + i,stream);
		(*stream->vtable->ReadShort2)(stream,this->packIds + i);
		i = i + 1;
		}
		 while (i < *(byte *)((int)&this->header + 2));
		}
		pAVar2 = ActionAbstract::BuildAction(stream);
		this->firstAction = pAVar2;
		return;
		}
		
	*/
	return;
}

