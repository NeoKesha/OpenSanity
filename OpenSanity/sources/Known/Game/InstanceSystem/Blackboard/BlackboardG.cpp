#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardG.h"

void BlackboardG::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardG * __thiscall BlackboardG::Construct(BlackboardG *this,int param_1){
		BlackboardAbstract::Construct(&this->parent);
		(this->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_G;
		if (param_1 != 0) {
		BlackboardAbstract::InitBlackboard(&this->parent,(ParameterTable *)param_1);
		}
		return this;
		}
		
	*/
	return;
}

void BlackboardG::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardG::Dispose(BlackboardG *this,byte param_1){
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

int BlackboardG::GetBlackboardFractionFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardG::GetBlackboardFractionFloatEntry2(BlackboardG *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardG::GetBlackboardFloatEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardG::GetBlackboardFloatEntry2(BlackboardG *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardG::GetBlackboardIntEntry2(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardG::GetBlackboardIntEntry2(BlackboardG *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

int BlackboardG::GetBlackboardFractionFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardG::GetBlackboardFractionFloatEntry(BlackboardG *this,int param_1){
		return (int)(&(this->parent).fractions + param_1);
		}
		
	*/
	return 0;
}

int BlackboardG::GetBlackboardFloatEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardG::GetBlackboardFloatEntry(BlackboardG *this,int param_1){
		return (int)(&(this->parent).floats + param_1);
		}
		
	*/
	return 0;
}

int BlackboardG::GetBlackboardIntEntry(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardG::GetBlackboardIntEntry(BlackboardG *this,int param_1){
		return (int)(&(this->parent).field6_0x18 + param_1);
		}
		
	*/
	return 0;
}

uint BlackboardG::GetUnkCount1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardG::GetUnkCount1(void){
		return 4;
		}
		
	*/
	return 0;
}

uint BlackboardG::GetFractionFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardG::GetFractionFloatsCount(void){
		return 0;
		}
		
	*/
	return 0;
}

uint BlackboardG::GetFloatsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardG::GetFloatsCount(void){
		return 1;
		}
		
	*/
	return 0;
}

uint BlackboardG::GetIntsCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardG::GetIntsCount(void){
		return 2;
		}
		
	*/
	return 0;
}

uint BlackboardG::GetUnkCount2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 BlackboardG::GetUnkCount2(void){
		return 0x12;
		}
		
	*/
	return 0;
}

