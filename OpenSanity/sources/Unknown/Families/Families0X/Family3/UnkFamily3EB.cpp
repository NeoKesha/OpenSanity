#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3EB.h"

void UnkFamily3EB::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3EB::Dispose(UnkFamily3EB *this){
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_EB;
		UnkFamily3EAbstract::CleanUp(&this->parent);
		UnkFamily3EAbstract::Unroll((UnkFamily3EA *)this);
		return;
		}
		
	*/
	return;
}

void UnkFamily3EB::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3EB * __thiscall UnkFamily3EB::Dispose(UnkFamily3EB *this,byte param_1){
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_EB;
		UnkFamily3EAbstract::CleanUp(&this->parent);
		UnkFamily3EAbstract::Unroll((UnkFamily3EA *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily3EB::FUN_00082bb0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3EB::FUN_00082bb0(UnkFamily3EB *this,int param_1){
		FUN_001f9690(param_1,0,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,1,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,5,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0x17,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0xf,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0xe,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0xd,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0x16,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0x13,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0x12,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0x11,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,8,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,7,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,6,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,0xb,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,10,(UnkFamily3Abstract *)this);
		FUN_001f9690(param_1,9,(UnkFamily3Abstract *)this);
		return;
		}
		
	*/
	return;
}

void UnkFamily3EB::FUN_00082c70(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3EB::FUN_00082c70(UnkFamily3EB *this,int param_1){
		FUN_001f9710(param_1,0,this);
		FUN_001f9710(param_1,1,this);
		FUN_001f9710(param_1,5,this);
		FUN_001f9710(param_1,0x17,this);
		FUN_001f9710(param_1,0xf,this);
		FUN_001f9710(param_1,0xe,this);
		FUN_001f9710(param_1,0xd,this);
		FUN_001f9710(param_1,0x16,this);
		FUN_001f9710(param_1,0x13,this);
		FUN_001f9710(param_1,0x12,this);
		FUN_001f9710(param_1,0x11,this);
		FUN_001f9710(param_1,8,this);
		FUN_001f9710(param_1,7,this);
		FUN_001f9710(param_1,6,this);
		FUN_001f9710(param_1,0xb,this);
		FUN_001f9710(param_1,10,this);
		FUN_001f9710(param_1,9,this);
		return;
		}
		
	*/
	return;
}

uint UnkFamily3EB::FUN_00082d30(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily3EB::FUN_00082d30(UnkFamily3EB *this,void *param_1){
		byte bVar1;
		void *pvVar2;
		pvVar2 = param_1;
		bVar1 = *(byte *)(*(int *)(*(int *)((int)param_1 + 8) + 0x54) + 0x50);
		switch(bVar1) {
		case 0:case 8:case 0xb:case 0x16:case 0x17:param_1 = (void *)CONCAT31(param_1._1_3_,0xff);
		break;
		case 1:param_1 = (void *)((uint)param_1._1_3_ << 8);
		break;
		default:return 0;
		case 5:param_1 = (void *)CONCAT31(param_1._1_3_,1);
		break;
		case 6:param_1 = (void *)CONCAT31(param_1._1_3_,7);
		break;
		case 7:param_1 = (void *)CONCAT31(param_1._1_3_,8);
		break;
		case 9:param_1 = (void *)CONCAT31(param_1._1_3_,10);
		break;
		case 10:param_1 = (void *)CONCAT31(param_1._1_3_,0xb);
		break;
		case 0xd:param_1 = (void *)CONCAT31(param_1._1_3_,0xe);
		break;
		case 0xe:param_1 = (void *)CONCAT31(param_1._1_3_,0xf);
		break;
		case 0xf:param_1 = (void *)CONCAT31(param_1._1_3_,0x17);
		break;
		case 0x11:param_1 = (void *)CONCAT31(param_1._1_3_,0x12);
		break;
		case 0x12:param_1 = (void *)CONCAT31(param_1._1_3_,0x13);
		break;
		case 0x13:param_1 = (void *)CONCAT31(param_1._1_3_,0x16);
		}
		UnkFamily3EA::FUN_000f4b80((UnkFamily3EA *)this,bVar1,(uint)param_1,pvVar2);
		return (uint)param_1 & 0xffffff00 | 1;
		}
		
	*/
	return 0;
}

void UnkFamily3EB::Construct(int param_1, float param_2, void* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3EB * __thiscall UnkFamily3EB::Construct(UnkFamily3EB *this,int param_1,float param_2,void *param_3){
		undefined *this_00;
		UnkFamily26Base *this_01;
		UnkFamily26A *pUVar1;
		UnkFamily3EAbstract::Construct(&this->parent,10,*(int *)(param_1 + 0x10));
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_EB;
		*(int *)&this->field_0x110 = param_1;
		this_01 = (UnkFamily26Base *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily26Base *)0x0) {
		pUVar1 = (UnkFamily26A *)0x0;
		}
		else {
		pUVar1 = (UnkFamily26A *)UnkFamily26Base::Construct(this_01);
		}
		this_00 = &(this->parent).field_0x20;
		*(UnkFamily26A **)&this->field_0x114 = pUVar1;
		FUN_000f3f60((int)this_00,pUVar1);
		thunk_FUN_0008f420((int)this,param_2,param_3);
		FUN_000f5310((int)this_00,0x40400000);
		FUN_000f4df0(*(int *)&this->field_0x114,0x447a0000,0x42480000);
		return this;
		}
		
	*/
	return;
}

