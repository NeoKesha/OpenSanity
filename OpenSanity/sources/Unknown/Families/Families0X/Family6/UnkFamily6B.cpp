#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6B.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void UnkFamily6B::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6B::Init(UnkFamily6B *this){
		float fVar1;
		int iVar2;
		float fVar3;
		float fVar4;
		InstanceNodeAbstract *nodeabstract;
		float fVar5;
		float fVar6;
		InstanceTransform *transform;
		transform = *(InstanceTransform **)(*(int *)((this->parent).field14_0x14 + 0x10) + 0x18);
		InstanceTransform::FillMatrix(transform);
		fVar5 = FLOAT_0038adb8;
		fVar6 = FLOAT_0038639c;
		*(undefined4 *)&this->field_0xf0 = 0;
		*(undefined4 *)&this->field_0xf4 = 0;
		(this->field49_0x110).x = (transform->matrix).m31;
		(this->field49_0x110).y = (transform->matrix).m32;
		(this->field49_0x110).z = (transform->matrix).m33;
		(this->field49_0x110).w = (transform->matrix).m34;
		*(float *)&this->field_0xf8 = fVar5;
		fVar5 = FLOAT_0038bdd8;
		*(undefined4 *)&this->field_0x120 = 0;
		(this->field100_0x170).x = fVar5;
		fVar1 = FLOAT_0038a82c;
		(this->field100_0x170).z = FLOAT_0038a82c;
		(this->field100_0x170).y = fVar6;
		(this->field100_0x170).w = fVar6;
		fVar4 = DAT_0039dbf8;
		fVar5 = (this->field100_0x170).x;
		fVar5 = fVar5 * fVar5 + fVar6 * fVar6 + fVar1 * fVar1;
		if (fVar5 <= DAT_0039dbf8) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = fVar6 / SQRT(fVar5);
		}
		(this->field100_0x170).x = (this->field100_0x170).x * fVar5;
		(this->field100_0x170).y = (this->field100_0x170).y * fVar5;
		fVar1 = FLOAT_0038b97c;
		(this->field100_0x170).z = (this->field100_0x170).z * fVar5;
		(this->field101_0x180).x = fVar1;
		(this->field101_0x180).y = FLOAT_003869d8;
		fVar3 = FLOAT_0038b3ac;
		(this->field101_0x180).z = FLOAT_0038b3ac;
		(this->field101_0x180).w = fVar6;
		fVar5 = (this->field101_0x180).y;
		fVar1 = (this->field101_0x180).x;
		fVar5 = fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3;
		if (fVar5 <= fVar4) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = fVar6 / SQRT(fVar5);
		}
		(this->field101_0x180).x = (this->field101_0x180).x * fVar6;
		(this->field101_0x180).y = (this->field101_0x180).y * fVar6;
		(this->field101_0x180).z = (this->field101_0x180).z * fVar6;
		UnkFamily6Abstract::thunk_FUN_000870c0(&this->parent);
		nodeabstract = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		thunk_FUN_00080420((int)this,0.0);
		FUN_001dbc80((int)nodeabstract,0x3eb33333);
		FUN_001dbca0((int)nodeabstract,6.0);
		FUN_001dbcc0((int)nodeabstract,0x3fc00000);
		FUN_001dbce0((int)nodeabstract,0x3f000000,0x3d8f5c29);
		nodeabstract[0x1e].field5_0x10 =(InstanceNodeAbstract *)((uint)nodeabstract[0x1e].field5_0x10 & 0xfffffffe);
		nodeabstract[4].ctx = (InstanceContext *)0x3;
		nodeabstract[0x24].ctx = (InstanceContext *)thunk_FUN_0008ba10;
		*(UnkFamily6B **)&nodeabstract[0x24].field2_0x8 = this;
		nodeabstract[0x24].time = (uint)::EmptyFunction;
		nodeabstract[0x24].field5_0x10 = (InstanceNodeAbstract *)this;
		FUN_001dd940((int)nodeabstract,0x10);
		*(undefined4 *)&nodeabstract[0x21].field2_0x8 = 0;
		nodeabstract[0x21].ctx = (InstanceContext *)0x0;
		iVar2 = *(int *)((this->parent).field15_0x18 + 0x10);
		*(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffffffef;
		*(InstanceNodeAbstract_VTable **)&this->field_0x130 = nodeabstract[0xe].vtable;
		*(InstanceContext **)&this->field_0x134 = nodeabstract[0xe].ctx;
		*(undefined4 *)&this->field_0x138 = *(undefined4 *)&nodeabstract[0xe].field2_0x8;
		*(uint *)&this->field_0x13c = nodeabstract[0xe].time;
		(this->field82_0x140).x = Vector4_0039ef70.x;
		(this->field82_0x140).y = Vector4_0039ef70.y;
		(this->field82_0x140).z = Vector4_0039ef70.z;
		(this->field82_0x140).w = FLOAT_0038639c;
		*(undefined4 *)&this->field_0x150 = 0;
		Matrix4::Construct1((Matrix4 *)&this->field_0x190);
		fVar5 = FLOAT_0038639c;
		(this->field166_0x1d0).x = Vector4_0039ef70.x;
		(this->field166_0x1d0).y = Vector4_0039ef70.y;
		(this->field166_0x1d0).z = Vector4_0039ef70.z;
		(this->field166_0x1d0).w = fVar5;
		*(undefined4 *)&this->field_0x1e0 = 0;
		(this->field99_0x160).x = (transform->matrix).m41;
		(this->field99_0x160).y = (transform->matrix).m42;
		(this->field99_0x160).z = (transform->matrix).m43;
		(this->field99_0x160).w = (transform->matrix).m44;
		*(undefined4 *)&this->field_0x100 = 0;
		*(undefined4 *)&this->field_0x104 = 0;
		(this->field231_0x220).x = Vector4_0039ef70.x;
		(this->field231_0x220).y = Vector4_0039ef70.y;
		(this->field231_0x220).z = Vector4_0039ef70.z;
		(this->field231_0x220).w = fVar5;
		(this->field232_0x230).x = Vector4_0039ef70.x;
		(this->field232_0x230).y = Vector4_0039ef70.y;
		(this->field232_0x230).z = Vector4_0039ef70.z;
		(this->field232_0x230).w = fVar5;
		this->field_0x248 = 0;
		*(undefined4 *)&this->field_0x24c = 0;
		*(undefined4 *)&this->field_0x240 = 0;
		*(undefined4 *)&this->field_0x244 = 0;
		*(undefined4 *)&this->field_0x250 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily6B::Construct(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily6B * __thiscall UnkFamily6B::Construct(UnkFamily6B *this,int param_1,int param_2){
		(this->parent).field15_0x18 = param_2;
		(this->parent).field14_0x14 = param_1;
		(this->parent).field13_0x10 = 2;
		(this->parent).vtable = &UnkFamily6_VT_B;
		Init(this);
		return this;
		}
		
	*/
	return;
}

uint UnkFamily6B::FUN_0008b600() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily6B::FUN_0008b600(UnkFamily6B *this){
		Matrix4 *pMVar1;
		float fVar2;
		float fVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceContext *pIVar5;
		InstanceNodeAbstract_VTable *pIVar6;
		float fVar7;
		InstanceNodeAbstract *pIVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		pIVar8 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		fVar9 = (float)pIVar8[7].time;
		pIVar4 = pIVar8[7].field5_0x10;
		fVar2 = (float)pIVar8[7].field6_0x14;
		pMVar1 = &(this->parent).field22_0xa0;
		pMVar1->m11 = *(float *)&pIVar8[7].field2_0x8;
		(this->parent).field22_0xa0.m12 = fVar9;
		(this->parent).field22_0xa0.m13 = (float)pIVar4;
		(this->parent).field22_0xa0.m14 = fVar2;
		pIVar5 = pIVar8[8].ctx;
		fVar9 = *(float *)&pIVar8[8].field2_0x8;
		fVar2 = (float)pIVar8[8].time;
		(this->parent).field22_0xa0.m21 = (float)pIVar8[8].vtable;
		(this->parent).field22_0xa0.m22 = (float)pIVar5;
		(this->parent).field22_0xa0.m23 = fVar9;
		(this->parent).field22_0xa0.m24 = fVar2;
		fVar9 = (float)pIVar8[8].field6_0x14;
		pIVar6 = pIVar8[9].vtable;
		pIVar5 = pIVar8[9].ctx;
		(this->parent).field22_0xa0.m31 = (float)pIVar8[8].field5_0x10;
		(this->parent).field22_0xa0.m32 = fVar9;
		(this->parent).field22_0xa0.m33 = (float)pIVar6;
		(this->parent).field22_0xa0.m34 = (float)pIVar5;
		fVar9 = (float)pIVar8[9].time;
		pIVar4 = pIVar8[9].field5_0x10;
		fVar2 = (float)pIVar8[9].field6_0x14;
		(this->parent).field22_0xa0.m41 = *(float *)&pIVar8[9].field2_0x8;
		(this->parent).field22_0xa0.m42 = fVar9;
		(this->parent).field22_0xa0.m43 = (float)pIVar4;
		(this->parent).field22_0xa0.m44 = fVar2;
		FUN_000d84c0(pMVar1,(Matrix4 *)&this->field_0x190);
		(this->parent).field22_0xa0.m41 = (this->field166_0x1d0).x + (this->parent).field22_0xa0.m41;
		(this->parent).field22_0xa0.m42 = (this->field166_0x1d0).y + (this->parent).field22_0xa0.m42;
		(this->parent).field22_0xa0.m43 = (this->field166_0x1d0).z + (this->parent).field22_0xa0.m43;
		fVar9 = (float)pIVar8[7].time;
		pIVar4 = pIVar8[7].field5_0x10;
		fVar2 = (float)pIVar8[7].field6_0x14;
		pMVar1 = &(this->parent).field21_0x60;
		pMVar1->m11 = *(float *)&pIVar8[7].field2_0x8;
		(this->parent).field21_0x60.m12 = fVar9;
		(this->parent).field21_0x60.m13 = (float)pIVar4;
		(this->parent).field21_0x60.m14 = fVar2;
		pIVar5 = pIVar8[8].ctx;
		fVar9 = *(float *)&pIVar8[8].field2_0x8;
		fVar2 = (float)pIVar8[8].time;
		(this->parent).field21_0x60.m21 = (float)pIVar8[8].vtable;
		(this->parent).field21_0x60.m22 = (float)pIVar5;
		(this->parent).field21_0x60.m23 = fVar9;
		(this->parent).field21_0x60.m24 = fVar2;
		fVar9 = (float)pIVar8[8].field6_0x14;
		pIVar6 = pIVar8[9].vtable;
		pIVar5 = pIVar8[9].ctx;
		(this->parent).field21_0x60.m31 = (float)pIVar8[8].field5_0x10;
		(this->parent).field21_0x60.m32 = fVar9;
		(this->parent).field21_0x60.m33 = (float)pIVar6;
		(this->parent).field21_0x60.m34 = (float)pIVar5;
		fVar9 = (float)pIVar8[9].time;
		pIVar4 = pIVar8[9].field5_0x10;
		fVar2 = (float)pIVar8[9].field6_0x14;
		(this->parent).field21_0x60.m41 = *(float *)&pIVar8[9].field2_0x8;
		(this->parent).field21_0x60.m42 = fVar9;
		(this->parent).field21_0x60.m43 = (float)pIVar4;
		(this->parent).field21_0x60.m44 = fVar2;
		FUN_000d84c0(pMVar1,(Matrix4 *)&this->field_0x190);
		(this->parent).field21_0x60.m41 = (this->field166_0x1d0).x + (this->parent).field21_0x60.m41;
		(this->parent).field21_0x60.m42 = (this->field166_0x1d0).y + (this->parent).field21_0x60.m42;
		(this->parent).field21_0x60.m43 = (this->field166_0x1d0).z + (this->parent).field21_0x60.m43;
		fVar9 = FLOAT_0038a934;
		(this->parent).field20_0x20.m41 = *(float *)&pIVar8[9].field2_0x8;
		(this->parent).field20_0x20.m42 = (float)pIVar8[9].time;
		(this->parent).field20_0x20.m43 = (float)pIVar8[9].field5_0x10;
		(this->parent).field20_0x20.m44 = (float)pIVar8[9].field6_0x14;
		(this->parent).field20_0x20.m42 =(fVar9 - *(float *)&this->field_0xf8) + (this->parent).field20_0x20.m42;
		(this->parent).field20_0x20.m31 = (this->field49_0x110).x;
		fVar3 = (this->field49_0x110).y;
		(this->parent).field20_0x20.m32 = fVar3;
		(this->parent).field20_0x20.m33 = (this->field49_0x110).z;
		(this->parent).field20_0x20.m34 = (this->field49_0x110).w;
		(this->parent).field20_0x20.m32 = 0.0;
		fVar7 = DAT_0039dbf8;
		fVar11 = FLOAT_0038639c;
		fVar9 = (this->parent).field20_0x20.m31;
		fVar2 = (this->parent).field20_0x20.m33;
		fVar9 = fVar9 * fVar9 + 0.0 + fVar2 * fVar2;
		if (fVar9 <= DAT_0039dbf8) {
		fVar9 = 0.0;
		}
		else {
		fVar9 = FLOAT_0038639c / SQRT(fVar9);
		}
		(this->parent).field20_0x20.m31 = (this->parent).field20_0x20.m31 * fVar9;
		(this->parent).field20_0x20.m32 = (this->parent).field20_0x20.m32 * fVar9;
		(this->parent).field20_0x20.m33 = (this->parent).field20_0x20.m33 * fVar9;
		(this->parent).field20_0x20.m21 = 0.0;
		(this->parent).field20_0x20.m22 = fVar11;
		(this->parent).field20_0x20.m23 = 0.0;
		(this->parent).field20_0x20.m24 = 0.0;
		(this->parent).field20_0x20.m11 =fVar11 * (this->parent).field20_0x20.m33 - (this->parent).field20_0x20.m32 * 0.0;
		(this->parent).field20_0x20.m12 =(this->parent).field20_0x20.m23 * (this->parent).field20_0x20.m31 -(this->parent).field20_0x20.m21 * (this->parent).field20_0x20.m33;
		fVar10 = (this->parent).field20_0x20.m32 * (this->parent).field20_0x20.m21 -(this->parent).field20_0x20.m22 * (this->parent).field20_0x20.m31;
		(this->parent).field20_0x20.m13 = fVar10;
		(this->parent).field20_0x20.m14 = fVar11;
		fVar9 = (this->parent).field20_0x20.m12;
		fVar2 = (this->parent).field20_0x20.m11;
		fVar9 = fVar2 * fVar2 + fVar9 * fVar9 + fVar10 * fVar10;
		if (fVar9 <= fVar7) {
		fVar11 = 0.0;
		}
		else {
		fVar11 = fVar11 / SQRT(fVar9);
		}
		(this->parent).field20_0x20.m11 = fVar11 * (this->parent).field20_0x20.m11;
		(this->parent).field20_0x20.m12 = (this->parent).field20_0x20.m12 * fVar11;
		(this->parent).field20_0x20.m13 = (this->parent).field20_0x20.m13 * fVar11;
		(this->parent).field20_0x20.m14 = 0.0;
		(this->parent).field20_0x20.m34 = 0.0;
		return CONCAT31((int3)((uint)fVar3 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily6B::FUN_0008b910(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6B::FUN_0008b910(UnkFamily6B *this,float *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceNodePhysics *this_00;
		float fVar4;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		this_00 = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		fVar1 = param_1[1];
		fVar2 = param_1[2];
		local_14 = param_1[3];
		fVar3 = *param_1;
		fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
		if (fVar4 <= DAT_0039dbf8) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = FLOAT_0038639c / SQRT(fVar4);
		}
		local_20 = fVar3 * fVar4 * FLOAT_0038b8bc;
		local_1c = fVar1 * fVar4 * FLOAT_0038b8bc;
		local_18 = fVar2 * fVar4 * FLOAT_0038b8bc;
		InstanceNodePhysics::FUN_001dfbd0(this_00,&Vector4_0039ef70);
		FUN_001e0260((int)this_00,&Vector4_0039ef70.x,&local_20);
		return;
		}
		
	*/
	return;
}

void UnkFamily6B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily6B::Dispose(UnkFamily6B *this,byte param_1){
		int iVar1;
		InstanceNodePhysics *node;
		(this->parent).vtable = &UnkFamily6_VT_B;
		iVar1 = *(int *)((this->parent).field15_0x18 + 0x10);
		*(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x10;
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

uint UnkFamily6B::FUN_00080910(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily6B::FUN_00080910(UnkFamily6B *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		undefined *puVar1;
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		puVar1 = &this->field_0x130;
		InstanceNodeKSubA::FUN_00139650(param_2,(Vector4 *)puVar1,false);
		return CONCAT31((int3)((uint)puVar1 >> 8),1);
		}
		return (uint)this & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily6B::FUN_00092df0(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6B::FUN_00092df0(UnkFamily6B *this,float param_1){
		Vector4 *pVVar1;
		Vector4 *pVVar2;
		float fVar3;
		InstanceNodeAbstract *pIVar4;
		float fVar5;
		float fVar6;
		(this->field231_0x220).x = Vector4_0039ef70.x;
		(this->field231_0x220).y = Vector4_0039ef70.y;
		(this->field231_0x220).z = Vector4_0039ef70.z;
		fVar6 = FLOAT_0038639c;
		pVVar1 = &this->field231_0x220;
		(this->field231_0x220).w = FLOAT_0038639c;
		pVVar2 = &this->field232_0x230;
		pVVar2->x = Vector4_0039ef70.x;
		(this->field232_0x230).y = Vector4_0039ef70.y;
		(this->field232_0x230).z = Vector4_0039ef70.z;
		(this->field232_0x230).w = fVar6;
		if ((*(int *)&this->field_0xf0 == 3) || (*(int *)&this->field_0xf0 == 4)) {
		thunk_FUN_00080340((int *)this);
		}
		else {
		thunk_FUN_0008ab60((int)this,param_1);
		}
		thunk_FUN_0008b1d0((int)this);
		thunk_FUN_000927e0((int)this);
		*(float *)&this->field_0x100 = *(float *)&this->field_0x100 + param_1;
		*(float *)&this->field_0x104 = *(float *)&this->field_0x104 + param_1;
		fVar6 = (this->field231_0x220).y;
		fVar5 = (this->field231_0x220).z;
		fVar3 = (this->field232_0x230).y;
		fVar5 = pVVar1->x * pVVar1->x + fVar6 * fVar6 + fVar5 * fVar5;
		fVar6 = (this->field232_0x230).z;
		fVar6 = pVVar2->x * pVVar2->x + fVar3 * fVar3 + fVar6 * fVar6;
		param_1 = 0.0;
		if ((FLOAT_0038acf0 < fVar5) && (FLOAT_0038acf0 < fVar6)) {
		if (FLOAT_0038639c < fVar5) {
		thunk_FUN_000543a0(&pVVar1->x);
		}
		if (FLOAT_0038639c < fVar6) {
		thunk_FUN_000543a0(&pVVar2->x);
		}
		param_1 = 0.0;
		fVar6 = (this->field232_0x230).z * (this->field231_0x220).z +(this->field232_0x230).y * (this->field231_0x220).y + pVVar2->x * pVVar1->x;
		if (fVar6 <= 0.0) {
		param_1 = 0.0 - fVar6;
		}
		}
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Instance);
		if (pIVar4[10].field6_0x14 != 0) {
		*(float *)(pIVar4[10].field6_0x14 + 100) = param_1;
		}
		UnkFamily6Abstract::thunk_FUN_0007f010(&this->parent);
		return;
		}
		
	*/
	return;
}

uint UnkFamily6B::FUN_000a5d70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily6B::FUN_000a5d70(void){
		return 6;
		}
		
	*/
	return 0;
}

void UnkFamily6B::FUN_000a5d80(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6B::FUN_000a5d80(Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		fVar1 = FLOAT_003869d8;
		param_1->z = FLOAT_003869d8;
		param_1->y = fVar1;
		param_1->x = fVar1;
		fVar1 = FLOAT_0038639c;
		param_1->w = FLOAT_0038639c;
		param_2->z = fVar1;
		param_2->y = fVar1;
		param_2->x = fVar1;
		param_2->w = fVar1;
		return;
		}
		
	*/
	return;
}

void UnkFamily6B::FUN_000a5de0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6B::FUN_000a5de0(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily6B::FUN_000a5df0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6B::FUN_000a5df0(void){
		return 1;
		}
		
	*/
	return;
}

void UnkFamily6B::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6B::CleanUp(UnkFamily6B *this){
		int iVar1;
		InstanceNodePhysics *node;
		(this->parent).vtable = &UnkFamily6_VT_B;
		iVar1 = *(int *)((this->parent).field15_0x18 + 0x10);
		*(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x10;
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		return;
		}
		
	*/
	return;
}

