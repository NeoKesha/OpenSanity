#include "headers/Known/Oleg/OlegBase.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Unknown/SomeState.h"
OlegBase::OlegBase() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegBase * __fastcall OlegBase::Construct(OlegBase *this){
		int i;
		OlegMask *maskPtrHigh;
		OlegModuleAbstract **module;
		OlegMask *maskPtrLow;
		this->vtable = (OlegBase_VTable *)&Oleg_VT_Base;
		this->field2_0x8 = 0;
		this->field3_0xc = 0;
		module = this->modules;
		for (i = 0x40;
		 i != 0;
		 i = i + -1) {
		*module = (OlegModuleAbstract *)0x0;
		module = module + 1;
		}
		this->uiPresetMask[0].high = 0;
		this->uiPresetMask[0].low = 0;
		maskPtrHigh = this->uiPresetMask;
		maskPtrLow = this->uiPresetMask + 1;
		for (i = 126;
		 i != 0;
		 i = i + -1) {
		maskPtrLow->high = maskPtrHigh->high;
		maskPtrHigh = (OlegMask *)&maskPtrHigh->low;
		maskPtrLow = (OlegMask *)&maskPtrLow->low;
		}
		return this;
		}
		
	*/
	return;
}

OlegBase::~OlegBase() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegBase * __thiscall OlegBase::Dispose(OlegBase *this,byte param_1){
		this->vtable = (OlegBase_VTable *)&Oleg_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}

	*/
}

void OlegBase::ProcessAll(SomeState* timeState) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegBase::ProcessAll(OlegBase *this,SomeState *timeState){
		OlegModuleAbstract **memberArray;
		int i;
		OlegModuleAbstract *member;
		memberArray = this->modules;
		i = 0x40;
		do {
		member = *memberArray;
		if (member != (OlegModuleAbstract *)0x0) {
		(*member->vtable->Process)(member,timeState);
		}
		memberArray = memberArray + 1;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void OlegBase::Render(FontRenderer* fontRenderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegBase::Render(OlegBase *this,FontRenderer *fontRenderer){
		OlegModuleAbstract **memberArray;
		int i;
		OlegModuleAbstract *member;
		memberArray = this->modules;
		i = 0x40;
		do {
		member = *memberArray;
		if (member != (OlegModuleAbstract *)0x0) {
		(*member->vtable->Render)(member,fontRenderer);
		}
		memberArray = memberArray + 1;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void OlegBase::CallAll1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegBase::CallAll1(OlegBase *this){
		OlegModuleAbstract **memberArray;
		int i;
		OlegModuleAbstract *member;
		memberArray = this->modules;
		i = 0x40;
		do {
		member = *memberArray;
		if (member != (OlegModuleAbstract *)0x0) {
		(*member->vtable->CallOther1)(member);
		}
		memberArray = memberArray + 1;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void OlegBase::CallAll2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegBase::CallAll2(OlegBase *this){
		OlegModuleAbstract **ppOVar1;
		int i;
		OlegModuleA *memberArray;
		ppOVar1 = this->modules;
		i = 0x40;
		do {
		memberArray = (OlegModuleA *)*ppOVar1;
		if (memberArray != (OlegModuleA *)0x0) {
		(*((memberArray->parent).vtable)->CallOther2)((OlegModuleAbstract *)memberArray);
		}
		ppOVar1 = ppOVar1 + 1;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void OlegBase::FUN_001a0d10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegBase::FUN_001a0d10(OlegBase *this){
		OlegModuleAbstract *this_00;
		OlegModuleAbstract **ppOVar1;
		int iVar2;
		ppOVar1 = this->modules;
		iVar2 = 0x40;
		do {
		this_00 = *ppOVar1;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->Reset)(this_00);
		}
		ppOVar1 = ppOVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		return;
		}
		
	*/
	return;
}
