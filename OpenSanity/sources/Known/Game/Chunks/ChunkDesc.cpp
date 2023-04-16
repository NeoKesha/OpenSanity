#include "headers/Known/Game/Chunks/ChunkDesc.h"

#include "headers/Unknown/AutoClasses/AutoClass53.h"
#include "headers/Known/TwinString.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"

ChunkDesc::ChunkDesc() : chunkName(), unkString1(), unkString2()
{
	AutoClass53* puVar1;
	AutoClass53* puVar2;
	AutoClass53* puVar3;
	int i;
	uint* puVar4;
	puVar4 = this->uintArray;
	for (i = 0x10;
		i != 0;
		i = i + -1) {
		*puVar4 = 0;
		puVar4 = puVar4 + 1;
	}
	this->playerInstanceContexts[0] = (InstanceContextRefCounter*)0x0;
	this->playerInstanceContexts[1] = (InstanceContextRefCounter*)0x0;
	this->playerInstanceContexts[2] = (InstanceContextRefCounter*)0x0;
	this->playerInstanceContexts[3] = (InstanceContextRefCounter*)0x0;
	this->playerInstanceContexts[4] = (InstanceContextRefCounter*)0x0;
	this->playerInstanceContexts[5] = (InstanceContextRefCounter*)0x0;
	this->flags2 = 0;
	this->flags = 0;
	this->someTime = 0;
	this->ticks = 0;

	this->slot1 = new AutoClass53();
	this->slot2 = new AutoClass53();
	this->slot3 = new AutoClass53();
	InitPlayerContexts(0, null);
}
ChunkDesc::~ChunkDesc()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}
void ChunkDesc::ResetStrings() {
	chunkName.Set("");
	unkString1.Set("");
	unkString2.Set("");
	return;
}

bool ChunkDesc::ReloadLevel(UnkFamily16A* _default) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ChunkDesc::ReloadLevel(ChunkDesc *this,UnkFamily16A *default){
		World *world;
		world = WORLD;
		if ((this->chunkName).strLength == 0) {
		return false;
		}
		World::FreeLevel(WORLD,1,default);
		World::AddChunkByName(world,&this->chunkName,0);
		return true;
		}
		
	*/
	return false;
}

int ChunkDesc::CountSomething2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall ChunkDesc::CountSomething2(ChunkDesc *this){
		uint *puVar1;
		uint j;
		byte bVar2;
		uint uVar3;
		int iVar4;
		int i;
		uVar3 = 0;
		j = 0;
		do {
		iVar4 = 0;
		i = 4;
		puVar1 = this->uintArray + 1;
		do {
		bVar2 = (byte)(1 << ((byte)j & 0x1f));
		if ((*(byte *)(puVar1 + -1) & bVar2) != 0) {
		iVar4 = iVar4 + 1;
		}
		if ((*(byte *)puVar1 & bVar2) != 0) {
		iVar4 = iVar4 + 1;
		}
		if ((*(byte *)(puVar1 + 1) & bVar2) != 0) {
		iVar4 = iVar4 + 1;
		}
		if ((*(byte *)(puVar1 + 2) & bVar2) != 0) {
		iVar4 = iVar4 + 1;
		}
		puVar1 = puVar1 + 4;
		i = i + -1;
		}
		 while (i != 0);
		uVar3 = uVar3 + iVar4;
		j = j + 1;
		}
		 while (j < 6);
		return (uint)(byte)(&DAT_0039e084)[this->flags >> 0x15 & 0x1f] + uVar3 / 3;
		}
		
	*/
	return 0;
}

