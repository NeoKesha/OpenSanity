#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubAbstract.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModuleAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3Abstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2Abstract.h"
void InstanceNodeKSubAbstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubAbstract::Construct(InstanceNodeKSubAbstract *this){
		this->vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Abstract;
		this->field14_0x14 = (undefined **)0x0;
		this->struct1ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		this->struct2ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		this->struct3ptr = (InstanceNodeKSubModule2Abstract *)0x0;
		this->struct4ptr = (InstanceNodeKSubModule3Abstract *)0x0;
		this->field13_0x10 = (undefined **)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubAbstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubAbstract::CleanUp(InstanceNodeKSubAbstract *this){
		this->vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Abstract;
		if (((*(byte *)&this->field13_0x10 & 4) != 0) &&(this->struct1ptr != (InstanceNodeKSubModuleAbstract *)0x0)) {
		(*(code *)*this->struct1ptr->vtable)(1);
		}
		this->struct1ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		if (((*(byte *)&this->field13_0x10 & 8) != 0) &&(this->struct2ptr != (InstanceNodeKSubModuleAbstract *)0x0)) {
		(*(code *)*this->struct2ptr->vtable)(1);
		}
		this->struct2ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		if (((*(byte *)&this->field13_0x10 & 0x10) != 0) &&(this->struct3ptr != (InstanceNodeKSubModule2Abstract *)0x0)) {
		(*(code *)*this->struct3ptr->vtable)(1);
		}
		this->struct3ptr = (InstanceNodeKSubModule2Abstract *)0x0;
		if (((*(byte *)&this->field13_0x10 & 0x20) != 0) &&(this->struct4ptr != (InstanceNodeKSubModule3Abstract *)0x0)) {
		(*(code *)*this->struct4ptr->vtable)(1);
		}
		this->struct4ptr = (InstanceNodeKSubModule3Abstract *)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubAbstract::FUN_001c6fd0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubAbstract::FUN_001c6fd0(InstanceNodeKSubAbstract *this,undefined4 param_1){
		if (this->struct3ptr != (InstanceNodeKSubModule2Abstract *)0x0) {
		(*(code *)this->struct3ptr->vtable[1])();
		if (this->struct1ptr != (InstanceNodeKSubModuleAbstract *)0x0) {
		(*(code *)this->struct1ptr->vtable[1])(&this->struct3ptr->field26_0x20,&this->struct3ptr->field27_0x30);
		}
		}
		if (this->struct4ptr != (InstanceNodeKSubModule3Abstract *)0x0) {
		(*(code *)this->struct4ptr->vtable[1])(param_1,this->struct3ptr);
		if (this->struct2ptr != (InstanceNodeKSubModuleAbstract *)0x0) {
		(*(code *)this->struct2ptr->vtable[1])(&this->struct4ptr->vec1,&this->struct4ptr->vec2);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubAbstract * __thiscall InstanceNodeKSubAbstract::Dispose(InstanceNodeKSubAbstract *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubAbstract::FUN_001c7040(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubAbstract::FUN_001c7040(InstanceNodeKSubAbstract *this,float param_1){
		Vector4 *pVVar1;
		float fVar2;
		Vector4 *pVVar3;
		uint uVar4;
		uint *puVar5;
		float10 fVar6;
		fVar2 = param_1;
		if (this->struct3ptr == (InstanceNodeKSubModule2Abstract *)0x0) {
		param_1 = 0.0;
		}
		else {
		(*(code *)this->struct3ptr->vtable[2])(param_1);
		if ((*(byte *)&this->field13_0x10 & 2) == 0) {
		fVar6 = (float10)(*(code *)this->struct3ptr->vtable[3])(this->field14_0x14);
		param_1 = (float)fVar6;
		}
		else {
		param_1 = 0.0;
		}
		pVVar1 = &this->struct3ptr->field26_0x20;
		pVVar3 = &this->struct3ptr->field27_0x30;
		if (((*(byte *)&this->field13_0x10 & 1) == 0) || (this->struct3ptr->field32_0x71 == 0)) {
		if (this->struct1ptr != (InstanceNodeKSubModuleAbstract *)0x0) {
		(*(code *)this->struct1ptr->vtable[1])(pVVar1,pVVar3);
		}
		}
		else if (this->struct1ptr != (InstanceNodeKSubModuleAbstract *)0x0) {
		(*(code *)this->struct1ptr->vtable[3])(fVar2,pVVar1,pVVar3);
		if ((*(byte *)&this->field13_0x10 & 2) == 0) {
		if (this->field14_0x14 == (undefined **)0x0) {
		puVar5 = (uint *)0x0;
		}
		else {
		puVar5 = (uint *)this->field14_0x14[0x5c];
		}
		if (puVar5 == (uint *)0x0) {
		uVar4 = 0;
		}
		else {
		uVar4 = puVar5[2];
		}
		(*(code *)this->struct1ptr->vtable[4])(uVar4);
		if ((puVar5 == (uint *)0x0) || ((*puVar5 >> 0xd & 1) == 0)) {
		(*(code *)this->struct1ptr->vtable[2])();
		}
		else {
		(*(code *)this->struct1ptr->vtable[5])(puVar5[0x1b]);
		}
		}
		else {
		(*(code *)this->struct1ptr->vtable[2])();
		}
		}
		}
		if (this->struct4ptr != (InstanceNodeKSubModule3Abstract *)0x0) {
		if ((*(byte *)&this->field13_0x10 & 2) == 0) {
		(*(code *)this->struct4ptr->vtable[3])(this->field14_0x14,this->struct3ptr,param_1);
		}
		(*(code *)this->struct4ptr->vtable[2])(fVar2,this->struct3ptr);
		pVVar1 = &this->struct4ptr->vec1;
		pVVar3 = &this->struct4ptr->vec2;
		if ((((*(byte *)&this->field13_0x10 & 1) == 0) || (this->struct4ptr->field25_0x40 == 0)) ||(this->struct2ptr == (InstanceNodeKSubModuleAbstract *)0x0)) {
		if (this->struct2ptr != (InstanceNodeKSubModuleAbstract *)0x0) {
		(*(code *)this->struct2ptr->vtable[1])(pVVar1,pVVar3);
		}
		}
		else {
		if (this->struct4ptr->field_0x41 == '\0') {
		(*(code *)this->struct2ptr->vtable[6])(0);
		(*(code *)this->struct2ptr->vtable[2])();
		}
		else {
		(*(code *)this->struct2ptr->vtable[6])(1);
		}
		(*(code *)this->struct2ptr->vtable[3])(fVar2,pVVar1,pVVar3);
		if ((*(byte *)&this->field13_0x10 & 2) == 0) {
		if (this->field14_0x14 == (undefined **)0x0) {
		puVar5 = (uint *)0x0;
		}
		else {
		puVar5 = (uint *)this->field14_0x14[0x5c];
		}
		if (puVar5 == (uint *)0x0) {
		uVar4 = 0;
		}
		else {
		uVar4 = puVar5[3];
		}
		(*(code *)this->struct2ptr->vtable[4])(uVar4);
		if ((puVar5 != (uint *)0x0) && ((*puVar5 >> 0xc & 1) != 0)) {
		 WARNING: Could not recover jumptable at 0x001c71ee. Too many branches  WARNING: Treating indirect jump as call (*(code *)this->struct2ptr->vtable[5])(puVar5[0x1a]);
		return;
		}
		(*(code *)this->struct2ptr->vtable[2])();
		return;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

uint InstanceNodeKSubAbstract::FUN_001c7220(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeKSubAbstract::FUN_001c7220(InstanceNodeKSubAbstract *this,undefined4 param_1,uint *param_2){
		byte bVar1;
		byte bVar2;
		InstanceNodeKSubModule3Abstract *pIVar3;
		if ((*param_2 >> 0x12 & 1) != 0) {
		bVar1 = 1;
		if (this->struct1ptr != (InstanceNodeKSubModuleAbstract *)0x0) {
		bVar1 = (*(code *)this->struct1ptr->vtable[7])(param_1,param_2);
		bVar1 = bVar1 & 1;
		}
		if (this->struct2ptr != (InstanceNodeKSubModuleAbstract *)0x0) {
		bVar2 = (*(code *)this->struct2ptr->vtable[7])(param_1,param_2);
		bVar1 = bVar1 & bVar2;
		}
		if (this->struct3ptr != (InstanceNodeKSubModule2Abstract *)0x0) {
		bVar2 = (*(code *)this->struct3ptr->vtable[4])(param_1,param_2);
		bVar1 = bVar1 & bVar2;
		}
		pIVar3 = this->struct4ptr;
		if (pIVar3 != (InstanceNodeKSubModule3Abstract *)0x0) {
		pIVar3 = (InstanceNodeKSubModule3Abstract *)(*(code *)pIVar3->vtable[4])(param_1,param_2);
		bVar1 = bVar1 & (byte)pIVar3;
		}
		return (uint)pIVar3 & 0xffffff00 | (uint)bVar1;
		}
		return (*param_2 >> 0x1a) << 8;
		}
		
	*/
	return 0;
}

void InstanceNodeKSubAbstract::Construct_6(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubAbstract::Construct(InstanceNodeKSubAbstract *this,InstanceNodeKSubModule2Abstract *param_1,InstanceNodeKSubModule3Abstract *param_2){
		this->struct3ptr = param_1;
		this->vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Abstract;
		this->field14_0x14 = (undefined **)0x0;
		this->struct1ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		this->struct2ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		this->struct4ptr = param_2;
		this->field13_0x10 = (undefined **)0x0;
		return;
		}
		
	*/
	return;
}

