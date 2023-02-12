#include "headers/Unknown/NonVirtualClasses/UNV031.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2C.h"
UNV031* UNV031::FUN_0009b5c0(NodeRelated2C* data2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV031 * __thiscall UNV031::FUN_0009b5c0(UNV031 *this,NodeRelated2C *data2){
		float fVar1;
		uint uVar2;
		UNV032 *strPtr;
		UNV032 *matrix;
		matrix = &this->field26_0x20;
		this->data = data2;
		this->field1_0x4 = 0;
		data2 = (NodeRelated2C *)0x4;
		strPtr = matrix;
		do {
		*(undefined4 *)&strPtr->field_0x4 = 0;
		(strPtr->field60_0x60).refCounter = (InstanceContextRefCounter *)0x0;
		(strPtr->smartPtr).refCounter = (InstanceContextRefCounter *)0x0;
		AutoClass40::Construct(&strPtr->ac40);
		strPtr->field0_0x0 = 0;
		UNV032::thunk_FUN_0009a520(strPtr);
		strPtr = strPtr + 1;
		data2 = (NodeRelated2C *)&data2[-1].field_0x30f;
		}
		 while (data2 != (NodeRelated2C *)0x0);
		thunk_FUN_0009b130(this);
		(this->field26_0x20).field13_0x10.x = DAT_0039dd30;
		(this->field26_0x20).field13_0x10.y = FLOAT_0039dd34;
		(this->field26_0x20).field13_0x10.z = DAT_0039dd38;
		(this->field26_0x20).field13_0x10.w = FLOAT_0039dd3c;
		(this->field26_0x20).field14_0x20.x = FLOAT_0038a760;
		(this->field26_0x20).field14_0x20.y = FLOAT_0038b8cc;
		(this->field26_0x20).field14_0x20.z = FLOAT_0038bd2c;
		UNV032::thunk_FUN_00082180(matrix,'\x01');
		*(undefined *)((int)&(this->field26_0x20).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2) = 0xd;
		*(undefined *)((int)&(this->field26_0x20).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 3;
		uVar2 = matrix->field0_0x0;
		uVar2 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		matrix->field0_0x0 = uVar2;
		*(undefined *)((int)&(this->field26_0x20).field14_0x20.w + (uVar2 >> 8 & 0xf) * 2) = 0x10;
		*(undefined *)((int)&(this->field26_0x20).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 2;
		uVar2 = matrix->field0_0x0;
		uVar2 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		matrix->field0_0x0 = uVar2;
		*(undefined *)((int)&(this->field26_0x20).field14_0x20.w + (uVar2 >> 8 & 0xf) * 2) = 0xf;
		*(undefined *)((int)&(this->field26_0x20).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 1;
		uVar2 = matrix->field0_0x0;
		matrix->field0_0x0 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		(this->field27_0x130).field13_0x10.x = DAT_0039dd40;
		(this->field27_0x130).field13_0x10.y = FLOAT_0039dd44;
		(this->field27_0x130).field13_0x10.z = DAT_0039dd48;
		(this->field27_0x130).field13_0x10.w = FLOAT_0039dd4c;
		matrix = &this->field27_0x130;
		(this->field27_0x130).field14_0x20.x = FLOAT_0038b850;
		(this->field27_0x130).field14_0x20.y = FLOAT_0038b8cc;
		(this->field27_0x130).field14_0x20.z = FLOAT_0038bab8;
		UNV032::thunk_FUN_00082180(matrix,'\0');
		*(undefined *)((int)&(this->field27_0x130).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2) = 0x10;
		*(undefined *)((int)&(this->field27_0x130).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 2;
		uVar2 = matrix->field0_0x0;
		uVar2 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		matrix->field0_0x0 = uVar2;
		*(undefined *)((int)&(this->field27_0x130).field14_0x20.w + (uVar2 >> 8 & 0xf) * 2) = 0xf;
		*(undefined *)((int)&(this->field27_0x130).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 1;
		uVar2 = matrix->field0_0x0;
		matrix->field0_0x0 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		(this->field28_0x240).field13_0x10.x = DAT_0039dd50;
		(this->field28_0x240).field13_0x10.y = FLOAT_0039dd54;
		(this->field28_0x240).field13_0x10.z = FLOAT_0039dd58;
		(this->field28_0x240).field13_0x10.w = FLOAT_0039dd5c;
		matrix = &this->field28_0x240;
		(this->field28_0x240).field14_0x20.x = FLOAT_0038a764;
		(this->field28_0x240).field14_0x20.y = FLOAT_0038b9f0;
		(this->field28_0x240).field14_0x20.z = FLOAT_0038b9b0;
		UNV032::thunk_FUN_00082180(matrix,'\0');
		*(undefined *)((int)&(this->field28_0x240).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2) = 0x10;
		*(undefined *)((int)&(this->field28_0x240).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 2;
		uVar2 = matrix->field0_0x0;
		uVar2 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		matrix->field0_0x0 = uVar2;
		*(undefined *)((int)&(this->field28_0x240).field14_0x20.w + (uVar2 >> 8 & 0xf) * 2) = 0xf;
		*(undefined *)((int)&(this->field28_0x240).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 1;
		uVar2 = matrix->field0_0x0;
		matrix->field0_0x0 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		(this->field29_0x350).field13_0x10.x = DAT_0039dd60;
		(this->field29_0x350).field13_0x10.y = FLOAT_0039dd64;
		(this->field29_0x350).field13_0x10.z = DAT_0039dd68;
		(this->field29_0x350).field13_0x10.w = FLOAT_0039dd6c;
		matrix = &this->field29_0x350;
		(this->field29_0x350).field14_0x20.x = FLOAT_0038b850;
		fVar1 = FLOAT_0038b9f8;
		(this->field29_0x350).field14_0x20.y = FLOAT_0038b9f8;
		(this->field29_0x350).field14_0x20.z = fVar1;
		UNV032::thunk_FUN_00082180(matrix,'\x01');
		*(undefined *)((int)&(this->field29_0x350).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2) = 0x10;
		*(undefined *)((int)&(this->field29_0x350).field14_0x20.w + ((uint)matrix->field0_0x0 >> 8 & 0xf) * 2 + 1) = 1;
		uVar2 = matrix->field0_0x0;
		matrix->field0_0x0 = ((uVar2 & 0xffffff00) + 0x100 ^ uVar2) & 0xf00 ^ uVar2;
		return this;
		}
		
	*/
	return null;
}

void UNV031::FUN_0009b130() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UNV031::FUN_0009b130(UNV031 *this){
		float fVar1;
		UNV032 *this_00;
		int iVar2;
		fVar1 = FLOAT_003869d8;
		*(undefined4 *)&this->field_0xc = 0;
		*(undefined4 *)&this->field_0x10 = 0;
		*(undefined4 *)&this->field_0x8 = 0;
		*(undefined **)&this->field_0x8 = &DAT_0001ea70;
		*(undefined4 *)&this->field_0x14 = 0;
		*(float *)&this->field_0x18 = fVar1;
		this_00 = &this->field26_0x20;
		iVar2 = 4;
		do {
		UNV032::thunk_FUN_0009a520(this_00);
		this_00 = this_00 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		return;
		}
		
	*/
	return;
}