bool ChunkDesc::CheckReady(int index, bool flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unable to use type for symbol cVar1 bool __thiscall ChunkDesc::CheckReady(ChunkDesc *this,int index,bool flag){
		bool checkResult;
		char cVar2;
		WorldChunk *worldChunk;
		char cVar1;
		World *world;
		world = WORLD;
		worldChunk = World::GetChunkByName(WORLD,&this->chunkName);
		cVar1 = flag;
		if (index != 0) {
		if (index == 1) {
		checkResult = WorldChunk::CheckSomeNum(worldChunk,true);
		cVar1 = flag;
		if (checkResult != false) {
		return true;
		}
		}
		else {
		if (index != 2) {
		return true;
		}
		checkResult = WorldChunk::CheckSomeNum(worldChunk,true);
		cVar1 = flag;
		if (checkResult != false) {
		if ((*(byte *)((int)&world->flags + 3) & 0xf) == 0) {
		return true;
		}
		checkResult = WorldChunk::CheckSomeNum2(worldChunk,true);
		cVar1 = flag;
		if (checkResult != false) {
		return true;
		}
		}
		}
		}
		while( true ) {
		if (cVar1 != '\0') {
		World::ProcessAndRead(world,1,&flag);
		}
		if (index == 0) {
		cVar2 = '\x01' - ((((uint)world->flags >> 0xc ^ world->flags) & 0xfff) != 0);
		}
		else if (index == 1) {
		cVar2 = WorldChunk::CheckSomeNum(worldChunk,true);
		}
		else if (index == 2) {
		checkResult = WorldChunk::CheckSomeNum(worldChunk,true);
		if ((checkResult == false) ||(((*(byte *)((int)&world->flags + 3) & 0xf) != 0 &&(checkResult = WorldChunk::CheckSomeNum2(worldChunk,true), checkResult == false)))) {
		cVar2 = '\0';
		}
		else {
		cVar2 = '\x01';
		}
		}
		else {
		cVar2 = '\x01';
		}
		if (cVar1 == '\0') break;
		if (cVar2 != '\0') {
		return true;
		}
		}
		if (cVar2 != '\0') {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

int ChunkDesc::CountSomething1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall ChunkDesc::CountSomething1(ChunkDesc *this){
		int cnt;
		uint *ppuVar1;
		int i;
		cnt = 0;
		ppuVar1 = this->uintArray + 1;
		i = 4;
		do {
		 If 8th bit set (256) if ((ppuVar1[-1] >> 8 & 1) != 0) {
		cnt = cnt + 1;
		}
		if ((*ppuVar1 >> 8 & 1) != 0) {
		cnt = cnt + 1;
		}
		if ((ppuVar1[1] >> 8 & 1) != 0) {
		cnt = cnt + 1;
		}
		if ((ppuVar1[2] >> 8 & 1) != 0) {
		cnt = cnt + 1;
		}
		ppuVar1 = ppuVar1 + 4;
		i = i + -1;
		}
		 while (i != 0);
		return cnt;
		}
		
	*/
	return 0;
}

AutoClass53* ChunkDesc::InitPlayerContexts(int type, UnkFamily16A* defaultRm) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass53 * __thiscall ChunkDesc::InitPlayerContexts(ChunkDesc *this,int type,UnkFamily16A *defaultRm){
		char cVar1;
		bool bVar2;
		InstanceNodeInstance *nodeInstance;
		uint characterIndex;
		InstanceContext *ctx2;
		int i;
		AutoClass53 *result;
		InstanceContextRefCounter **playerContexts;
		uint *puVar3;
		Clock *clock;
		InstanceContext *ctx1;
		result = (AutoClass53 *)0x0;
		this->unkField10 = 0;
		this->someDTime = 0;
		this->flags = this->flags & 0xfffffff0;
		this->flags2 = this->flags2 & 0xfff03fff;
		playerContexts = this->playerInstanceContexts;
		i = 6;
		do {
		if (((*playerContexts != (InstanceContextRefCounter *)0x0) &&(ctx1 = (*playerContexts)->ctx, ctx1 != (InstanceContext *)0x0)) &&(nodeInstance = (InstanceNodeInstance *)InstanceDataList::GetNode(&ctx1->nodes,Instance),nodeInstance != (InstanceNodeInstance *)0x0)) {
		InstanceNodeInstance::Dispose(nodeInstance);
		}
		playerContexts = playerContexts + 1;
		i = i + -1;
		}
		 while (i != 0);
		switch(type) {
		case 0:case 1:this->flags2 = this->flags2 & 0xffffc280 | 0x280;
		this->flags = this->flags & 0x8000661f | 0x6610;
		clock = GlobalClock;
		this->ticks = (int)(TicksPerTime * FLOAT_00386394);
		this->someTime = clock->timeArray[2].time1;
		if (type == 1) {
		cVar1 = AutoClass53::thunk_FUN_000b9fe0(this->slot2,1,this,defaultRm);
		LAB_000bad27:if (cVar1 != '\0') {
		result = this->slot2;
		}
		}
		else {
		if (defaultRm != (UnkFamily16A *)0x0) {
		characterIndex = this->flags >> 8 & 0xf;
		if (characterIndex == 6) {
		ctx1 = (InstanceContext *)0x0;
		}
		else if (this->playerInstanceContexts[characterIndex] == (InstanceContextRefCounter *)0x0) {
		ctx1 = (InstanceContext *)0x0;
		}
		else {
		ctx1 = this->playerInstanceContexts[characterIndex]->ctx;
		}
		characterIndex = this->flags >> 0xc & 0xf;
		if (characterIndex == 6) {
		ctx2 = (InstanceContext *)0x0;
		}
		else if (this->playerInstanceContexts[characterIndex] == (InstanceContextRefCounter *)0x0) {
		ctx2 = (InstanceContext *)0x0;
		}
		else {
		ctx2 = this->playerInstanceContexts[characterIndex]->ctx;
		}
		cVar1 = AutoClass53::thunk_FUN_000b58f0(this->slot2,1,defaultRm,ctx1,ctx1,ctx2);
		goto LAB_000bad27;
		}
		AutoClass53::thunk_FUN_000ae330(this->slot2,type,this,(UnkFamily16A *)0x0);
		}
		AutoClass53::thunk_FUN_000ae330(this->slot1,type,this,defaultRm);
		AutoClass53::thunk_FUN_000ae330(this->slot3,type,this,defaultRm);
		puVar3 = this->uintArray;
		for (i = 0x10;
		 i != 0;
		 i = i + -1) {
		*puVar3 = 0;
		puVar3 = puVar3 + 1;
		}
		break;
		case 2:this->flags2 = this->flags2 & 0xffffff80;
		bVar2 = AutoClass53::thunk_FUN_000b9fe0(this->slot3,2,this,defaultRm);
		i = 2;
		if (bVar2 == false) {
		LAB_000badd1:bVar2 = AutoClass53::thunk_FUN_000b9fe0(this->slot2,i,this,defaultRm);
		if (bVar2 == false) {
		return (AutoClass53 *)0x0;
		}
		result = this->slot2;
		}
		else {
		result = this->slot3;
		AutoClass53::thunk_FUN_000ae330(this->slot1,2,this,defaultRm);
		}
		break;
		case 3:bVar2 = AutoClass53::thunk_FUN_000b9fe0(this->slot1,3,this,defaultRm);
		if (bVar2 == false) {
		bVar2 = AutoClass53::thunk_FUN_000b9fe0(this->slot3,3,this,defaultRm);
		if (bVar2 == false) {
		i = 3;
		goto LAB_000badd1;
		}
		result = this->slot3;
		}
		else {
		result = this->slot1;
		}
		break;
		default:goto switchD_000bac57_caseD_4;
		}
		if (result != (AutoClass53 *)0x0) {
		characterIndex = this->flags ^ (result->flags << 2 ^ this->flags) & 0xf0;
		this->flags = characterIndex;
		characterIndex = (result->flags << 2 ^ characterIndex) & 0xf00 ^ characterIndex;
		this->flags = characterIndex;
		this->flags = (result->flags << 2 ^ characterIndex) & 0xf000 ^ characterIndex;
		return result;
		}
		switchD_000bac57_caseD_4:return (AutoClass53 *)0x0;
		}
		
	*/
	return null;
}

void ChunkDesc::FUN_0007c020(int param_1, InstanceContext* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkDesc::FUN_0007c020(ChunkDesc *this,int param_1,InstanceContext *param_2){
		InstanceContextRefCounter **this_00;
		InstanceContext *pIVar1;
		this_00 = this->playerInstanceContexts + param_1;
		pIVar1 = (InstanceContext *)*this_00;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = (InstanceContext *)(pIVar1->parent).vtable;
		}
		if (pIVar1 != param_2) {
		InstanceContextSmartPtr::Release(this_00);
		if (param_2 == (InstanceContext *)0x0) {
		*this_00 = (InstanceContextRefCounter *)0x0;
		return;
		}
		pIVar1 = (InstanceContext *)InstanceContextSmartPtr::CreateRef(&param_2->smartPtr,param_2,0);
		*this_00 = (InstanceContextRefCounter *)pIVar1;
		}
		return;
		}
		
	*/
	return;
}

