#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6A.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void UnkFamily6A::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6A::Init(UnkFamily6A *this){
		float fVar1;
		float fVar2;
		float fVar3;
		Vector4 local_30;
		Vector4 local_20;
		InstanceTransform *transform;
		transform = *(InstanceTransform **)(*(int *)((this->parent).field14_0x14 + 0x10) + 0x18);
		InstanceTransform::FillMatrix(transform);
		local_30.x = FLOAT_0038b928;
		local_30.y = FLOAT_0038b3d0;
		fVar1 = (transform->matrix).m12;
		fVar2 = (transform->matrix).m13;
		fVar3 = (transform->matrix).m14;
		(this->field17_0xf0).m11 = (transform->matrix).m11;
		(this->field17_0xf0).m12 = fVar1;
		(this->field17_0xf0).m13 = fVar2;
		(this->field17_0xf0).m14 = fVar3;
		fVar1 = (transform->matrix).m22;
		fVar2 = (transform->matrix).m23;
		fVar3 = (transform->matrix).m24;
		(this->field17_0xf0).m21 = (transform->matrix).m21;
		(this->field17_0xf0).m22 = fVar1;
		(this->field17_0xf0).m23 = fVar2;
		(this->field17_0xf0).m24 = fVar3;
		fVar1 = (transform->matrix).m32;
		fVar2 = (transform->matrix).m33;
		fVar3 = (transform->matrix).m34;
		(this->field17_0xf0).m31 = (transform->matrix).m31;
		(this->field17_0xf0).m32 = fVar1;
		(this->field17_0xf0).m33 = fVar2;
		(this->field17_0xf0).m34 = fVar3;
		fVar1 = (transform->matrix).m42;
		fVar2 = (transform->matrix).m43;
		fVar3 = (transform->matrix).m44;
		(this->field17_0xf0).m41 = (transform->matrix).m41;
		(this->field17_0xf0).m42 = fVar1;
		(this->field17_0xf0).m43 = fVar2;
		(this->field17_0xf0).m44 = fVar3;
		(this->field18_0x130).x = Vector4_0039ef70.x;
		(this->field18_0x130).y = Vector4_0039ef70.y;
		(this->field18_0x130).z = Vector4_0039ef70.z;
		local_20.x = FLOAT_0038bdf8;
		local_30.w = FLOAT_0038639c;
		local_30.z = local_30.x;
		(this->field18_0x130).w = FLOAT_0038639c;
		local_20.y = 0.0;
		local_20.z = local_20.x;
		local_20.w = local_30.w;
		AutoClass40::Set(&this->field19_0x140,&local_20,&local_30);
		UnkFamily6Abstract::thunk_FUN_000870c0(&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily6A::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily6A * __thiscall UnkFamily6A::Construct(UnkFamily6A *this,int param_1){
		(this->parent).field14_0x14 = param_1;
		(this->parent).field15_0x18 = 0;
		(this->parent).field13_0x10 = 2;
		(this->parent).vtable = &UnkFamily6_VT_A;
		AutoClass40::Construct(&this->field19_0x140);
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily6A::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6A::Dispose(UnkFamily6A *this){
		InstanceNodePhysics *node;
		(this->parent).vtable = &UnkFamily6_VT_A;
		AutoClass40::Dispose(&this->field19_0x140);
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6A::FUN_0007fa50(Vector4* param_1, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6A::FUN_0007fa50(UnkFamily6A *this,Vector4 *param_1,InstanceContext *ctx){
		InstanceTransform *transform;
		Vector4 local_20;
		local_20.x = param_1->x;
		local_20.y = param_1->y;
		local_20.z = param_1->z;
		local_20.w = param_1->w;
		transform = (ctx->parent).transform;
		InstanceTransform::FillMatrix(transform);
		InstanceTransform::FUN_000d3ed0(transform,&local_20);
		(this->field18_0x130).x = (this->field18_0x130).x + local_20.x;
		(this->field18_0x130).y = (this->field18_0x130).y + local_20.y;
		(this->field18_0x130).z = (this->field18_0x130).z + local_20.z;
		return;
		}
		
	*/
	return;
}

void UnkFamily6A::FUN_000888b0(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6A::FUN_000888b0(UnkFamily6A *this,float param_1){
		NodeRelated2C *this_00;
		undefined4 uVar1;
		int this_01;
		thunk_FUN_0007f7a0((int)this,param_1);
		uVar1 = thunk_FUN_000881c0(this_01,param_1);
		thunk_FUN_00088520((int)this);
		UnkFamily6Abstract::thunk_FUN_0007f010(&this->parent);
		this_00 = (NodeRelated2C *)(this->parent).field14_0x14;
		if ((char)uVar1 != '\0') {
		NodeRelated2C::thunk_FUN_00073fd0(this_00,false);
		return;
		}
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this_00,0x22,(InstanceContextRefCounter *)(this_00->parent).parent.ctx,false,false);
		return;
		}
		
	*/
	return;
}

void UnkFamily6A::Dispose_5(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily6Abstract * __thiscall UnkFamily6A::Dispose(UnkFamily6A *this,byte param_1){
		InstanceNodePhysics *node;
		(this->parent).vtable = &UnkFamily6_VT_A;
		AutoClass40::Dispose(&this->field19_0x140);
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void UnkFamily6A::FUN_0007f9b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined __fastcall UnkFamily6A::FUN_0007f9b0(UnkFamily6A *this){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = (this->field17_0xf0).m12;
		fVar2 = (this->field17_0xf0).m13;
		fVar3 = (this->field17_0xf0).m14;
		(this->parent).field22_0xa0.m11 = (this->field17_0xf0).m11;
		(this->parent).field22_0xa0.m12 = fVar1;
		(this->parent).field22_0xa0.m13 = fVar2;
		(this->parent).field22_0xa0.m14 = fVar3;
		fVar1 = (this->field17_0xf0).m22;
		fVar2 = (this->field17_0xf0).m23;
		fVar3 = (this->field17_0xf0).m24;
		(this->parent).field22_0xa0.m21 = (this->field17_0xf0).m21;
		(this->parent).field22_0xa0.m22 = fVar1;
		(this->parent).field22_0xa0.m23 = fVar2;
		(this->parent).field22_0xa0.m24 = fVar3;
		fVar1 = (this->field17_0xf0).m32;
		fVar2 = (this->field17_0xf0).m33;
		fVar3 = (this->field17_0xf0).m34;
		(this->parent).field22_0xa0.m31 = (this->field17_0xf0).m31;
		(this->parent).field22_0xa0.m32 = fVar1;
		(this->parent).field22_0xa0.m33 = fVar2;
		(this->parent).field22_0xa0.m34 = fVar3;
		fVar1 = (this->field17_0xf0).m42;
		fVar2 = (this->field17_0xf0).m43;
		fVar3 = (this->field17_0xf0).m44;
		(this->parent).field22_0xa0.m41 = (this->field17_0xf0).m41;
		(this->parent).field22_0xa0.m42 = fVar1;
		(this->parent).field22_0xa0.m43 = fVar2;
		(this->parent).field22_0xa0.m44 = fVar3;
		fVar1 = (this->field17_0xf0).m12;
		fVar2 = (this->field17_0xf0).m13;
		fVar3 = (this->field17_0xf0).m14;
		(this->parent).field21_0x60.m11 = (this->field17_0xf0).m11;
		(this->parent).field21_0x60.m12 = fVar1;
		(this->parent).field21_0x60.m13 = fVar2;
		(this->parent).field21_0x60.m14 = fVar3;
		fVar1 = (this->field17_0xf0).m22;
		fVar2 = (this->field17_0xf0).m23;
		fVar3 = (this->field17_0xf0).m24;
		(this->parent).field21_0x60.m21 = (this->field17_0xf0).m21;
		(this->parent).field21_0x60.m22 = fVar1;
		(this->parent).field21_0x60.m23 = fVar2;
		(this->parent).field21_0x60.m24 = fVar3;
		fVar1 = (this->field17_0xf0).m32;
		fVar2 = (this->field17_0xf0).m33;
		fVar3 = (this->field17_0xf0).m34;
		(this->parent).field21_0x60.m31 = (this->field17_0xf0).m31;
		(this->parent).field21_0x60.m32 = fVar1;
		(this->parent).field21_0x60.m33 = fVar2;
		(this->parent).field21_0x60.m34 = fVar3;
		fVar1 = (this->field17_0xf0).m42;
		fVar2 = (this->field17_0xf0).m43;
		fVar3 = (this->field17_0xf0).m44;
		(this->parent).field21_0x60.m41 = (this->field17_0xf0).m41;
		(this->parent).field21_0x60.m42 = fVar1;
		(this->parent).field21_0x60.m43 = fVar2;
		(this->parent).field21_0x60.m44 = fVar3;
		fVar1 = (this->field17_0xf0).m12;
		fVar2 = (this->field17_0xf0).m13;
		fVar3 = (this->field17_0xf0).m14;
		(this->parent).field20_0x20.m11 = (this->field17_0xf0).m11;
		(this->parent).field20_0x20.m12 = fVar1;
		(this->parent).field20_0x20.m13 = fVar2;
		(this->parent).field20_0x20.m14 = fVar3;
		fVar1 = (this->field17_0xf0).m22;
		fVar2 = (this->field17_0xf0).m23;
		fVar3 = (this->field17_0xf0).m24;
		(this->parent).field20_0x20.m21 = (this->field17_0xf0).m21;
		(this->parent).field20_0x20.m22 = fVar1;
		(this->parent).field20_0x20.m23 = fVar2;
		(this->parent).field20_0x20.m24 = fVar3;
		fVar1 = (this->field17_0xf0).m32;
		fVar2 = (this->field17_0xf0).m33;
		fVar3 = (this->field17_0xf0).m34;
		(this->parent).field20_0x20.m31 = (this->field17_0xf0).m31;
		(this->parent).field20_0x20.m32 = fVar1;
		(this->parent).field20_0x20.m33 = fVar2;
		(this->parent).field20_0x20.m34 = fVar3;
		fVar1 = (this->field17_0xf0).m42;
		fVar2 = (this->field17_0xf0).m43;
		fVar3 = (this->field17_0xf0).m44;
		(this->parent).field20_0x20.m41 = (this->field17_0xf0).m41;
		(this->parent).field20_0x20.m42 = fVar1;
		(this->parent).field20_0x20.m43 = fVar2;
		(this->parent).field20_0x20.m44 = fVar3;
		return 1;
		}
		
	*/
	return;
}

void UnkFamily6A::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool UnkFamily6A::FUN_00088900(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily6A::FUN_00088900(UnkFamily6A *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		int iVar1;
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139500(param_2,&this->field17_0xf0,'\x01');
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field18_0x130,false);
		return true;
		}
		iVar1 = *(int *)((this->parent).field14_0x14 + 0x10);
		(this->field17_0xf0).m41 = *(float *)(iVar1 + 0xd0);
		(this->field17_0xf0).m42 = *(float *)(iVar1 + 0xd4);
		(this->field17_0xf0).m43 = *(float *)(iVar1 + 0xd8);
		(this->field17_0xf0).m44 = *(float *)(iVar1 + 0xdc);
		(this->field18_0x130).x = Vector4_0039ef70.x;
		(this->field18_0x130).y = Vector4_0039ef70.y;
		(this->field18_0x130).z = Vector4_0039ef70.z;
		(this->field18_0x130).w = FLOAT_0038639c;
		return false;
		}
		
	*/
	return false;
}

void UnkFamily6A::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint UnkFamily6A::FUN_000a5720() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily6A::FUN_000a5720(void){
		return 7;
		}
		
	*/
	return 0;
}

void UnkFamily6A::FUN_000a5730(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6A::FUN_000a5730(Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		fVar1 = FLOAT_003869d8;
		param_1->z = FLOAT_003869d8;
		param_1->y = fVar1;
		param_1->x = fVar1;
		fVar1 = FLOAT_0038639c;
		param_1->w = FLOAT_0038639c;
		param_2->z = fVar1;
		param_2->y = fVar1;
		param_2->x = fVar1;
		param_2->w = fVar1;
		return;
		}
		
	*/
	return;
}

bool UnkFamily6A::FUN_000a5790(Vector4* outVector) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily6A::FUN_000a5790(UnkFamily6A *this,Vector4 *outVector){
		outVector->x = (this->field18_0x130).x;
		outVector->y = (this->field18_0x130).y;
		outVector->z = (this->field18_0x130).z;
		outVector->w = (this->field18_0x130).w;
		return true;
		}
		
	*/
	return false;
}

void UnkFamily6A::EmptyFunction_13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily6A::FUN_000a57e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6A::FUN_000a57e0(void){
		return 0;
		}
		
	*/
	return;
}

