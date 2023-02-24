#include "headers/Known/Math/Spline/SplineB.h"

SplineB::SplineB() : SplineAbstract(), unkStruct()
{

}

SplineB::~SplineB()
{

}

SplineB* SplineB::Step(float step, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineB * __thiscall SplineB::Step(SplineB *this,float step,undefined4 param_2){
		int iVar1;
		SplineA *pAVar2;
		(this->parent).startupLevel = (this->parent).position / (this->parent).length;
		(this->parent).position = step + (this->parent).position;
		pAVar2 = (SplineA *)this;
		if (FLOAT_0038639c <= (this->parent).startupLevel) {
		iVar1 = (this->parent).repeats + -1;
		(this->parent).repeats = iVar1;
		(this->parent).position = 0.0;
		if (iVar1 < 1) {
		pAVar2 = (SplineA *)(this->parent).next;
		}
		}
		iVar1 = UnkFamily20Base::FUN_00109e40(&this->unkStruct,step,param_2);
		if ((pAVar2 != (SplineA *)0x0) || ((this->unkStruct).field8_0x3c = 0, iVar1 == 0)) {
		this = (SplineB *)pAVar2;
		}
		return this;
		}
		
	*/
	return null;
}

void SplineB::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SplineB::Reset(SplineB *this){
		UnkFamily20BaseSub::thunk_FUN_000c3ac0(&(this->unkStruct).subStruct);
		(this->unkStruct).field6_0x34 = FLOAT_00386ab4;
		(this->unkStruct).field7_0x38 = FLOAT_0038d3f4;
		(this->unkStruct).field8_0x3c = 4;
		(this->parent).position = 0.0;
		(this->parent).startupLevel = 0.0;
		(this->parent).repeats = 0;
		return;
		}
		
	*/
	return;
}


void SplineB::Method3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SplineB::Method3(SplineB *this){
		(*(code *)((this->unkStruct).vtable)->field3_0xc)();
		return;
		}
		
	*/
	return;
}