#include "headers/Known/LevelStructure/Sections/RM/NodeSections/RM/SectionRM.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Unknown/IndexToIdList.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderRM.h"
#include "headers/SortLater/CollisionData.h"
#include "headers/Known/GameData/Sfx/Sfx.h"
#include "headers/SortLater/AutoClass16.h"
void SectionRM::FUN_001234b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRM::FUN_001234b0(SectionRM *this){
		ChunkData *extraout_ECX;
		int index;
		index = 0;
		do {
		if ((&DAT_00402cf0)[index] != 0) {
		ChunkData::FUN_00123380((ChunkData *)this,(char)index);
		this = (SectionRM *)extraout_ECX;
		}
		index = index + 1;
		}
		 while (index < 0x10);
		return;
		}
		
	*/
	return;
}

void SectionRM::FUN_001b2460() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRM::FUN_001b2460(SectionRM *this){
		TwinString tmpStr;
		if ((*(byte *)&this->flags & 1) == 0) {
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::Copy(&tmpStr,(this->levelName).value);
		TwinString::Append(&tmpStr,".tri");
		FUN_001e76d0(this->collisionData,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		}
		return;
		}
		
	*/
	return;
}

void SectionRM::FUN_001b2580() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRM::FUN_001b2580(SectionRM *this){
		TwinString fname;
		MemoryStream stream;
		MemoryStream::Contruct2(&stream,0xf00000,0,0x40);
		fname.value = (char *)0x0;
		fname.strLength = 0;
		fname.strSize = 0;
		TwinString::Copy(&fname,(this->levelName).value);
		TwinString::Append(&fname,RMX_EXT_STR);
		COMPRESS_OGI_HEADER = true;
		SectionAbstract::Write(&this->parent,&stream);
		MemoryStream::FUN_0020fde0(&stream,fname.value);
		TwinString::Dispose(&fname);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionRM::LoadPackedLevel() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRM::LoadPackedLevel(SectionRM *this){
		TwinString levelName;
		levelName.value = (char *)0x0;
		levelName.strLength = 0;
		levelName.strSize = 0;
		TwinString::Copy(&levelName,(this->levelName).value);
		TwinString::Append(&levelName,RMX_EXT_STR);
		COMPRESS_OGI_HEADER = true;
		SectionAbstract::AddToReader(&this->parent,levelName.value,false);
		TwinString::Dispose(&levelName);
		return;
		}
		
	*/
	return;
}

void SectionRM::LoadDefaultDclPtl() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRM::LoadDefaultDclPtl(SectionRM *this){
		int iVar1;
		ChunkData *pCVar2;
		TwinString particlesStr;
		FileStream dclFile;
		TwinString local_c;
		particlesStr.value = (char *)0x0;
		particlesStr.strLength = 0;
		particlesStr.strSize = 0;
		if ((*(byte *)&this->flags & 1) != 0) {
		FUN_001234b0(this);
		TwinString::Copy(&particlesStr,(this->levelName).value);
		TwinString::AppendInt(&local_c,0);
		TwinString::Append(&particlesStr,local_c.value);
		TwinString::Dispose(&local_c);
		TwinString::Append(&particlesStr,".ptl");
		LoadParticles(particlesStr.value,'\0',(void *)0x0);
		FileStream::Construct(&dclFile);
		FileStream::OpenFile(&dclFile,"Startup\\Default.dcl",1);
		iVar1 = FileStream::IsInvalid(&dclFile);
		if (iVar1 == 0) {
		Decals::LoadDclFile(&ENV_CLASS_175_DECAL,&dclFile);
		}
		FileStream::Dispose(&dclFile);
		TwinString::Dispose(&particlesStr);
		return;
		}
		TwinString::Copy(&particlesStr,(this->levelName).value);
		TwinString::Append(&particlesStr,".ptl");
		pCVar2 = (ChunkData *)this->field10_0x168->chunkData;
		if (pCVar2 != (ChunkData *)0x0) {
		pCVar2 = (ChunkData *)pCVar2->chunkRef;
		}
		LoadParticles(particlesStr.value,'\x01',pCVar2);
		TwinString::Dispose(&particlesStr);
		return;
		}
		
	*/
	return;
}

