#include "headers/Unknown/Families/Families2X/Family23/UnkFamily23Base.h"

void UnkFamily23Base::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily23Base::Init(UnkFamily23Base *this){
		int iVar1;
		float fVar2;
		float fVar3;
		this->field8_0x20 = this->field6_0x18;
		iVar1 = this->field2_0x8;
		this->field9_0x24 = this->field7_0x1c;
		fVar2 = FLOAT_0038e104;
		if (iVar1 != 0) {
		fVar3 = this->field8_0x20 * *(float *)(iVar1 + 0x24) +this->field9_0x24 * *(float *)(iVar1 + 0x20);
		this->field8_0x20 =this->field8_0x20 * *(float *)(iVar1 + 0x20) - this->field9_0x24 * *(float *)(iVar1 + 0x24);
		this->field9_0x24 = fVar3;
		fVar3 = fVar3 * fVar3 + this->field8_0x20 * this->field8_0x20;
		if ((fVar2 < (fVar3 - FLOAT_0038639c) * (fVar3 - FLOAT_0038639c)) &&(fVar2 < (fVar3 - FLOAT_0038639c) * (fVar3 - FLOAT_0038639c))) {
		fVar3 = SQRT(fVar3);
		if ((FLOAT_0038e000 < fVar3) || (fVar3 < FLOAT_0038e01c)) {
		fVar3 = FLOAT_0038639c / fVar3;
		}
		else {
		fVar3 = 0.0;
		}
		this->field9_0x24 = this->field9_0x24 * fVar3;
		this->field8_0x20 = this->field8_0x20 * fVar3;
		}
		iVar1 = this->field2_0x8;
		this->field3_0xc = *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0xc);
		this->field4_0x10 =*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0x10);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily23Base::Construct(int param_1, uint param_2, float param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily23Base * __thiscall UnkFamily23Base::Construct(UnkFamily23Base *this,int param_1,undefined4 param_2,float param_3){
		float fVar1;
		this->field3_0xc = 0;
		this->field4_0x10 = 0;
		this->field5_0x14 = param_2;
		fVar1 = FLOAT_0038639c;
		this->field1_0x4 = 0;
		this->field_0x28 = 0;
		this->field_0x3c = 0;
		this->field34_0x40 = fVar1;
		fVar1 = FLOAT_003863a8 / FLOAT_0039eec0;
		this->field2_0x8 = param_1;
		param_1 = (int)(fVar1 * param_3);
		this->vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		Global::Trigonometry(&param_1,&this->field6_0x18,&this->field7_0x1c);
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily23Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily23Base * __thiscall UnkFamily23Base::Dispose(UnkFamily23Base *this,byte param_1){
		this->vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily23Base::Construct_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily23Base::Construct(UnkFamily23Base *this){
		this->vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		return;
		}
		
	*/
	return;
}

void UnkFamily23Base::Construct_4(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily23Base::Construct(UnkFamily23Base *this,undefined4 param_1){
		float fVar1;
		this->field5_0x14 = param_1;
		fVar1 = FLOAT_0038639c;
		this->vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		this->field1_0x4 = 0;
		this->field2_0x8 = 0;
		this->field3_0xc = 0;
		this->field4_0x10 = 0;
		this->field6_0x18 = fVar1;
		this->field7_0x1c = 0.0;
		this->field_0x28 = 0;
		this->field_0x3c = 0;
		this->field34_0x40 = fVar1;
		Init(this);
		return;
		}
		
	*/
	return;
}

void UnkFamily23Base::Construct_5(int param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily23Base * __thiscall UnkFamily23Base::Construct(UnkFamily23Base *this,int param_1,float param_2){
		float fVar1;
		this->field3_0xc = 0;
		this->field4_0x10 = 0;
		this->field5_0x14 = param_1;
		this->field34_0x40 = FLOAT_0038639c;
		fVar1 = FLOAT_003863a8 / FLOAT_0039eec0;
		this->field1_0x4 = 0;
		this->field2_0x8 = 0;
		this->field_0x28 = 0;
		this->field_0x3c = 0;
		param_1 = (int)(fVar1 * param_2);
		this->vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		Global::Trigonometry(&param_1,&this->field6_0x18,&this->field7_0x1c);
		Init(this);
		return this;
		}
		
	*/
	return;
}

