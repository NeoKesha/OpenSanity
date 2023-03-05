#include "headers/Known/Oleg/Modules/OlegModuleAbstract.h"

#include "headers/Known/Math/Spline/SplineA.h"
#include "headers/Unknown/SomeState.h"

OlegModuleAbstract::OlegModuleAbstract()
{
	(this->field2_0x8).x = 0.5;
	(this->field2_0x8).y = 0.5;
	this->value = 0.0;
	this->next = (OlegModuleAbstract*)0x0;
	this->spline = (SplineA*)0x0;
	this->field_0x28 = 0;
	this->field13_0x2c = Color(0.0f, 0.0f, 0.0f, 0.5f);
	this->field14_0x30 = 0.0;
	this->field15_0x34 = 0.0;
	this->flags = 0;
	this->flags = 0x1800;
	this->startTime = 0;
	this->fadeInLength = 0;
	this->fadeOutLength = 0;
}

OlegModuleAbstract::OlegModuleAbstract(float x) : OlegModuleAbstract()
{
	(this->field2_0x8).x = x;
}

OlegModuleAbstract::~OlegModuleAbstract()
{

}
void OlegModuleAbstract::SetSplineToAll(uint spline) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAbstract::SetSplineToAll(OlegModuleAbstract *this,SplineA *spline){
		OlegModuleAbstract **moduleList;
		OlegModuleAbstract *module;
		moduleList = &this->next;
		this->spline = spline;
		for (module = *moduleList;
		 module != (OlegModuleAbstract *)0x0;
		 module = module->next) {
		module = *moduleList;
		module->spline = spline;
		moduleList = &module->next;
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleAbstract::CallOther1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleAbstract::CallOther1(OlegModuleAbstract *this){
		OlegModuleAbstract *this_00;
		this_00 = this->next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->CallOther1)(this_00);
		return;
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleAbstract::Render(FontRenderer* renderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleAbstract::Render(OlegModuleAbstract *this){
		OlegModuleAbstract *this_00;
		FontRenderer *in_stack_00000004;
		this_00 = this->next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->Render)(this_00,in_stack_00000004);
		return;
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleAbstract::Process(SomeState* timeState) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAbstract::Process(OlegModuleAbstract *this,SomeState *timeState){
		float fVar1;
		int ticks;
		OlegModuleAbstract *other;
		uint state;
		fVar1 = FLOAT_0038639c;
		state = this->flags;
		if ((state & 0x100) == 0) {
		ticks = timeState->currentTime - this->startTime;
		switch(state & 0xf) {
		case 1:if ((this->fadeOutLength != 0) && (this->fadeOutLength <= ticks)) {
		this->flags = state & 0xffffff2f | 0x120;
		this->fadeOutLength = 0;
		}
		this->value = 0.0;
		(*this->vtable->Shift5)(this);
		break;
		case 2:if (ticks < this->fadeInLength) {
		this->value = (float)(int)((((float)ticks * TimePerTick1) /((float)this->fadeInLength * TimePerTick1)) * TicksPerTime) *TimePerTick1;
		(*this->vtable->Interpolate1)(this);
		}
		else {
		this->flags = state & 0xffffff3f | 0x130;
		this->value = fVar1;
		(*this->vtable->Interpolate1)(this);
		}
		break;
		case 3:if ((this->fadeOutLength != 0) && (this->fadeOutLength <= ticks)) {
		this->flags = state & 0xffffff4f | 0x140;
		this->fadeOutLength = 0;
		}
		this->value = 0.0;
		(*this->vtable->Shift6)(this);
		break;
		case 4:if (ticks < this->fadeInLength) {
		this->value = (float)(int)((((float)ticks * TimePerTick1) /((float)this->fadeInLength * TimePerTick1)) * TicksPerTime) *TimePerTick1;
		}
		else {
		this->flags = state & 0xffffff1f | 0x110;
		this->value = fVar1;
		}
		(*this->vtable->Interpolate2)(this);
		}
		}
		else {
		this->startTime = timeState->currentTime;
		state = this->flags >> 4 & 0xf;
		this->flags = state | this->flags & 0xfffffef0;
		this->value = 0.0;
		switch(state) {
		case 1:(*this->vtable->Shift1)(this);
		break;
		case 2:(*this->vtable->Shift2)(this);
		break;
		case 3:(*this->vtable->Shift3)(this);
		break;
		case 4:(*this->vtable->Shift4)(this);
		}
		}
		other = this->next;
		if (other != (OlegModuleAbstract *)0x0) {
		(*other->vtable->Process)(other,timeState);
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleAbstract::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleAbstract::Reset(OlegModuleAbstract *this){
		this->fadeInLength = 0;
		this->startTime = 0;
		this->fadeOutLength = 0;
		this->value = 0.0;
		this->flags = this->flags & 0xffffff1f | 0x110;
		return;
		}
		
	*/
	return;
}

void OlegModuleAbstract::CallOther2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleAbstract::CallOther2(OlegModuleAbstract *this){
		OlegModuleAbstract *this_00;
		this_00 = this->next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->CallOther2)(this_00);
		return;
		}
		return;
		}
		
	*/
	return;
}

