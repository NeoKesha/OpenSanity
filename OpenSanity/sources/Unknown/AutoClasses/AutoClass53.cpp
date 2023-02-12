#include "headers/Unknown/AutoClasses/AutoClass53.h"

#include "headers/Known/Game/Chunks/ChunkDesc.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
bool AutoClass53::FUN_000b9fe0(int type, ChunkDesc* desc, UnkFamily16A* defaultRm) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall AutoClass53::FUN_000b9fe0(AutoClass53 *this,int type,ChunkDesc *desc,UnkFamily16A *defaultRm){
		InstanceContext *ctx;
		InstanceNodeCrate *nodeCrate;
		InstanceNodeInstance *nodeInstance1;
		InstanceNodeInstance *nodeInstance2;
		uint i;
		UnkFamily15A *unkFamily15A;
		InstanceContext *piVar3;
		InstanceContext *playerCtx;
		AutoClass52 *dst;
		AutoClass16 *record;
		AutoClass52 *src;
		if ((*(byte *)&this->flags & 1) != 0) {
		if (defaultRm == (UnkFamily16A *)0x0) {
		record = (AutoClass16 *)0x0;
		ctx = (InstanceContext *)0x0;
		}
		else {
		record = UnkFamily16Base::FindRecord(&defaultRm->parent,(this->str).value);
		ctx = (InstanceContext *)record;
		if ((InstanceContext *)record != (InstanceContext *)0x0) {
		ctx = AutoClass16::GetInstanceContextById(record,this->index);
		}
		}
		i = this->flags >> 6 & 0xf;
		if (i == 6) {
		playerCtx = (InstanceContext *)0x0;
		}
		else if (desc->playerInstanceContexts[i] == (InstanceContextRefCounter *)0x0) {
		playerCtx = (InstanceContext *)0x0;
		}
		else {
		playerCtx = desc->playerInstanceContexts[i]->ctx;
		}
		if (ctx != (InstanceContext *)0x0) {
		nodeCrate = (InstanceNodeCrate *)InstanceDataList::GetNode(&ctx->nodes,Crate);
		if ((nodeCrate != (InstanceNodeCrate *)0x0) &&(i = ((nodeCrate->field1_0x18->parent).blackboard)->field1_0x4, (i & 0x40) != 0)) {
		if ((char)i < '\0') {
		 record is AutoClass16 unkFamily15A = (UnkFamily15A *)(((InstanceContext *)record)->parent).field13_0x1c;
		}
		else {
		unkFamily15A = (UnkFamily15A *)(((InstanceContext *)record)->parent).field14_0x20.ctx;
		}
		if (unkFamily15A != (UnkFamily15A *)0x0) {
		UnkFamily15A::SetResetBit(unkFamily15A,(uint)(ushort)this->index,true);
		}
		}
		}
		this->flags = this->flags | 2;
		if (playerCtx != (InstanceContext *)0x0) {
		nodeInstance1 = (InstanceNodeInstance *)InstanceDataList::GetNode(&playerCtx->nodes,Instance);
		i = this->flags >> 10 & 0xf;
		if (i == 6) {
		piVar3 = (InstanceContext *)0x0;
		}
		else if (desc->playerInstanceContexts[i] == (InstanceContextRefCounter *)0x0) {
		piVar3 = (InstanceContext *)0x0;
		}
		else {
		piVar3 = desc->playerInstanceContexts[i]->ctx;
		}
		src = &this->unkStruct1;
		InstanceNodeInstance::SetAC52Fields(nodeInstance1,src);
		AutoClass52::FUN_000fb0b0(src,playerCtx);
		if (piVar3 != (InstanceContext *)0x0) {
		nodeInstance2 = (InstanceNodeInstance *)InstanceDataList::GetNode(&piVar3->nodes,Instance);
		dst = &this->unkStruct2;
		AutoClass52::Copy(dst,src);
		InstanceNodeInstance::SetAC52Fields(nodeInstance2,dst);
		AutoClass52::FUN_000fb0b0(dst,piVar3);
		}
		}
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void AutoClass53::FUN_000ae330(uint param_1, uint param_2, UnkFamily16A* defaultRm) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass53::FUN_000ae330(AutoClass53 *this,undefined4 param_1,undefined4 param_2,UnkFamily16A *defaultRm){
		uint uVar1;
		AutoClass16 *this_00;
		InstanceContext *pIVar2;
		InstanceNodeCrate *nodeD;
		UnkFamily15A *this_01;
		if ((((defaultRm != (UnkFamily16A *)0x0) &&(this_00 = UnkFamily16Base::FindRecord(&defaultRm->parent,(this->str).value),this_00 != (AutoClass16 *)0x0)) &&(pIVar2 = AutoClass16::GetInstanceContextById(this_00,this->index),pIVar2 != (InstanceContext *)0x0)) &&((nodeD = (InstanceNodeCrate *)InstanceDataList::GetNode(&pIVar2->nodes,Crate),nodeD != (InstanceNodeCrate *)0x0 &&(uVar1 = ((nodeD->field1_0x18->parent).blackboard)->field1_0x4, (uVar1 & 0x40) != 0)))) {
		if ((char)uVar1 < '\0') {
		this_01 = this_00->field7_0x1c;
		}
		else {
		this_01 = this_00->field8_0x20;
		}
		if (this_01 != (UnkFamily15A *)0x0) {
		UnkFamily15A::SetResetBit(this_01,(uint)(ushort)this->index,false);
		}
		}
		this->index = -1;
		this->flags = 0;
		return;
		}
		
	*/
	return;
}

bool AutoClass53::FUN_000b58f0(uint param_1, UnkFamily16A* defaultRm, InstanceContext* ctx1, InstanceContext* ctx2, InstanceContext* ctx3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall AutoClass53::FUN_000b58f0(AutoClass53 *this,uint param_1,UnkFamily16A *defaultRm,InstanceContext *ctx1,InstanceContext *ctx2,InstanceContext *ctx3){
		WorldChunk *pWVar1;
		UnkFamily16A *this_00;
		AutoClass16 *pAVar2;
		InstanceContext *ctx;
		InstanceNodeCharacter *node;
		InstanceNodeCharacter *nodeC;
		InstanceNodeCrate *nodeD;
		int iVar3;
		this_00 = defaultRm;
		if (defaultRm != (UnkFamily16A *)0x0) {
		pAVar2 = UnkFamily16Base::FindRecord(&defaultRm->parent,(this->str).value);
		if (pAVar2 != (AutoClass16 *)0x0) {
		ctx = AutoClass16::GetInstanceContextById(pAVar2,this->index);
		goto LAB_000b5920;
		}
		}
		ctx = (InstanceContext *)0x0;
		LAB_000b5920:if (ctx == ctx1) {
		if ((ctx != (InstanceContext *)0x0) && ((*(byte *)&this->flags & 2) == 0)) {
		return true;
		}
		return false;
		}
		node = InstanceContext::GetCharacterNode(ctx1);
		if (node == (InstanceNodeCharacter *)0x0) {
		defaultRm = (UnkFamily16A *)0x0;
		}
		else {
		 Get NodeRelated2Abstract field defaultRm = (UnkFamily16A *)node->field1_0x18;
		}
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(&ctx2->nodes,Character);
		if (ctx3 == (InstanceContext *)0x0) {
		ctx2 = (InstanceContext *)0x0;
		}
		else {
		ctx2 = (InstanceContext *)InstanceDataList::GetNode(&ctx3->nodes,Character);
		}
		pWVar1 = WORLD->currentChunk;
		if (this_00 != (UnkFamily16A *)0x0) {
		pAVar2 = UnkFamily16Base::FindRecord(&this_00->parent,(this->str).value);
		if (pAVar2 != (AutoClass16 *)0x0) {
		ctx = AutoClass16::GetInstanceContextById(pAVar2,this->index);
		if ((ctx != (InstanceContext *)0x0) && (ctx != ctx1)) {
		nodeD = (InstanceNodeCrate *)InstanceDataList::GetNode(&ctx->nodes,Crate);
		if (nodeD != (InstanceNodeCrate *)0x0) {
		NodeRelated2Abstract::FUN_001ac940(&nodeD->field1_0x18->parent,0xf,(InstanceContextRefCounter *)0x0,false,false);
		}
		}
		}
		}
		this->flags = (param_1 & 0xf) << 2 | this->flags & 0xffffffc1 | 1;
		AutoClass52::FUN_000f6ab0(&this->unkStruct1,ctx1,0);
		TwinString::Copy(&this->str,(pWVar1->chunkName).value);
		this->index = (defaultRm->parent).index;
		if (nodeC == (InstanceNodeCharacter *)0x0) {
		this->flags = this->flags & 0xfffffdbf | 0x180;
		}
		else {
		iVar3 = BlackboardAbstract::GetIntValue((nodeC->field1_0x18->parent).parent.blackboard,0);
		this->flags = this->flags ^ (iVar3 << 6 ^ this->flags) & 0x3c0;
		}
		 ctx2 is now InstanceNodeCharacter if (ctx2 == (InstanceContext *)0x0) {
		this->flags = this->flags & 0xffffdbff | 0x1800;
		return true;
		}
		iVar3 = BlackboardAbstract::GetIntValue((BlackboardAbstract *)(((ctx2->parent).transform)->matrix).m24,0);
		this->flags = this->flags ^ (iVar3 << 10 ^ this->flags) & 0x3c00;
		return true;
		}
		
	*/
	return false;
}

