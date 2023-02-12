#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3F.h"

#include "headers/Known/Math/Matrix4.h"
void UnkFamily3F::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3F * __thiscall UnkFamily3F::Construct(UnkFamily3F *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		fVar2 = FLOAT_003869d8;
		fVar1 = FLOAT_0038639c;
		this->field1_0x4 = param_1;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_F;
		*(undefined4 *)&this->field_0x80 = 0;
		*(undefined4 *)&this->field_0x84 = 0;
		*(float *)&this->field_0x88 = fVar2;
		*(float *)&this->field_0x8c = fVar1;
		*(undefined4 *)&this->field_0x90 = 0;
		*(undefined4 *)&this->field_0x94 = 0;
		*(float *)&this->field_0x98 = fVar2;
		*(float *)&this->field_0x9c = fVar1;
		*(float *)&this->field_0xa8 = fVar1;
		*(undefined4 *)&this->field_0x8 = 0;
		*(undefined4 *)&this->field_0xc = 0;
		*(undefined4 *)&this->field_0x10 = 0;
		*(undefined4 *)&this->field_0x14 = 0;
		*(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 & 0x80ffffff | 0xffffff;
		*(undefined4 *)&this->field_0x24 = 0;
		*(undefined4 *)&this->field_0x28 = 0;
		*(undefined4 *)&this->field_0x2c = 0;
		*(undefined4 *)&this->field_0x30 = 0;
		*(undefined4 *)&this->field_0x34 = 0;
		*(undefined4 *)&this->field_0x38 = 0;
		Matrix4::Construct1(&this->field58_0x40);
		return this;
		}
		
	*/
	return;
}

void UnkFamily3F::FUN_00170250(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3F::FUN_00170250(UnkFamily3F *this,int param_1){
		FUN_001f9690(param_1,this->field_0xa0,&this->parent);
		*(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | 0x40000000;
		if (this->field_0xa1 != 0xff) {
		FUN_001f9690(param_1,this->field_0xa1,&this->parent);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily3F::FUN_001702a0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3F::FUN_001702a0(UnkFamily3F *this,int param_1){
		FUN_001f9710(param_1,this->field_0xa0,this);
		*(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 & 0xbfffffff;
		if (this->field_0xa1 != 0xff) {
		FUN_001f9710(param_1,this->field_0xa1,this);
		}
		return;
		}
		
	*/
	return;
}

bool UnkFamily3F::FUN_00175c70(void* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily3F::FUN_00175c70(UnkFamily3F *this,void *param_1,Matrix4 *param_2){
		InstanceContext *pIVar1;
		Matrix4Array *pMVar2;
		InstanceTransform *transform;
		float fVar3;
		float fVar4;
		float fVar5;
		InstanceNodeOGI *nodeN;
		Matrix4 *pMVar6;
		float local_20 [7];
		pIVar1 = (this->field1_0x4->parent).ctx;
		if (this->field_0xa2 == -1) {
		FUN_001f9070(param_1,*(Matrix4 **)(*(int *)((int)param_1 + 8) + 0x60),'\0',param_2);
		transform = (pIVar1->parent).transform;
		InstanceTransform::FillMatrix(transform);
		FUN_000d8510(param_2,&transform->matrix,&this->field58_0x40);
		}
		else {
		nodeN = (InstanceNodeOGI *)InstanceDataList::GetNode(&pIVar1->nodes,OGI);
		pMVar2 = nodeN->field4_0x24->matrixArray2;
		if (pMVar2 == (Matrix4Array *)0x0) {
		pMVar6 = (Matrix4 *)0x0;
		}
		else {
		pMVar6 = pMVar2->array[(byte)this->field_0xa2];
		}
		pMVar6 = FUN_001f8be0(pMVar6);
		fVar3 = pMVar6->m12;
		fVar4 = pMVar6->m13;
		fVar5 = pMVar6->m14;
		(this->field58_0x40).m11 = pMVar6->m11;
		(this->field58_0x40).m12 = fVar3;
		(this->field58_0x40).m13 = fVar4;
		(this->field58_0x40).m14 = fVar5;
		fVar3 = pMVar6->m22;
		fVar4 = pMVar6->m23;
		fVar5 = pMVar6->m24;
		(this->field58_0x40).m21 = pMVar6->m21;
		(this->field58_0x40).m22 = fVar3;
		(this->field58_0x40).m23 = fVar4;
		(this->field58_0x40).m24 = fVar5;
		fVar3 = pMVar6->m32;
		fVar4 = pMVar6->m33;
		fVar5 = pMVar6->m34;
		(this->field58_0x40).m31 = pMVar6->m31;
		(this->field58_0x40).m32 = fVar3;
		(this->field58_0x40).m33 = fVar4;
		(this->field58_0x40).m34 = fVar5;
		fVar3 = pMVar6->m42;
		fVar4 = pMVar6->m43;
		fVar5 = pMVar6->m44;
		(this->field58_0x40).m41 = pMVar6->m41;
		(this->field58_0x40).m42 = fVar3;
		(this->field58_0x40).m43 = fVar4;
		(this->field58_0x40).m44 = fVar5;
		}
		FUN_000e9620(local_20,*(float *)&this->field_0x24,*(int *)&this->field_0x28);
		FUN_001f8270(param_1,local_20);
		return true;
		}
		
	*/
	return false;
}

void UnkFamily3F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3Abstract * __thiscall UnkFamily3F::Dispose(UnkFamily3F *this,byte param_1){
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

