#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileC.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameController.h"
void SaveFileC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileC * __thiscall SaveFileC::Dispose(SaveFileC *this,byte param_1){
		BankSub::CleanUp(&this->bankSub);
		SaveFileAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SaveFileC::ReadBanks(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveFileC::ReadBanks(SaveFileC *this,MemoryStream *stream){
		AutoClass56::Read(&this->gameController->unkStruct,stream);
		return;
		}
		
	*/
	return;
}

void SaveFileC::WriteBanks(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveFileC::WriteBanks(SaveFileC *this,MemoryStream *stream){
		AutoClass56::Write(&this->gameController->unkStruct,stream);
		return;
		}
		
	*/
	return;
}

void SaveFileC::UpdateBankData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveFileC::UpdateBankData(SaveFileC *this){
		uint uVar1;
		float fVar2;
		GameController *gameController;
		gameController = this->gameController;
		uVar1 = (gameController->unkStruct).field1_0x4;
		(gameController->unkStruct).field1_0x4 =uVar1 ^ ((InputController->flags >> 1 & 0xff) << 0xf ^ uVar1) & 0x8000;
		fVar2 = ::GetNum(0);
		(gameController->unkStruct).field12_0x24 = fVar2;
		fVar2 = ::GetNum(2);
		(gameController->unkStruct).field13_0x28 = fVar2;
		BankSub::thunk_FUN_000ad360(&this->bankSub,&gameController->unkStruct);
		return;
		}
		
	*/
	return;
}

void SaveFileC::Construct(char* param_1, uint param_2, uint param_3, GameController* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileC * __thiscall SaveFileC::Construct(SaveFileC *this,char *param_1,undefined4 param_2,undefined4 param_3,GameController *param_4){
		SaveFileAbstract::Construct(&this->parent,param_1,1,param_2,param_3);
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_C;
		BankSub::Construct(&this->bankSub);
		(this->bankSub).vtable = (BankSub_VTable *)&BankSub_VT;
		(this->bankSub).unkInt1 = 0;
		(this->bankSub).unkInt2 = 0;
		this->gameController = param_4;
		return this;
		}
		
	*/
	return;
}

