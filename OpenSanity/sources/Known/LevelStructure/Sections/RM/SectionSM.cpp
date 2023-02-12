#include "headers/Known/LevelStructure/Sections/RM/SectionSM.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Game/World/LevelHolderSM.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionSM::GetFnameByIndex(int index, TwinString* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSM::GetFnameByIndex(SectionSM *this,int index,TwinString *fname){
		TwinString::Copy(fname,(this->chunkName).value);
		switch(index) {
		case 0:TwinString::Append(fname,".sn");
		return;
		case 2:TwinString::Append(fname,".lvl");
		return;
		case 3:TwinString::Append(fname,".lgt");
		return;
		case 4:TwinString::Append(fname,".sca");
		return;
		case 5:TwinString::Append(fname,".lk");
		}
		return;
		}
		
	*/
	return;
}

void SectionSM::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionSM::Read(SectionSM *this){
		TwinString name;
		name.value = (char *)0x0;
		name.strLength = 0;
		name.strSize = 0;
		TwinString::Copy(&name,(this->chunkName).value);
		TwinString::Append(&name,SMX_EXT_STR);
		SectionAbstract::AddToReader(&this->parent,name.value,false);
		TwinString::Dispose(&name);
		return;
		}
		
	*/
	return;
}

void SectionSM::ReadSubSections(int index, bool read) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSM::ReadSubSections(SectionSM *this,int index,bool read){
		SectionReaderUnknownR *reader;
		FileResourceDescB *memptr;
		SectionReaderUnknownR *pSVar1;
		FileResourceDescG *memptr2;
		FileResourceDescAbstract *desc;
		uint uVar1;
		int index_00;
		TwinString fname;
		GameReaderStorage *readerStorage;
		readerStorage = GAME_READER_STORAGE[0];
		fname.value = (char *)0x0;
		fname.strLength = 0;
		fname.strSize = 0;
		switch(index) {
		case 0:GetFnameByIndex(this,0,&fname);
		uVar1 = 0xd;
		break;
		case 1:reader = (SectionReaderUnknownR *)VirtualPool::AllocateMemory(0x14);
		if (reader == (SectionReaderUnknownR *)0x0) {
		reader = (SectionReaderUnknownR *)0x0;
		}
		else {
		reader = SectionReaderUnknownR::Construct(reader,1,this);
		}
		memptr = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (memptr == (FileResourceDescB *)0x0) {
		desc = (FileResourceDescAbstract *)0x0;
		}
		else {
		desc = (FileResourceDescAbstract *)FileResourceDescB::Construct(memptr,&reader->parent,0,0);
		}
		goto LAB_00152b96;
		case 2:GetFnameByIndex(this,2,&fname);
		uVar1 = 5;
		break;
		case 3:GetFnameByIndex(this,3,&fname);
		uVar1 = 0xd;
		break;
		case 4:index_00 = 4;
		goto LAB_00152b3c;
		case 5:index_00 = 5;
		LAB_00152b3c:GetFnameByIndex(this,index_00,&fname);
		uVar1 = 0xc;
		break;
		case 6:SectionGraphics::ReadUnpacked1(&this->graphicsSection,(this->chunkName).value,false);
		SectionGraphics::ReadUnpacked2(&this->graphicsSection,(this->chunkName).value,false);
		default:goto switchD_00152a7e_caseD_7;
		}
		pSVar1 = (SectionReaderUnknownR *)VirtualPool::AllocateMemory(0x14);
		if (pSVar1 == (SectionReaderUnknownR *)0x0) {
		pSVar1 = (SectionReaderUnknownR *)0x0;
		}
		else {
		pSVar1->section = this;
		(pSVar1->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_R;
		pSVar1->index = index;
		pSVar1->field2_0x8 = -1;
		pSVar1->field3_0xc = 0;
		}
		memptr2 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (memptr2 == (FileResourceDescG *)0x0) {
		desc = (FileResourceDescAbstract *)0x0;
		}
		else {
		desc = (FileResourceDescAbstract *)FileResourceDescG::Construct(memptr2,fname.value,&pSVar1->parent,uVar1);
		}
		LAB_00152b96:GameReaderStorage::AddFileDesc(readerStorage,desc,0);
		switchD_00152a7e_caseD_7:if (read != false) {
		GameReaderStorage::ReadStuff();
		}
		TwinString::Dispose(&fname);
		return;
		}
		
	*/
	return;
}

