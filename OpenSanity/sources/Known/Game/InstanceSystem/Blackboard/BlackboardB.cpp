#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardB.h"

void BlackboardB::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardB * __thiscall BlackboardB::Construct(BlackboardB *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_B;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardB::Dispose(BlackboardB *this,byte param_1){
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

int BlackboardB::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardB::GetBlackboardFractionFloatEntry2(BlackboardB *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardB::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardB::GetBlackboardFloatEntry2(BlackboardB *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardB::GetBlackboardIntEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardB::GetBlackboardIntEntry2(BlackboardB *this,int param_1){
		return (int)(&(this->parent).ints + param_1);
		}
		
	*/
	return 0;
}

int BlackboardB::GetBlackboardFractionFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardB::GetBlackboardFractionFloatEntry(BlackboardB *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardB::GetBlackboardFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardB::GetBlackboardFloatEntry(BlackboardB *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardB::GetBlackboardIntEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardB::GetBlackboardIntEntry(BlackboardB *this,int param_1){
		return (int)(&(this->parent).ints + param_1);
		}
		
	*/
	return 0;
}

uint BlackboardB::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardB::GetUnkCount1(void){
		return 5;
		}
		
	*/
	return 0;
}

uint BlackboardB::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardB::GetFractionFloatsCount(void){
		return 1;
		}
		
	*/
	return 0;
}

uint BlackboardB::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardB::GetFloatsCount(void){
		return 4;
		}
		
	*/
	return 0;
}

uint BlackboardB::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardB::GetIntsCount(void){
		return 2;
		}
		
	*/
	return 0;
}

uint BlackboardB::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardB::GetUnkCount2(void){
		return 0x12;
		}
		
	*/
	return 0;
}

