#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystemA.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
void SaveSystemA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveController * __thiscall SaveSystemA::Dispose(SaveSystemA *this,byte param_1){
		InputWrapper::Dispose((InputWrapper *)&(this->parent).uiPresetIndex2);
		(this->parent).vtable = (SaveSystem_VTable *)&SaveSystem_VT_Abstract;
		TwinString::Dispose(&(this->parent).title);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (SaveController *)this;
		}
		
	*/
	return;
}

void SaveSystemA::ShowMessage1(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemA::ShowMessage1(SaveSystemA *this,uint param_1,uint param_2){
		*(undefined *)((int)&(this->parent).flags1 + 1) = 0;
		SaveController::FUN_002005c0((this->parent).saveController,param_1,param_2);
		return;
		}
		
	*/
	return;
}

void SaveSystemA::ShowMessage2(uint index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemA::ShowMessage2(SaveSystemA *this,uint index){
		*(char *)((int)&(this->parent).flags1 + 1) = (char)index;
		*(undefined2 *)&(this->parent).oleg = 0;
		switch(index) {
		case 1:case 2:case 3:case 6:case 9:case 10:*(undefined2 *)((int)&(this->parent).oleg + 2) = 2;
		return;
		case 4:case 7:case 8:case 0xd:case 0xe:case 0xf:*(undefined2 *)((int)&(this->parent).oleg + 2) = 1;
		break;
		case 5:*(undefined2 *)((int)&(this->parent).oleg + 2) = 3;
		return;
		}
		return;
		}
		
	*/
	return;
}

int SaveSystemA::ShowMessage3(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SaveSystemA::ShowMessage3(SaveSystemA *this,int index){
		ushort uVar1;
		uint uVar2;
		SaveController *pSVar3;
		uint uVar4;
		*(char *)((int)&(this->parent).flags1 + 1) = (char)index;
		*(undefined2 *)&(this->parent).oleg = 0;
		if ((10 < index) && (index < 0xd)) {
		uVar2 = (this->parent).flags1;
		pSVar3 = (this->parent).saveController;
		*(short *)((int)&(this->parent).oleg + 2) = *(short *)((pSVar3->parent).field6_0x18 + 0x2c) + 1;
		while ((uVar2 & 0xf) == 5) {
		uVar1 = *(ushort *)&(this->parent).oleg;
		if (uVar1 + 1 == (uint)*(ushort *)((int)&(this->parent).oleg + 2)) {
		return index;
		}
		uVar4 = *(uint *)(*(int *)(*(int *)((pSVar3->parent).field6_0x18 + 0x30) + (uint)uVar1 * 4) +8);
		if (((uVar4 & 0x1000000) != 0) && ((uVar4 & 0x2000000) != 0)) {
		return index;
		}
		*(ushort *)&(this->parent).oleg = uVar1 + 1;
		}
		}
		return index;
		}
		
	*/
	return 0;
}

bool SaveSystemA::IsA(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Switch with 1 destination removed at 0x00201a31 : 15 cases all go to same destination bool __thiscall SaveSystemA::IsA(SaveSystemA *this,int param_1){
		bool bVar1;
		int iVar2;
		bVar1 = SaveSystemAbstract::IsA(&this->parent,param_1);
		if (bVar1 != false) {
		return true;
		}
		if ((param_1 - 1U < 0xf) && (iVar2 = FUN_001ffb20((int)this), (char)iVar2 == '\0')) {
		FUN_001ffc50(this,param_1);
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SaveSystemA::FontRelated(FontRenderer* renderer) {
	uint uVar1;
	uint uVar2;
	uVar1 = field1_0x4;
	if ((uVar1 & 0xf0000) == 0) {
		uVar2 = (uint) * (byte*)((int)&flags1 + 1);
		switch (uVar2) {
		case 0:
			FUN_00202e20(uVar1 >> 8 & 0xf, renderer);
			return;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0xb:
		case 0xc:
		case 0xd:
		case 0xe:
		case 0xf:
			FUN_00202ed0(uVar2, renderer);
		}
	}
	return;
}

void SaveSystemA::Construct(char* param_1, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveSystemA * __thiscall SaveSystemA::Construct(SaveSystemA *this,char *param_1,UIPresetIndex param_2,char *param_3,SaveController *param_4){
		uint *puVar1;
		UIPresetIndex *this_00;
		int iVar2;
		int *piVar3;
		(this->parent).vtable = (SaveSystem_VTable *)&SaveSystem_VT_Abstract;
		TwinString::Set(&(this->parent).title,param_1);
		(this->parent).saveController = param_4;
		puVar1 = &(this->parent).flags1;
		*puVar1 = 0;
		(this->parent).flags2 = 0;
		*puVar1 = *puVar1 & 0xfffffff0;
		*(undefined *)((int)&(this->parent).flags1 + 1) = 0;
		piVar3 = STR_INDEX;
		for (iVar2 = 0x27;
		 iVar2 != 0;
		 iVar2 = iVar2 + -1) {
		*piVar3 = -1;
		piVar3 = piVar3 + 1;
		}
		*(undefined2 *)&(this->parent).oleg = 0;
		*(undefined2 *)((int)&(this->parent).oleg + 2) = 0;
		this_00 = &(this->parent).uiPresetIndex2;
		(this->parent).vtable = (SaveSystem_VTable *)&SaveSystem_VT_A;
		(this->parent).uiPresetIndex1 = param_2;
		InputWrapper::Construct((InputWrapper *)this_00,0,4);
		(this->parent).str0.value = param_3;
		InputWrapper::AddKey((InputWrapper *)this_00,0,KEY_DOWN);
		InputWrapper::AddKey((InputWrapper *)this_00,1,KEY_UP);
		InputWrapper::AddKey((InputWrapper *)this_00,2,KEY_A);
		InputWrapper::AddKey((InputWrapper *)this_00,3,KEY_Y);
		return this;
		}
		
	*/
	return;
}