void SectionSM::Write() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionSM::Write(SectionSM *this){
		PhysicalPool *pool;
		int *piVar1;
		uint length;
		bool bVar2;
		bool bVar3;
		int local_24;
		TwinString name;
		MemoryStream stream;
		bVar3 = false;
		bVar2 = false;
		piVar1 = &local_24;
		length = 0x700000;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,piVar1,length,bVar2,bVar3);
		piVar1 = &local_24;
		pool = PhysicalPool::GetPool();
		piVar1 = PhysicalPool::GetBufferPointerByIndex(pool,piVar1);
		MemoryStream::Construct(&stream,piVar1,0x700000,0,1);
		name.value = (char *)0x0;
		name.strLength = 0;
		name.strSize = 0;
		TwinString::Copy(&name,(this->chunkName).value);
		TwinString::Append(&name,SMX_EXT_STR);
		SectionAbstract::Write(&this->parent,&stream);
		MemoryStream::FUN_0020fde0(&stream,name.value);
		piVar1 = &local_24;
		pool = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pool,piVar1);
		pool = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(pool);
		TwinString::Dispose(&name);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionSM::FUN_00154ae0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionSM::FUN_00154ae0(SectionSM *this){
		ChunkDataRefCounter *pCVar1;
		ChunkList *chunkList;
		ChunkData *pCVar2;
		pCVar1 = this->levelHolder->chunkDataRef;
		if (pCVar1 == (ChunkDataRefCounter *)0x0) {
		pCVar2 = (ChunkData *)0x0;
		}
		else {
		pCVar2 = pCVar1->chunk;
		}
		FUN_001383a0((int)pCVar2);
		chunkList = ChunkList::GetInstance();
		FUN_0013b270(chunkList,(int)pCVar2);
		SectionGraphics::CleanUpMe(&this->graphicsSection);
		this->flag = false;
		return;
		}
		
	*/
	return;
}

