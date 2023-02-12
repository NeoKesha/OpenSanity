#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystemAbstract.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Oleg/Oleg.h"
#include "headers/Known/Oleg/Modules/OlegModuleLabelGeneric.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Game/SaveSystem/SaveController/SaveController.h"
void SaveSystemAbstract::FontRelated(FontRenderer* renderer)
{
}
void SaveSystemAbstract::FUN_00200820() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveSystemAbstract::FUN_00200820(SaveSystemAbstract *this){
		char cVar1;
		uint uVar2;
		bool bVar3;
		uint uVar4;
		uint uVar5;
		undefined4 uVar6;
		uint uVar7;
		int iVar8;
		undefined4 local_c04;
		undefined4 local_c00;
		undefined4 local_bfc;
		uint uStack3064;
		int iStack12;
		int iStack8;
		int local_4;
		local_4 = SECURITY_COOKIE;
		uVar5 = this->flags1;
		cVar1 = *(char *)((int)&this->flags1 + 1);
		*(undefined *)((int)&this->flags1 + 1) = 0;
		uVar2 = this->flags1;
		uVar4 = uVar5 >> 0x10 & 0xf;
		uVar7 = uVar2 & 0xfff0ffff;
		this->flags1 = uVar7;
		if (uVar4 != 1) {
		if (uVar4 == 2) {
		switch(cVar1) {
		case '\x02':local_c04 = 2;
		local_c00 = 0;
		local_bfc = 0x55;
		uStack3064 = (*((this->saveController->parent).vtable)->Method11)(&this->saveController->parent);
		uStack3064 = uStack3064 >> 0xe;
		_XLaunchNewImageA@8((char *)0x0,&local_c04);
		@__security_check_cookie@4(local_4);
		return;
		case '\x03':case '\x04':case '\x05':case '\a':case '\b':case '\v':case '\f':case '\r':case '\x0e':case '\x0f':(*this->vtable->UpdateFlags)(this,0,0);
		@__security_check_cookie@4(local_4);
		return;
		case '\x06':switchD_002008b8_caseD_6:(*this->vtable->ShowMessage2)(this,5);
		@__security_check_cookie@4(iStack8);
		return;
		case '\t':(*this->vtable->ShowMessage3)(this,0xb);
		@__security_check_cookie@4(local_4);
		return;
		case '\n':bVar3 = (*((this->saveController->parent).vtable)->IsA)();
		if (bVar3 == false) {
		(*this->vtable->ShowMessage2)(this,4);
		@__security_check_cookie@4(local_4);
		return;
		}
		FUN_002007d0(this,uVar5 & 0xf);
		@__security_check_cookie@4(local_4);
		return;
		}
		}
		else if (uVar4 == 3) {
		switch(cVar1) {
		case '\x01':case '\x02':case '\x03':case '\x04':case '\x05':case '\x06':case '\a':case '\b':case '\v':case '\f':case '\r':case '\x0e':case '\x0f':(*this->vtable->UpdateFlags)(this,1,0);
		@__security_check_cookie@4(local_4);
		return;
		}
		}
		goto switchD_002009a3_caseD_4;
		}
		uVar5 = uVar2 >> 0x14 & 0xf;
		switch(cVar1) {
		case '\x01':case '\x02':iVar8 = 1;
		break;
		case '\x03':switchD_002009a3_caseD_3:(*this->vtable->ShowMessage1)(this,4);
		@__security_check_cookie@4(iStack12);
		return;
		default:goto switchD_002009a3_caseD_4;
		case '\x05':switchD_002009a3_caseD_5:(*this->vtable->ShowMessage2)(this,6);
		@__security_check_cookie@4(iStack8);
		return;
		case '\x06':(*this->vtable->ShowMessage1)(this,2);
		@__security_check_cookie@4(iStack8);
		return;
		case '\t':FUN_002007a0(this,uVar2 >> 0x18 & 0xf);
		@__security_check_cookie@4(local_4);
		return;
		case '\n':iVar8 = 0xd;
		break;
		case '\v':iVar8 = *(int *)(*(int *)((this->saveController->parent).field6_0x18 + 0x30) + uVar5 * 4);
		this->flags1 = (uVar5 << 0x18 ^ uVar7) & 0xf000000 ^ uVar7;
		uVar6 = thunk_FUN_000c2d00(iVar8);
		if ((char)uVar6 == '\0') {
		SetTime((FILETIME *)(iVar8 + 4));
		FUN_002007a0(this,*(byte *)((int)&this->flags1 + 3) & 0xf);
		@__security_check_cookie@4(local_4);
		return;
		}
		(*this->vtable->ShowMessage2)(this,9);
		@__security_check_cookie@4(local_4);
		return;
		case '\f':this->flags1 = (uVar5 << 0x18 ^ uVar7) & 0xf000000 ^ uVar7;
		iVar8 = 9;
		break;
		case '\r':case '\x0e':case '\x0f':bVar3 = (*((this->saveController->parent).vtable)->IsA)();
		if (bVar3 == false) {
		(*this->vtable->ShowMessage2)(this,4);
		@__security_check_cookie@4(local_4);
		return;
		}
		bVar3 = (*((this->saveController->parent).vtable)->IsB)();
		if (bVar3 != false) goto switchD_002009a3_caseD_3;
		if (cVar1 == '\r') goto switchD_002009a3_caseD_5;
		if (cVar1 == '\x0e') goto switchD_002008b8_caseD_6;
		if (cVar1 == '\x0f') {
		(*this->vtable->ShowMessage2)(this,7);
		@__security_check_cookie@4(iStack8);
		return;
		}
		goto switchD_002009a3_caseD_4;
		}
		(*this->vtable->ShowMessage1)(this,iVar8);
		switchD_002009a3_caseD_4:@__security_check_cookie@4(iStack8);
		return;
		}
		
	*/
	return;
}

