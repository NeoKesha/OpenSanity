#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardC.h"

void BlackboardC::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardC * __thiscall BlackboardC::Construct(BlackboardC *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_C;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardC::Dispose(BlackboardC *this,byte param_1){
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

int BlackboardC::GetBlackboardFractionFloatEntry2(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardC::GetBlackboardFractionFloatEntry2(BlackboardC *this,int index){
		return (int)(this->fractions + index);
		}
		
	*/
	return 0;
}

int BlackboardC::GetBlackboardFloatEntry2(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardC::GetBlackboardFloatEntry2(BlackboardC *this,int index){
		return (int)(this->floats + index);
		}
		
	*/
	return 0;
}

int BlackboardC::GetBlackboardIntEntry2(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardC::GetBlackboardIntEntry2(BlackboardC *this,int index){
		return (int)(this->ints + index);
		}
		
	*/
	return 0;
}

int* BlackboardC::GetBlackboardFractionFloatEntry(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall BlackboardC::GetBlackboardFractionFloatEntry(BlackboardC *this,int index){
		return this->fractions + index;
		}
		
	*/
	return null;
}

float* BlackboardC::GetBlackboardFloatEntry(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float * __thiscall BlackboardC::GetBlackboardFloatEntry(BlackboardC *this,int index){
		return this->floats + index;
		}
		
	*/
	return null;
}

int* BlackboardC::GetBlackboardIntEntry(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall BlackboardC::GetBlackboardIntEntry(BlackboardC *this,int index){
		return this->ints + index;
		}
		
	*/
	return null;
}

uint BlackboardC::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardC::GetUnkCount1(void){
		return 0;
		}
		
	*/
	return 0;
}

int BlackboardC::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int BlackboardC::GetFractionFloatsCount(void){
		return 9;
		}
		
	*/
	return 0;
}

int BlackboardC::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int BlackboardC::GetFloatsCount(void){
		return 0x38;
		}
		
	*/
	return 0;
}

int BlackboardC::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int BlackboardC::GetIntsCount(void){
		return 3;
		}
		
	*/
	return 0;
}

uint BlackboardC::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardC::GetUnkCount2(void){
		return 0x13;
		}
		
	*/
	return 0;
}

