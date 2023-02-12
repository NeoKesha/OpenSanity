#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataSkydomeXbox.h"

#include "headers/Known/GameData/Sfx/Sfx.h"
void SectionDataSkydomeXbox::FUN_00108530(uint* param_1, Sfx* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkydomeXbox::FUN_00108530(SectionDataSkydomeXbox *this,uint *param_1,Sfx *param_2){
		GameReaderStorage *this_00;
		SectionReaderAbstract *reader;
		FileResourceDescG *pFVar1;
		TwinString local_18;
		TwinString local_c;
		local_18.value = (char *)0x0;
		local_18.strLength = 0;
		local_18.strSize = 0;
		TwinString::Copy(&local_18,(this->parent).folder.value);
		TwinString::Append(&local_18,"\\");
		TwinString::AppendInt(&local_c,*param_1);
		TwinString::Append(&local_18,local_c.value);
		TwinString::Dispose(&local_c);
		this_00 = GAME_READER_STORAGE[0];
		reader = (SectionReaderAbstract *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderAbstract *)0x0) {
		reader = (SectionReaderAbstract *)0x0;
		}
		else {
		reader[2].vtable = (SectionReaderAbstract_VTable *)this;
		reader->vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Skydome;
		reader[1].vtable = (SectionReaderAbstract_VTable *)param_2;
		}
		pFVar1 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar1 == (FileResourceDescG *)0x0) {
		pFVar1 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar1 = FileResourceDescG::Construct(pFVar1,local_18.value,reader,0xc);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar1->parent,0);
		TwinString::Dispose(&local_18);
		return;
		}
		
	*/
	return;
}

void SectionDataSkydomeXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __fastcall SectionDataSkydomeXbox::Construct(SectionDataSkydomeXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"SkyDomes\\");
		(this->parent).parent.entries.elements = (undefined *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.pool = (undefined *)0x0;
		(this->parent).parent.skydomeList = (ResourceListTwinsanitySkydome *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome_XBox;
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void SectionDataSkydomeXbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkydomeXbox::Dispose(SectionDataSkydomeXbox *this){
		undefined *puVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome;
		SectionDataSkydome::CleanUp((SectionDataSkydome *)this);
		puVar1 = (this->parent).parent.entries.elements;
		if (puVar1 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar1 + -4);
		}
		(this->parent).parent.entries.elements = (undefined *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataSkydomeXbox::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkydomeXbox * __thiscall SectionDataSkydomeXbox::Dispose(SectionDataSkydomeXbox *this,byte param_1){
		undefined *puVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome;
		SectionDataSkydome::CleanUp((SectionDataSkydome *)this);
		puVar1 = (this->parent).parent.entries.elements;
		if (puVar1 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar1 + -4);
		}
		(this->parent).parent.entries.elements = (undefined *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

