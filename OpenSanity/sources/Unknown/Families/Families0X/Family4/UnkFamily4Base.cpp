#include "headers/Unknown/Families/Families0X/Family4/UnkFamily4Base.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Input/InputController/InputStruct.h"
void UnkFamily4Base::Init(float param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily4Base::Init(UnkFamily4Base *this,float param_1,int param_2){
		InstanceContext *pIVar1;
		Vector4 local_30;
		Vector4 local_20;
		pIVar1 = (InstanceContext *)VirtualPool::AllocateMemory(0x170);
		if (pIVar1 == (InstanceContext *)0x0) {
		pIVar1 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = InstanceContext::Construct(pIVar1);
		}
		local_30.w = FLOAT_0038639c;
		local_20.x = 0.0 - param_1;
		this->ctx = pIVar1;
		local_30.x = param_1;
		local_30.y = param_1;
		local_30.z = param_1;
		local_20.w = local_30.w;
		local_20.y = local_20.x;
		local_20.z = local_20.x;
		FUN_0013a450((int)&(pIVar1->parent).field14_0x20,&local_20,&local_30,'\x01','\x01');
		ChunkData::FUN_0013e3d0((ChunkData *)param_2,this->ctx);
		return;
		}
		
	*/
	return;
}

void UnkFamily4Base::FUN_001a48e0(InputStruct* param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily4Base::FUN_001a48e0(UnkFamily4Base *this,InputStruct *param_1,float param_2){
		InstanceTransform *transform;
		InstanceContext *pIVar1;
		bool bVar2;
		long lVar3;
		long lVar4;
		undefined4 uVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		Vector4 local_20;
		transform = (this->ctx->parent).transform;
		InstanceTransform::FillMatrix(transform);
		fVar6 = InputWrapper::FUN_0020a7c0((InputWrapper *)this->field1_0x4,param_1,0);
		fVar7 = InputWrapper::FUN_0020a7c0((InputWrapper *)this->field1_0x4,param_1,1);
		fVar6 = (fVar6 - fVar7) * FLOAT_0038a764;
		fVar7 = InputWrapper::FUN_0020a8c0((InputWrapper *)this->field1_0x4,param_1,9);
		fVar7 = fVar7 * FLOAT_0038a760;
		fVar8 = InputWrapper::FUN_0020a8c0((InputWrapper *)this->field1_0x4,param_1,10);
		fVar8 = fVar8 * FLOAT_0038a760;
		fVar9 = InputWrapper::FUN_0020a8c0((InputWrapper *)this->field1_0x4,param_1,6);
		lVar3 = __ftol2((FLOAT_003863a8 / FLOAT_003a3890) * fVar9);
		fVar9 = InputWrapper::FUN_0020a8c0((InputWrapper *)this->field1_0x4,param_1,7);
		lVar4 = __ftol2((FLOAT_003863a8 / FLOAT_003a3890) * fVar9);
		if (fVar7 != FLOAT_00386394) {
		local_20.w = (transform->matrix).m14;
		fVar7 = fVar7 * param_2;
		pIVar1 = this->ctx;
		local_20.x = fVar7 * (transform->matrix).m11;
		local_20.y = (transform->matrix).m12 * fVar7;
		local_20.z = (transform->matrix).m13 * fVar7;
		uVar5 = InstanceTransform::thunk_FUN_00026880((pIVar1->parent).transform,&local_20);
		if ((char)uVar5 != '\0') {
		InstanceContext::RegisterCtxPtrToList(pIVar1);
		}
		}
		if (fVar8 != FLOAT_00386394) {
		local_20.w = (transform->matrix).m24;
		fVar8 = fVar8 * param_2;
		pIVar1 = this->ctx;
		local_20.x = fVar8 * (transform->matrix).m21;
		local_20.y = (transform->matrix).m22 * fVar8;
		local_20.z = (transform->matrix).m23 * fVar8;
		uVar5 = InstanceTransform::thunk_FUN_00026880((pIVar1->parent).transform,&local_20);
		if ((char)uVar5 != '\0') {
		InstanceContext::RegisterCtxPtrToList(pIVar1);
		}
		}
		if (fVar6 != FLOAT_00386394) {
		local_20.w = (transform->matrix).m34;
		fVar6 = fVar6 * param_2;
		pIVar1 = this->ctx;
		local_20.x = fVar6 * (transform->matrix).m31;
		local_20.y = (transform->matrix).m32 * fVar6;
		local_20.z = (transform->matrix).m33 * fVar6;
		uVar5 = InstanceTransform::thunk_FUN_00026880((pIVar1->parent).transform,&local_20);
		if ((char)uVar5 != '\0') {
		InstanceContext::RegisterCtxPtrToList(pIVar1);
		}
		}
		pIVar1 = this->ctx;
		uVar5 = FUN_001a0980((pIVar1->parent).transform,(int)((float)lVar3 * param_2));
		if ((char)uVar5 != '\0') {
		InstanceContext::RegisterCtxPtrToList(pIVar1);
		}
		pIVar1 = this->ctx;
		bVar2 = InstanceTransform::thunk_FUN_00064660((pIVar1->parent).transform,(int)((float)lVar4 * param_2));
		if (bVar2 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar1);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily4Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily4Base::Dispose(UnkFamily4Base *this,byte param_1){
		this->vtable = (UnkFamily4Base_VTable *)&UnkFamily4_VT_Base;
		(*((this->ctx->parent).vtable)->Method3)(this->ctx);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void UnkFamily4Base::Construct(float param_1, uint param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily4Base * __thiscall UnkFamily4Base::Construct(UnkFamily4Base *this,float param_1,undefined *param_2,int param_3){
		this->vtable = (UnkFamily4Base_VTable *)&UnkFamily4_VT_Base;
		this->field1_0x4 = param_2;
		Init(this,param_1,param_3);
		return this;
		}
		
	*/
	return;
}

void UnkFamily4Base::Dispose_4(UnkFamily4Base* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily4Base::Dispose(UnkFamily4Base *param_1){
		param_1->vtable = (UnkFamily4Base_VTable *)&UnkFamily4_VT_Base;
		(*((param_1->ctx->parent).vtable)->Method3)(param_1->ctx);
		return;
		}
		
	*/
	return;
}

void UnkFamily4Base::Dispose_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily4Base::Dispose(UnkFamily4Base *this){
		this->vtable = (UnkFamily4Base_VTable *)&UnkFamily4_VT_Base;
		(*((this->ctx->parent).vtable)->Method3)(this->ctx);
		return;
		}
		
	*/
	return;
}

