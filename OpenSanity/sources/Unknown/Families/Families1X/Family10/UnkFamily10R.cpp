#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10R.h"

void UnkFamily10R::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10R * __thiscall UnkFamily10R::Construct(UnkFamily10R *this,UnkFamily8Abstract *param_1){
		int iVar1;
		UnkFamily8B *pUVar2;
		UnkFamily8Abstract *element;
		UnkFamily8BA *this_00;
		UnkFamily8Abstract *element_00;
		iVar1 = (int)param_1;
		UnkFamily10Base::Construct(&this->parent,0xb,1);
		(this->parent).field7_0x1c = (int)param_1;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_R;
		UnkFamily10VJ::Construct(&this->field1_0x50,this);
		UnkFamily10VK::Construct(&this->field2_0xa0,this);
		UnkFamily10Y::Construct(&this->field7_0xf4,this);
		pUVar2 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar2 == (UnkFamily8B *)0x0) {
		param_1 = (UnkFamily8Abstract *)0x0;
		}
		else {
		param_1 = (UnkFamily8Abstract *)UnkFamily8B::Construct(pUVar2,0xe,7,&(this->field7_0xf4).parent,1);
		}
		pUVar2 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar2 == (UnkFamily8B *)0x0) {
		element = (UnkFamily8Abstract *)0x0;
		}
		else {
		element = (UnkFamily8Abstract *)UnkFamily8B::Construct(pUVar2,0xf,8,&(this->field1_0x50).parent,1);
		}
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		element_00 = (UnkFamily8Abstract *)0x0;
		}
		else {
		element_00 = (UnkFamily8Abstract *)UnkFamily8BA::Construct(this_00,4,0x1d,iVar1,1);
		}
		UnkFamily10Base::Add(&this->parent,param_1);
		UnkFamily10Base::Add(&this->parent,element);
		UnkFamily10Base::Add(&this->parent,element_00);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10R::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10R::CleanUp(UnkFamily10R *this){
		(this->field7_0xf4).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&(this->field7_0xf4).parent);
		(this->field2_0xa0).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->field2_0xa0);
		(this->field1_0x50).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&(this->field1_0x50).parent);
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

UnkFamily10R* UnkFamily10R::FUN_000abc30(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10R * __thiscall UnkFamily10R::FUN_000abc30(UnkFamily10R *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return null;
}

uint UnkFamily10R::FUN_000a7aa0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily10R::FUN_000a7aa0(void){
		GameController *pGVar1;
		int disappearTime;
		uint flags2;
		Oleg *this;
		pGVar1 = GameController3;
		this = &GameController3->oleg;
		Oleg::ClearUI(this,(GameController3->oleg).parent.uiPresetMask[0x2a].high,(GameController3->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		disappearTime = (int)(TicksPerTime * FLOAT_00386394);
		if ((GameController3->flags & 0x3f000) == 0x7000) {
		Oleg::ShowUI(this,(pGVar1->oleg).parent.uiPresetMask[0xb].high,(pGVar1->oleg).parent.uiPresetMask[0xb].low,(int)(TicksPerTime * FLOAT_00386ab4),disappearTime);
		return CONCAT31((int3)((uint)disappearTime >> 8),1);
		}
		flags2 = (pGVar1->oleg).parent.uiPresetMask[0xc].low;
		Oleg::ShowUI(this,(pGVar1->oleg).parent.uiPresetMask[0xc].high,flags2,(int)(TicksPerTime * FLOAT_00386ab4),disappearTime);
		return CONCAT31((int3)(flags2 >> 8),1);
		}
		
	*/
	return 0;
}