int* ChunkDesc::FUN_000bb7c0(int param_1, TwinString* str, short* param_3, ChunkDesc* param_4, UnkFamily16A* defaultRm) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall ChunkDesc::FUN_000bb7c0(ChunkDesc *this,int param_1,TwinString *str,short *param_3,ChunkDesc *param_4,UnkFamily16A *defaultRm){
		bool bVar1;
		uint uVar2;
		AutoClass16 *this_00;
		AutoClass53 *this_01;
		uint uVar3;
		uint uVar4;
		InstanceContext *ctx1;
		InstanceContext *ctx3;
		InstanceContext *ctx2;
		if (param_1 == 2) {
		uVar3 = this->flags;
		uVar2 = uVar3 >> 8 & 0xf;
		uVar4 = uVar3 >> 4 & 0xf;
		if (uVar2 == 6) {
		ctx2 = (InstanceContext *)0x0;
		}
		else {
		ctx2 = (InstanceContext *)this->playerInstanceContexts[uVar2];
		if (ctx2 != (InstanceContext *)0x0) {
		ctx2 = (InstanceContext *)(ctx2->parent).vtable;
		}
		}
		uVar3 = uVar3 >> 0xc & 0xf;
		ctx1 = (InstanceContext *)0x0;
		if (uVar3 == 6) {
		ctx3 = (InstanceContext *)0x0;
		}
		else if (this->playerInstanceContexts[uVar3] == (InstanceContextRefCounter *)0x0) {
		ctx3 = (InstanceContext *)0x0;
		}
		else {
		ctx3 = this->playerInstanceContexts[uVar3]->ctx;
		}
		this_00 = UnkFamily16Base::FindRecord(&defaultRm->parent,str->value);
		if (this_00 != (AutoClass16 *)0x0) {
		ctx1 = AutoClass16::GetInstanceContextById(this_00,*param_3);
		}
		AutoClass53::thunk_FUN_000ae330(this->slot2,0,this,defaultRm);
		AutoClass53::thunk_FUN_000ae330(this->slot3,0,this,defaultRm);
		AutoClass53::thunk_FUN_000ae330(this->slot1,0,this,defaultRm);
		AutoClass53::thunk_FUN_000b58f0(this->slot2,uVar4,defaultRm,ctx2,ctx2,ctx3);
		if ((ctx1 == (InstanceContext *)0x0) ||(bVar1 = AutoClass53::thunk_FUN_000b58f0(this->slot3,uVar4,defaultRm,ctx1,ctx2,ctx3),bVar1 == false)) {
		this_01 = this->slot2;
		}
		else {
		this_01 = this->slot3;
		}
		}
		else {
		this_01 = InitPlayerContexts(this,param_1,defaultRm);
		}
		if (this_01 != (AutoClass53 *)0x0) {
		AutoClass53::thunk_FUN_000b9fe0(this_01,param_1,param_4,defaultRm);
		return (int *)this_01;
		}
		return (int *)0x0;
		}
		
	*/
	return null;
}

