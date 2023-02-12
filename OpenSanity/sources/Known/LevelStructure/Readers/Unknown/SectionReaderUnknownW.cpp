#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownW.h"

void SectionReaderUnknownW::Read(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownW::Read(SectionReaderUnknownW *this,byte *param_1){
		ushort uVar1;
		undefined *puVar2;
		undefined4 uVar3;
		undefined4 *puVar4;
		int iVar5;
		uint uVar6;
		uint uVar7;
		undefined4 *puVar8;
		AutoClass23 local_10;
		puVar2 = this->field1_0x4;
		AutoClass23::Construct(&local_10);
		AutoClass23::ReadWaveHeader(&local_10,param_1);
		uVar6 = *(uint *)(local_10.dataStream + 0x16);
		uVar3 = *(undefined4 *)(local_10.dataStream + 0xc);
		puVar4 = (undefined4 *)VirtualPool::AllocateMemory(uVar6);
		*(undefined4 **)(puVar2 + 0x54) = puVar4;
		puVar8 = (undefined4 *)(param_1 + local_10.waveOffset);
		for (uVar7 = uVar6 >> 2;
		 uVar7 != 0;
		 uVar7 = uVar7 - 1) {
		*puVar4 = *puVar8;
		puVar8 = puVar8 + 1;
		puVar4 = puVar4 + 1;
		}
		for (uVar7 = uVar6 & 3;
		 uVar7 != 0;
		 uVar7 = uVar7 - 1) {
		*(undefined *)puVar4 = *(undefined *)puVar8;
		puVar8 = (undefined4 *)((int)puVar8 + 1);
		puVar4 = (undefined4 *)((int)puVar4 + 1);
		}
		*(uint *)(this->field1_0x4 + 8) = *(uint *)(this->field1_0x4 + 8) | 1;
		*(undefined4 *)(puVar2 + 0x18) = uVar3;
		*(uint *)(puVar2 + 0x58) = uVar6;
		*(undefined4 *)(puVar2 + 0x24) = 0;
		*(undefined4 *)(puVar2 + 0x28) = 0;
		*(undefined4 *)(puVar2 + 0x2c) = 0;
		*(undefined4 *)(puVar2 + 0x30) = 0;
		*(undefined4 *)(puVar2 + 0x34) = 0;
		*(undefined4 *)(puVar2 + 0x38) = 0;
		*(undefined4 *)(puVar2 + 0x3c) = 0;
		*(undefined4 *)(puVar2 + 0x40) = 0;
		*(undefined4 *)(puVar2 + 0x44) = 0;
		*(undefined4 *)(puVar2 + 0x48) = 0;
		*(short *)(puVar2 + 0x24) = local_10.dataStream[10];
		*(short *)(puVar2 + 0x26) = local_10.dataStream[0xb];
		*(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(local_10.dataStream + 0xc);
		*(undefined2 *)(puVar2 + 0x34) = 0;
		uVar1 = local_10.dataStream[0x11];
		*(ushort *)(puVar2 + 0x32) = uVar1;
		iVar5 = (uint)*(ushort *)(puVar2 + 0x26) * (uint)uVar1;
		uVar6 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
		*(short *)(puVar2 + 0x30) = (short)uVar6;
		*(uint *)(puVar2 + 0x2c) = (uVar6 & 0xffff) * *(int *)(puVar2 + 0x28);
		FUN_00135cd0((int *)&local_10);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownW::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownW * __thiscall SectionReaderUnknownW::Dispose(SectionReaderUnknownW *this,byte param_1){
		TwinString::Dispose(&this->str);
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownW::Construct(uint param_1, char* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownW * __thiscall SectionReaderUnknownW::Construct(SectionReaderUnknownW *this,undefined *param_1,char *param_2){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_W;
		this->field1_0x4 = param_1;
		TwinString::Set(&this->str,param_2);
		return this;
		}
		
	*/
	return;
}

