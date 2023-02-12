#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardE.h"

void BlackboardE::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardE * __fastcall BlackboardE::Construct(BlackboardE *this){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_E;
		return this;
		}
		
	*/
	return;
}

void BlackboardE::Construct_1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardE * __thiscall BlackboardE::Construct(BlackboardE *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_E;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardE::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardE::Dispose(BlackboardE *this,byte param_1){
		(this->parent).vtable = (Blackboard_VTable *)&Unknown_VT;
		BlackboardAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

int BlackboardE::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardE::GetBlackboardFractionFloatEntry2(BlackboardE *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardE::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardE::GetBlackboardFloatEntry2(BlackboardE *this,int param_1){
		return (int)(&(this->parent).field5_0x14 + param_1);
		}
		
	*/
	return 0;
}

int BlackboardE::GetBlackboardIntEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardE::GetBlackboardIntEntry2(BlackboardE *this,int param_1){
		return (int)(&this->field_0x30 + param_1 * 4);
		}
		
	*/
	return 0;
}

int BlackboardE::GetBlackboardFractionFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardE::GetBlackboardFractionFloatEntry(BlackboardE *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardE::GetBlackboardFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardE::GetBlackboardFloatEntry(BlackboardE *this,int param_1){
		return (int)(&(this->parent).field5_0x14 + param_1);
		}
		
	*/
	return 0;
}

int BlackboardE::GetBlackboardIntEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardE::GetBlackboardIntEntry(BlackboardE *this,int param_1){
		return (int)(&this->field_0x30 + param_1 * 4);
		}
		
	*/
	return 0;
}

uint BlackboardE::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardE::GetUnkCount1(void){
		return 3;
		}
		
	*/
	return 0;
}

uint BlackboardE::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardE::GetFractionFloatsCount(void){
		return 1;
		}
		
	*/
	return 0;
}

uint BlackboardE::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardE::GetFloatsCount(void){
		return 6;
		}
		
	*/
	return 0;
}

uint BlackboardE::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardE::GetIntsCount(void){
		return 3;
		}
		
	*/
	return 0;
}

uint BlackboardE::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardE::GetUnkCount2(void){
		return 0x13;
		}
		
	*/
	return 0;
}