void SectionRM::Construct(char* fname, GameResources* gameResources, IndexToIdList* memptr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionRM * __thiscall SectionRM::Construct(SectionRM *this,char *fname,GameResources *gameResources,IndexToIdList *memptr){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RM;
		TwinString::Set(&this->levelName,fname);
		this->gameResources = gameResources;
		this->indexToIdList = memptr;
		this->collisionData = (CollisionData *)0x0;
		SectionGraphics::Construct(&this->graphicsSection);
		SectionCode::Construct(&this->codeSection,gameResources,memptr);
		this->field10_0x168 = (AutoClass16 *)0x0;
		this->flags = 0;
		this->flags = 3;
		this->instanceSectionResources[0] = (InstanceSectionResources *)0x0;
		this->instanceSection[0] = (SectionInstance *)0x0;
		this->instanceSectionResources[1] = (InstanceSectionResources *)0x0;
		this->instanceSection[1] = (SectionInstance *)0x0;
		this->instanceSectionResources[2] = (InstanceSectionResources *)0x0;
		this->instanceSection[2] = (SectionInstance *)0x0;
		this->instanceSectionResources[3] = (InstanceSectionResources *)0x0;
		this->instanceSection[3] = (SectionInstance *)0x0;
		this->instanceSectionResources[4] = (InstanceSectionResources *)0x0;
		this->instanceSection[4] = (SectionInstance *)0x0;
		this->instanceSectionResources[5] = (InstanceSectionResources *)0x0;
		this->instanceSection[5] = (SectionInstance *)0x0;
		this->instanceSectionResources[6] = (InstanceSectionResources *)0x0;
		this->instanceSection[6] = (SectionInstance *)0x0;
		this->instanceSectionResources[7] = (InstanceSectionResources *)0x0;
		this->instanceSection[7] = (SectionInstance *)0x0;
		return this;
		}
		
	*/
	return;
}

void SectionRM::FUN_001b4650(Sfx* param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::FUN_001b4650(SectionRM *this,Sfx *param_1,char param_2){
		GameReaderStorage *this_00;
		SectionReaderUnknownN *reader;
		FileResourceDescG *pFVar1;
		TwinString local_c;
		local_c.value = (char *)0x0;
		local_c.strLength = 0;
		local_c.strSize = 0;
		FUN_001b2320((int)this,param_1,&local_c);
		this_00 = GAME_READER_STORAGE[0];
		COMPRESS_OGI_HEADER = false;
		switch(param_1) {
		case (Sfx *)0x8:LoadDefaultDclPtl(this);
		TwinString::Dispose(&local_c);
		return;
		case (Sfx *)0x9:FUN_001b2460(this);
		TwinString::Dispose(&local_c);
		return;
		case (Sfx *)0xa:case (Sfx *)0xb:goto switchD_001b4683_caseD_a;
		default:reader = (SectionReaderUnknownN *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderUnknownN *)0x0) {
		reader = (SectionReaderUnknownN *)0x0;
		}
		else {
		reader->section = this;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_N;
		reader->field1_0x4 = param_1;
		}
		pFVar1 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar1 == (FileResourceDescG *)0x0) {
		pFVar1 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar1 = FileResourceDescG::Construct(pFVar1,local_c.value,&reader->parent,0x1c);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar1->parent,0);
		if (param_2 != '\0') {
		GameReaderStorage::ReadStuff();
		}
		switchD_001b4683_caseD_a:TwinString::Dispose(&local_c);
		return;
		}
		}
		
	*/
	return;
}

