#include "headers/Unknown/NonVirtualClasses/UNV032.h"

void UNV032::FUN_0009a520() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UNV032::FUN_0009a520(UNV032 *this){
		InstanceContextSmartPtr *this_00;
		uint uVar1;
		uint uVar2;
		InstanceContextRefCounter *pIVar3;
		uVar1 = this->field0_0x0;
		uVar2 = this->field0_0x0;
		this->field0_0x0 = 0;
		this_00 = &this->field60_0x60;
		this->field0_0x0 =((uint)((byte)(uVar1 >> 0xc) & 1) << 4 | uVar2 >> 8 & 0xf) << 8 |this->field0_0x0 & 0xffffe0ffU;
		this->field59_0x5c = 0;
		if ((this_00->refCounter != (InstanceContextRefCounter *)0x0) &&(this_00->refCounter->ctx != (InstanceContext *)0x0)) {
		InstanceContextSmartPtr::Release(&this_00->refCounter);
		this_00->refCounter = (InstanceContextRefCounter *)0x0;
		}
		pIVar3 = (this->smartPtr).refCounter;
		if ((pIVar3 != (InstanceContextRefCounter *)0x0) && (pIVar3->ctx != (InstanceContext *)0x0)) {
		InstanceContextSmartPtr::Release(&(this->smartPtr).refCounter);
		(this->smartPtr).refCounter = (InstanceContextRefCounter *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void UNV032::FUN_00082180(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UNV032::FUN_00082180(UNV032 *this,char param_1){
		Vector4 local_d0;
		Vector4 local_c0;
		Vector4 local_b0;
		Vector4 local_a0;
		Vector4 local_90;
		Vector4 local_80;
		Vector4 local_70;
		Vector4 local_60;
		Vector4 local_50;
		Vector4 local_40;
		Vector4 local_30;
		Vector4 local_20;
		local_d0.x = (this->field14_0x20).z * FLOAT_00386ab4 + (this->field14_0x20).y * FLOAT_00386ab4;
		local_d0.z = (this->field14_0x20).x * FLOAT_00386ab4 - FLOAT_00386618;
		local_c0.y = local_d0.x;
		if (param_1 != '\0') {
		local_c0.y = (this->field14_0x20).y;
		}
		local_c0.y = 0.0 - local_c0.y;
		local_70.x = (this->field14_0x20).y;
		local_70.y = 0.0 - (this->field14_0x20).y;
		local_90.x = (this->field14_0x20).y;
		local_40.z = (this->field14_0x20).x;
		local_20.z = (this->field14_0x20).x;
		local_80.x = (this->field14_0x20).z;
		local_30.x = 0.0 - (this->field14_0x20).y;
		local_30.z = FLOAT_0038bc0c;
		local_70.z = FLOAT_0038bc0c;
		local_90.z = FLOAT_0038bc0c;
		local_50.x = 0.0 - (this->field14_0x20).y;
		local_50.z = FLOAT_0038bc0c;
		local_60.x = 0.0 - (this->field14_0x20).z;
		local_c0.x = 0.0 - local_d0.x;
		local_80.z = (this->field14_0x20).x;
		local_50.y = (this->field14_0x20).y;
		local_30.w = FLOAT_0038639c;
		local_70.w = FLOAT_0038639c;
		local_90.w = FLOAT_0038639c;
		local_50.w = FLOAT_0038639c;
		local_c0.w = FLOAT_0038639c;
		local_b0.w = FLOAT_0038639c;
		local_d0.w = FLOAT_0038639c;
		local_a0.w = FLOAT_0038639c;
		local_40.w = FLOAT_0038639c;
		local_20.w = FLOAT_0038639c;
		local_80.w = FLOAT_0038639c;
		local_60.w = FLOAT_0038639c;
		local_d0.y = local_d0.x;
		local_c0.z = local_d0.z;
		local_b0.x = local_d0.x;
		local_b0.y = local_c0.y;
		local_b0.z = local_d0.z;
		local_a0.x = local_c0.x;
		local_a0.y = local_d0.x;
		local_a0.z = local_d0.z;
		local_90.y = local_90.x;
		local_80.y = local_d0.x;
		local_60.y = local_d0.x;
		local_60.z = local_80.z;
		local_40.x = local_60.x;
		local_40.y = local_c0.y;
		local_30.y = local_30.x;
		local_20.x = local_80.x;
		local_20.y = local_c0.y;
		FUN_001496f0();
		Vector4::AddVectorToDict(&local_30);
		Vector4::AddVectorToDict(&local_70);
		Vector4::AddVectorToDict(&local_90);
		Vector4::AddVectorToDict(&local_50);
		Vector4::AddVectorToDict(&local_c0);
		Vector4::AddVectorToDict(&local_b0);
		Vector4::AddVectorToDict(&local_d0);
		Vector4::AddVectorToDict(&local_a0);
		Vector4::AddVectorToDict(&local_40);
		Vector4::AddVectorToDict(&local_20);
		Vector4::AddVectorToDict(&local_80);
		Vector4::AddVectorToDict(&local_60);
		FUN_001509a0(&local_30,&local_70,&local_90,&local_50);
		FUN_001509a0(&local_30,&local_c0,&local_b0,&local_70);
		FUN_001509a0(&local_70,&local_b0,&local_d0,&local_90);
		FUN_001509a0(&local_50,&local_90,&local_d0,&local_a0);
		FUN_001509a0(&local_50,&local_a0,&local_c0,&local_30);
		FUN_001509a0(&local_c0,&local_40,&local_20,&local_b0);
		FUN_001509a0(&local_b0,&local_20,&local_80,&local_d0);
		FUN_001509a0(&local_a0,&local_d0,&local_80,&local_60);
		FUN_001509a0(&local_a0,&local_60,&local_40,&local_c0);
		FUN_001509a0(&local_20,&local_40,&local_60,&local_80);
		FUN_00149720();
		FUN_0014e3b0(&(this->ac40).vectorCnt);
		return;
		}
		
	*/
	return;
}

