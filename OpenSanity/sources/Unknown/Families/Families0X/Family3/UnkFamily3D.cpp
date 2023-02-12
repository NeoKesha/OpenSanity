#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3D.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2C.h"
NodeRelated2C* UnkFamily3D::FUN_00091ee0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2C * __fastcall UnkFamily3D::FUN_00091ee0(UnkFamily3D *this){
		InstanceNodeCharacter *pIVar1;
		InstanceNodeCharacter *pIVar2;
		if ((*(int **)&this->field_0xc != (int *)0x0) && (**(int **)&this->field_0xc != 0)) {
		if (*(int **)&this->field_0xc == (int *)0x0) {
		pIVar1 = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)0xe4,Character);
		return pIVar1->field1_0x18;
		}
		pIVar2 = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)(**(int **)&this->field_0xc + 0xe4),Character);
		return pIVar2->field1_0x18;
		}
		return (NodeRelated2C *)0x0;
		}
		
	*/
	return null;
}

void UnkFamily3D::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3D::CleanUp(UnkFamily3D *this){
		NodeRelated2C *pNVar1;
		UnkFamily24Base *this_00;
		int **ppiVar2;
		uint uVar3;
		pNVar1 = this->field5_0x8;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_D;
		FUN_001f8830(this,(pNVar1->parent).parent.ctx);
		if ((((*(uint *)&this->field_0x4 & 0x1000) != 0) &&(ppiVar2 = *(int ***)&this->field_0xc, ppiVar2 != (int **)0x0)) && (*ppiVar2 != (int *)0x0)) {
		if (ppiVar2 != (int **)0x0) {
		ppiVar2 = (int **)*ppiVar2;
		}
		if ((*(uint *)&this->field_0x4 >> 0xd & 1) == 0) {
		uVar3 = ((int *)ppiVar2)[5] & 0xfffdffff;
		}
		else {
		uVar3 = ((int *)ppiVar2)[5] | 0x20000;
		}
		((int *)ppiVar2)[5] = uVar3;
		}
		this_00 = *(UnkFamily24Base **)&this->field_0x110;
		if (this_00 != (UnkFamily24Base *)0x0) {
		UnkFamily24Base::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&this->field_0x10);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&this->field_0xc);
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily3D::Construct(NodeRelated2C* param_1, NodeRelated2C* param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3D * __thiscall UnkFamily3D::Construct(UnkFamily3D *this,NodeRelated2C *param_1,NodeRelated2C *param_2,byte param_3){
		undefined *this_00;
		undefined *this_01;
		int *piVar1;
		InstanceTransform *transform;
		InstanceContext *pIVar2;
		undefined4 uVar3;
		InstanceContext *pIVar4;
		uint uVar5;
		float fVar6;
		this->field5_0x8 = param_1;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_D;
		this_00 = &this->field_0xc;
		*(undefined4 *)this_00 = 0;
		this_01 = &this->field_0x10;
		*(undefined4 *)this_01 = 0;
		*(undefined4 *)&this->field_0x110 = 0;
		*(undefined4 *)&this->field_0x214 = 0;
		if (param_3 == 0) {
		pIVar2 = (param_2->parent).parent.ctx;
		pIVar4 = *(InstanceContext **)this_01;
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar4 = (InstanceContext *)(pIVar4->parent).vtable;
		}
		if (pIVar4 != pIVar2) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_01);
		if (pIVar2 == (InstanceContext *)0x0) {
		*(undefined4 *)this_01 = 0;
		}
		else {
		uVar3 = InstanceContextSmartPtr::CreateRef(&pIVar2->smartPtr,pIVar2,0);
		*(undefined4 *)this_01 = uVar3;
		}
		}
		if ((*(int **)this_00 != (int *)0x0) && (**(int **)this_00 != 0)) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_00);
		*(undefined4 *)this_00 = 0;
		}
		}
		else {
		if ((*(int **)this_01 != (int *)0x0) && (**(int **)this_01 != 0)) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_01);
		*(undefined4 *)this_01 = 0;
		}
		pIVar2 = *(InstanceContext **)this_00;
		pIVar4 = (param_2->parent).parent.ctx;
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = (InstanceContext *)(pIVar2->parent).vtable;
		}
		if (pIVar2 != pIVar4) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_00);
		if (pIVar4 == (InstanceContext *)0x0) {
		*(undefined4 *)this_00 = 0;
		}
		else {
		uVar3 = InstanceContextSmartPtr::CreateRef(&pIVar4->smartPtr,pIVar4,0);
		*(undefined4 *)this_00 = uVar3;
		}
		}
		}
		fVar6 = FLOAT_0038639c;
		*(float *)&this->field_0x40 = FLOAT_0038639c;
		uVar5 = (param_3 & 1) << 0xc | 1;
		*(uint *)&this->field_0x4 = uVar5;
		if ((param_3 & 1) == 0) {
		transform = (((param_1->parent).parent.ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		(this->field436_0x1f0).x = (transform->matrix).m41;
		(this->field436_0x1f0).y = (transform->matrix).m42;
		(this->field436_0x1f0).z = (transform->matrix).m43;
		(this->field436_0x1f0).w = (transform->matrix).m44;
		this->field439_0x208 = 0;
		this->field438_0x204 = 0;
		this->field437_0x200 = 0;
		fVar6 = FLOAT_0038639c;
		this->field440_0x20c = FLOAT_0038639c;
		this->field441_0x210 = fVar6;
		}
		else {
		pIVar2 = (param_2->parent).parent.ctx;
		*(uint *)&this->field_0x4 =(uint)(((pIVar2->parent).flags & 0x20000U) == 0x20000) << 0xd ^ uVar5;
		piVar1 = &(pIVar2->parent).flags;
		*piVar1 = *piVar1 & 0xfffdffff;
		}
		this->field366_0x1a4 = 0;
		this->field367_0x1a8 = 0;
		this->field74_0x50 = FLOAT_0038b950;
		(this->field216_0xf0).x = Vector4_0039ef70.x;
		(this->field216_0xf0).y = Vector4_0039ef70.y;
		(this->field216_0xf0).z = Vector4_0039ef70.z;
		(this->field216_0xf0).w = fVar6;
		(this->field217_0x100).x = Vector4_0039ef70.x;
		(this->field217_0x100).y = Vector4_0039ef70.y;
		(this->field217_0x100).z = Vector4_0039ef70.z;
		(this->field217_0x100).w = fVar6;
		(this->field119_0x80).x = Vector4_0039ef70.x;
		(this->field119_0x80).y = Vector4_0039ef70.y;
		(this->field119_0x80).z = Vector4_0039ef70.z;
		(this->field119_0x80).w = fVar6;
		return this;
		}
		
	*/
	return;
}