void SectionRM::LoadUnpackedLevel(int num, char param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::LoadUnpackedLevel(SectionRM *this,int num,char param_2,byte param_3){
		GameReaderStorage *this_00;
		SectionReaderUnknownO *puVar1;
		FileResourceDescB *pFVar1;
		FileResourceDescB *pPVar3;
		SectionReaderUnknownL *reader;
		FileResourceDescB *unkClass;
		PhysicalPool *this_01;
		Sfx *pSVar2;
		TwinString tmpStr1;
		this_00 = GAME_READER_STORAGE[0];
		if (param_2 == '\0') {
		puVar1 = (SectionReaderUnknownO *)VirtualPool::AllocateMemory(8);
		if (puVar1 == (SectionReaderUnknownO *)0x0) {
		puVar1 = (SectionReaderUnknownO *)0x0;
		}
		else {
		(puVar1->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_O;
		puVar1->section = this;
		}
		pFVar1 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar1 == (FileResourceDescB *)0x0) {
		pPVar3 = (FileResourceDescB *)0x0;
		}
		else {
		pPVar3 = FileResourceDescB::Construct(pFVar1,&puVar1->parent,0,0);
		}
		this->flags = this->flags ^ ((uint)param_3 << 3 ^ this->flags) & 8;
		DAT_004964c8 = param_3;
		GameReaderStorage::AddFileDesc(this_00,&pPVar3->parent,0);
		tmpStr1.value = (char *)0x0;
		tmpStr1.strLength = 0;
		tmpStr1.strSize = 0;
		TwinString::Copy(&tmpStr1,(this->levelName).value);
		TwinString::Append(&tmpStr1,".tri");
		COMPRESS_OGI_HEADER = false;
		FUN_001b2460(this);
		TwinString::Dispose(&tmpStr1);
		tmpStr1.value = (char *)0x0;
		tmpStr1.strLength = 0;
		tmpStr1.strSize = 0;
		TwinString::Copy(&tmpStr1,(this->levelName).value);
		TwinString::Append(&tmpStr1,".ptl");
		COMPRESS_OGI_HEADER = false;
		LoadDefaultDclPtl(this);
		TwinString::Dispose(&tmpStr1);
		pSVar2 = (Sfx *)0x0;
		do {
		FUN_001b4650(this,pSVar2,(char)num);
		pSVar2 = (Sfx *)((int)&pSVar2->flags + 1);
		}
		 while (pSVar2 < (Sfx *)&Eight);
		reader = (SectionReaderUnknownL *)VirtualPool::AllocateMemory(8);
		if (reader == (SectionReaderUnknownL *)0x0) {
		reader = (SectionReaderUnknownL *)0x0;
		}
		else {
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_L;
		reader->section = this;
		}
		pFVar1 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar1 == (FileResourceDescB *)0x0) {
		unkClass = (FileResourceDescB *)0x0;
		}
		else {
		unkClass = FileResourceDescB::Construct(pFVar1,&reader->parent,0,0);
		}
		GameReaderStorage::AddFileDesc(this_00,&unkClass->parent,0);
		if (param_3 != 0) {
		GameReaderStorage::ReadStuff();
		DAT_004964c8 = 0;
		FUN_001b2580(this);
		(*((this->parent).vtable)->DisposeResources)(&this->parent);
		this_01 = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(this_01);
		}
		}
		else {
		LoadPackedLevel(this);
		}
		if ((char)num != '\0') {
		GameReaderStorage::ReadStuff();
		}
		return;
		}
		
	*/
	return;
}

