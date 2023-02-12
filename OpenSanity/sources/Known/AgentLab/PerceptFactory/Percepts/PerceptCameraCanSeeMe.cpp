#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCameraCanSeeMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptCameraCanSeeMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCameraCanSeeMe::GetUtilityScore(PerceptCameraCanSeeMe *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		int iVar2;
		uint uVar3;
		Vector2 local_170;
		float local_168;
		float local_164;
		float local_154;
		undefined4 local_150;
		undefined4 local_14c;
		undefined4 local_148;
		undefined4 local_144;
		undefined local_140 [16];
		UnkFamily14Base local_130;
		iVar2 = FUN_00182480();
		if (iVar2 != 0) {
		pIVar1 = (param_1->parent).ctx;
		UnkFamily14Base::Construct(&local_130);
		local_164 = (pIVar1->parent).field14_0x20.matrix2.m24;
		local_170.x = ((pIVar1->parent).field14_0x20.matrix2.m21 -(pIVar1->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 +(pIVar1->parent).field14_0x20.matrix2.m11;
		local_170.y = (pIVar1->parent).field14_0x20.matrix2.m12 +((pIVar1->parent).field14_0x20.matrix2.m22 -(pIVar1->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4;
		local_168 = (pIVar1->parent).field14_0x20.matrix2.m13 +((pIVar1->parent).field14_0x20.matrix2.m23 -(pIVar1->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4;
		UnkFamily14Base::FUN_00154250(&local_130,&local_170);
		if (local_130.field147_0x108 == 1) {
		iVar2 = *(int *)(iVar2 + 0x18);
		if ((*(byte *)(iVar2 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x30);
		*(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x34);
		*(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x38);
		*(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x3c);
		*(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) & 0xfffffffa;
		}
		local_150 = *(undefined4 *)(iVar2 + 0x40);
		local_14c = *(undefined4 *)(iVar2 + 0x44);
		local_148 = *(undefined4 *)(iVar2 + 0x48);
		local_144 = *(undefined4 *)(iVar2 + 0x4c);
		uVar3 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_150,&local_170,0x80,(float *)0x0,local_140,0);
		local_154 = 0.0;
		if ((char)uVar3 == '\0') {
		local_154 = FLOAT_0038639c;
		}
		UnkFamily14A::Unroll((UnkFamily14A *)&local_130);
		return local_154;
		}
		UnkFamily14A::Unroll((UnkFamily14A *)&local_130);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCameraCanSeeMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCameraCanSeeMe * __thiscall PerceptCameraCanSeeMe::Dispose(PerceptCameraCanSeeMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptCameraCanSeeMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCameraCanSeeMe::Construct(PerceptCameraCanSeeMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x27;
		(this->parent).vtable = &Percept_VT_CameraCanSeeMe;
		return;
		}
		
	*/
	return;
}