void SectionSM::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionSM * __thiscall SectionSM::Dispose(SectionSM *this,byte param_1){
		SectionGraphics::CleanUp(&this->graphicsSection);
		TwinString::Dispose(&this->chunkName);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionSM::Write_6(uint param_1, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSM::Write(SectionSM *this,undefined4 param_1,MemoryStream *stream){
		ChunkDataRefCounter *pCVar1;
		ChunkData *pCVar2;
		switch(param_1) {
		case 0:pCVar1 = this->levelHolder->chunkDataRef;
		if (pCVar1 == (ChunkDataRefCounter *)0x0) {
		FUN_0013baa0(0,stream);
		return;
		}
		FUN_0013baa0((int)pCVar1->chunk,stream);
		return;
		case 4:pCVar2 = (ChunkData *)this->levelHolder->chunkDataRef;
		if (pCVar2 != (ChunkData *)0x0) {
		pCVar2 = (ChunkData *)pCVar2->chunkRef;
		}
		if ((void *)(&pCVar2->field123_0x1e0)[1] != (void *)0x0) {
		FUN_0014bb50((int)(void *)(&pCVar2->field123_0x1e0)[1],(int *)stream);
		return;
		}
		break;
		case 5:FUN_00205fa0((int)(this->levelHolder->parent).worldChunk,stream);
		break;
		case 6:SectionAbstract::Write(&(this->graphicsSection).parent,stream);
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionSM::Construct(LevelHolderSM* levelHolder) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionSM * __thiscall SectionSM::Construct(SectionSM *this,LevelHolderSM *levelHolder){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_SM;
		(this->chunkName).value = (char *)0x0;
		(this->chunkName).strLength = 0;
		(this->chunkName).strSize = 0;
		this->flag = true;
		this->levelHolder = levelHolder;
		SectionGraphics::Construct(&this->graphicsSection);
		TwinString::Copy(&this->chunkName,(((this->levelHolder->parent).worldChunk)->chunkName).value);
		return this;
		}
		
	*/
	return;
}

void SectionSM::Read_8(bool read, bool unpacked, bool param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSM::Read(SectionSM *this,bool read,bool unpacked,bool param_3){
		SectionReaderUnknownS *reader;
		FileResourceDescB *pFVar1;
		SectionReaderUnknownQ *readerQ;
		PhysicalPool *pool;
		uint i;
		TwinString tmpStr;
		GameReaderStorage *readerStorage;
		readerStorage = GAME_READER_STORAGE[0];
		if (unpacked == false) {
		reader = (SectionReaderUnknownS *)VirtualPool::AllocateMemory(8);
		if (reader == (SectionReaderUnknownS *)0x0) {
		reader = (SectionReaderUnknownS *)0x0;
		}
		else {
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_S;
		reader->section = this;
		}
		pFVar1 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar1 == (FileResourceDescB *)0x0) {
		pFVar1 = (FileResourceDescB *)0x0;
		}
		else {
		pFVar1 = FileResourceDescB::Construct(pFVar1,&reader->parent,0,0);
		}
		GameReaderStorage::AddFileDesc(readerStorage,&pFVar1->parent,0);
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		SectionGraphics::ReadUnpacked1(&this->graphicsSection,(this->chunkName).value,false);
		SectionGraphics::ReadUnpacked2(&this->graphicsSection,(this->chunkName).value,false);
		if (read != false) {
		GameReaderStorage::ReadStuff();
		}
		TwinString::Dispose(&tmpStr);
		i = 0;
		do {
		ReadSubSections(this,i,read);
		i = i + 1;
		}
		 while (i < 6);
		readerQ = (SectionReaderUnknownQ *)VirtualPool::AllocateMemory(8);
		if (readerQ == (SectionReaderUnknownQ *)0x0) {
		readerQ = (SectionReaderUnknownQ *)0x0;
		}
		else {
		(readerQ->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_Q;
		readerQ->section = this;
		}
		pFVar1 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar1 == (FileResourceDescB *)0x0) {
		pFVar1 = (FileResourceDescB *)0x0;
		}
		else {
		pFVar1 = FileResourceDescB::Construct(pFVar1,&readerQ->parent,0,0);
		}
		GameReaderStorage::AddFileDesc(readerStorage,&pFVar1->parent,0);
		if (param_3 != false) {
		GameReaderStorage::ReadStuff();
		Write(this);
		(*((this->parent).vtable)->DisposeResources)(&this->parent);
		pool = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(pool);
		}
		}
		else {
		Read(this);
		}
		if (read != false) {
		GameReaderStorage::ReadStuff();
		}
		return;
		}
		
	*/
	return;
}

uint SectionSM::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 SectionSM::GetElementCount(void){
		return 7;
		}
		
	*/
	return 0;
}

uint SectionSM::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 SectionSM::GetNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionSM::IsA(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionSM::IsA(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

uint* SectionSM::GetReader(uint param_1, uint* param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall SectionSM::GetReader(SectionSM *this,undefined4 param_1,undefined4 *param_2,int *param_3){
		undefined *puVar1;
		undefined *puVar2;
		SectionReaderUnknownP *puVar3;
		puVar1 = (undefined *)param_2[2];
		if (*param_3 == 0) {
		return (undefined4 *)0x0;
		}
		puVar2 = (undefined *)*param_2;
		if (puVar1 == &PRIMITIVE_TYPE) {
		*param_3 = 0xc;
		}
		puVar3 = (SectionReaderUnknownP *)VirtualPool::AllocateMemory(0x10);
		if (puVar3 != (SectionReaderUnknownP *)0x0) {
		puVar3->field2_0x8 = puVar2;
		puVar3->field3_0xc = (undefined *)this;
		puVar3->field1_0x4 = puVar1;
		(puVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_P;
		return (undefined4 *)puVar3;
		}
		return (undefined4 *)0x0;
		}
		
	*/
	return null;
}

bool SectionSM::Write_13(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionSM::Write(SectionSM *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		uint uVar1;
		if (*indexOut1 < 7) {
		uVar1 = *(uint *)(&DAT_003a3434 + *indexOut1 * 4);
		Write(this,uVar1,stream);
		*indexOut2 = uVar1;
		*indexOut1 = *indexOut1 + 1;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionSM::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionSM::DisposeResources(SectionSM *this){
		ChunkDataRefCounter *pCVar1;
		ChunkData *pCVar2;
		pCVar1 = this->levelHolder->chunkDataRef;
		if ((pCVar1 != (ChunkDataRefCounter *)0x0) && (pCVar2 = pCVar1->chunk, pCVar2 != (ChunkData *)0x0)) {
		if ((undefined4 *)pCVar2->sceneryRoot != (undefined4 *)0x0) {
		 WARNING: Load size is inaccurate (***pCVar2->sceneryRoot)(1);
		}
		pCVar2->sceneryRoot = (void *)0x0;
		}
		(*((this->graphicsSection).parent.vtable)->DisposeResources)(&(this->graphicsSection).parent);
		return;
		}
		
	*/
	return;
}

