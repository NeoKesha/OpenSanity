#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardSub.h"

#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAbstract.h"
#include "headers/Unknown/ParameterTable.h"
void BlackboardSub::Construct(ParameterTable* parameters, BlackboardAbstract* blackboard) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardSub * __thiscall BlackboardSub::Construct(BlackboardSub *this,ParameterTable *parameters,BlackboardAbstract *blackboard){
		int fractionsCnt;
		int floatsCnt;
		int intsCnt;
		uint i;
		int *fractionEntry;
		float fraction;
		fractionsCnt = (*blackboard->vtable->GetFractionFloatsCount)();
		floatsCnt = (*blackboard->vtable->GetFloatsCount)();
		intsCnt = (*blackboard->vtable->GetIntsCount)();
		this->flagsCnt = *(char *)&parameters->instancePropsHeader - (char)fractionsCnt;
		blackboard._0_1_ = (char)floatsCnt;
		this->floatsCnt = *(char *)((int)&parameters->instancePropsHeader + 1) - (char)blackboard;
		this->intsCnt = *(char *)((int)&parameters->instancePropsHeader + 2) - (char)intsCnt;
		i = 0;
		if (this->flagsCnt != 0) {
		fraction = FLOAT_2PI * FLOAT_003863a0;
		fractionsCnt = fractionsCnt * 4;
		fractionEntry = this->array;
		do {
		*fractionEntry =(int)((float)*(int *)(fractionsCnt + (int)(parameters->fractions).fraction) * fraction);
		i = i + 1;
		fractionsCnt = fractionsCnt + 4;
		fractionEntry = fractionEntry + 1;
		}
		 while (i < this->flagsCnt);
		}
		i = 0;
		if (this->floatsCnt != 0) {
		floatsCnt = floatsCnt << 2;
		do {
		this->array[this->flagsCnt + i] = *(int *)(floatsCnt + (int)(parameters->floats).floats);
		i = i + 1;
		floatsCnt = floatsCnt + 4;
		}
		 while (i < this->floatsCnt);
		}
		i = 0;
		if (this->intsCnt != 0) {
		intsCnt = intsCnt * 4;
		do {
		this->array[(uint)this->flagsCnt + (uint)this->floatsCnt + i] =*(int *)(intsCnt + (int)(parameters->ints).ints);
		i = i + 1;
		intsCnt = intsCnt + 4;
		}
		 while (i < this->intsCnt);
		}
		return this;
		}
		
	*/
	return;
}

