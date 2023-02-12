#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VM.h"

void UnkFamily10VM::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VM * __thiscall UnkFamily10VM::Construct(UnkFamily10VM *this,int param_1){
		UnkFamily8BA *this_00;
		UnkFamily8BA *element;
		UnkFamily10Base::Construct((UnkFamily10Base *)this,"",1);
		(this->parent).parent.field7_0x1c = param_1;
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VM;
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 != (UnkFamily8BA *)0x0) {
		element = UnkFamily8BA::Construct(this_00,5,0x1d,param_1,1);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element);
		return this;
		}
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)0x0);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VM::FUN_000a95a0(uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10VM::FUN_000a95a0(UnkFamily10VM *this,uint param_2){
		uint uVar1;
		Vector2 pos;
		Renderer *renderer;
		renderer = Renderer;
		pos.x = (Renderer->parent).vec.x;
		pos.y = (Renderer->parent).vec.y;
		uVar1 = FUN_001a1a60(param_2,5,'\0');
		if ((char)uVar1 == '\0') {
		uVar1 = FUN_001a1a60(param_2,6,'\0');
		if ((char)uVar1 != '\0') {
		pos.x = pos.x + FLOAT_0038c0c8;
		}
		}
		else {
		pos.x = pos.x - FLOAT_0038c0c8;
		}
		uVar1 = FUN_001a1a60(param_2,3,'\0');
		if ((char)uVar1 == '\0') {
		uVar1 = FUN_001a1a60(param_2,4,'\0');
		if ((char)uVar1 != '\0') {
		pos.y = pos.y + FLOAT_0038c0cc;
		}
		}
		else {
		pos.y = pos.y - FLOAT_0038c0cc;
		}
		(*((renderer->parent).vtable)->SetXY)(renderer,&pos);
		return;
		}
		
	*/
	return;
}

void UnkFamily10VM::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VM::Dispose(UnkFamily10VM *this,byte param_1){
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

bool UnkFamily10VM::FUN_000a7790() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily10VM::FUN_000a7790(void){
		GameController *pGVar1;
		Oleg *this;
		pGVar1 = GameController3;
		this = &GameController3->oleg;
		Oleg::ClearUI(this,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(this,(pGVar1->oleg).parent.uiPresetMask[9].high,(pGVar1->oleg).parent.uiPresetMask[9].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		return true;
		}
		
	*/
	return false;
}

