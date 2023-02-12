#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/SectionCode.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Unknown/IndexToIdList.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderCode.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionCode::Construct(GameResources* gameResources, IndexToIdList* memptr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionCode * __thiscall SectionCode::Construct(SectionCode *this,GameResources *gameResources,IndexToIdList *memptr){
		SectionDataAnimationBase *pSVar1;
		SectionDataOGIBase *pSVar2;
		SectionDataCodeModelBase *pSVar3;
		SectionDataSfx **ppSVar4;
		SectionDataSfx *pSVar5;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Code;
		this->gameResources = gameResources;
		(this->sectionUnk1).collection = (gameResources->parent).gameObjects;
		(this->sectionUnk1).indexToIdList = memptr;
		(this->sectionUnk1).parent.vtable = (SectionAbstract_VTable *)&Section_VT_GameObject;
		(this->sectionUnk2).collection = (gameResources->parent).scripts;
		(this->sectionUnk2).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Script;
		(this->sectionUnk2).unkField = 0;
		pSVar1 = (gameResources->parent).animations;
		(this->sectionUnk3).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Animation;
		(this->sectionUnk3).collection = pSVar1;
		(this->sectionUnk3).section = (SectionAnimation *)0x0;
		pSVar2 = (gameResources->parent).ogis;
		(this->sectionUnk4).parent.vtable = (SectionAbstract_VTable *)&Section_VT_OGI;
		(this->sectionUnk4).collection = pSVar2;
		(this->sectionUnk4).unkField = 0;
		pSVar3 = (gameResources->parent).codeModels;
		(this->sectionUnk5).parent.vtable = (SectionAbstract_VTable *)&Section_VT_CodeModel;
		(this->sectionUnk5).collection = pSVar3;
		(this->sectionUnk5).unkField = 0;
		pSVar5 = (gameResources->parent).sounds;
		(this->sectionSfx).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		(this->sectionSfx).sfxData = pSVar5;
		(this->sectionSfx).ptr = (int *)0x0;
		ppSVar4 = (gameResources->parent).voices;
		if ((ppSVar4 == (SectionDataSfx **)0x0) || ((gameResources->parent).languages == 0)) {
		pSVar5 = (SectionDataSfx *)0x0;
		}
		else {
		pSVar5 = *ppSVar4;
		}
		(this->sectionVoEng).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		(this->sectionVoEng).sfxData = pSVar5;
		(this->sectionVoEng).ptr = (int *)0x0;
		ppSVar4 = (gameResources->parent).voices;
		if ((ppSVar4 == (SectionDataSfx **)0x0) || ((gameResources->parent).languages < 2)) {
		pSVar5 = (SectionDataSfx *)0x0;
		}
		else {
		pSVar5 = ppSVar4[1];
		}
		(this->sectionVoFre).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		(this->sectionVoFre).sfxData = pSVar5;
		(this->sectionVoFre).ptr = (int *)0x0;
		ppSVar4 = (gameResources->parent).voices;
		if ((ppSVar4 == (SectionDataSfx **)0x0) || ((gameResources->parent).languages < 3)) {
		pSVar5 = (SectionDataSfx *)0x0;
		}
		else {
		pSVar5 = ppSVar4[2];
		}
		(this->sectionVoGer).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		(this->sectionVoGer).sfxData = pSVar5;
		(this->sectionVoGer).ptr = (int *)0x0;
		ppSVar4 = (gameResources->parent).voices;
		if ((ppSVar4 == (SectionDataSfx **)0x0) || ((gameResources->parent).languages < 4)) {
		pSVar5 = (SectionDataSfx *)0x0;
		}
		else {
		pSVar5 = ppSVar4[3];
		}
		(this->sectionVoSpa).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		(this->sectionVoSpa).sfxData = pSVar5;
		(this->sectionVoSpa).ptr = (int *)0x0;
		ppSVar4 = (gameResources->parent).voices;
		if ((ppSVar4 == (SectionDataSfx **)0x0) || ((gameResources->parent).languages < 5)) {
		pSVar5 = (SectionDataSfx *)0x0;
		}
		else {
		pSVar5 = ppSVar4[4];
		}
		(this->sectionVoIta).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		(this->sectionVoIta).sfxData = pSVar5;
		(this->sectionVoIta).ptr = (int *)0x0;
		ppSVar4 = (gameResources->parent).voices;
		if ((ppSVar4 == (SectionDataSfx **)0x0) || ((gameResources->parent).languages < 6)) {
		pSVar5 = (SectionDataSfx *)0x0;
		}
		else {
		pSVar5 = ppSVar4[5];
		}
		(this->sectionVoJpn).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		(this->sectionVoJpn).sfxData = pSVar5;
		(this->sectionVoJpn).ptr = (int *)0x0;
		return this;
		}
		
	*/
	return;
}