uint UnkFamily3D::FUN_00098550(void* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily3D::FUN_00098550(UnkFamily3D *this,void *param_1,Matrix4 *param_2){
		float *this_00;
		float fVar1;
		InstanceNodeCharacter *nodeC;
		undefined4 *puVar2;
		InstanceNodeAbstract *pIVar3;
		UnkFamily3D *out;
		int iVar4;
		uint uVar5;
		InstanceNodeAbstract_VTable *pIVar6;
		NodeRelated2C *pNVar7;
		float fVar8;
		float local_110;
		float local_10c;
		float local_108;
		float local_104;
		float local_f4;
		Matrix4 local_f0;
		InstanceTransform *local_a8;
		UnkFamily3D *local_a4;
		float local_a0;
		float local_9c;
		float local_98;
		float local_94;
		Matrix4 local_90;
		Matrix4 local_50;
		if ((*(int **)&this->field_0x10 == (int *)0x0) || (**(int **)&this->field_0x10 == 0)) {
		pNVar7 = (NodeRelated2C *)0x0;
		}
		else {
		puVar2 = *(undefined4 **)&this->field_0x10;
		if (puVar2 != (undefined4 *)0x0) {
		puVar2 = (undefined4 *)*puVar2;
		}
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)(puVar2 + 0x39),Character);
		pNVar7 = nodeC->field1_0x18;
		}
		if ((*(int **)&this->field_0xc == (int *)0x0) || (**(int **)&this->field_0xc == 0)) {
		pIVar6 = (InstanceNodeAbstract_VTable *)0x0;
		}
		else {
		puVar2 = *(undefined4 **)&this->field_0xc;
		if (puVar2 != (undefined4 *)0x0) {
		puVar2 = (undefined4 *)*puVar2;
		}
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(puVar2 + 0x39),Character);
		pIVar6 = pIVar3[1].vtable;
		}
		local_9c = (float)this->field366_0x1a4;
		if (pIVar6 == (InstanceNodeAbstract_VTable *)0x0) {
		out = pNVar7->field17_0xb0;
		if (out == (UnkFamily3D *)0x0) goto LAB_00098daa;
		local_9c = (float)out->field366_0x1a4;
		}
		local_f4 = (float)(uint)*(byte *)(*(int *)(*(int *)((int)param_1 + 8) + 0x54) + 0x50);
		local_98 = (float)((uint)(pIVar6 != (InstanceNodeAbstract_VTable *)0x0) * 4 + 0xd);
		local_94 = (float)((uint)(pIVar6 != (InstanceNodeAbstract_VTable *)0x0) * 4 + 0xe);
		local_a0 = (float)((uint)(pIVar6 != (InstanceNodeAbstract_VTable *)0x0) * 4 + 0xf);
		local_a4 = (UnkFamily3D *)(*(uint *)&this->field_0x4 >> 8 & 0xf);
		FUN_001f9070(param_1,*(Matrix4 **)(*(int *)((int)param_1 + 8) + 0x60),'\x01',param_2);
		out = (UnkFamily3D *)0x0;
		if (((local_f4 == 2.802597e-45) || (local_f4 == 4.203895e-45)) || (local_f4 == 5.605194e-45)) {
		if (local_a4 == (UnkFamily3D *)0x2) {
		local_90.m11 = param_2->m11;
		local_90.m12 = param_2->m12;
		local_90.m13 = param_2->m13;
		local_90.m14 = param_2->m14;
		local_a8 = (InstanceTransform *)(*(float *)&this->field_0x40 * FLOAT_00386618);
		local_90.m21 = param_2->m21;
		local_90.m22 = param_2->m22;
		local_90.m23 = param_2->m23;
		local_90.m24 = param_2->m24;
		local_90.m31 = param_2->m31;
		local_90.m32 = param_2->m32;
		local_90.m33 = param_2->m33;
		local_90.m34 = param_2->m34;
		local_90.m41 = 0.0;
		local_90.m42 = 0.0;
		local_90.m43 = 0.0;
		local_90.m44 = FLOAT_0038639c;
		fVar8 = thunk_FUN_00097640((int)this);
		fVar8 = (float)__ftol2((FLOAT_003863a8 / DAT_0039db80) * fVar8 * (float)local_a8);
		Matrix4::Construct(&local_50,fVar8);
		out = (UnkFamily3D *)&local_f0;
		Matrix4::Multiply4443(&local_50,&local_90,(Matrix4 *)out);
		local_f0.m41 = param_2->m41;
		local_f0.m42 = param_2->m42;
		local_f0.m43 = param_2->m43;
		local_f0.m44 = param_2->m44;
		}
		goto LAB_00098ece;
		}
		if ((local_f4 == local_98) && (((byte)*(undefined4 *)&this->field_0x4 & 0xf) != 2)) {
		D3DXCOLOR(&this->field_0x60,&param_2->m41);
		this_00 = &this->field74_0x50;
		if (this->field74_0x50 == FLOAT_0038b950) {
		D3DXCOLOR(this_00,(undefined4 *)&this->field_0x60);
		}
		if (local_a4 == (UnkFamily3D *)0x0) {
		out = (UnkFamily3D *)(*(uint *)&this->field_0x4 & 0xfffff1ff | 0x100);
		*(UnkFamily3D **)&this->field_0x4 = out;
		goto LAB_00098ece;
		}
		out = local_a4;
		if (local_a4 != (UnkFamily3D *)0x2) goto LAB_00098ece;
		iVar4 = BlackboardAbstract::GetIntValue((this->field5_0x8->parent).parent.blackboard,0);
		if (iVar4 == 0) {
		out = (UnkFamily3D *)thunk_FUN_000868a0((int)&local_f0,(float *)&this->field_0x20,0,1,2,0);
		local_f0.m21 = local_f0.m21 * FLOAT_003869d8;
		local_f0.m22 = local_f0.m22 * FLOAT_003869d8;
		local_f0.m23 = local_f0.m23 * FLOAT_003869d8;
		local_f0.m31 = local_f0.m31 * FLOAT_003869d8;
		local_f0.m32 = local_f0.m32 * FLOAT_003869d8;
		local_f0.m33 = local_f0.m33 * FLOAT_003869d8;
		}
		else {
		out = (UnkFamily3D *)thunk_FUN_000868a0((int)&local_f0,(float *)&this->field_0x20,0,1,2,0);
		local_f0.m11 = local_f0.m11 * FLOAT_003869d8;
		local_f0.m12 = local_f0.m12 * FLOAT_003869d8;
		local_f0.m13 = local_f0.m13 * FLOAT_003869d8;
		local_f0.m31 = local_f0.m31 * FLOAT_003869d8;
		local_f0.m32 = local_f0.m32 * FLOAT_003869d8;
		local_f0.m33 = local_f0.m33 * FLOAT_003869d8;
		}
		fVar8 = param_2->m42;
		fVar1 = param_2->m43;
		*(float *)&this->field_0x70 = param_2->m41 - *this_00;
		*(float *)&this->field_0x74 = fVar8 - *(float *)&this->field_0x54;
		*(float *)&this->field_0x78 = fVar1 - *(float *)&this->field_0x58;
		*(float *)&this->field_0x7c = FLOAT_0038639c;
		local_110 = *this_00 + *(float *)&this->field_0x70;
		local_10c = *(float *)&this->field_0x74 + *(float *)&this->field_0x54;
		local_f0.m43 = *(float *)&this->field_0x78 + *(float *)&this->field_0x58;
		}
		else {
		if ((local_f4 != local_94) || (((byte)*(undefined4 *)&this->field_0x4 & 0xf) == 2)) {
		if (local_f4 != local_a0) {
		LAB_00098daa:return (uint)out & 0xffffff00;
		}
		local_110 = (this->field217_0x100).x - (this->field216_0xf0).x;
		local_10c = (this->field217_0x100).y - (this->field216_0xf0).y;
		local_108 = (this->field217_0x100).z - (this->field216_0xf0).z;
		local_104 = FLOAT_0038639c;
		out = (UnkFamily3D *)thunk_FUN_000543a0(&local_110);
		fVar8 = FLOAT_0038b92c;
		if (pIVar6 != (InstanceNodeAbstract_VTable *)0x0) {
		fVar8 = FLOAT_0038bc04;
		}
		local_108 = local_108 * fVar8;
		local_10c = local_10c * fVar8;
		local_110 = local_110 * fVar8;
		if (local_a4 == (UnkFamily3D *)0x2) {
		iVar4 = BlackboardAbstract::GetIntValue((this->field5_0x8->parent).parent.blackboard,0);
		if (iVar4 == 0) {
		thunk_FUN_000868a0((int)&local_90,(float *)&this->field_0x30,0,1,2,0);
		local_90.m21 = local_90.m21 * FLOAT_003869d8;
		local_90.m22 = local_90.m22 * FLOAT_003869d8;
		local_90.m23 = local_90.m23 * FLOAT_003869d8;
		}
		else {
		thunk_FUN_000868a0((int)&local_90,(float *)&this->field_0x30,0,1,2,0);
		local_90.m11 = local_90.m11 * FLOAT_003869d8;
		local_90.m12 = local_90.m12 * FLOAT_003869d8;
		local_90.m13 = local_90.m13 * FLOAT_003869d8;
		}
		local_90.m31 = local_90.m31 * FLOAT_003869d8;
		local_90.m32 = local_90.m32 * FLOAT_003869d8;
		local_90.m33 = local_90.m33 * FLOAT_003869d8;
		local_90.m41 = *(float *)&this->field_0x70 + local_110 + (this->field216_0xf0).x;
		local_90.m42 = *(float *)&this->field_0x74 + (this->field216_0xf0).y + local_10c;
		local_90.m43 = *(float *)&this->field_0x78 + (this->field216_0xf0).z + local_108;
		local_90.m44 = FLOAT_0038639c;
		iVar4 = BlackboardAbstract::GetIntValue((this->field5_0x8->parent).parent.blackboard,0);
		if (iVar4 == 0) {
		(this->field119_0x80).x = FLOAT_0038b844;
		(this->field119_0x80).y = FLOAT_0038b8c4;
		fVar8 = FLOAT_0038bfe0;
		}
		else {
		(this->field119_0x80).x = FLOAT_0038a774;
		fVar8 = FLOAT_0038bfe0;
		(this->field119_0x80).y = FLOAT_0038bfe0;
		}
		(this->field119_0x80).z = fVar8;
		(this->field119_0x80).w = FLOAT_0038639c;
		if (((byte)*(undefined4 *)&this->field_0x4 & 0xf) == 2) {
		thunk_FUN_000a4280(param_2,(undefined (*) [16])&this->field119_0x80);
		local_a8 = (((this->field5_0x8->parent).parent.ctx)->parent).transform;
		InstanceTransform::FillMatrix(local_a8);
		thunk_FUN_000a4280(local_a8,(undefined (*) [16])&this->field119_0x80);
		out = (UnkFamily3D *)Matrix4::thunk_FUN_00027120(&local_f0,param_2);
		}
		else {
		Matrix4::thunk_FUN_00027120(&local_f0,&local_90);
		thunk_FUN_000a4280(&local_90,(undefined (*) [16])&this->field119_0x80);
		local_a8 = (((this->field5_0x8->parent).parent.ctx)->parent).transform;
		InstanceTransform::FillMatrix(local_a8);
		out = (UnkFamily3D *)thunk_FUN_000a4280(local_a8,(undefined (*) [16])&this->field119_0x80);
		}
		}
		if (pIVar6 != (InstanceNodeAbstract_VTable *)0x0) {
		D3DXCOLOR(&this->field74_0x50,(undefined4 *)&this->field_0x60);
		out = (UnkFamily3D *)thunk_FUN_00096920((int)this);
		}
		goto LAB_00098ece;
		}
		if (local_a4 != (UnkFamily3D *)0x2) goto LAB_00098ece;
		iVar4 = BlackboardAbstract::GetIntValue((this->field5_0x8->parent).parent.blackboard,0);
		if (iVar4 == 0) {
		out = (UnkFamily3D *)thunk_FUN_000868a0((int)&local_f0,(float *)&this->field_0x30,0,1,2,0);
		local_f0.m21 = local_f0.m21 * FLOAT_003869d8;
		local_f0.m22 = local_f0.m22 * FLOAT_003869d8;
		local_f0.m23 = local_f0.m23 * FLOAT_003869d8;
		local_f0.m31 = local_f0.m31 * FLOAT_003869d8;
		local_f0.m32 = local_f0.m32 * FLOAT_003869d8;
		local_f0.m33 = local_f0.m33 * FLOAT_003869d8;
		}
		else {
		out = (UnkFamily3D *)thunk_FUN_000868a0((int)&local_f0,(float *)&this->field_0x30,0,1,2,0);
		local_f0.m11 = local_f0.m11 * FLOAT_003869d8;
		local_f0.m12 = local_f0.m12 * FLOAT_003869d8;
		local_f0.m13 = local_f0.m13 * FLOAT_003869d8;
		local_f0.m31 = local_f0.m31 * FLOAT_003869d8;
		local_f0.m32 = local_f0.m32 * FLOAT_003869d8;
		local_f0.m33 = local_f0.m33 * FLOAT_003869d8;
		}
		local_110 = *(float *)&this->field_0x70 + (this->field216_0xf0).x;
		local_10c = *(float *)&this->field_0x74 + (this->field216_0xf0).y;
		local_f0.m43 = *(float *)&this->field_0x78 + (this->field216_0xf0).z;
		}
		local_f0.m41 = local_110;
		local_f0.m42 = local_10c;
		local_f0.m44 = FLOAT_0038639c;
		LAB_00098ece:fVar8 = FLOAT_0038639c;
		uVar5 = (uint)out & 0xffffff00;
		if ((local_a4 == (UnkFamily3D *)0x2) &&((((((byte)*(undefined4 *)&this->field_0x4 & 0xf) != 2 || (local_f4 == 2.802597e-45)) ||((local_f4 == 4.203895e-45 || (local_f4 == 5.605194e-45)))) ||((FLOAT_0038a838 <= local_9c &&(((local_f4 == local_98 || (local_f4 == local_94)) || (local_f4 == local_a0)))))))) {
		uVar5 = CONCAT31((int3)((uint)out >> 8),1);
		if (FLOAT_0038639c < *(float *)&this->field_0x214 ||FLOAT_0038639c == *(float *)&this->field_0x214) {
		param_2->m11 = local_f0.m11;
		param_2->m12 = local_f0.m12;
		param_2->m13 = local_f0.m13;
		param_2->m14 = local_f0.m14;
		param_2->m21 = local_f0.m21;
		param_2->m22 = local_f0.m22;
		param_2->m23 = local_f0.m23;
		param_2->m24 = local_f0.m24;
		param_2->m31 = local_f0.m31;
		param_2->m32 = local_f0.m32;
		param_2->m33 = local_f0.m33;
		param_2->m34 = local_f0.m34;
		param_2->m41 = local_f0.m41;
		param_2->m42 = local_f0.m42;
		param_2->m43 = local_f0.m43;
		param_2->m44 = local_f0.m44;
		}
		else {
		fVar1 = *(float *)&this->field_0x214;
		param_2->m11 = (local_f0.m11 - param_2->m11) * fVar1 + param_2->m11;
		param_2->m12 = (local_f0.m12 - param_2->m12) * fVar1 + param_2->m12;
		fVar8 = FLOAT_0038639c;
		param_2->m13 = (local_f0.m13 - param_2->m13) * fVar1 + param_2->m13;
		param_2->m14 = fVar8;
		fVar1 = *(float *)&this->field_0x214;
		param_2->m21 = (local_f0.m21 - param_2->m21) * fVar1 + param_2->m21;
		param_2->m22 = (local_f0.m22 - param_2->m22) * fVar1 + param_2->m22;
		param_2->m23 = (local_f0.m23 - param_2->m23) * fVar1 + param_2->m23;
		param_2->m24 = fVar8;
		fVar1 = *(float *)&this->field_0x214;
		param_2->m31 = (local_f0.m31 - param_2->m31) * fVar1 + param_2->m31;
		param_2->m32 = (local_f0.m32 - param_2->m32) * fVar1 + param_2->m32;
		param_2->m33 = (local_f0.m33 - param_2->m33) * fVar1 + param_2->m33;
		param_2->m34 = fVar8;
		fVar1 = *(float *)&this->field_0x214;
		param_2->m41 = (local_f0.m41 - param_2->m41) * fVar1 + param_2->m41;
		param_2->m42 = (local_f0.m42 - param_2->m42) * fVar1 + param_2->m42;
		param_2->m43 = (local_f0.m43 - param_2->m43) * fVar1 + param_2->m43;
		param_2->m44 = fVar8;
		}
		param_2->m14 = 0.0;
		param_2->m24 = 0.0;
		param_2->m34 = 0.0;
		param_2->m44 = fVar8;
		}
		return uVar5;
		}
		
	*/
	return 0;
}

