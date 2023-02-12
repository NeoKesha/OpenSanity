#include "headers/Known/Camera/GameCameraLine.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Camera/GameCameraAbstract.h"
#include "headers/Known/Math/Line4.h"
bool GameCameraLine::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraLine::IsA(GameCameraLine *this,int **param_1){
		bool bVar1;
		bool bVar2;
		uint uVar3;
		bVar1 = GameCameraAbstract::IsA(&this->parent,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar3 = FUN_001d9180(*param_1,&this->line,0xa08,0);
		return (bool)((byte)uVar3 & bVar1);
		}
		if (param_1[1] == (int *)0x1) {
		uVar3 = FUN_001d91d0(*param_1,&this->line,0xa08,0);
		return (bool)((byte)uVar3 & bVar1);
		}
		}
		return false;
		}
		
	*/
	return false;
}

void GameCameraLine::GetCameraPosition(float t, Vector4* posOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine::GetCameraPosition(GameCameraLine *this,float t,Vector4 *posOut){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar3 = (this->line).start.z - (this->line).end.z;
		fVar2 = (this->line).start.y - (this->line).end.y;
		fVar1 = (this->line).start.x - (this->line).end.x;
		t = (this->parent).field3_0xc / SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) + t;
		fVar1 = FLOAT_0038639c;
		if ((FLOAT_0038639c < t) || (fVar1 = 0.0, t < 0.0)) {
		t = fVar1;
		}
		Line4::GetPoint(&this->line,t,posOut);
		return;
		}
		
	*/
	return;
}

GameCameraAbstract* GameCameraLine::Set2(GameCameraLine* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraAbstract * __thiscall GameCameraLine::Set2(GameCameraLine *this,GameCameraLine *other){
		(*((this->parent).vtable)->SetInternal)(&this->parent,&other->parent);
		return &this->parent;
		}
		
	*/
	return null;
}

float GameCameraLine::GetCameraProgress(Vector4* param_2, uint param_3, Vector4* posOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraLine::GetCameraProgress(GameCameraLine *this,Vector4 *param_2,undefined4 param_3,Vector4 *posOut){
		float progress;
		float t;
		t = Line4::GetProgress(&this->line,param_2);
		(*((this->parent).vtable)->GetCameraPosition)(&this->parent,t,posOut);
		return progress;
		}
		
	*/
	return 0.0f;
}

void GameCameraLine::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall GameCameraLine::Dispose(GameCameraLine *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void GameCameraLine::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine::Method5(GameCameraLine *this,int *param_1){
		(**(code **)(*param_1 + 0x50))(&(this->parent).field1_0x4);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field2_0x8);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field3_0xc);
		FUN_000e7300((int)&this->line,param_1);
		return;
		}
		
	*/
	return;
}

void GameCameraLine::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine::Method8(GameCameraLine *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))((this->parent).field1_0x4);
		(**(code **)(*param_1 + 100))((this->parent).field2_0x8);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		FUN_000e7330((int)&this->line,param_1);
		return;
		}
		
	*/
	return;
}

void GameCameraLine::Method7(Matrix4* mat) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine::Method7(GameCameraLine *this,Matrix4 *mat){
		Line4::FUN_000d6090(&this->line,mat);
		return;
		}
		
	*/
	return;
}

GameCameraLine* GameCameraLine::SetInternal(GameCameraLine* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraLine * __thiscall GameCameraLine::SetInternal(GameCameraLine *this,GameCameraLine *other){
		(*((this->parent).vtable)->Set1)(&this->parent,&other->parent);
		(this->line).start.x = (other->line).start.x;
		(this->line).start.y = (other->line).start.y;
		(this->line).start.z = (other->line).start.z;
		(this->line).start.w = (other->line).start.w;
		(this->line).end.x = (other->line).end.x;
		(this->line).end.y = (other->line).end.y;
		(this->line).end.z = (other->line).end.z;
		(this->line).end.w = (other->line).end.w;
		return this;
		}
		
	*/
	return null;
}

int GameCameraLine::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int GameCameraLine::GetBuilderIndex(void){
		return 0x1c03;
		}
		
	*/
	return 0;
}

void GameCameraLine::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraLine::Construct(GameCameraLine *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Line;
		return;
		}
		
	*/
	return;
}

void GameCameraLine::Construct_11(Line4* line) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine::Construct(GameCameraLine *this,Line4 *line){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Line;
		(this->line).start.x = (line->start).x;
		(this->line).start.y = (line->start).y;
		(this->line).start.z = (line->start).z;
		(this->line).start.w = (line->start).w;
		(this->line).end.x = (line->end).x;
		(this->line).end.y = (line->end).y;
		(this->line).end.z = (line->end).z;
		(this->line).end.w = (line->end).w;
		return;
		}
		
	*/
	return;
}

void GameCameraLine::Construct_12(Vector4* start, Vector4* end) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine::Construct(GameCameraLine *this,Vector4 *start,Vector4 *end){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Line;
		(this->line).start.x = start->x;
		(this->line).start.y = start->y;
		(this->line).start.z = start->z;
		(this->line).start.w = start->w;
		(this->line).end.x = end->x;
		(this->line).end.y = end->y;
		(this->line).end.z = end->z;
		(this->line).end.w = end->w;
		return;
		}
		
	*/
	return;
}