void SaveSystemAbstract::Construct(char* title, Oleg* oleg, SaveController* saveController) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveSystemAbstract * __thiscall SaveSystemAbstract::Construct(SaveSystemAbstract *this,char *title,Oleg *oleg,SaveController *saveController){
		uint *puVar1;
		int iVar2;
		int *piVar3;
		this->vtable = (SaveSystem_VTable *)&SaveSystem_VT_Abstract;
		TwinString::Set(&this->title,title);
		this->saveController = saveController;
		puVar1 = &this->flags1;
		*puVar1 = 0;
		this->flags2 = 0;
		*puVar1 = *puVar1 & 0xfffffff0;
		*(undefined *)((int)&this->flags1 + 1) = 0;
		piVar3 = STR_INDEX;
		for (iVar2 = 0x27;
		 iVar2 != 0;
		 iVar2 = iVar2 + -1) {
		*piVar3 = -1;
		piVar3 = piVar3 + 1;
		}
		this->vtable = (SaveSystem_VTable *)&SaveSystem_VT_Base;
		this->oleg = oleg;
		(this->str0).value = (char *)0x0;
		(this->str0).strLength = 0;
		(this->str0).strSize = 0;
		(this->str1).value = (char *)0x0;
		(this->str1).strLength = 0;
		(this->str1).strSize = 0;
		(this->str2).value = (char *)0x0;
		(this->str2).strLength = 0;
		(this->str2).strSize = 0;
		this->label0 = (OlegModuleLabelGeneric *)0x0;
		this->label1 = (OlegModuleLabelGeneric *)0x0;
		this->label2 = (OlegModuleLabelGeneric *)0x0;
		this->field16_0x60 = 0;
		this->field17_0x64 = 0;
		this->uiPresetIndex1 = Letterboxes;
		this->uiPresetIndex2 = Letterboxes;
		this->uiPresetIndex3 = Letterboxes;
		this->field9_0x2c = 0;
		this->uiPresetIndex1 = ~Letterboxes;
		return this;
		}
		
	*/
	return;
}

