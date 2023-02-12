#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeCharacter.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2C.h"
void InstanceNodeCharacter::Construct(NodeRelated2C* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCharacter * __thiscall InstanceNodeCharacter::Construct(InstanceNodeCharacter *this,NodeRelated2C *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Character;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeCharacter::GetPosition(Vector4* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeCharacter::GetPosition(InstanceNodeCharacter *this,Vector4 *out){
		Vector4 *pVVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		NodeRelated2C *pNVar5;
		pNVar5 = this->field1_0x18;
		if ((*(byte *)&(pNVar5->parent).field1_0x60.x & 4) != 0) {
		fVar2 = (pNVar5->parent).parent.vec1.w;
		fVar3 = (pNVar5->parent).parent.vec1.z;
		fVar4 = (pNVar5->parent).parent.vec1.y;
		(pNVar5->parent).parent.field27_0x40.x = (pNVar5->parent).parent.vec1.x;
		(pNVar5->parent).parent.field27_0x40.y = fVar4;
		(pNVar5->parent).parent.field27_0x40.z = fVar3;
		(pNVar5->parent).parent.field27_0x40.w = fVar2;
		pVVar1 = &(pNVar5->parent).field1_0x60;
		pVVar1->x = (float)((uint)pVVar1->x & 0xfffffffa);
		}
		out->x = (pNVar5->parent).parent.field27_0x40.x;
		out->y = (pNVar5->parent).parent.field27_0x40.y;
		out->z = (pNVar5->parent).parent.field27_0x40.z;
		out->w = (pNVar5->parent).parent.field27_0x40.w;
		return;
		}
		
	*/
	return;
}

void InstanceNodeCharacter::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeCharacter::Dispose(InstanceNodeCharacter *this,byte param_1){
		InstanceNodeA::Dispose((InstanceNodeA *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

byte InstanceNodeCharacter::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeCharacter::GetIndex(void){
		return 0xc;
		}
		
	*/
	return 0;
}

uint InstanceNodeCharacter::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeCharacter::GetBuilderIndex(void){
		return 0x9002;
		}
		
	*/
	return 0;
}

