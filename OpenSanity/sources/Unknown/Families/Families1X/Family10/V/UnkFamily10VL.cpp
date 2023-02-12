#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VL.h"

void UnkFamily10VL::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VL * __thiscall UnkFamily10VL::Construct(UnkFamily10VL *this,int param_1){
		UnkFamily8BD *element;
		UnkFamily8BA *this_00;
		UnkFamily8BA *element_00;
		UnkFamily10Base::Construct((UnkFamily10Base *)this,0x4a,1);
		(this->parent).parent.field7_0x1c = param_1;
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VL;
		element = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (element == (UnkFamily8BD *)0x0) {
		element = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)element,3,0xb,(UnkFamily10Base *)0x0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BD;
		element->field1_0x14 = 7;
		}
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		element_00 = (UnkFamily8BA *)0x0;
		}
		else {
		element_00 = UnkFamily8BA::Construct(this_00,2,0x1c,param_1,1);
		}
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element_00);
		UnkFamily10Base::FUN_001a57c0((UnkFamily10Base *)this,((UnkFamily8Abstract *)element_00)->field2_0x8 & 0xfff);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VL::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VL::Dispose(UnkFamily10VL *this,byte param_1){
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

uint UnkFamily10VL::FUN_000a7700() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily10VL::FUN_000a7700(void){
		GameController *pGVar1;
		uint flags1;
		Oleg *this;
		pGVar1 = GameController3;
		this = &GameController3->oleg;
		Oleg::ClearUI(this,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		flags1 = (pGVar1->oleg).parent.uiPresetMask[0xc].high;
		Oleg::ShowUI(this,flags1,(pGVar1->oleg).parent.uiPresetMask[0xc].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		return CONCAT31((int3)(flags1 >> 8),1);
		}
		
	*/
	return 0;
}

