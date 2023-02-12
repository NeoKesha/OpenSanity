#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubC.h"

void InstanceNodeKSubC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubC * __fastcall InstanceNodeKSubC::Construct(InstanceNodeKSubC *this){
		InstanceNodeKSubModule3C *pIVar1;
		float fVar2;
		pIVar1 = &this->struct1;
		(this->parent).struct4ptr = (InstanceNodeKSubModule3Abstract *)0x0;
		(this->parent).field14_0x14 = (undefined **)0x0;
		(this->parent).struct1ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		(this->parent).struct2ptr = (InstanceNodeKSubModuleAbstract *)0x0;
		(this->parent).struct3ptr = (InstanceNodeKSubModule2Abstract *)0x0;
		(this->parent).field13_0x10 = (undefined **)0x0;
		(this->parent).vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_C;
		(pIVar1->parent).vtable = &InstanceNodeKSubModule3_VT_Abstract;
		(this->struct1).parent.field13_0x10 = 0;
		(this->struct1).parent.field25_0x40 = 1;
		(this->struct1).parent.fov = ENV_FLOAT_113_SCREEN_FOV;
		(this->struct1).parent.vec1.z = 0.0;
		(this->struct1).parent.vec1.y = 0.0;
		(this->struct1).parent.vec1.x = 0.0;
		fVar2 = FLOAT_0038639c;
		(this->struct1).parent.vec1.w = FLOAT_0038639c;
		(this->struct1).parent.vec2.x = Vector4_0039ef70.x;
		(this->struct1).parent.vec2.y = Vector4_0039ef70.y;
		(this->struct1).parent.vec2.z = Vector4_0039ef70.z;
		(this->struct1).parent.vec2.w = fVar2;
		(pIVar1->parent).vtable = &InstanceNodeKSubModule3_VT_C;
		(this->parent).struct4ptr = &pIVar1->parent;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubC * __thiscall InstanceNodeKSubC::Dispose(InstanceNodeKSubC *this,byte param_1){
		(this->parent).vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_C;
		(this->struct1).parent.vtable = &InstanceNodeKSubModule3_VT_Abstract;
		InstanceNodeKSubAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubC::FUN_001cb080() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubC::FUN_001cb080(InstanceNodeKSubC *this){
		(*(code *)((this->parent).vtable)->field6_0x18)();
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubC::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeKSubC::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubC::FUN_001cb0a0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubC::FUN_001cb0a0(InstanceNodeKSubC *this){
		(this->parent).struct4ptr = &(this->struct1).parent;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubC::Dispose_5(InstanceNodeKSubC* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubC::Dispose(InstanceNodeKSubC *param_1){
		(param_1->parent).vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_C;
		(param_1->struct1).parent.vtable = &InstanceNodeKSubModule3_VT_Abstract;
		InstanceNodeKSubAbstract::CleanUp(&param_1->parent);
		return;
		}
		
	*/
	return;
}