void SectionRM::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRM::CleanUp(SectionRM *this){
		InstanceSectionResources *ptr;
		SectionInstance *this_00;
		int iVar1;
		InstanceSectionResources **ppIVar2;
		ppIVar2 = this->instanceSectionResources;
		iVar1 = 8;
		do {
		if (*ppIVar2 != (InstanceSectionResources *)0x0) {
		FUN_001b7ca0((int)*ppIVar2);
		}
		ptr = *ppIVar2;
		if (ptr != (InstanceSectionResources *)0x0) {
		FUN_001b7e90((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		this_00 = (SectionInstance *)ppIVar2[8];
		if (this_00 != (SectionInstance *)0x0) {
		(*((this_00->parent).vtable)->Dispose)((SectionAbstract *)this_00,1);
		}
		*ppIVar2 = (InstanceSectionResources *)0x0;
		ppIVar2[8] = (InstanceSectionResources *)0x0;
		ppIVar2 = ppIVar2 + 1;
		iVar1 = iVar1 + -1;
		}
		 while (iVar1 != 0);
		return;
		}
		
	*/
	return;
}

void SectionRM::CleanUp_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRM::CleanUp(SectionRM *this){
		CollisionData *ptr;
		ptr = this->collisionData;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RM;
		VirtualPool::FreeMemory(ptr);
		CleanUp(this);
		(this->codeSection).sectionVoJpn.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionVoIta.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionVoSpa.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionVoGer.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionVoFre.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionVoEng.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionSfx.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionUnk5.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionUnk4.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionUnk3.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionUnk2.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).sectionUnk1.parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->codeSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		SectionGraphics::CleanUp(&this->graphicsSection);
		TwinString::Dispose(&this->levelName);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionRM::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::UnkMethod3(SectionRM *this){
		(*((GameResourcesBase *)this->gameResources)->vtable->InitCodeModels)((GameResourcesBase *)this->gameResources,0);
		if ((*(byte *)&this->flags & 1) != 0) {
		FUN_00109550();
		this->flags = this->flags & 0xfffffffd;
		return;
		}
		SectionGraphics::CleanUpMe(&this->graphicsSection);
		this->flags = this->flags & 0xfffffffd;
		return;
		}
		
	*/
	return;
}

void SectionRM::ReadParticleData(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::ReadParticleData(SectionRM *this,MemoryStream *stream){
		ChunkDataRefCounter *pCVar1;
		uint index;
		ChunkData *chunk;
		TwinString particlesStr;
		TwinString tmpStr;
		particlesStr.value = (char *)0x0;
		particlesStr.strLength = 0;
		particlesStr.strSize = 0;
		if ((*(byte *)&this->flags & 1) != 0) {
		FUN_001234b0(this);
		index = 0;
		do {
		TwinString::Copy(&particlesStr,(this->levelName).value);
		TwinString::AppendInt(&tmpStr,index);
		TwinString::Append(&particlesStr,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		TwinString::Append(&particlesStr,".ptl");
		FUN_00126d20(index,stream);
		index = index + 1;
		}
		 while (index < 3);
		SetParticleStream(stream);
		ReadMainParticleSection('\0',(void *)0x0);
		Decals::FUN_00115820(&ENV_CLASS_175_DECAL,stream);
		Decals::LoadDclFile(&ENV_CLASS_175_DECAL,(FileStream *)stream);
		TwinString::Dispose(&particlesStr);
		return;
		}
		pCVar1 = this->field10_0x168->chunkData;
		if (pCVar1 == (ChunkDataRefCounter *)0x0) {
		chunk = (ChunkData *)0x0;
		}
		else {
		chunk = pCVar1->chunk;
		}
		TwinString::Copy(&particlesStr,(this->levelName).value);
		TwinString::Append(&particlesStr,".ptl");
		SetParticleStream(stream);
		ReadMainParticleSection('\x01',chunk);
		TwinString::Dispose(&particlesStr);
		return;
		}
		
	*/
	return;
}

void SectionRM::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionRM::DisposeResources(SectionRM *this){
		ChunkData *this_00;
		if (this->field10_0x168 != (AutoClass16 *)0x0) {
		this_00 = (ChunkData *)this->field10_0x168->chunkData;
		if (this_00 != (ChunkData *)0x0) {
		this_00 = (ChunkData *)this_00->chunkRef;
		}
		ChunkData::FUN_001407f0(this_00,true,true,0);
		}
		GameResources::DisposeCodeSection(this->gameResources);
		 WARNING: Could not recover jumptable at 0x001b4642. Too many branches  WARNING: Treating indirect jump as call (*((this->graphicsSection).parent.vtable)->DisposeResources)();
		return;
		}
		
	*/
	return;
}

void SectionRM::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionRM * __thiscall SectionRM::Dispose(SectionRM *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

uint SectionRM::FUN_001b89a0(byte param_1, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address uint __thiscall SectionRM::FUN_001b89a0(SectionRM *this,undefined param_1,MemoryStream *stream){
		ChunkDataRefCounter *pCVar1;
		SectionDataGameObjectBase *pSVar2;
		GameReaderStorage *this_00;
		bool bVar3;
		InstanceSectionResources *pIVar4;
		SectionReaderUnknownM *reader;
		FileResourceDescB *pFVar5;
		undefined *puVar6;
		uint uVar7;
		undefined3 in_stack_00000005;
		byte local_21c;
		UnkFamily27Wrapper auStack536;
		UnkFamily27A local_20c;
		puVar6 = _param_1 + -8;
		uVar7 = 1;
		switch(puVar6) {
		case (undefined *)0x1:break;
		default:UnkFamily27A::Construct(&local_20c);
		auStack536.ptr = &local_20c;
		auStack536.field2_0x8._1_1_ = 0;
		auStack536.field2_0x8._2_1_ = 0;
		UnkFamily27Wrapper::FUN_0020e930(&auStack536,(int)stream,(int *)0x0);
		if ((((_param_1 == (undefined *)0x0) || (_param_1 == (undefined *)0x1)) ||(_param_1 == (undefined *)0x2)) || (local_21c = 0, _param_1 == &DAT_00000007)) {
		local_21c = 1;
		}
		pSVar2 = (this->gameResources->parent).gameObjects;
		pIVar4 = (InstanceSectionResources *)VirtualPool::AllocateMemory(0x40);
		if (pIVar4 == (InstanceSectionResources *)0x0) {
		pIVar4 = (InstanceSectionResources *)0x0;
		}
		else {
		pIVar4 = InstanceSectionResources::Construct(pIVar4,*(byte *)&this->flags & 1,local_21c,(uint)this->gameResources,(uint)this->field10_0x168);
		}
		this->instanceSectionResources[(int)_param_1] = pIVar4;
		pSVar2->field4_0x10 = this->indexToIdList;
		bVar3 = InstanceSectionResources::FUN_001b8170(pIVar4,&auStack536);
		uVar7 = (uint)bVar3;
		pSVar2->field4_0x10 = 0;
		this_00 = GAME_READER_STORAGE[0];
		if (bVar3 != false) {
		reader = (SectionReaderUnknownM *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderUnknownM *)0x0) {
		reader = (SectionReaderUnknownM *)0x0;
		}
		else {
		reader->field2_0x8 = (undefined *)this;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_M;
		reader->field1_0x4 = _param_1;
		}
		pFVar5 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar5 == (FileResourceDescB *)0x0) {
		pFVar5 = (FileResourceDescB *)0x0;
		}
		else {
		pFVar5 = FileResourceDescB::Construct(pFVar5,&reader->parent,0,0);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar5->parent,0);
		}
		FUN_0020d1c0((int **)&auStack536);
		puVar6 = (undefined *)UnkFamily27A::Dispose(&local_20c);
		case (undefined *)0x0:case (undefined *)0x2:case (undefined *)0x3:return (uint)puVar6 & 0xffffff00 | uVar7;
		}
		pCVar1 = this->field10_0x168->chunkData;
		if (pCVar1 != (ChunkDataRefCounter *)0x0) {
		uVar7 = FUN_001e7010((uint)pCVar1->chunk->collisionData,(int *)stream);
		return uVar7 & 0xffffff00 | 1;
		}
		uVar7 = FUN_001e7010(_DAT_000001bc,(int *)stream);
		return uVar7 & 0xffffff00 | 1;
		}
		
	*/
	return 0;
}

