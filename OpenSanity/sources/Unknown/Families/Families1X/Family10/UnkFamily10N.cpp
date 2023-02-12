#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10N.h"

void UnkFamily10N::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10N * __thiscall UnkFamily10N::Construct(UnkFamily10N *this,int param_1){
		UnkFamily8BD *element;
		UnkFamily8BA *this_00;
		UnkFamily8BA *element_00;
		UnkFamily10Base::Construct(&this->parent,0x65,1);
		(this->parent).field7_0x1c = param_1;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_N;
		element = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (element == (UnkFamily8BD *)0x0) {
		element = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)element,3,10,(UnkFamily10Base *)0x0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BD;
		element->field1_0x14 = 5;
		}
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		element_00 = (UnkFamily8BA *)0x0;
		}
		else {
		element_00 = UnkFamily8BA::Construct(this_00,2,0x1c,param_1,1);
		}
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)element);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)element_00);
		UnkFamily10Base::FUN_001a57c0(&this->parent,((UnkFamily8Abstract *)element_00)->field2_0x8 & 0xfff);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10N::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10N::Dispose(UnkFamily10N *this,byte param_1){
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

bool UnkFamily10N::FUN_000a70f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily10N::FUN_000a70f0(void){
		Oleg *oleg;
		GameController *gameController;
		gameController = GameController3;
		oleg = &GameController3->oleg;
		Oleg::ClearUI(oleg,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(oleg,(gameController->oleg).parent.uiPresetMask[0xc].high,(gameController->oleg).parent.uiPresetMask[0xc].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		return true;
		}
		
	*/
	return false;
}

