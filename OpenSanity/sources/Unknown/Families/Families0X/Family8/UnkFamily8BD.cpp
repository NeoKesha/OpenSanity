#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8BD.h"

void UnkFamily8BD::FUN_000a7180(byte param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __fastcall UnkFamily8BD::FUN_000a7180(UnkFamily8BD *this,undefined param_2,undefined4 param_3,undefined4 param_4){
		Oleg *autoClass1;
		GameController *gameController;
		gameController = GameController3;
		autoClass1 = &GameController3->oleg;
		switch(this->field1_0x14) {
		case 0:Oleg::ClearUI(autoClass1,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(autoClass1,(gameController->oleg).parent.uiPresetMask[10].high,(gameController->oleg).parent.uiPresetMask[10].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		case 1:Oleg::ClearUI(autoClass1,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(autoClass1,(gameController->oleg).parent.uiPresetMask[9].high,(gameController->oleg).parent.uiPresetMask[9].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		case 2:Oleg::ClearUI(autoClass1,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(autoClass1,(gameController->oleg).parent.uiPresetMask[0xe].high,(gameController->oleg).parent.uiPresetMask[0xe].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		case 3:thunk_FUN_000af420((int)GameController3);
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		case 4:Oleg::ClearUI(autoClass1,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(autoClass1,(gameController->oleg).parent.uiPresetMask[0xd].high,(gameController->oleg).parent.uiPresetMask[0xd].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		case 5:thunk_FUN_000afe40((int)GameController3);
		break;
		case 6:Oleg::ClearUI(autoClass1,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(autoClass1,(gameController->oleg).parent.uiPresetMask[0x2c].high,(gameController->oleg).parent.uiPresetMask[0x2c].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		case 7:GameController::thunk_FUN_000afe90(GameController3);
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		}
		UnkFamily8Abstract::FUN_001a1aa0((UnkFamily8Abstract *)this);
		return;
		}
		
	*/
	return;
}

uint* UnkFamily8BD::FUN_000abb00(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8BD::FUN_000abb00(UnkFamily8BD *this,byte param_1){
		UnkFamily8Abstract::Unroll((UnkFamily8Abstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return null;
}

void UnkFamily8BD::Construct(uint param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8BD * __thiscall UnkFamily8BD::Construct(UnkFamily8BD *this,uint param_1,uint param_2,int param_3){
		UnkFamily8B::Construct(&this->parent,param_1,param_2,(UnkFamily10Base *)0x0,1);
		(this->parent).parent.vtable = &UnkFamily8_VT_BD;
		this->field1_0x14 = param_3;
		return this;
		}
		
	*/
	return;
}

void UnkFamily8BD::Construct_3(uint param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8BD * __thiscall UnkFamily8BD::Construct(UnkFamily8BD *this,undefined4 param_1,uint param_2,int param_3){
		UnkFamily8B::Construct(&this->parent,param_1,param_2,0,1);
		(this->parent).parent.vtable = &UnkFamily8_VT_BD;
		this->field1_0x14 = param_3;
		return this;
		}
		
	*/
	return;
}