void SectionCode::Write(uint index, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionCode::Write(SectionCode *this,undefined4 index,MemoryStream *stream){
		switch(index) {
		case 0:SectionAbstract::Write(&(this->sectionUnk1).parent,stream);
		return;
		case 1:SectionAbstract::Write(&(this->sectionUnk2).parent,stream);
		return;
		case 2:SectionAbstract::Write(&(this->sectionUnk3).parent,stream);
		return;
		case 3:SectionAbstract::Write(&(this->sectionUnk4).parent,stream);
		return;
		case 4:SectionAbstract::Write(&(this->sectionUnk5).parent,stream);
		return;
		case 6:SectionAbstract::Write(&(this->sectionSfx).parent,stream);
		return;
		case 7:SectionAbstract::Write(&(this->sectionVoEng).parent,stream);
		return;
		case 8:SectionAbstract::Write(&(this->sectionVoFre).parent,stream);
		return;
		case 9:SectionAbstract::Write(&(this->sectionVoGer).parent,stream);
		return;
		case 10:SectionAbstract::Write(&(this->sectionVoSpa).parent,stream);
		return;
		case 0xb:SectionAbstract::Write(&(this->sectionVoIta).parent,stream);
		return;
		case 0xc:SectionAbstract::Write(&(this->sectionVoJpn).parent,stream);
		}
		return;
		}
		
	*/
	return;
}

void SectionCode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionCode * __thiscall SectionCode::Dispose(SectionCode *this,byte param_1){
		(this->sectionVoJpn).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoIta).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoSpa).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoGer).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoFre).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoEng).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionSfx).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk5).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk4).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk3).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk2).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk1).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionCode::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionCode::GetElementCount(SectionCode *this){
		return 0xd;
		}
		
	*/
	return 0;
}

byte SectionCode::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionCode::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionCode::IsOne(int numb) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionCode::IsOne(int numb){
		return numb == 1;
		}
		
	*/
	return false;
}

SectionReaderCode* SectionCode::GetReader(uint param_1, uint* param_2, uint* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderCode * __thiscall SectionCode::GetReader(SectionCode *this,undefined4 param_1,undefined4 *param_2,uint *param_3){
		undefined *puVar1;
		SectionReaderCode *pSVar2;
		bool bVar3;
		int sectionId;
		if (*param_3 == 0) {
		return (SectionReaderCode *)0x0;
		}
		sectionId = param_2[2];
		puVar1 = (undefined *)*param_2;
		switch(sectionId) {
		case 0:case 1:case 2:case 3:case 4:case 6:*param_3 = 0xc;
		goto code_r0x001b2992;
		default:goto switchD_001b294b_caseD_5;
		case 7:bVar3 = LNG_INDEX == 0;
		break;
		case 8:bVar3 = LNG_INDEX == 1;
		break;
		case 9:bVar3 = LNG_INDEX == 2;
		break;
		case 10:bVar3 = LNG_INDEX == 3;
		break;
		case 0xb:bVar3 = LNG_INDEX == 4;
		break;
		case 0xc:bVar3 = LNG_INDEX == 5;
		}
		*param_3 = !bVar3 - 1 & 0xc;
		switchD_001b294b_caseD_5:if (*param_3 != 0) {
		code_r0x001b2992:pSVar2 = (SectionReaderCode *)VirtualPool::AllocateMemory(0x10);
		if (pSVar2 != (SectionReaderCode *)0x0) {
		pSVar2->unkPointer = puVar1;
		pSVar2->sectionId = sectionId;
		pSVar2->section = this;
		(pSVar2->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Code;
		return pSVar2;
		}
		}
		return (SectionReaderCode *)0x0;
		}
		
	*/
	return null;
}

void SectionCode::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionCode::DisposeResources(SectionCode *this){
		GameResources::DisposeCodeSection(this->gameResources);
		return;
		}
		
	*/
	return;
}

bool SectionCode::Write_8(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionCode::Write(SectionCode *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		if (*indexOut1 < 0xd) {
		Write(this,*indexOut1,stream);
		*indexOut2 = *indexOut1;
		*indexOut1 = *indexOut1 + 1;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionCode::ReadInternal(int index, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionCode::ReadInternal(SectionCode *this,int index,int param_2){
		switch(index) {
		case 0:SectionAbstract::AddToReadQueue(&(this->sectionUnk1).parent,param_2);
		return;
		case 1:SectionAbstract::AddToReadQueue(&(this->sectionUnk2).parent,param_2);
		return;
		case 2:SectionAbstract::AddToReadQueue(&(this->sectionUnk3).parent,param_2);
		return;
		case 3:SectionAbstract::AddToReadQueue(&(this->sectionUnk4).parent,param_2);
		return;
		case 4:SectionAbstract::AddToReadQueue(&(this->sectionUnk5).parent,param_2);
		return;
		case 6:SectionAbstract::AddToReadQueue(&(this->sectionSfx).parent,param_2);
		return;
		case 7:SectionAbstract::AddToReadQueue(&(this->sectionVoEng).parent,param_2);
		return;
		case 8:SectionAbstract::AddToReadQueue(&(this->sectionVoFre).parent,param_2);
		return;
		case 9:SectionAbstract::AddToReadQueue(&(this->sectionVoGer).parent,param_2);
		return;
		case 10:SectionAbstract::AddToReadQueue(&(this->sectionVoSpa).parent,param_2);
		return;
		case 0xb:SectionAbstract::AddToReadQueue(&(this->sectionVoIta).parent,param_2);
		return;
		case 0xc:SectionAbstract::AddToReadQueue(&(this->sectionVoJpn).parent,param_2);
		}
		return;
		}
		
	*/
	return;
}

void SectionCode::Dispose_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionCode::Dispose(SectionCode *this){
		(this->sectionVoJpn).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoIta).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoSpa).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoGer).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoFre).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionVoEng).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionSfx).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk5).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk4).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk3).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk2).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->sectionUnk1).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