uint ChunkDesc::BossModeDamage(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ChunkDesc::BossModeDamage(ChunkDesc *this,int param_1){
		int iVar1;
		uint uVar2;
		uVar2 = this->flags2;
		iVar1 = (uVar2 >> 0x11 & 7) + param_1;
		if (iVar1 < 0) {
		this->flags2 = uVar2 & 0xfff1ffff;
		return CONCAT31((int3)((uint)iVar1 >> 8),1);
		}
		if ((int)(uVar2 >> 0xe & 7) <= iVar1) {
		uVar2 = (uVar2 * 8 ^ uVar2) & 0xe0000 ^ uVar2;
		this->flags2 = uVar2;
		return CONCAT31((int3)(uVar2 >> 8),1);
		}
		uVar2 = (iVar1 * 0x20000 ^ uVar2) & 0xe0000 ^ uVar2;
		this->flags2 = uVar2;
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint ChunkDesc::WhackawormProgress(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ChunkDesc::WhackawormProgress(ChunkDesc *this,int param_1){
		uint uVar1;
		int iVar2;
		uVar1 = this->flags2;
		iVar2 = (uVar1 >> 0x1a) + param_1;
		if (iVar2 < 0) {
		this->flags2 = uVar1 & 0x3ffffff;
		return CONCAT31((int3)((uVar1 & 0x3ffffff) >> 8),1);
		}
		if ((int)(uVar1 >> 0x14 & 0x3f) <= iVar2) {
		this->flags2 = (uVar1 << 6 ^ uVar1) & 0x3ffffff ^ uVar1 << 6;
		return CONCAT31((int3)((uVar1 << 6) >> 8),1);
		}
		this->flags2 = uVar1 & 0x3ffffff | iVar2 * 0x4000000;
		return uVar1 & 0x3ffff00 | iVar2 * 0x4000000;
		}
		
	*/
	return 0;
}

