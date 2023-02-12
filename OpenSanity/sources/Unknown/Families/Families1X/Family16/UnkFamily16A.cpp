#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"

#include "headers/Unknown/Families/Families1X/Family15/UnkFamily15A.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Game/GameResourceManager/GameResourceManager.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/SortLater/AutoClass16.h"
#include "headers/Global.h"

UnkFamily16A::~UnkFamily16A() {

}

UnkFamily16A::UnkFamily16A() : UnkFamily16Base()
{
	Global* GLOBAL = Global::Get();
	this->field2046_0x814 = &this->unkStruct2;
	this->unkStruct2.cnt = 0x40;
	GLOBAL->UF17 = &this->unkStruct2;
	GLOBAL->RESOURCE_MANAGER = null;
}

UnkFamily16A::UnkFamily16A(GameResourceManager* resourceManager, byte isRB, byte isWB) : UnkFamily16Base(resourceManager->gameResources, isRB, isWB){
	Global* GLOBAL = Global::Get();
	this->field2046_0x814 = &this->unkStruct2;
	this->unkStruct2.cnt = 0x40;
	GLOBAL->UF17 = &this->unkStruct2;
	GLOBAL->RESOURCE_MANAGER = resourceManager;
}

void UnkFamily16A::LoadShadows(bool unpacked) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl UnkFamily16A::LoadShadows(bool unpacked){
		undefined **ppuVar1;
		TwinsanityRigidModel *pTVar2;
		TwinsanityRigidModel *rigidModel;
		int j;
		uint i;
		uint uVar3;
		undefined3 in_stack_00000005;
		SectionModel sectionModel;
		SectionMaterial sectionMaterial;
		TwinString TStack36;
		TwinString rmodelsFolder;
		TwinString shadowModelsFolder;
		SectionDataMaterial *materialSection;
		SectionDataModel *modelSection;
		if (unpacked == false) {
		i = 0;
		do {
		_unpacked = i;
		rigidModel = (TwinsanityRigidModel *)(*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Create)(&ENV_CLASS_178_SECTION_RMODELS2.parent,&unpacked,0);
		SHADOW_RIGID_MODELS[i] = rigidModel;
		i = i + 1;
		}
		 while (i < 8);
		}
		else {
		sectionMaterial.parent = (SectionAbstract_VTable *)&Section_VT_Material;
		sectionMaterial.data = &ENV_CLASS_187_SECTION_MATERIALS;
		sectionModel.parent = (SectionAbstract_VTable *)&Section_VT_Model;
		sectionModel.data = &ENV_CLASS_182_SECTION_MODELS;
		rmodelsFolder.value = (char *)0x0;
		rmodelsFolder.strLength = 0;
		rmodelsFolder.strSize = 0;
		TwinString::Copy(&rmodelsFolder,TwinString_004028f8.value);
		TStack36.value = (char *)0x0;
		TStack36.strLength = 0;
		TStack36.strSize = 0;
		TwinString::Copy(&TStack36,MODELS_XBOX_STR.value);
		SectionAbstract::AddToReader(&sectionMaterial.parent,"StartUp\\Shadows\\Materials\\Shadow.dir",false);
		SectionAbstract::AddToReader(&sectionModel.parent,"StartUp\\Shadows\\Models\\Shadow.dir",false);
		GameReaderStorage::ReadStuff();
		TwinString::Set(&shadowModelsFolder,"StartUp\\Shadows\\Models");
		TwinString::Copy(&TwinString_004028f8,shadowModelsFolder.value);
		TwinString::Dispose(&shadowModelsFolder);
		TwinString::Set(&shadowModelsFolder,"StartUp\\Shadows\\Models");
		TwinString::Copy(&MODELS_XBOX_STR,shadowModelsFolder.value);
		TwinString::Dispose(&shadowModelsFolder);
		j = 0;
		do {
		if ((&PTR_s_cylindershape_003a291c)[j] == (char *)0x0) {
		SHADOW_RIGID_MODELS[j] = (TwinsanityRigidModel *)0x0;
		}
		else {
		TwinString::Set(&shadowModelsFolder,(&PTR_s_cylindershape_003a291c)[j]);
		SectionDataModel::FUN_0011ddf0(&ENV_CLASS_182_SECTION_MODELS,&shadowModelsFolder,j + 0x67);
		TwinString::Append(&shadowModelsFolder,".geom");
		pTVar2 = (TwinsanityRigidModel *)SectionDataRigidModel2::FUN_0011dc60(&ENV_CLASS_178_SECTION_RMODELS2,&shadowModelsFolder,j);
		SHADOW_RIGID_MODELS[j] = pTVar2;
		TwinString::Dispose(&shadowModelsFolder);
		}
		j = j + 1;
		}
		 while ((uint)j < 8);
		TwinString::Copy(&TwinString_004028f8,rmodelsFolder.value);
		TwinString::Copy(&MODELS_XBOX_STR,TStack36.value);
		TwinString::Dispose(&TStack36);
		TwinString::Dispose(&rmodelsFolder);
		modelSection = sectionModel.data;
		ppuVar1 = &(sectionModel.data)->pool;
		sectionModel.parent = (SectionAbstract_VTable *)&Section_VT_Model;
		if ((int *)*ppuVar1 != (int *)0x0) {
		if (*(int *)*ppuVar1 != 0) {
		uVar3 = 0;
		do {
		(*((modelSection->parent).vtable)->Method5)(&modelSection->parent,(uint *)(*ppuVar1 + (uVar3 + 1) * 4));
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < *(uint *)*ppuVar1);
		}
		*ppuVar1 = (undefined *)0x0;
		}
		materialSection = sectionMaterial.data;
		ppuVar1 = &(sectionMaterial.data)->pool;
		sectionModel.parent = (SectionAbstract_VTable *)&Section_VT_Abstract;
		sectionMaterial.parent = (SectionAbstract_VTable *)&Section_VT_Material;
		if ((int *)*ppuVar1 != (int *)0x0) {
		uVar3 = 0;
		if (*(int *)*ppuVar1 != 0) {
		do {
		(*((materialSection->parent).vtable)->Method5)(&materialSection->parent,(uint *)(*ppuVar1 + (uVar3 + 1) * 4));
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < *(uint *)*ppuVar1);
		}
		*ppuVar1 = (undefined *)0x0;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

AutoClass16* UnkFamily16A::FUN_001b1e00(short param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass16 * __thiscall UnkFamily16A::FUN_001b1e00(UnkFamily16A *this,short param_1){
		AutoClass16 **array;
		uint i;
		uint cnt;
		i = 0;
		cnt = (this->parent).flags & 0xffff;
		if (cnt != 0) {
		array = (this->parent).recordArray;
		do {
		if ((*array)->strCnt == param_1) {
		return *array;
		}
		i = i + 1;
		array = array + 1;
		}
		 while (i < cnt);
		}
		return (AutoClass16 *)0x0;
		}
		
	*/
	return null;
}

void UnkFamily16A::FUN_001b1e80(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily16A::FUN_001b1e80(UnkFamily16A *this,int param_1,int param_2){
		this->intArray[param_1] = param_2;
		return;
		}
		
	*/
	return;
}

void UnkFamily16A::FUN_001b1ea0(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily16A::FUN_001b1ea0(UnkFamily16A *this,int param_1,int param_2){
		this->intArray[param_1] = this->intArray[param_1] + param_2;
		return;
		}
		
	*/
	return;
}

uint UnkFamily16A::FUN_001b1ee0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily16A::FUN_001b1ee0(UnkFamily16A *this,int param_1){
		return this->intArray[param_1];
		}
		
	*/
	return 0;
}

void UnkFamily16A::FUN_001b3100(int param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily16A::FUN_001b3100(UnkFamily16A *this,int param_1,char param_2){
		UnkFamily15A *pUVar1;
		int cnt;
		int *arr;
		int *arr2;
		int *piVar2;
		AutoClass16 **array;
		uint local_8;
		AutoClass16 *element;
		local_8 = 0;
		if (((this->parent).flags & 0xffffU) != 0) {
		array = (this->parent).recordArray;
		do {
		element = *array;
		pUVar1 = element->field8_0x20;
		if (pUVar1 != (UnkFamily15A *)0x0) {
		 Should be 8 cnt = (*(code *)((pUVar1->parent).vtable)->GetArrayLength)();
		arr = (int *)(*(code *)((pUVar1->parent).vtable)->GetArray1)();
		if (cnt != 0) {
		for (;
		 cnt != 0;
		 cnt = cnt + -1) {
		*arr = 0;
		arr = arr + 1;
		}
		}
		}
		if ((param_2 != '\0') && (pUVar1 = element->field7_0x1c, pUVar1 != (UnkFamily15A *)0x0)) {
		cnt = (*(code *)((pUVar1->parent).vtable)->GetArrayLength)();
		arr2 = (int *)(*(code *)((pUVar1->parent).vtable)->GetArray1)();
		if (cnt != 0) {
		for (;
		 cnt != 0;
		 cnt = cnt + -1) {
		*arr2 = 0;
		arr2 = arr2 + 1;
		}
		}
		}
		local_8 = local_8 + 1;
		array = array + 1;
		}
		 while (local_8 < ((this->parent).flags & 0xffffU));
		}
		piVar2 = this->intArray;
		for (cnt = 1000;
		 cnt != 0;
		 cnt = cnt + -1) {
		*piVar2 = 0;
		piVar2 = piVar2 + 1;
		}
		return;
		}
		
	*/
	return;
}

int UnkFamily16A::FUN_001b3ac0(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily16A::FUN_001b3ac0(UnkFamily16A *this,InstanceContext *param_1){
		ChunkData *pCVar1;
		AutoClass16 **ppAVar2;
		uint uVar3;
		uint uVar4;
		uVar3 = 0;
		uVar4 = (this->parent).flags & 0xffff;
		if (uVar4 != 0) {
		ppAVar2 = (this->parent).recordArray;
		do {
		pCVar1 = (ChunkData *)(*ppAVar2)->chunkData;
		if (pCVar1 != (ChunkData *)0x0) {
		pCVar1 = (ChunkData *)pCVar1->chunkRef;
		}
		if ((param_1->parent).chunkData == pCVar1) {
		return (int)*ppAVar2;
		}
		uVar3 = uVar3 + 1;
		ppAVar2 = ppAVar2 + 1;
		}
		 while (uVar3 < uVar4);
		}
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily16A::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily16A::Write(UnkFamily16A *this,MemoryStream *stream){
		AutoClass16 *this_00;
		AutoClass16 **ppAVar1;
		MemoryStream *cnt;
		bool value;
		MemoryStream *_stream;
		_stream = stream;
		cnt = (MemoryStream *)((this->parent).flags & 0xffff);
		(*stream->vtable->WriteInt3)(stream,(uint)cnt);
		if (cnt != (MemoryStream *)0x0) {
		ppAVar1 = (this->parent).recordArray;
		stream = cnt;
		do {
		this_00 = *ppAVar1;
		TwinString::Write(&this_00->levelName,_stream);
		value = this_00->field7_0x1c != (UnkFamily15A *)0x0;
		(*_stream->vtable->WriteByte)(_stream,value);
		if (value) {
		(*(code *)((this_00->field7_0x1c->parent).vtable)->UnkMethod7)(_stream);
		}
		ppAVar1 = ppAVar1 + 1;
		stream = (MemoryStream *)((int)&stream[-1].length + 3);
		}
		 while (stream != (MemoryStream *)0x0);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily16A::LoadDefault(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily16A::LoadDefault(UnkFamily16A *this,char *fname){
		IndexToIdList *puVar1;
		SectionRM *rmSection;
		int i;
		int *piVar1;
		GameResourcesBase *gameResources;
		piVar1 = this->intArray;
		for (i = 1000;
		 i != 0;
		 i = i + -1) {
		*piVar1 = 0;
		piVar1 = piVar1 + 1;
		}
		puVar1 = (IndexToIdList *)VirtualPool::AllocateMemory(0x404);
		if (puVar1 == (IndexToIdList *)0x0) {
		puVar1 = (IndexToIdList *)0x0;
		}
		else {
		puVar1->cnt = 0;
		}
		(this->parent).indexToIdList = puVar1;
		rmSection = (SectionRM *)VirtualPool::AllocateMemory(0x16c);
		if (rmSection == (SectionRM *)0x0) {
		rmSection = (SectionRM *)0x0;
		}
		else {
		rmSection = SectionRM::Construct(rmSection,fname,(this->parent).gameResources,(this->parent).indexToIdList);
		}
		(this->parent).rmSection = rmSection;
		if ((*(byte *)((int)&(this->parent).flags + 2) & 1) == 0) {
		LoadShadows(true);
		LoadParticles("Particle");
		SectionRM::LoadUnpackedLevel((this->parent).rmSection,1,'\0',(byte)((uint)(this->parent).flags >> 0x11) & 1);
		}
		else {
		FUN_001a21e0();
		SectionRM::LoadPackedLevel((this->parent).rmSection);
		GameReaderStorage::ReadStuff();
		LoadShadows(false);
		}
		if (((this->parent).flags & 0x20000U) == 0) {
		GameResources::LoadGameObjects((this->parent).gameResources,(this->parent).indexToIdList);
		}
		gameResources = (GameResourcesBase *)(this->parent).gameResources;
		(*gameResources->vtable->InitCodeModels)(gameResources,0);
		return;
		}
		
	*/
	return;
}

AutoClass16* UnkFamily16A::CreateNewRecord(char* str, ChunkData* param_2, uint param_3, UnkFamily15A* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass16 * __thiscall UnkFamily16A::CreateNewRecord(UnkFamily16A *this,char *str,ChunkData *param_2,undefined4 param_3,UnkFamily15A *param_4){
		AutoClass16 *memPtr;
		AutoClass16 *newElement;
		short *cnt;
		memPtr = (AutoClass16 *)VirtualPool::AllocateMemory(0x38);
		if (memPtr == (AutoClass16 *)0x0) {
		newElement = (AutoClass16 *)0x0;
		}
		else {
		newElement = AutoClass16::Construct(memPtr,str,*(short *)&(this->parent).flags,param_2,&this->parent,param_4);
		}
		(this->parent).recordArray[(this->parent).flags & 0xffff] = newElement;
		cnt = (short *)&(this->parent).flags;
		*cnt = *cnt + 1;
		return newElement;
		}
		
	*/
	return null;
}

AutoClass16* UnkFamily16A::AddNewRecord(char* str, ChunkData* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass16 * __thiscall UnkFamily16A::AddNewRecord(UnkFamily16A *this,char *str,ChunkData *param_2){
		AutoClass16 *record;
		UnkFamily15A *piVar2;
		UnkFamily15A *pUVar1;
		record = ::UnkFamily16Base::FindRecord(&this->parent,str);
		if (record == (AutoClass16 *)0x0) {
		piVar2 = (UnkFamily15A *)VirtualPool::AllocateMemory(0x24);
		if (piVar2 == (UnkFamily15A *)0x0) {
		piVar2 = (UnkFamily15A *)0x0;
		}
		else {
		UnkFamily15Abstract::Construct((UnkFamily15Abstract *)piVar2);
		(piVar2->parent).vtable = (UnkFamily15Abstract_VT *)&UnkFamily15_VT_A;
		UnkFamily15Abstract::Init((UnkFamily15Abstract *)piVar2);
		}
		record = CreateNewRecord(this,str,param_2,this,piVar2);
		pUVar1 = (UnkFamily15A *)VirtualPool::AllocateMemory(0x24);
		if (pUVar1 != (UnkFamily15A *)0x0) {
		UnkFamily15Abstract::Construct((UnkFamily15Abstract *)pUVar1);
		(pUVar1->parent).vtable = (UnkFamily15Abstract_VT *)&UnkFamily15_VT_B;
		UnkFamily15Abstract::Init((UnkFamily15Abstract *)pUVar1);
		AutoClass16::FUN_001b1ca0(record,pUVar1);
		return record;
		}
		}
		else {
		pUVar1 = record->field8_0x20;
		ChunkDataRefCounter::Unpack(&record->chunkData,param_2);
		if (pUVar1 != (UnkFamily15A *)0x0) {
		return record;
		}
		pUVar1 = (UnkFamily15A *)VirtualPool::AllocateMemory(0x24);
		if (pUVar1 != (UnkFamily15A *)0x0) {
		UnkFamily15Abstract::Construct((UnkFamily15Abstract *)pUVar1);
		(pUVar1->parent).vtable = (UnkFamily15Abstract_VT *)&UnkFamily15_VT_B;
		UnkFamily15Abstract::Init((UnkFamily15Abstract *)pUVar1);
		AutoClass16::FUN_001b1ca0(record,pUVar1);
		return record;
		}
		}
		AutoClass16::FUN_001b1ca0(record,(UnkFamily15A *)0x0);
		return record;
		}
		
	*/
	return null;
}

