#include "headers/Known/Camera/GameCameraPoint.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Camera/GameCameraAbstract.h"
void GameCameraPoint::Method7(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint::Method7(GameCameraPoint *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		fVar1 = (this->pos).x;
		fVar2 = (this->pos).y;
		this->pos = (Vector4)CONCAT412(fVar1 * param_1->m14 + fVar2 * param_1->m24 +param_1->m34 * 0.0 + param_1->m44,CONCAT48(fVar1 * param_1->m13 + fVar2 * param_1->m23 +param_1->m33 * 0.0 + param_1->m43,CONCAT44(fVar1 * param_1->m12 + fVar2 * param_1->m22 +param_1->m32 * 0.0 + param_1->m42,fVar1 * param_1->m11 + fVar2 * param_1->m21 +param_1->m31 * 0.0 + param_1->m41)));
		return;
		}
		
	*/
	return;
}

GameCameraAbstract* GameCameraPoint::Set2(GameCameraPoint* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraAbstract * __thiscall GameCameraPoint::Set2(GameCameraPoint *this,GameCameraPoint *other){
		(*((this->parent).vtable)->SetInternal)(&this->parent,&other->parent);
		return &this->parent;
		}
		
	*/
	return null;
}

bool GameCameraPoint::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraPoint::IsA(GameCameraPoint *this,int **param_1){
		bool bVar1;
		bool bVar2;
		bVar1 = GameCameraAbstract::IsA(&this->parent,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar2 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->pos,0xa07,0);
		return (bool)(bVar2 & bVar1);
		}
		if (param_1[1] == (int *)0x1) {
		bVar2 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->pos,0xa07,0);
		return (bool)(bVar2 & bVar1);
		}
		}
		return false;
		}
		
	*/
	return false;
}

float GameCameraPoint::GetCameraProgress(uint param_1, uint param_2, Vector4* posOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraPoint::GetCameraProgress(GameCameraPoint *this,undefined4 param_1,undefined4 param_2,Vector4 *posOut){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		posOut->x = (this->pos).x;
		posOut->y = (this->pos).y;
		posOut->z = (this->pos).z;
		posOut->w = (this->pos).w;
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void GameCameraPoint::GetCameraPosition(uint param_1, Vector4* posOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint::GetCameraPosition(GameCameraPoint *this,undefined4 param_1,Vector4 *posOut){
		posOut->x = (this->pos).x;
		posOut->y = (this->pos).y;
		posOut->z = (this->pos).z;
		posOut->w = (this->pos).w;
		return;
		}
		
	*/
	return;
}

int* GameCameraPoint::SetInternal(GameCameraPoint* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraPoint::SetInternal(GameCameraPoint *this,GameCameraPoint *other){
		(*((this->parent).vtable)->Set1)(&this->parent,&other->parent);
		(this->pos).x = (other->pos).x;
		(this->pos).y = (other->pos).y;
		(this->pos).z = (other->pos).z;
		(this->pos).w = (other->pos).w;
		return (int *)this;
		}
		
	*/
	return null;
}

void GameCameraPoint::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint::Method5(GameCameraPoint *this,int *param_1){
		(**(code **)(*param_1 + 0x50))(&(this->parent).field1_0x4);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field2_0x8);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field3_0xc);
		(**(code **)(*param_1 + 4))(&this->pos,0x10,1);
		return;
		}
		
	*/
	return;
}

void GameCameraPoint::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint::Method8(GameCameraPoint *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))((this->parent).field1_0x4);
		(**(code **)(*param_1 + 100))((this->parent).field2_0x8);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		(**(code **)(*param_1 + 0xc))(&this->pos,0x10);
		return;
		}
		
	*/
	return;
}

int GameCameraPoint::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int GameCameraPoint::GetBuilderIndex(void){
		return 0x1c02;
		}
		
	*/
	return 0;
}

void GameCameraPoint::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraPoint * __thiscall GameCameraPoint::Dispose(GameCameraPoint *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameCameraPoint::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraPoint * __fastcall GameCameraPoint::Construct(GameCameraPoint *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Point;
		return this;
		}
		
	*/
	return;
}

void GameCameraPoint::Construct_11(Vector4* pos) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint::Construct(GameCameraPoint *this,Vector4 *pos){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Point;
		(this->pos).x = pos->x;
		(this->pos).y = pos->y;
		(this->pos).z = pos->z;
		(this->pos).w = pos->w;
		return;
		}
		
	*/
	return;
}

