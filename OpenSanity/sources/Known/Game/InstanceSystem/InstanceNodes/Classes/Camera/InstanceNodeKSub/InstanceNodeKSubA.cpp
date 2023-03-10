#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"
InstanceNodeKSubA::InstanceNodeKSubA() : InstanceNodeKSubBase(), struct1(), struct2(), struct3(), struct4()
{
	//*(uint*)&(this->parent).inputWrapper = this->inputWrapper & 0xffffff34 | 0x134; //TODO: resolve?

	(this->vec1).x = 0.0f;
	(this->vec1).y = 0.0f;
	(this->vec1).z = 0.0f;
	(this->vec2).x = 0.0f;
	(this->vec2).y = 0.0f;
	(this->vec2).z = 0.0f;
	
	this->field75_0xb4 = 0;
	this->field76_0xb8 = 0;
	this->struct1ptr = &struct1;
	this->struct2ptr = &struct2;
	this->struct3ptr = &struct3;
	this->struct4ptr = &struct4;
}

InstanceNodeKSubA::~InstanceNodeKSubA()
{
	CleanUp();
}

void InstanceNodeKSubA::FUN_00139480(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubA::FUN_00139480(InstanceNodeKSubA *this,float *param_1){
		Matrix4 local_90;
		Matrix4 local_50;
		Matrix4::FUN_000d9f80(&local_90,(Vector4 *)param_1);
		local_90.m41 = Vector4_0039ef70.x;
		local_90.m42 = Vector4_0039ef70.y;
		local_90.m43 = Vector4_0039ef70.z;
		local_90.m44 = FLOAT_0038639c;
		Matrix4::Multiply4443(&local_90,(Matrix4 *)&(this->parent).parent.field13_0x10,&local_50);
		Vector4::FUN_000db0d0((Vector4 *)param_1,&local_50);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubA::FUN_00139500(Matrix4* param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubA::FUN_00139500(InstanceNodeKSubA *this,Matrix4 *param_1,char param_2){
		Matrix4 *mat1;
		Matrix4 local_90;
		Matrix4 local_50;
		if (param_2 == '\0') {
		local_90.m11 = (float)(this->parent).parent.field13_0x10;
		local_90.m12 = (float)(this->parent).parent.field14_0x14;
		local_90.m13 = (float)(this->parent).parent.struct1ptr;
		local_90.m14 = (float)(this->parent).parent.struct2ptr;
		local_90.m21 = (float)(this->parent).parent.struct3ptr;
		local_90.m22 = (float)(this->parent).parent.struct4ptr;
		local_90.m23 = *(float *)&(this->parent).field_0x28;
		local_90.m24 = *(float *)&(this->parent).field_0x2c;
		local_90.m31 = *(float *)&(this->parent).field_0x30;
		local_90.m32 = *(float *)&(this->parent).field_0x34;
		local_90.m33 = *(float *)&(this->parent).field_0x38;
		local_90.m34 = *(float *)&(this->parent).field_0x3c;
		local_90.m41 = Vector4_0039ef70.x;
		local_90.m42 = Vector4_0039ef70.y;
		local_90.m43 = Vector4_0039ef70.z;
		mat1 = &local_90;
		local_90.m44 = FLOAT_0038639c;
		}
		else {
		mat1 = (Matrix4 *)&(this->parent).parent.field13_0x10;
		}
		Matrix4::Multiply4443(param_1,mat1,&local_50);
		param_1->m11 = local_50.m11;
		param_1->m12 = local_50.m12;
		param_1->m13 = local_50.m13;
		param_1->m14 = local_50.m14;
		param_1->m21 = local_50.m21;
		param_1->m22 = local_50.m22;
		param_1->m23 = local_50.m23;
		param_1->m24 = local_50.m24;
		param_1->m31 = local_50.m31;
		param_1->m32 = local_50.m32;
		param_1->m33 = local_50.m33;
		param_1->m34 = local_50.m34;
		param_1->m41 = local_50.m41;
		param_1->m42 = local_50.m42;
		param_1->m43 = local_50.m43;
		param_1->m44 = local_50.m44;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubA::FUN_00139650(Vector4* param_1, bool param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubA::FUN_00139650(InstanceNodeKSubA *this,Vector4 *param_1,bool param_2){
		Vector4 vec1;
		Vector4 vec2;
		Matrix4 mat;
		Matrix4 *vec;
		vec1.y = 0.0;
		vec1.z = 0.0;
		vec1.x = FLOAT_0038639c;
		vec1.w = FLOAT_0038639c;
		if (param_2 == false) {
		vec2.x = (float)(this->parent).parent.field13_0x10;
		vec2.y = (float)(this->parent).parent.field14_0x14;
		vec2.z = (float)(this->parent).parent.struct1ptr;
		vec2.w = (float)(this->parent).parent.struct2ptr;
		vec = (Matrix4 *)&vec2;
		}
		else {
		vec = (Matrix4 *)&(this->parent).parent.field13_0x10;
		}
		Matrix4::Multiply4443((Matrix4 *)&vec1,vec,&mat);
		param_1->x = mat.m41;
		param_1->y = mat.m42;
		param_1->z = mat.m43;
		param_1->w = mat.m44;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubA::CleanUp() {
	InstanceNodeKSubBase::CleanUp();
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubA::CleanUp(InstanceNodeKSubA *this){
		(this->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_B;
		InstanceNodeKSubModule3B::Dispose((InstanceNodeKSubModule3B *)&this[1].field_0x80);
		InstanceNodeKSubModule2B::Dispose((InstanceNodeKSubModule2B *)&(this->struct1).field11_0x20);
		InstanceNodeKSubModuleAbstract::Unroll((InstanceNodeKSubModuleAbstract *)&this->field_0xb0);
		InstanceNodeKSubModuleAbstract::Unroll((InstanceNodeKSubModuleAbstract *)&this->field_0x80);
		(this->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Base;
		InputWrapper::Dispose(&(this->parent).inputWrapper);
		InstanceNodeKSubAbstract::CleanUp((InstanceNodeKSubAbstract *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubA::FUN_001cafd0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubA::FUN_001cafd0(InstanceNodeKSubA *this){
		float fVar1;
		fVar1 = FLOAT_0039559c;
		(this->struct1).functionType = (this->struct1).functionType & 0xffffff3f | 0x30;
		(this->struct1).field12_0x24 = fVar1;
		(this->struct2).functionType = (this->struct2).functionType & 0xffffff1f | 0x10;
		(this->struct2).field12_0x24 = fVar1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeKSubA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubA::FUN_001cb030() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubA::FUN_001cb030(InstanceNodeKSubA *this){
		(this->parent).parent.struct2ptr = &(this->struct2).parent;
		(this->parent).parent.struct4ptr = &(this->struct4).parent;
		(this->parent).parent.struct1ptr = &(this->struct1).parent;
		(this->parent).parent.struct3ptr = &(this->struct3).parent;
		return;
		}
		
	*/
	return;
}

