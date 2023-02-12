#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystem.h"

#include "headers/Known/GameController.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileC.h"
void SaveSystem::FontRelated(FontRenderer* renderer)
{
}
void SaveSystem::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveSystem::CleanUp(SaveSystem *this){
		SaveFileAbstract *this_00;
		uint i;
		SaveFileC *saveFile;
		(this->parent).vtable = (SaveSystem_VTable *)&SaveSystem_VT;
		i = 0;
		do {
		this_00 = *(SaveFileAbstract **)(i + (int)this->saveFiles);
		if (this_00 != (SaveFileAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		i = i + 4;
		}
		 while (i < 0x10);
		VirtualPool::FreeMemory(this->saveFiles);
		SaveController::Dispose(&this->saveController);
		SaveFileA::Dispose(&this->saveFile);
		CollectionUnk2::Dispose(&this->unkStruct0);
		TwinString::Dispose(&(this->saveImageWrong).str);
		SaveFileAbstract::CleanUp(&(this->saveImageWrong).parent);
		TwinString::Dispose(&(this->parent).str2);
		TwinString::Dispose(&(this->parent).str1);
		TwinString::Dispose(&(this->parent).str0);
		(this->parent).vtable = (SaveSystem_VTable *)&SaveSystem_VT_Abstract;
		TwinString::Dispose(&(this->parent).title);
		return;
		}
		
	*/
	return;
}

void SaveSystem::Construct(GameController* gameController) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveSystem * __thiscall SaveSystem::Construct(SaveSystem *this,GameController *gameController){
		SaveFileC **ppSVar1;
		SaveFileC *saveFile;
		uint i;
		TwinString bankFileName;
		TwinString tmpStr2;
		SaveSystemAbstract::Construct(&this->parent,"crash twinsanity",&gameController->oleg,&this->saveController);
		(this->parent).vtable = (SaveSystem_VTable *)&SaveSystem_VT;
		SaveFileD::Construct(&this->saveImageWrong,"FIXME NOWWW!!!!!");
		CollectionUnk2::Construct(&this->unkStruct0,0,0);
		SaveFileA::Construct(&this->saveFile,"Header.bin",4,1,0x800,&DAT_003d3928);
		SaveController::Construct(&this->saveController,4,&this->unkStruct0,&this->saveFile);
		_lstrcpyW@8((this->saveController).saveGameName,L"Saved Games");
		ppSVar1 = (SaveFileC **)VirtualPool::AllocateMemory(0x10);
		this->saveFiles = ppSVar1;
		i = 0;
		do {
		TwinString::Set(&bankFileName,"Bank");
		TwinString::AppendInt(&tmpStr2,i);
		TwinString::Append(&bankFileName,tmpStr2.value);
		TwinString::Dispose(&tmpStr2);
		TwinString::Append(&bankFileName,".bin");
		saveFile = (SaveFileC *)VirtualPool::AllocateMemory(0x50);
		if (saveFile == (SaveFileC *)0x0) {
		saveFile = (SaveFileC *)0x0;
		}
		else {
		SaveFileAbstract::Construct((SaveFileAbstract *)saveFile,bankFileName.value,1,0xf400,&DAT_003d3928);
		(saveFile->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_C;
		BankSub::Construct(&saveFile->bankSub);
		(saveFile->bankSub).vtable = (BankSub_VTable *)&BankSub_VT;
		(saveFile->bankSub).unkInt1 = 0;
		(saveFile->bankSub).unkInt2 = 0;
		saveFile->gameController = gameController;
		}
		this->saveFiles[i] = saveFile;
		(this->saveFile).bankSubs[i] = &saveFile->bankSub;
		(this->saveController).parent.banks[i] = saveFile;
		TwinString::Dispose(&bankFileName);
		i = i + 1;
		}
		 while (i < 4);
		return this;
		}
		
	*/
	return;
}

void SaveSystem::CleanUp_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveSystem::CleanUp(SaveSystem *this){
		TwinString::Dispose(&(this->parent).str2);
		TwinString::Dispose(&(this->parent).str1);
		TwinString::Dispose(&(this->parent).str0);
		(this->parent).vtable = (SaveSystem_VTable *)&SaveSystem_VT_Abstract;
		TwinString::Dispose(&(this->parent).title);
		return;
		}
		
	*/
	return;
}

void SaveSystem::ResetFlags() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveSystem::ResetFlags(SaveSystem *this){
		uint *puVar1;
		puVar1 = &(this->parent).flags1;
		*puVar1 = 0;
		(this->parent).flags2 = 0;
		*puVar1 = *puVar1 & 0xfffffff0;
		*(undefined *)((int)&(this->parent).flags1 + 1) = 0;
		return;
		}
		
	*/
	return;
}

