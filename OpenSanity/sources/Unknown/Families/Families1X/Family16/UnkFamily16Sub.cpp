#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16Sub.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void UnkFamily16Sub::InitSubStructArray() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily16Sub::InitSubStructArray(UnkFamily16Sub *this){
		uint i;
		this->cnt = 0;
		i = 0;
		do {
		this->array[i * 2] = 0;
		this->array[i * 2 + 1] = 0;
		i = i + 1;
		}
		 while (i < 0x100);
		return;
		}
		
	*/
	return;
}

void UnkFamily16Sub::FUN_000f79a0(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily16Sub::FUN_000f79a0(UnkFamily16Sub *this,InstanceContext *ctx){
		int iVar1;
		ushort uVar2;
		uint cnt;
		uint index;
		if (this->cnt != 0) {
		index = ctx->field36_0x164;
		uVar2 = this->cnt - 1;
		this->cnt = uVar2;
		cnt = (uint)uVar2;
		if (index < cnt) {
		iVar1 = this->array[cnt * 2];
		this->array[index * 2] = iVar1;
		this->array[index * 2 + 1] = this->array[cnt * 2 + 1];
		*(uint *)(iVar1 + 0x164) = index;
		}
		ctx->field36_0x164 = -1;
		}
		return;
		}
		
	*/
	return;
}

