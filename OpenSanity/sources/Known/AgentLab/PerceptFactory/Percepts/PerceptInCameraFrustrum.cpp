#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptInCameraFrustrum.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptInCameraFrustrum::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptInCameraFrustrum::GetUtilityScore(PerceptInCameraFrustrum *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		int iVar2;
		Vector2 local_150;
		float local_148;
		float local_144;
		UnkFamily14Base local_130;
		iVar2 = FUN_00182480();
		if (iVar2 != 0) {
		pIVar1 = (param_1->parent).ctx;
		UnkFamily14Base::Construct(&local_130);
		local_144 = (pIVar1->parent).field14_0x20.matrix2.m24;
		local_150.x = (pIVar1->parent).field14_0x20.matrix2.m11 +((pIVar1->parent).field14_0x20.matrix2.m21 -(pIVar1->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4;
		local_150.y = (pIVar1->parent).field14_0x20.matrix2.m12 +((pIVar1->parent).field14_0x20.matrix2.m22 -(pIVar1->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4;
		local_148 = (pIVar1->parent).field14_0x20.matrix2.m13 +((pIVar1->parent).field14_0x20.matrix2.m23 -(pIVar1->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4;
		UnkFamily14Base::FUN_00154250(&local_130,&local_150);
		UnkFamily14A::Unroll((UnkFamily14A *)&local_130);
		return (float)(uint)(local_130.field147_0x108 == 1);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptInCameraFrustrum::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptInCameraFrustrum * __thiscall PerceptInCameraFrustrum::Dispose(PerceptInCameraFrustrum *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptInCameraFrustrum::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptInCameraFrustrum::Construct(PerceptInCameraFrustrum *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x25;
		(this->parent).vtable = &Percept_VT_InCameraFrustrum;
		return;
		}
		
	*/
	return;
}

