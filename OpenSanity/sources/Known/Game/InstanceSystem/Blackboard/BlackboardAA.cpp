#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAA.h"

void BlackboardAA::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardAA * __thiscall BlackboardAA::Construct(BlackboardAA *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_AA;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardAA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardAA::Dispose(BlackboardAA *this,byte param_1){
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

int BlackboardAA::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardAA::GetBlackboardFractionFloatEntry2(BlackboardAA *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardAA::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardAA::GetBlackboardFloatEntry2(BlackboardAA *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardAA::GetBlackboardIntEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardAA::GetBlackboardIntEntry2(BlackboardAA *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

int BlackboardAA::GetBlackboardFractionFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardAA::GetBlackboardFractionFloatEntry(BlackboardAA *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardAA::GetBlackboardFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardAA::GetBlackboardFloatEntry(BlackboardAA *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardAA::GetBlackboardIntEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardAA::GetBlackboardIntEntry(BlackboardAA *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

uint BlackboardAA::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardAA::GetUnkCount1(void){
		return 8;
		}
		
	*/
	return 0;
}

uint BlackboardAA::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardAA::GetFractionFloatsCount(void){
		return 0;
		}
		
	*/
	return 0;
}

uint BlackboardAA::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardAA::GetFloatsCount(void){
		return 1;
		}
		
	*/
	return 0;
}

uint BlackboardAA::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardAA::GetIntsCount(void){
		return 2;
		}
		
	*/
	return 0;
}

uint BlackboardAA::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardAA::GetUnkCount2(void){
		return 0x12;
		}
		
	*/
	return 0;
}

