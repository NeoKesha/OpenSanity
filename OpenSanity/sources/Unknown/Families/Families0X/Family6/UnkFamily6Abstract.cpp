#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6Abstract.h"

void UnkFamily6Abstract::FUN_0007f010() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6Abstract::FUN_0007f010(UnkFamily6Abstract *this){
		InstanceContext *pIVar1;
		char cVar2;
		bool bVar3;
		Vector4 VStack32;
		cVar2 = (*(code *)this->vtable[1])();
		if (cVar2 != '\0') {
		pIVar1 = *(InstanceContext **)(this->field14_0x14 + 0x10);
		Vector4::FUN_000db0d0(&VStack32,&this->field21_0x60);
		bVar3 = InstanceTransform::FUN_000e16f0((pIVar1->parent).transform,&this->field21_0x60);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar1);
		}
		if (this->field15_0x18 != 0) {
		pIVar1 = *(InstanceContext **)(this->field15_0x18 + 0x10);
		bVar3 = InstanceTransform::FUN_000e16f0((pIVar1->parent).transform,&this->field22_0xa0);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar1);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::FUN_000870c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6Abstract::FUN_000870c0(UnkFamily6Abstract *this){
		uint *puVar1;
		InstanceContext *ctx;
		int iVar2;
		char cVar3;
		InstanceNodePhysics *node;
		InstanceNodePhysicsA *nodeabstract;
		InstanceTransform *transform;
		UnkClassC *unk;
		ctx = *(InstanceContext **)(this->field14_0x14 + 0x10);
		transform = (ctx->parent).transform;
		InstanceTransform::FillMatrix(transform);
		unk = PTR_003e6bf4;
		Matrix4::Construct1(&this->field20_0x20);
		Matrix4::Construct1(&this->field21_0x60);
		Matrix4::Construct1(&this->field22_0xa0);
		iVar2 = this->field14_0x14;
		this[1].vtable = (undefined **)0x0;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(iVar2 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		cVar3 = (*(code *)this->vtable[0xe])();
		if (cVar3 != '\0') {
		nodeabstract = FUN_001e5dc0(unk,ctx,'\x01');
		FUN_001db0b0((int)nodeabstract,transform);
		puVar1 = &(nodeabstract->body).field13_0x2dc;
		*puVar1 = *puVar1 & 0xfffffffe;
		(nodeabstract->body).field44_0x32c = &DAT_0001a030;
		}
		(*(code *)this->vtable[1])();
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::FUN_0007f0b0(float* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6Abstract::FUN_0007f0b0(UnkFamily6Abstract *this,float *param_1,int param_2){
		InstanceTransform *transform;
		InstanceNodePhysics *this_00;
		Vector4 local_30;
		Vector4 local_20;
		if (param_2 != 0) {
		this_00 = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(this->field14_0x14 + 0x10) + 0xe4),Physics);
		if (this_00 != (InstanceNodePhysics *)0x0) {
		local_30.x = *param_1;
		transform = *(InstanceTransform **)(param_2 + 0x18);
		local_30.y = param_1[1];
		local_30.z = param_1[2];
		local_30.w = param_1[3];
		InstanceTransform::FillMatrix(transform);
		InstanceTransform::FUN_000d3ed0(transform,&local_30);
		local_20.x = (this_00->body).field37_0x14c.x + local_30.x;
		local_20.y = (this_00->body).field37_0x14c.y + local_30.y;
		local_20.w = (this_00->body).field37_0x14c.w;
		local_20.z = (this_00->body).field37_0x14c.z + local_30.z;
		InstanceNodePhysics::FUN_001dfbd0(this_00,&local_20);
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::Dispose(UnkFamily6Abstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6Abstract::Dispose(UnkFamily6Abstract *param_1){
		InstanceNodePhysics *node;
		param_1->vtable = &UnkFamily6_VT_E;
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&param_1[1].field14_0x14);
		param_1->vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(param_1->field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily6Abstract::Dispose(UnkFamily6Abstract *this,byte param_1){
		InstanceNodePhysics *nodeS;
		this->vtable = &UnkFamily6_VT_Abstract;
		nodeS = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(this->field14_0x14 + 0x10) + 0xe4),Physics);
		if (nodeS != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,nodeS);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

uint UnkFamily6Abstract::FUN_0007efc0(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily6Abstract::FUN_0007efc0(UnkFamily6Abstract *this,undefined4 param_1,uint *param_2){
		void *this_00;
		int iVar1;
		this_00 = (void *)(*param_2 >> 0x12);
		if (((uint)this_00 & 1) != 0) {
		if (this->field15_0x18 == 0) {
		return 1;
		}
		this_00 = *(void **)(this->field15_0x18 + 0x10);
		if (*(int *)(*(int *)(this->field14_0x14 + 0x10) + 0xb0) == *(int *)((int)this_00 + 0xb0)) {
		iVar1 = FUN_000f8b00(this_00,(int)param_2);
		return (uint)(iVar1 != 0);
		}
		}
		return (uint)this_00 & 0xffffff00;
		}
		
	*/
	return 0;
}

bool UnkFamily6Abstract::FUN_0007f1a0(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily6Abstract::FUN_0007f1a0(UnkFamily6Abstract *this,undefined4 *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)(this->field14_0x14 + 0x10) + 0xe4),Physics);
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		*param_1 = pIVar1[0xe].vtable;
		param_1[1] = pIVar1[0xe].ctx;
		param_1[2] = *(undefined4 *)&pIVar1[0xe].field2_0x8;
		param_1[3] = pIVar1[0xe].time;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void UnkFamily6Abstract::FUN_0007f260(uint* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6Abstract::FUN_0007f260(UnkFamily6Abstract *this,undefined4 *param_1,float *param_2){
		thunk_FUN_00068460(this->field14_0x14,param_1,param_2);
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::FUN_0007f2a0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6Abstract::FUN_0007f2a0(UnkFamily6A *this){
		(this->parent).field15_0x18 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::FUN_000a56d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6Abstract::FUN_000a56d0(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::EmptyFunction_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::FUN_000a5700() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6Abstract::FUN_000a5700(void){
		return 1;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::FUN_000a5710() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6Abstract::FUN_000a5710(void){
		return 1;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::Dispose_14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6Abstract::Dispose(UnkFamily6Abstract *this){
		InstanceNodePhysics *node;
		this->vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(this->field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::Dispose_15() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6Abstract::Dispose(UnkFamily6Abstract *this){
		InstanceNodePhysics *node;
		this->vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(this->field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6Abstract::Construct(uint param_1, uint param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6Abstract::Construct(UnkFamily6Abstract *this,int param_1,int param_2,byte param_3){
		this->field14_0x14 = param_1;
		this->vtable = &UnkFamily6_VT_Abstract;
		this->field15_0x18 = param_2;
		this->field13_0x10 = (param_3 & 1) << 1;
		return;
		}
		
	*/
	return;
}