void SectionRM::ReadRM(int sectionId, uint sectionOffset, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::ReadRM(SectionRM *this,int sectionId,int sectionOffset,MemoryStream *stream){
		InstanceSectionResources *instanceSectionResources;
		SectionInstance *instanceSectionPtr;
		SectionInstance *instanceSection;
		switch(sectionId) {
		case 8:ReadParticleData(this,stream);
		return;
		case 9:CollisionData::ReadCollisionData(this->collisionData,sectionOffset);
		return;
		case 10:SectionAbstract::AddToReadQueue(&(this->codeSection).parent,sectionOffset);
		return;
		case 0xb:SectionAbstract::AddToReadQueue(&(this->graphicsSection).parent,sectionOffset);
		return;
		}
		if ((((sectionId == 0) || (sectionId == 1)) || (sectionId == 2)) ||(sectionId._0_1_ = 0, sectionId == 7)) {
		sectionId._0_1_ = 1;
		}
		instanceSectionResources = (InstanceSectionResources *)VirtualPool::AllocateMemory(0x40);
		if (instanceSectionResources == (InstanceSectionResources *)0x0) {
		instanceSectionResources = (InstanceSectionResources *)0x0;
		}
		else {
		instanceSectionResources =InstanceSectionResources::Construct(instanceSectionResources,*(byte *)&this->flags & 1,(byte)sectionId,(uint)this->gameResources,(uint)this->field10_0x168);
		}
		instanceSectionPtr = (SectionInstance *)VirtualPool::AllocateMemory(0x98);
		if (instanceSectionPtr == (SectionInstance *)0x0) {
		instanceSection = (SectionInstance *)0x0;
		}
		else {
		instanceSection = SectionInstance::Construct(instanceSectionPtr,instanceSectionResources);
		}
		this->instanceSectionResources[sectionId] = instanceSectionResources;
		this->instanceSection[sectionId] = instanceSection;
		SectionAbstract::AddToReadQueue(&instanceSection->parent,sectionOffset);
		return;
		}
		
	*/
	return;
}

