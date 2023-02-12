#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardD.h"

void BlackboardD::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardD * __thiscall BlackboardD::Construct(BlackboardD *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_D;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardD::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardAbstract * __thiscall BlackboardD::Dispose(BlackboardD *this,byte param_1){
		(this->parent).vtable = (Blackboard_VTable *)&Unknown_VT;
		BlackboardAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int BlackboardD::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardD::GetBlackboardFractionFloatEntry2(BlackboardD *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardD::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardD::GetBlackboardFloatEntry2(BlackboardD *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int* BlackboardD::GetBlackboardIntEntry2(int i) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall BlackboardD::GetBlackboardIntEntry2(BlackboardD *this,int i){
		return (int *)(&(this->parent).ints + i);
		}
		
	*/
	return null;
}

uint* BlackboardD::GetBlackboardFractionFloatEntry(int i) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __thiscall BlackboardD::GetBlackboardFractionFloatEntry(BlackboardD *this,int i){
		return (uint *)(&(this->parent).fractions + i);
		}
		
	*/
	return null;
}

float* BlackboardD::GetBlackboardFloatEntry(int i) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float * __thiscall BlackboardD::GetBlackboardFloatEntry(BlackboardD *this,int i){
		return (float *)(&(this->parent).floats + i);
		}
		
	*/
	return null;
}

int* BlackboardD::GetBlackboardIntEntry(int i) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall BlackboardD::GetBlackboardIntEntry(BlackboardD *this,int i){
		return (int *)(&(this->parent).ints + i);
		}
		
	*/
	return null;
}

int BlackboardD::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int BlackboardD::GetUnkCount1(void){
		return 2;
		}
		
	*/
	return 0;
}

int BlackboardD::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int BlackboardD::GetFractionFloatsCount(void){
		return 0;
		}
		
	*/
	return 0;
}

int BlackboardD::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int BlackboardD::GetFloatsCount(void){
		return 3;
		}
		
	*/
	return 0;
}

int BlackboardD::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int BlackboardD::GetIntsCount(void){
		return 2;
		}
		
	*/
	return 0;
}

uint BlackboardD::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardD::GetUnkCount2(void){
		return 0x13;
		}
		
	*/
	return 0;
}

