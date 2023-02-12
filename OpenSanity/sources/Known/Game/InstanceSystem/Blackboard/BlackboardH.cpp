#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardH.h"

void BlackboardH::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardH * __thiscall BlackboardH::Construct(BlackboardH *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_H;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardH::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardH * __thiscall BlackboardH::Dispose(BlackboardH *this,byte param_1){
		(this->parent).vtable = (Blackboard_VTable *)&Unknown_VT;
		BlackboardAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int BlackboardH::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardH::GetBlackboardFractionFloatEntry2(BlackboardH *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardH::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardH::GetBlackboardFloatEntry2(BlackboardH *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardH::GetBlackboardIntEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardH::GetBlackboardIntEntry2(BlackboardH *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

int BlackboardH::GetBlackboardFractionFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardH::GetBlackboardFractionFloatEntry(BlackboardH *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardH::GetBlackboardFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardH::GetBlackboardFloatEntry(BlackboardH *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardH::GetBlackboardIntEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardH::GetBlackboardIntEntry(BlackboardH *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

uint BlackboardH::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardH::GetUnkCount1(void){
		return 6;
		}
		
	*/
	return 0;
}

uint BlackboardH::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardH::GetFractionFloatsCount(void){
		return 0;
		}
		
	*/
	return 0;
}

uint BlackboardH::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardH::GetFloatsCount(void){
		return 1;
		}
		
	*/
	return 0;
}

uint BlackboardH::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardH::GetIntsCount(void){
		return 3;
		}
		
	*/
	return 0;
}

uint BlackboardH::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardH::GetUnkCount2(void){
		return 0x12;
		}
		
	*/
	return 0;
}

