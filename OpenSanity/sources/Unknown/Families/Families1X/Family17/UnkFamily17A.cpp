#include "headers/Unknown/Families/Families1X/Family17/UnkFamily17A.h"

#include "headers/Known/Math/Vector4.h"
void UnkFamily17A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily17A * __fastcall UnkFamily17A::Construct(UnkFamily17A *this){
		UnkFamily17Base::Construct(&this->parent);
		(this->parent).vtable = (UnkFamily17Base_VTable *)&UnkFamily17_VT_A;
		return this;
		}
		
	*/
	return;
}

float UnkFamily17A::GetDistance1(int param_1, Vector4* param_2, Vector4* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall UnkFamily17A::GetDistance1(UnkFamily17A *this,int param_1,Vector4 *param_2,Vector4 *param_3){
		ushort uVar1;
		uint uVar2;
		float fVar3;
		float fVar4;
		ushort uVar5;
		bool bVar6;
		float fVar7;
		float local_28;
		Vector4 local_20;
		if ((*(byte *)&param_3[1].w & 1) != 0) {
		return FLOAT_0038cb40;
		}
		if ((*(byte *)&param_2[1].w & 1) != 0) {
		return FLOAT_0038cb40;
		}
		uVar2 = *(this->parent).unkPtr;
		if ((uVar2 >> 2 & 1) != 0) {
		fVar7 = param_2->x - param_3->x;
		fVar4 = param_2->y - param_3->y;
		fVar3 = param_2->z - param_3->z;
		return fVar7 * fVar7 + fVar4 * fVar4 + fVar3 * fVar3;
		}
		uVar1 = *(ushort *)(param_1 + 4);
		if (((uVar2 & 0x200000) != 0) && ((uVar1 & 0x40) != 0)) {
		return FLOAT_0038cb40;
		}
		if (((uVar2 & 0x1000000) != 0) && ((uVar1 & 0x1e0) == 0)) {
		return FLOAT_0038cb40;
		}
		if ((uVar2 & 0x20000) == 0) {
		if (((uVar2 & 0x80000) != 0) && ((uVar1 & 8) != 0)) {
		return FLOAT_0038cb40;
		}
		if ((uVar2 & 0x40000) == 0) goto LAB_000b0229;
		uVar5 = uVar1 & 0x10;
		}
		else {
		uVar5 = uVar1 & 4;
		}
		if (uVar5 != 0) {
		return FLOAT_0038cb40;
		}
		LAB_000b0229:if (((((uVar2 & 0x800000) == 0) || ((uVar1 & 0x100) == 0)) &&(((uVar2 & 0x400000) == 0 || (-1 < (char)uVar1)))) &&(((uVar2 & 0x100000) == 0 || ((uVar1 & 0x20) == 0)))) {
		local_28 = GetDistanceSqr(param_3,param_2);
		if ((uVar2 & 8) != 0) {
		local_20.x = param_3->x;
		local_20.y = param_3->y;
		local_20.z = param_3->z;
		local_20.w = FLOAT_0038639c;
		bVar6 = IsNearlyZero(*(float *)&(this->parent).field_0x1240);
		if (bVar6 == false) {
		fVar7 = Vector4::Distance((Vector4 *)&(this->parent).field_0x1230,&local_20);
		local_28 = (FLOAT_0038639c - fVar7 / *(float *)&(this->parent).field_0x1240) *FLOAT_0038d38c + local_28;
		}
		}
		if ((uVar2 & 0x20) != 0) {
		local_28 = (float)((uint)param_3[1].x >> 0x14 & 0xff) * FLOAT_0038d38c + local_28;
		}
		if ((uVar2 & 0x10) != 0) {
		local_20.x = param_3->x;
		local_20.y = param_3->y;
		local_20.z = param_3->z;
		local_20.w = FLOAT_0038639c;
		bVar6 = IsNearlyZero(*(float *)&(this->parent).field_0x1240);
		if (bVar6 == false) {
		fVar7 = Vector4::Distance((Vector4 *)&(this->parent).field_0x1230,&local_20);
		local_28 = (fVar7 / *(float *)&(this->parent).field_0x1240) * FLOAT_0038d38c + local_28;
		}
		}
		return local_28;
		}
		return FLOAT_0038cb40;
		}
		
	*/
	return 0.0f;
}

void UnkFamily17A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily17A * __thiscall UnkFamily17A::Dispose(UnkFamily17A *this,byte param_1){
		(this->parent).vtable = (UnkFamily17Base_VTable *)&UnkFamily17_VT_A;
		UnkFamily17Base::Unroll(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float UnkFamily17A::GetDistance2(Vector4* vec1, Vector4* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float UnkFamily17A::GetDistance2(Vector4 *vec1,Vector4 *vec2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = vec1->x - vec2->x;
		fVar3 = vec1->y - vec2->y;
		fVar2 = vec1->z - vec2->z;
		return fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
		}
		
	*/
	return 0.0f;
}

void UnkFamily17A::Dispose_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily17A::Dispose(UnkFamily17A *this){
		(this->parent).vtable = (UnkFamily17Base_VTable *)&UnkFamily17_VT_A;
		UnkFamily17Base::Unroll(&this->parent);
		return;
		}
		
	*/
	return;
}