void SaveSystemAbstract::GetSaveString(int stringIndex, TwinString* outString) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemAbstract::GetSaveString(SaveSystemAbstract *this,int stringIndex,TwinString *outString){
		bool bVar1;
		uint uVar2;
		undefined3 extraout_var;
		char *other;
		undefined4 uVar3;
		TwinString tmpStr;
		TwinString TStack12;
		uVar2 = (*((this->saveController->parent).vtable)->Method11)(&this->saveController->parent);
		bVar1 = (*((this->saveController->parent).vtable)->CanSave)(&this->saveController->parent);
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::AppendInt(&TStack12,uVar2 - CONCAT31(extraout_var,bVar1) >> 0xe);
		TwinString::Append(&tmpStr,TStack12.value);
		TwinString::Dispose(&TStack12);
		if (STR_INDEX[stringIndex] == -1) {
		other = SaveSystemStringsArray[stringIndex];
		}
		else {
		other = LOCAL_MSG1[STR_INDEX[stringIndex]];
		}
		TwinString::Copy(outString,other);
		do {
		uVar3 = TwinString::Replace(outString,"(x)",tmpStr.value);
		}
		 while ((char)uVar3 != '\0');
		do {
		uVar3 = TwinString::Replace(outString,"(xxx)",(this->title).value);
		}
		 while ((char)uVar3 != '\0');
		TwinString::Dispose(&tmpStr);
		return;
		}
		
	*/
	return;
}

