#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardI.h"

void BlackboardI::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardI * __thiscall BlackboardI::Construct(BlackboardI *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_I;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardI::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardI::Dispose(BlackboardI *this,byte param_1){
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

int BlackboardI::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardI::GetBlackboardFractionFloatEntry2(BlackboardI *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardI::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardI::GetBlackboardFloatEntry2(BlackboardI *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardI::GetBlackboardIntEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardI::GetBlackboardIntEntry2(BlackboardI *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

int BlackboardI::GetBlackboardFractionFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardI::GetBlackboardFractionFloatEntry(BlackboardI *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardI::GetBlackboardFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardI::GetBlackboardFloatEntry(BlackboardI *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardI::GetBlackboardIntEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardI::GetBlackboardIntEntry(BlackboardI *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

uint BlackboardI::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardI::GetUnkCount1(void){
		return 1;
		}
		
	*/
	return 0;
}

uint BlackboardI::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardI::GetFractionFloatsCount(void){
		return 0;
		}
		
	*/
	return 0;
}

uint BlackboardI::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardI::GetFloatsCount(void){
		return 1;
		}
		
	*/
	return 0;
}

uint BlackboardI::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardI::GetIntsCount(void){
		return 2;
		}
		
	*/
	return 0;
}

uint BlackboardI::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardI::GetUnkCount2(void){
		return 0x12;
		}
		
	*/
	return 0;
}