void SectionRM::Construct_16(AutoClass16* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionRM * __thiscall SectionRM::Construct(SectionRM *this,AutoClass16 *param_1){
		void *this_00;
		CollisionData *pCVar1;
		ChunkData *pCVar2;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RM;
		(this->levelName).value = (char *)0x0;
		(this->levelName).strLength = 0;
		(this->levelName).strSize = 0;
		TwinString::Copy(&this->levelName,(param_1->levelName).value);
		this->gameResources = (param_1->defaultRm->parent).gameResources;
		this->indexToIdList = param_1->indexToIdList;
		this->collisionData = (CollisionData *)0x0;
		SectionGraphics::Construct(&this->graphicsSection);
		SectionCode::Construct(&this->codeSection,this->gameResources,this->indexToIdList);
		this->field10_0x168 = param_1;
		if (param_1->chunkData == (ChunkDataRefCounter *)0x0) {
		pCVar2 = (ChunkData *)0x0;
		}
		else {
		pCVar2 = param_1->chunkData->chunk;
		}
		pCVar1 = pCVar2->collisionData;
		this->flags = 0;
		this->flags = 2;
		this_00 = VirtualPool::AllocateMemory(4);
		if (this_00 == (void *)0x0) {
		pCVar1 = (CollisionData *)0x0;
		}
		else {
		pCVar1 = (CollisionData *)FUN_001e76c0(this_00,pCVar1);
		}
		this->collisionData = pCVar1;
		this->instanceSectionResources[0] = (InstanceSectionResources *)0x0;
		this->instanceSection[0] = (SectionInstance *)0x0;
		this->instanceSectionResources[1] = (InstanceSectionResources *)0x0;
		this->instanceSection[1] = (SectionInstance *)0x0;
		this->instanceSectionResources[2] = (InstanceSectionResources *)0x0;
		this->instanceSection[2] = (SectionInstance *)0x0;
		this->instanceSectionResources[3] = (InstanceSectionResources *)0x0;
		this->instanceSection[3] = (SectionInstance *)0x0;
		this->instanceSectionResources[4] = (InstanceSectionResources *)0x0;
		this->instanceSection[4] = (SectionInstance *)0x0;
		this->instanceSectionResources[5] = (InstanceSectionResources *)0x0;
		this->instanceSection[5] = (SectionInstance *)0x0;
		this->instanceSectionResources[6] = (InstanceSectionResources *)0x0;
		this->instanceSection[6] = (SectionInstance *)0x0;
		this->instanceSectionResources[7] = (InstanceSectionResources *)0x0;
		this->instanceSection[7] = (SectionInstance *)0x0;
		return this;
		}
		
	*/
	return;
}