void UnkFamily3D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily3D::Dispose(UnkFamily3D *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void UnkFamily3D::FUN_0007ed40(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3D::FUN_0007ed40(UnkFamily3D *this,int param_1){
		FUN_001f9690(param_1,2,&this->parent);
		FUN_001f9690(param_1,3,&this->parent);
		FUN_001f9690(param_1,4,&this->parent);
		FUN_001f9690(param_1,0x11,&this->parent);
		FUN_001f9690(param_1,0x12,&this->parent);
		FUN_001f9690(param_1,0x13,&this->parent);
		FUN_001f9690(param_1,0xd,&this->parent);
		FUN_001f9690(param_1,0xe,&this->parent);
		FUN_001f9690(param_1,0xf,&this->parent);
		*(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 & 0xfffffff1 | 1;
		return;
		}
		
	*/
	return;
}

void UnkFamily3D::FUN_0007edc0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3D::FUN_0007edc0(UnkFamily3D *this,int param_1){
		FUN_001f9710(param_1,2,this);
		FUN_001f9710(param_1,3,this);
		FUN_001f9710(param_1,4,this);
		FUN_001f9710(param_1,0x11,this);
		FUN_001f9710(param_1,0x12,this);
		FUN_001f9710(param_1,0x13,this);
		FUN_001f9710(param_1,0xd,this);
		FUN_001f9710(param_1,0xe,this);
		FUN_001f9710(param_1,0xf,this);
		*(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 & 0xfffffff0;
		return;
		}
		
	*/
	return;
}