void SaveSystem::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveSystem * __thiscall SaveSystem::Dispose(SaveSystem *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SaveSystem::Dispose_5(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveSystem * __thiscall SaveSystem::Dispose(SaveSystem *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SaveSystem::ShowMessage1(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystem::ShowMessage1(SaveSystem *this,uint param_1,uint param_2){
		TwinString *outString;
		Oleg *pOVar1;
		UIPresetIndex index2;
		UIPresetIndex index1;
		uint state;
		state = (this->parent).flags1;
		*(undefined *)((int)&(this->parent).flags1 + 1) = 0;
		switch(state & 0xf) {
		case 1:case 3:case 4:case 5:pOVar1 = (this->parent).oleg;
		index1 = (this->parent).uiPresetIndex1;
		Oleg::ClearUI(pOVar1,(pOVar1->parent).uiPresetMask[index1].high,(pOVar1->parent).uiPresetMask[index1].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		pOVar1 = (this->parent).oleg;
		index2 = (this->parent).uiPresetIndex2;
		Oleg::ShowUI(pOVar1,(pOVar1->parent).uiPresetMask[index2].high,(pOVar1->parent).uiPresetMask[index2].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		default:outString = &(this->parent).str0;
		SaveSystemAbstract::GetSaveString(&this->parent,*(int *)(&DAT_003a4174 + param_1 * 4),outString);
		TwinString::Copy(&((this->parent).label0)->str,outString->value);
		case 0:case 2:SaveController::FUN_002005c0((this->parent).saveController,param_1,param_2);
		return;
		}
		}
		
	*/
	return;
}

int SaveSystem::ShowMessage2(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SaveSystem::ShowMessage2(SaveSystem *this,int index){
		TwinString *outString;
		int iVar1;
		Oleg *pOVar2;
		int result;
		UIPresetIndex idx3;
		UIPresetIndex idx1;
		iVar1 = (this->parent).field16_0x60;
		*(char *)((int)&(this->parent).flags1 + 1) = (char)index;
		if (iVar1 != 0) {
		switch(index) {
		case 1:result = 0;
		break;
		case 2:result = 1;
		break;
		case 3:result = 2;
		break;
		case 4:result = 3;
		break;
		case 5:result = 4;
		break;
		case 6:result = 5;
		break;
		case 7:result = 6;
		break;
		case 8:result = 7;
		break;
		case 9:result = 8;
		break;
		case 10:result = 9;
		break;
		default:result = -1;
		break;
		case 0xd:result = 10;
		break;
		case 0xe:result = 0xb;
		break;
		case 0xf:result = 0xc;
		}
		outString = &(this->parent).str1;
		SaveSystemAbstract::GetSaveString(&this->parent,STR_INDEX[index],outString);
		TwinString::Copy(&((this->parent).label1)->str,outString->value);
		FUN_00201150((this->parent).field16_0x60,result,((byte)(this->parent).flags1 & 0xf) == 3);
		}
		pOVar2 = (this->parent).oleg;
		idx1 = (this->parent).uiPresetIndex1;
		Oleg::ClearUI(pOVar2,(pOVar2->parent).uiPresetMask[idx1].high,(pOVar2->parent).uiPresetMask[idx1].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		pOVar2 = (this->parent).oleg;
		idx3 = (this->parent).uiPresetIndex3;
		Oleg::ShowUI(pOVar2,(pOVar2->parent).uiPresetMask[idx3].high,(pOVar2->parent).uiPresetMask[idx3].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		return index;
		}
		
	*/
	return 0;
}

int SaveSystem::ShowMessage3(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SaveSystem::ShowMessage3(SaveSystem *this,int param_1){
		TwinString *outString;
		Oleg *pOVar1;
		UIPresetIndex UVar2;
		int iVar3;
		iVar3 = (this->parent).field17_0x64;
		*(char *)((int)&(this->parent).flags1 + 1) = (char)param_1;
		if (iVar3 != 0) {
		if (param_1 == 0xb) {
		iVar3 = 1;
		}
		else if (param_1 == 0xc) {
		iVar3 = 0;
		}
		else {
		iVar3 = -1;
		}
		outString = &(this->parent).str2;
		SaveSystemAbstract::GetSaveString(&this->parent,STR_INDEX[param_1],outString);
		TwinString::Copy(&((this->parent).label2)->str,outString->value);
		FUN_00201050((this->parent).field17_0x64,iVar3,((byte)(this->parent).flags1 & 0xf) == 3);
		}
		pOVar1 = (this->parent).oleg;
		UVar2 = (this->parent).uiPresetIndex1;
		Oleg::ClearUI(pOVar1,(pOVar1->parent).uiPresetMask[UVar2].high,(pOVar1->parent).uiPresetMask[UVar2].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		pOVar1 = (this->parent).oleg;
		iVar3 = (this->parent).field9_0x2c;
		Oleg::ShowUI(pOVar1,(pOVar1->parent).uiPresetMask[iVar3].high,(pOVar1->parent).uiPresetMask[iVar3].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		return param_1;
		}
		
	*/
	return 0;
}

void SaveSystem::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SaveSystem::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