bool SaveSystemAbstract::FUN_00200750() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall SaveSystemAbstract::FUN_00200750(SaveSystemAbstract *this){
		bool bVar1;
		bool bVar2;
		undefined3 extraout_var;
		uint uVar3;
		uint uVar4;
		bVar1 = (*((this->saveController->parent).vtable)->CanSave)(&this->saveController->parent);
		uVar3 = (*((this->saveController->parent).vtable)->Method11)(&this->saveController->parent);
		bVar2 = (*((this->saveController->parent).vtable)->IsC)();
		if (bVar2 == false) {
		return (bool)('\x01' - (CONCAT31(extraout_var,bVar1) < uVar3));
		}
		uVar4 = (*((this->saveController->parent).vtable)->Method9)(&this->saveController->parent);
		if ((uVar4 != uVar3) && (uVar4 + CONCAT31(extraout_var,bVar1) < uVar3)) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

void SaveSystemAbstract::Method3(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemAbstract::Method3(SaveSystemAbstract *this,int param_1){
		uint uVar1;
		bool bVar2;
		uVar1 = this->flags1;
		switch(uVar1 & 0xf) {
		case 1:bVar2 = (*((this->saveController->parent).vtable)->IsA)();
		if (bVar2 == false) {
		(*this->vtable->ShowMessage2)(this,1);
		return;
		}
		bVar2 = (*((this->saveController->parent).vtable)->IsB)();
		if (bVar2 != false) {
		if (param_1 != 3) {
		(*this->vtable->ShowMessage1)(this,3);
		return;
		}
		bVar2 = FUN_00200750(this);
		if (bVar2 == false) {
		(*this->vtable->ShowMessage2)(this,2);
		return;
		}
		}
		(*this->vtable->UpdateFlags)(this,1,0);
		return;
		case 2:(*this->vtable->UpdateFlags)(this,1,(byte)(uVar1 >> 0x1c) & 1);
		return;
		case 3:case 4:switch(param_1) {
		case 2:(*this->vtable->ShowMessage1)(this,10);
		return;
		case 3:bVar2 = FUN_00200750(this);
		if (bVar2 == false) {
		(*this->vtable->ShowMessage2)(this,2);
		return;
		}
		bVar2 = (*((this->saveController->parent).vtable)->IsC)();
		if (bVar2 == false) {
		(*this->vtable->ShowMessage2)(this,3);
		return;
		}
		LAB_00200d46:this->flags2 = this->flags2 & 0xffffffdf;
		(*this->vtable->ShowMessage1)(this,6);
		return;
		case 4:(*this->vtable->ShowMessage3)(this,0xb);
		return;
		case 5:case 6:(*this->vtable->ShowMessage3)(this,0xb);
		return;
		default:break;
		case 8:(*this->vtable->ShowMessage1)(this,0xb);
		return;
		case 10:(*this->vtable->ShowMessage1)(this,4);
		return;
		case 0xb:goto switchD_00200c8f_caseD_b;
		case 0xd:(*this->vtable->UpdateFlags)(this,0,0);
		return;
		}
		case 5:switch(param_1) {
		case 3:bVar2 = (*((this->saveController->parent).vtable)->IsC)();
		if (bVar2 == false) {
		(*this->vtable->ShowMessage2)(this,7);
		return;
		}
		goto LAB_00200d46;
		case 6:(*this->vtable->ShowMessage3)(this,0xc);
		return;
		case 9:this->flags2 = this->flags2 ^ (uVar1 >> 0x18 ^ this->flags2) & 0xf;
		(*this->vtable->ShowMessage1)(this,0xc);
		return;
		case 0xc:(*this->vtable->UpdateFlags)(this,1,1);
		return;
		}
		break;
		case 6:if (param_1 != 8) {
		return;
		}
		switchD_00200c8f_caseD_b:(*this->vtable->UpdateFlags)(this,1,1);
		}
		return;
		}
		
	*/
	return;
}

void SaveSystemAbstract::Method7(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemAbstract::Method7(SaveSystemAbstract *this,int param_1){
		bool bVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uVar5 = (this->saveController->parent).field1_0x4 >> 8 & 0xf;
		if ((*(byte *)((int)&this->flags1 + 2) & 0xf) != 0) {
		FUN_00200820(this);
		}
		bVar1 = FUN_00201ea0(this->saveController,param_1);
		if (bVar1 == false) {
		uVar4 = (this->saveController->parent).field1_0x4;
		uVar2 = uVar4 >> 0x10 & 0xf;
		uVar3 = this->flags1 & 0xf;
		if (uVar5 == 0) {
		uVar5 = uVar4 >> 8 & 0xf;
		}
		if (uVar2 == 0) {
		uVar4 = (uint)*(byte *)((int)&this->flags1 + 1);
		if ((2 < uVar3) && (uVar3 < 6)) {
		bVar1 = (*((this->saveController->parent).vtable)->IsA)();
		if (bVar1 == false) {
		if ((uVar5 < 0xb) || (0xd < uVar5)) {
		switch(uVar4) {
		case 4:case 10:case 0xd:case 0xe:case 0xf:break;
		default:uVar4 = (*this->vtable->ShowMessage2)(this,4);
		}
		}
		}
		else if (uVar4 == 0xd) {
		(*((this->saveController->parent).vtable)->IsB)();
		(*this->vtable->IsA)(0xd);
		return;
		}
		}
		(*this->vtable->IsA)(uVar4);
		}
		else if (uVar2 == 1) {
		switch(uVar5) {
		case 1:if (uVar3 != 1) {
		(*this->vtable->UpdateFlags)(this,0,0);
		return;
		}
		(*this->vtable->ShowMessage2)(this,1);
		return;
		case 2:(*this->vtable->ShowMessage2)(this,0xd);
		return;
		case 3:switch(uVar3) {
		case 3:case 4:bVar1 = (*((this->saveController->parent).vtable)->IsA)();
		if (bVar1 == false) {
		(*this->vtable->ShowMessage2)(this,4);
		return;
		}
		(*this->vtable->ShowMessage2)(this,0xe);
		return;
		case 5:bVar1 = (*((this->saveController->parent).vtable)->IsA)();
		if (bVar1 == false) {
		(*this->vtable->ShowMessage2)(this,4);
		return;
		}
		(*this->vtable->ShowMessage2)(this,0xf);
		return;
		case 6:(*this->vtable->UpdateFlags)(this,0,0);
		return;
		}
		break;
		case 4:(*this->vtable->ShowMessage2)(this,2);
		return;
		case 5:case 6:case 7:case 8:case 9:case 10:switch(uVar3) {
		case 3:case 4:(*this->vtable->ShowMessage2)(this,0xe);
		return;
		case 5:(*this->vtable->ShowMessage2)(this,0xf);
		return;
		case 6:(*this->vtable->UpdateFlags)(this,0,0);
		return;
		}
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void SaveSystemAbstract::FUN_00202e20(int param_1, FontRenderer* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemAbstract::FUN_00202e20(SaveSystemAbstract *this,int param_1,FontRenderer *param_2){
		float fVar1;
		uint uVar2;
		TwinString local_c;
		uVar2 = this->flags1 & 0xf;
		local_c.value = (char *)0x0;
		local_c.strLength = 0;
		local_c.strSize = 0;
		if ((((uVar2 == 1) || ((2 < uVar2 && (uVar2 < 6)))) && (0 < param_1)) && (param_1 < 10)) {
		GetSaveString(this,*(int *)(&DAT_003a4174 + param_1 * 4),&local_c);
		fVar1 = FLOAT_0038a838;
		if (local_c.strLength != 0) {
		param_2->color = COLOR_WHITE;
		param_2->font = (Font *)(this->str0).value;
		param_2->originX = fVar1;
		param_2->originY = fVar1;
		param_2->field13_0x34 = 0x22;
		FontRenderer::DrawText(param_2,0.5,0.4,local_c.value);
		}
		}
		TwinString::Dispose(&local_c);
		return;
		}
		
	*/
	return;
}

void SaveSystemAbstract::FUN_00202ed0(int param_1, FontRenderer* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemAbstract::FUN_00202ed0(SaveSystemAbstract *this,int param_1,FontRenderer *param_2){
		Color CVar1;
		int *piVar2;
		float fVar3;
		float fVar4;
		uint uVar5;
		uint uVar6;
		int stringIndex;
		TwinString local_18;
		TwinString local_c;
		fVar3 = FLOAT_0038a838;
		param_2->color = COLOR_WHITE;
		param_2->font = (Font *)(this->str0).value;
		param_2->originX = fVar3;
		param_2->originY = fVar3;
		local_c.value = (char *)0x0;
		local_c.strLength = 0;
		local_c.strSize = 0;
		param_2->field13_0x34 = 0x22;
		if (((0 < param_1) && (param_1 < 0x10)) &&(GetSaveString(this,STR_INDEX[param_1],&local_c), local_c.strLength != 0)) {
		FontRenderer::DrawText(param_2,0.5,0.4,local_c.value);
		}
		uVar5 = (uint)*(ushort *)((int)&this->oleg + 2);
		uVar6 = 0;
		if (uVar5 != 0) {
		do {
		local_18.value = (char *)0x0;
		local_18.strLength = 0;
		local_18.strSize = 0;
		CVar1 = *(Color *)(&FLOAT_0039f1f8 + (uint)(uVar6 != *(ushort *)&this->oleg) * 4 + 0xf);
		switch(param_1) {
		case 1:case 2:stringIndex = (&DAT_003a4088)[uVar6];
		break;
		case 3:stringIndex = (&DAT_003a4090)[uVar6];
		break;
		case 4:stringIndex = (&DAT_003a4098)[uVar6];
		break;
		case 5:stringIndex = (&DAT_003a409c)[uVar6];
		break;
		case 6:stringIndex = (&DAT_003a40a8)[uVar6];
		break;
		case 7:stringIndex = (&DAT_003a40b0)[uVar6];
		break;
		case 8:stringIndex = (&DAT_003a40b4)[uVar6];
		break;
		case 9:stringIndex = (&DAT_003a40b8)[uVar6];
		break;
		case 10:stringIndex = (&DAT_003a40c0)[uVar6];
		break;
		case 0xb:case 0xc:if (uVar6 + 1 == uVar5) {
		stringIndex = 0x1e;
		}
		else {
		piVar2 = *(int **)(*(int *)((this->saveController->parent).field6_0x18 + 0x30) + uVar6 * 4);
		uVar5 = piVar2[2];
		if (((uVar5 & 0x1000000) != 0) && ((uVar5 & 0x2000000) != 0)) {
		(**(code **)(*piVar2 + 4))(&local_18);
		goto switchD_00202faa_caseD_f;
		}
		stringIndex = 0x1d;
		}
		break;
		case 0xd:stringIndex = (&DAT_003a40c8)[uVar6];
		break;
		case 0xe:stringIndex = (&DAT_003a40cc)[uVar6];
		break;
		case 0xf:stringIndex = (&DAT_003a40d0)[uVar6];
		break;
		default:goto switchD_00202faa_caseD_f;
		}
		GetSaveString(this,stringIndex,&local_18);
		switchD_00202faa_caseD_f:fVar4 = FLOAT_00386ab4;
		param_2->color = CVar1;
		fVar3 = (float)uVar6;
		param_2->originX = fVar4;
		param_2->originY = fVar4;
		if ((int)uVar6 < 0) {
		fVar3 = fVar3 + FLOAT_00386458;
		}
		FontRenderer::DrawText(param_2,0.5,fVar3 * FLOAT_0038a934 + FLOAT_0038a834,local_18.value);
		TwinString::Dispose(&local_18);
		uVar5 = (uint)*(ushort *)((int)&this->oleg + 2);
		uVar6 = uVar6 + 1;
		}
		 while (uVar6 < uVar5);
		}
		TwinString::Dispose(&local_c);
		return;
		}
		
	*/
	return;
}

void SaveSystemAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveSystemAbstract * __thiscall SaveSystemAbstract::Dispose(SaveSystemAbstract *this,byte param_1){
		this->vtable = (SaveSystem_VTable *)&SaveSystem_VT_Abstract;
		TwinString::Dispose(&this->title);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool SaveSystemAbstract::IsA(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SaveSystemAbstract::IsA(SaveSystemAbstract *this,int param_1){
		bool bVar1;
		if (param_1 == 0) {
		(*this->vtable->Method3)(this,(this->saveController->parent).field1_0x4 >> 8 & 0xf);
		return true;
		}
		if (param_1 == 4) {
		bVar1 = (*((this->saveController->parent).vtable)->IsA)();
		if (bVar1 != false) {
		FUN_002007d0(this,this->flags1 & 0xf);
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void SaveSystemAbstract::UpdateFlags(uint param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveSystemAbstract::UpdateFlags(SaveSystemAbstract *this,uint param_1,byte param_2){
		this->flags2 = this->flags2 ^ ((param_1 & 0xff) << 4 ^ this->flags2) & 0x10;
		this->flags1 = ((param_2 & 1) << 0x18 | this->flags1 & 0xf) << 4 | this->flags1 & 0xefffff00;
		return;
		}
		
	*/
	return;
}

void SaveSystemAbstract::Construct_11(char* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveSystemAbstract * __thiscall SaveSystemAbstract::Construct(SaveSystemAbstract *this,char *param_1,SaveController *param_2){
		uint *puVar1;
		int iVar2;
		int *piVar3;
		this->vtable = (SaveSystem_VTable *)&SaveSystem_VT_Abstract;
		TwinString::Set(&this->title,param_1);
		this->saveController = param_2;
		puVar1 = &this->flags1;
		*puVar1 = 0;
		this->flags2 = 0;
		*puVar1 = *puVar1 & 0xfffffff0;
		*(undefined *)((int)&this->flags1 + 1) = 0;
		piVar3 = STR_INDEX;
		for (iVar2 = 0x27;
		 iVar2 != 0;
		 iVar2 = iVar2 + -1) {
		*piVar3 = -1;
		piVar3 = piVar3 + 1;
		}
		return this;
		}
		
	*/
	return;
}

