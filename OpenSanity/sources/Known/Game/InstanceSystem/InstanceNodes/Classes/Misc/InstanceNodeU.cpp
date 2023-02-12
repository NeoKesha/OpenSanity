#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeU.h"

#include "headers/Known/Time/UnkTimePack.h"
void InstanceNodeU::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeU * __fastcall InstanceNodeU::Construct(InstanceNodeU *this){
		uint uVar1;
		(this->parent).ctx = (InstanceContext *)0x0;
		(this->parent).field2_0x8 = 0;
		(this->parent).field3_0xa = 0;
		(this->parent).time = 0;
		(this->parent).field5_0x10 = (InstanceNodeAbstract *)0x0;
		(this->parent).field6_0x14 = 0;
		uVar1 = this->flags;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_U;
		this->field1_0x18 = 0.0;
		this->flags = uVar1 & 0xfffffffd | 1;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeU::UpdateBothMatrixes() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeU::UpdateBothMatrixes(InstanceNodeU *this){
		InstanceContext *pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		InstanceTransform *transform;
		pIVar1 = (this->parent).ctx;
		this->field1_0x18 = FLOAT_0038e2a4;
		transform = (pIVar1->parent).transform;
		InstanceTransform::FillMatrix(transform);
		fVar2 = (transform->matrix).m12;
		fVar3 = (transform->matrix).m13;
		fVar4 = (transform->matrix).m14;
		(this->matrixPrev).m11 = (transform->matrix).m11;
		(this->matrixPrev).m12 = fVar2;
		(this->matrixPrev).m13 = fVar3;
		(this->matrixPrev).m14 = fVar4;
		fVar2 = (transform->matrix).m22;
		fVar3 = (transform->matrix).m23;
		fVar4 = (transform->matrix).m24;
		(this->matrixPrev).m21 = (transform->matrix).m21;
		(this->matrixPrev).m22 = fVar2;
		(this->matrixPrev).m23 = fVar3;
		(this->matrixPrev).m24 = fVar4;
		fVar2 = (transform->matrix).m32;
		fVar3 = (transform->matrix).m33;
		fVar4 = (transform->matrix).m34;
		(this->matrixPrev).m31 = (transform->matrix).m31;
		(this->matrixPrev).m32 = fVar2;
		(this->matrixPrev).m33 = fVar3;
		(this->matrixPrev).m34 = fVar4;
		fVar2 = (transform->matrix).m42;
		fVar3 = (transform->matrix).m43;
		fVar4 = (transform->matrix).m44;
		(this->matrixPrev).m41 = (transform->matrix).m41;
		(this->matrixPrev).m42 = fVar2;
		(this->matrixPrev).m43 = fVar3;
		(this->matrixPrev).m44 = fVar4;
		transform = (((this->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		fVar2 = (transform->matrix).m12;
		fVar3 = (transform->matrix).m13;
		fVar4 = (transform->matrix).m14;
		(this->matrixNow).m11 = (transform->matrix).m11;
		(this->matrixNow).m12 = fVar2;
		(this->matrixNow).m13 = fVar3;
		(this->matrixNow).m14 = fVar4;
		fVar2 = (transform->matrix).m22;
		fVar3 = (transform->matrix).m23;
		fVar4 = (transform->matrix).m24;
		(this->matrixNow).m21 = (transform->matrix).m21;
		(this->matrixNow).m22 = fVar2;
		(this->matrixNow).m23 = fVar3;
		(this->matrixNow).m24 = fVar4;
		fVar2 = (transform->matrix).m32;
		fVar3 = (transform->matrix).m33;
		fVar4 = (transform->matrix).m34;
		(this->matrixNow).m31 = (transform->matrix).m31;
		(this->matrixNow).m32 = fVar2;
		(this->matrixNow).m33 = fVar3;
		(this->matrixNow).m34 = fVar4;
		fVar2 = (transform->matrix).m42;
		fVar3 = (transform->matrix).m43;
		fVar4 = (transform->matrix).m44;
		(this->matrixNow).m41 = (transform->matrix).m41;
		(this->matrixNow).m42 = fVar2;
		(this->matrixNow).m43 = fVar3;
		(this->matrixNow).m44 = fVar4;
		this->flags = this->flags | 2;
		return;
		}
		
	*/
	return;
}

bool InstanceNodeU::Step(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeU::Step(InstanceNodeU *this,UnkTimePack *time){
		short *psVar1;
		InstanceTransform *transform;
		float fVar2;
		float fVar3;
		float fVar4;
		if (((*(byte *)&time->flags & 1) == 0) || ((*(byte *)&this->flags & 2) == 0)) {
		 First update UpdateBothMatrixes(this);
		}
		else {
		fVar2 = (this->matrixNow).m12;
		fVar3 = (this->matrixNow).m13;
		fVar4 = (this->matrixNow).m14;
		(this->matrixPrev).m11 = (this->matrixNow).m11;
		(this->matrixPrev).m12 = fVar2;
		(this->matrixPrev).m13 = fVar3;
		(this->matrixPrev).m14 = fVar4;
		fVar2 = (this->matrixNow).m22;
		fVar3 = (this->matrixNow).m23;
		fVar4 = (this->matrixNow).m24;
		(this->matrixPrev).m21 = (this->matrixNow).m21;
		(this->matrixPrev).m22 = fVar2;
		(this->matrixPrev).m23 = fVar3;
		(this->matrixPrev).m24 = fVar4;
		fVar2 = (this->matrixNow).m32;
		fVar3 = (this->matrixNow).m33;
		fVar4 = (this->matrixNow).m34;
		(this->matrixPrev).m31 = (this->matrixNow).m31;
		(this->matrixPrev).m32 = fVar2;
		(this->matrixPrev).m33 = fVar3;
		(this->matrixPrev).m34 = fVar4;
		fVar2 = (this->matrixNow).m42;
		fVar3 = (this->matrixNow).m43;
		fVar4 = (this->matrixNow).m44;
		(this->matrixPrev).m41 = (this->matrixNow).m41;
		(this->matrixPrev).m42 = fVar2;
		(this->matrixPrev).m43 = fVar3;
		(this->matrixPrev).m44 = fVar4;
		transform = (((this->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		fVar2 = (transform->matrix).m12;
		fVar3 = (transform->matrix).m13;
		fVar4 = (transform->matrix).m14;
		(this->matrixNow).m11 = (transform->matrix).m11;
		(this->matrixNow).m12 = fVar2;
		(this->matrixNow).m13 = fVar3;
		(this->matrixNow).m14 = fVar4;
		fVar2 = (transform->matrix).m22;
		fVar3 = (transform->matrix).m23;
		fVar4 = (transform->matrix).m24;
		(this->matrixNow).m21 = (transform->matrix).m21;
		(this->matrixNow).m22 = fVar2;
		(this->matrixNow).m23 = fVar3;
		(this->matrixNow).m24 = fVar4;
		fVar2 = (transform->matrix).m32;
		fVar3 = (transform->matrix).m33;
		fVar4 = (transform->matrix).m34;
		(this->matrixNow).m31 = (transform->matrix).m31;
		(this->matrixNow).m32 = fVar2;
		(this->matrixNow).m33 = fVar3;
		(this->matrixNow).m34 = fVar4;
		fVar2 = (transform->matrix).m42;
		fVar3 = (transform->matrix).m43;
		fVar4 = (transform->matrix).m44;
		(this->matrixNow).m41 = (transform->matrix).m41;
		(this->matrixNow).m42 = fVar2;
		(this->matrixNow).m43 = fVar3;
		(this->matrixNow).m44 = fVar4;
		this->field1_0x18 = (float)time->time2 * TimePerTick1;
		}
		if ((*(byte *)&time->flags & 1) != 0) {
		if (((~*(byte *)&(this->parent).field2_0x8 & 1) == 0) && ((this->parent).time != 0)) {
		psVar1 = &(this->parent).field2_0x8;
		*(byte *)psVar1 = *(byte *)psVar1 & 0xfe;
		return true;
		}
		(this->parent).time = time->time1;
		}
		return true;
		}
		
	*/
	return false;
}

byte InstanceNodeU::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeU::GetIndex(void){
		return 0;
		}
		
	*/
	return 0;
}

int InstanceNodeU::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int InstanceNodeU::GetBuilderIndex(void){
		return 0x1309;
		}
		
	*/
	return 0;
}

void InstanceNodeU::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeU * __thiscall InstanceNodeU::Dispose(InstanceNodeU *this,byte param_1){
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

