#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Input/NodeInputA.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Input/InputController/InputStruct.h"
void NodeInputA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeInputA * __fastcall NodeInputA::Construct(NodeInputA *this){
		InputWrapper *inputWrapper;
		NodeInputAbstract::Construct(&this->parent,2,7);
		inputWrapper = &(this->parent).inputWrapper;
		(this->parent).vtable = &NodeInput_VT_A;
		InputWrapper::AddAxis(inputWrapper,0,0,0.3);
		InputWrapper::AddAxis(inputWrapper,0,4,0.3);
		InputWrapper::AddAxis(inputWrapper,1,1,0.3);
		InputWrapper::AddAxis(inputWrapper,1,5,0.3);
		return this;
		}
		
	*/
	return;
}

void NodeInputA::FUN_000a8320(uint param_1, InputStruct* input, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeInputA::FUN_000a8320(NodeInputA *this,undefined4 param_1,InputStruct *input,InstanceContext *ctx){
		InputWrapper *this_00;
		NodeRelated2C *pNVar1;
		ChunkData *pCVar2;
		InstanceNodeCamera *nodeK;
		InstanceNodeCharacter *nodeC;
		float fVar3;
		float fVar4;
		float fVar5;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20 [7];
		InstanceTransform *transform;
		nodeK = (InstanceNodeCamera *)InstanceDataList::GetNode(&ctx->nodes,Camera);
		if (((nodeK->struct).field0_0x0 >> 4 & 1) == 0) {
		this_00 = &(this->parent).inputWrapper;
		local_30 = InputWrapper::FUN_0020a8c0(this_00,input,0);
		local_28 = InputWrapper::FUN_0020a8c0(this_00,input,1);
		local_2c = 0.0;
		local_24 = FLOAT_0038639c;
		fVar3 = local_30;
		if (local_30 < FLOAT_00386394) {
		fVar3 = 0.0 - local_30;
		}
		if ((fVar3 <= FLOAT_0039df50) && (0.0 <= FLOAT_0039df50)) {
		fVar3 = 0.0 - local_28;
		if (0.0 <= local_28) {
		fVar3 = local_28;
		}
		if (fVar3 <= FLOAT_0039df50) {
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(&ctx->nodes,Character);
		fVar5 = Vector4_0039ef70.z;
		fVar4 = Vector4_0039ef70.y;
		pNVar1 = nodeC->field1_0x18;
		(pNVar1->field35_0xe0).x = Vector4_0039ef70.x;
		fVar3 = FLOAT_0038639c;
		(pNVar1->field35_0xe0).y = fVar4;
		(pNVar1->field35_0xe0).z = fVar5;
		(pNVar1->field35_0xe0).w = fVar3;
		return;
		}
		}
		pCVar2 = (ctx->parent).chunkData;
		transform = (ctx->parent).transform;
		InstanceTransform::FillMatrix(transform);
		fVar3 = local_30;
		if (local_30 < 0.0) {
		fVar3 = 0.0 - local_30;
		}
		if (fVar3 <= FLOAT_0039df50) {
		fVar3 = local_2c;
		if (local_2c < 0.0) {
		fVar3 = 0.0 - local_2c;
		}
		if (fVar3 <= FLOAT_0039df50) {
		fVar3 = 0.0 - local_28;
		if (0.0 <= local_28) {
		fVar3 = local_28;
		}
		if (fVar3 <= FLOAT_0039df50) {
		thunk_FUN_000a8180((int)ctx);
		return;
		}
		}
		}
		fVar3 = local_28 * local_28;
		fVar4 = local_2c * local_2c;
		fVar5 = local_30 * local_30;
		InstanceTransform::thunk_FUN_000a6690(transform,&pCVar2->field4_0x10,&local_30,local_20);
		InstanceContext::thunk_FUN_000a81e0(ctx,local_20,SQRT(fVar3 + fVar4 + fVar5));
		}
		return;
		}
		
	*/
	return;
}

