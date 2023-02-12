#include "headers/Known/Camera/GameCameraPath.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/GameData/Path/Path.h"
void GameCameraPath::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraPath::Dispose(GameCameraPath *this){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Path;
		Path::Dispose(&this->path);
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		return;
		}
		
	*/
	return;
}

float GameCameraPath::GetCameraProgress(Vector4* param_1, uint param_2, Vector4* posOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraPath::GetCameraProgress(GameCameraPath *this,Vector4 *param_1,undefined4 param_2,Vector4 *posOut){
		float10 fVar1;
		float t;
		undefined local_40 [40];
		undefined4 local_18;
		local_18 = 0xffffffff;
		Path::FUN_000f1c60(&this->path,param_1,(int)local_40);
		t = Path::FUN_000ecee0(&this->path,(int)local_40);
		(*((this->parent).vtable)->GetCameraPosition)(&this->parent,t,posOut);
		return t;
		}
		
	*/
	return 0.0f;
}

void GameCameraPath::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraPath * __thiscall GameCameraPath::Dispose(GameCameraPath *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Path;
		Path::Dispose(&this->path);
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameCameraPath::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraPath::Construct(GameCameraPath *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Path;
		(this->path).parent.points = (Vector4 *)0x0;
		(this->path).parent.vtable = (PathBase_VTable *)&Path_VT;
		(this->path).parameters = (Vector2 *)0x0;
		(this->path).field58_0x48 = -1;
		return;
		}
		
	*/
	return;
}

void GameCameraPath::GetCameraPosition(float t, Vector4* posOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPath::GetCameraPosition(int this,float t,Vector4 *posOut){
		float fVar1;
		t = *(float *)(this + 0xc) / *(float *)(*(int *)(this + 0x1c) + -0x10 + *(int *)(this + 0x14) * 4)+ t;
		fVar1 = FLOAT_0038639c;
		if ((FLOAT_0038639c < t) || (fVar1 = 0.0, t < 0.0)) {
		t = fVar1;
		}
		FUN_000ecf20(this + 0x10,posOut,t);
		return;
		}
		
	*/
	return;
}

void GameCameraPath::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPath::Method5(GameCameraPath *this,int *param_1){
		(**(code **)(*param_1 + 0x50))(&(this->parent).field1_0x4);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field2_0x8);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field3_0xc);
		(*((this->path).parent.vtable)->Read)(&(this->path).parent,(MemoryStream *)param_1);
		return;
		}
		
	*/
	return;
}

void GameCameraPath::Method7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraPath::Method7(GameCameraPath *this){
		Matrix4 *in_stack_00000004;
		(*((this->path).parent.vtable)->Method1)(&(this->path).parent,in_stack_00000004);
		return;
		}
		
	*/
	return;
}

void GameCameraPath::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPath::Method8(GameCameraPath *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))((this->parent).field1_0x4);
		(**(code **)(*param_1 + 100))((this->parent).field2_0x8);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		(*((this->path).parent.vtable)->Write)(&(this->path).parent,param_1);
		return;
		}
		
	*/
	return;
}

bool GameCameraPath::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraPath::IsA(GameCameraPath *this,int **param_1){
		bool bVar1;
		bool bVar2;
		bVar1 = GameCameraAbstract::IsA(&this->parent,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar2 = UnkFamily27A::FUN_001bb5f0((UnkFamily27A *)*param_1,(int *)&this->path,0xa09,0);
		return (bool)(bVar2 & bVar1);
		}
		if (param_1[1] == (int *)0x1) {
		bVar2 = UnkFamily27A::FUN_001bb660((UnkFamily27A *)*param_1,(int *)&this->path,0xa09,0);
		return (bool)(bVar2 & bVar1);
		}
		}
		return false;
		}
		
	*/
	return false;
}

int GameCameraPath::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int GameCameraPath::GetBuilderIndex(void){
		return 0x1c04;
		}
		
	*/
	return 0;
}

void GameCameraPath::Construct_10(Path* otherPath) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraPath * __thiscall GameCameraPath::Construct(GameCameraPath *this,Path *otherPath){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Path;
		Path::Copy(&this->path,otherPath);
		return this;
		}
		
	*/
	return;
}

