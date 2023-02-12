#include "headers/Known/Builders/UnkBuilder8/CameraFactory.h"

#include "headers/Known/Camera/GameCameraAbstract.h"
void CameraFactory::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CameraFactory * __thiscall CameraFactory::Dispose(CameraFactory *this,byte flag){
		this->vtable = (CameraFactory_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

GameCameraAbstract* CameraFactory::BUILD(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraAbstract * CameraFactory::BUILD(uint id){
		GameCameraLine *puVar1;
		GameCameraAbstract *pGVar2;
		GameCameraBoss *this;
		GameCameraPath *this_00;
		GameCameraSpline *this_01;
		undefined4 *puVar3;
		GameCameraUnk1 *this_02;
		GameCameraPoint2 *this_03;
		GameCameraUnk2 *pGVar1;
		GameCameraUnk3 *this_04;
		float fVar4;
		if (id < 0x1c09) {
		if (id == 0x1c08) {
		pGVar2 = (GameCameraAbstract *)VirtualPool::AllocateMemory(0x60);
		if (pGVar2 != (GameCameraAbstract *)0x0) {
		pGVar2->field3_0xc = FLOAT_0038639c;
		fVar4 = FLOAT_003863a8 / 2PI;
		pGVar2[1].vtable = (GameCameraAbstract_VTable *)0x0;
		pGVar2[1].field1_0x4 = 0;
		pGVar2[3].field3_0xc = 0.0;
		*(undefined *)((int)&pGVar2[4].vtable + 1) = 0;
		pGVar2[5].vtable = (GameCameraAbstract_VTable *)0x0;
		pGVar2->vtable = (GameCameraAbstract_VTable *)0x0;
		pGVar2->field1_0x4 = 0;
		pGVar2->field2_0x8 = 0;
		fVar4 = (float)(int)(fVar4 * 0.0);
		pGVar2[4].field1_0x4 = (int)fVar4;
		pGVar2[4].field2_0x8 = (int)fVar4;
		pGVar2[4].field3_0xc = fVar4;
		return pGVar2;
		}
		}
		else if (id < 0x1c05) {
		if (id == 0x1c04) {
		this_00 = (GameCameraPath *)VirtualPool::AllocateMemory(0x60);
		if (this_00 != (GameCameraPath *)0x0) {
		pGVar2 = (GameCameraAbstract *)GameCameraPath::Construct(this_00);
		return pGVar2;
		}
		}
		else if (id == 0xa19) {
		this = (GameCameraBoss *)VirtualPool::AllocateMemory(0xe0);
		if (this != (GameCameraBoss *)0x0) {
		pGVar2 = (GameCameraAbstract *)GameCameraBoss::Construct(this);
		return pGVar2;
		}
		}
		else if (id == 0x1c02) {
		pGVar2 = (GameCameraAbstract *)VirtualPool::AllocateMemory(0x20);
		if (pGVar2 != (GameCameraAbstract *)0x0) {
		pGVar2->field3_0xc = 0.0;
		pGVar2->field1_0x4 = 1;
		pGVar2->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Point;
		return pGVar2;
		}
		}
		else if ((id == 0x1c03) &&(puVar1 = (GameCameraLine *)VirtualPool::AllocateMemory(0x30),puVar1 != (GameCameraLine *)0x0)) {
		(puVar1->parent).field3_0xc = 0.0;
		(puVar1->parent).field1_0x4 = 1;
		(puVar1->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Line;
		return (GameCameraAbstract *)puVar1;
		}
		}
		else if (id == 0x1c05) {
		puVar3 = (undefined4 *)VirtualPool::AllocateMemory(0x90);
		if (puVar3 != (undefined4 *)0x0) {
		pGVar2 = (GameCameraAbstract *)FUN_001c95e0(puVar3);
		return pGVar2;
		}
		}
		else if (id == 0x1c06) {
		this_01 = (GameCameraSpline *)VirtualPool::AllocateMemory(0x20);
		if (this_01 != (GameCameraSpline *)0x0) {
		pGVar2 = (GameCameraAbstract *)GameCameraSpline::Construct(this_01);
		return pGVar2;
		}
		}
		else if ((id == 0x1c07) &&(pGVar2 = (GameCameraAbstract *)VirtualPool::AllocateMemory(8),pGVar2 != (GameCameraAbstract *)0x0)) {
		pGVar2->vtable = (GameCameraAbstract_VTable *)0x0;
		pGVar2->field1_0x4 = 0;
		return pGVar2;
		}
		}
		else {
		switch(id) {
		case 0x1c09:this_02 = (GameCameraUnk1 *)VirtualPool::AllocateMemory(0x70);
		if (this_02 != (GameCameraUnk1 *)0x0) {
		pGVar2 = (GameCameraAbstract *)GameCameraUnk1::Construct(this_02);
		return pGVar2;
		}
		break;
		case 0x1c0b:this_03 = (GameCameraPoint2 *)VirtualPool::AllocateMemory(0x30);
		if (this_03 != (GameCameraPoint2 *)0x0) {
		pGVar2 = (GameCameraAbstract *)GameCameraPoint2::Construct(this_03);
		return pGVar2;
		}
		break;
		case 0x1c0c:pGVar1 = (GameCameraUnk2 *)VirtualPool::AllocateMemory(0x50);
		if (pGVar1 != (GameCameraUnk2 *)0x0) {
		(pGVar1->parent).field3_0xc = 0.0;
		(pGVar1->parent).field1_0x4 = 1;
		(pGVar1->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk2;
		return (GameCameraAbstract *)pGVar1;
		}
		break;
		case 0x1c0d:pGVar2 = (GameCameraAbstract *)VirtualPool::AllocateMemory(0x40);
		if (pGVar2 != (GameCameraAbstract *)0x0) {
		pGVar2->field3_0xc = 0.0;
		pGVar2->field1_0x4 = 1;
		pGVar2->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Line2;
		return pGVar2;
		}
		break;
		case 0x1c0e:this_04 = (GameCameraUnk3 *)VirtualPool::AllocateMemory(0x44);
		if (this_04 != (GameCameraUnk3 *)0x0) {
		pGVar2 = (GameCameraAbstract *)GameCameraUnk3::Construct(this_04);
		return pGVar2;
		}
		break;
		case 0x1c0f:pGVar2 = (GameCameraAbstract *)VirtualPool::AllocateMemory(0xb0);
		if (pGVar2 != (GameCameraAbstract *)0x0) {
		pGVar2->field3_0xc = 0.0;
		pGVar2->field1_0x4 = 1;
		pGVar2->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Zone;
		return pGVar2;
		}
		}
		}
		return (GameCameraAbstract *)0x0;
		}
		
	*/
	return null;
}

void CameraFactory::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall CameraFactory::Construct(undefined4 *param_1){
		*param_1 = &Builder_VT_Camera;
		return;
		}
		
	*/
	return;
}