void SectionRM::Write(int index, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::Write(SectionRM *this,int index,MemoryStream *stream){
		ChunkData *pCVar1;
		switch(index) {
		case 8:break;
		case 9:if (this->field10_0x168 != (AutoClass16 *)0x0) {
		pCVar1 = (ChunkData *)this->field10_0x168->chunkData;
		if (pCVar1 != (ChunkData *)0x0) {
		pCVar1 = (ChunkData *)pCVar1->chunkRef;
		}
		if (*(CollisionData **)(&pCVar1->field_0x1b8 + 4) != (CollisionData *)0x0) {
		FUN_001e7280((int)*(CollisionData **)(&pCVar1->field_0x1b8 + 4),(int *)stream);
		return;
		}
		}
		break;
		case 10:SectionAbstract::Write(&(this->codeSection).parent,stream);
		return;
		case 0xb:SectionAbstract::Write(&(this->graphicsSection).parent,stream);
		return;
		default:if (this->instanceSection[index] != (SectionInstance *)0x0) {
		SectionAbstract::Write(&this->instanceSection[index]->parent,stream);
		}
		}
		return;
		}
		
	*/
	return;
}

int SectionRM::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionRM::GetElementCount(SectionRM *this){
		return 0xc;
		}
		
	*/
	return 0;
}

byte SectionRM::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionRM::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionRM::IsOne(int numb) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionRM::IsOne(int numb){
		return numb == 1;
		}
		
	*/
	return false;
}

SectionReaderRM* SectionRM::GetReader(uint param_1, uint* param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderRM * __thiscall SectionRM::GetReader(SectionRM *this,undefined4 param_1,undefined4 *param_2,int *param_3){
		int iVar1;
		undefined *puVar2;
		SectionReaderRM *puVar3;
		iVar1 = param_2[2];
		if (*param_3 == 0) {
		return (SectionReaderRM *)0x0;
		}
		puVar2 = (undefined *)*param_2;
		if (iVar1 == 9) {
		*param_3 = 0x14;
		}
		else if ((iVar1 == 10) || (iVar1 == 0xb)) {
		*param_3 = 0xc;
		}
		puVar3 = (SectionReaderRM *)VirtualPool::AllocateMemory(0x10);
		if (puVar3 != (SectionReaderRM *)0x0) {
		puVar3->unkPointer = puVar2;
		puVar3->sectionId = iVar1;
		puVar3->data = this;
		(puVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_RM;
		return puVar3;
		}
		return (SectionReaderRM *)0x0;
		}
		
	*/
	return null;
}

void SectionRM::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool SectionRM::Write_23(MemoryStream* stream, uint* param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionRM::Write(SectionRM *this,MemoryStream *stream,uint *param_2,int *param_3){
		int index;
		if (*param_2 < 0xc) {
		index = RM_READ_ORDER[*param_2];
		Write(this,index,stream);
		*param_3 = index;
		*param_2 = *param_2 + 1;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionRM::EmptyFunction_24() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionRM::EmptyFunction_25() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRM::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

