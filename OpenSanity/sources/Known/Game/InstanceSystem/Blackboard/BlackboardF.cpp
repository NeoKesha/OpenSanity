#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardF.h"

void BlackboardF::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardF * __thiscall BlackboardF::Construct(BlackboardF *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_F;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardF::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardF::Dispose(BlackboardF *this,byte param_1){
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

int BlackboardF::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardF::GetBlackboardFractionFloatEntry2(BlackboardF *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardF::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardF::GetBlackboardFloatEntry2(BlackboardF *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardF::GetBlackboardIntEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardF::GetBlackboardIntEntry2(BlackboardF *this,int param_1){
		return (int)(&this->field_0x5c + param_1 * 4);
		}
		
	*/
	return 0;
}

int BlackboardF::GetBlackboardFractionFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardF::GetBlackboardFractionFloatEntry(BlackboardF *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardF::GetBlackboardFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardF::GetBlackboardFloatEntry(BlackboardF *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardF::GetBlackboardIntEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardF::GetBlackboardIntEntry(BlackboardF *this,int param_1){
		return (int)(&this->field_0x5c + param_1 * 4);
		}
		
	*/
	return 0;
}

uint BlackboardF::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardF::GetUnkCount1(void){
		return 7;
		}
		
	*/
	return 0;
}

uint BlackboardF::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardF::GetFractionFloatsCount(void){
		return 0;
		}
		
	*/
	return 0;
}

uint BlackboardF::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardF::GetFloatsCount(void){
		return 0x12;
		}
		
	*/
	return 0;
}

uint BlackboardF::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardF::GetIntsCount(void){
		return 2;
		}
		
	*/
	return 0;
}

uint BlackboardF::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardF::GetUnkCount2(void){
		return 0x12;
		}
		
	*/
	return 0;
}

