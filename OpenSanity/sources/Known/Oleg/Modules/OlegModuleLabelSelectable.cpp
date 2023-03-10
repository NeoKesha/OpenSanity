#include "headers/Known/Oleg/Modules/OlegModuleLabelSelectable.h"

#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Base.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Unknown/AutoClasses/ColorMatrix.h"
#include "headers/SortLater/InputObserver.h"
#include "headers/Known/Input/InputController/InputStruct.h"
#include "headers/Unknown/UnkSfxCollection.h"

OlegModuleLabelSelectable::OlegModuleLabelSelectable(InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection) : OlegModuleA()
{
	this->page1 = null;
	this->page2 = null;
	this->inputObserver = inputObserver;
	this->colorMatrix = colorMatrix;
	this->inputHandle = null;
	this->field11_0xa4 = 0;
	this->field12_0xa8 = 0;
	this->sfxCollection = sfxCollection;

	this->field_0x88 = 0;
	this->fadeInLength = 0;
	this->startTime = 0;
	this->fadeOutLength = 0;
	this->value = 0.0;
	this->flags = this->flags & 0xffffff1f | 0x110;
}

OlegModuleLabelSelectable::OlegModuleLabelSelectable(UnkFamily10Base* page, InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection) : OlegModuleA()
{
	this->page1 = page;
	this->page2 = page;
	this->inputObserver = inputObserver;
	this->colorMatrix = colorMatrix;
	this->inputHandle = null;
	this->field11_0xa4 = 0;
	this->field12_0xa8 = 0;
	this->sfxCollection = sfxCollection;

	this->field_0x88 = 0;
	this->fadeInLength = 0;
	this->startTime = 0;
	this->fadeOutLength = 0;
	this->value = 0.0;
	this->flags = this->flags & 0xffffff1f | 0x110;
}

OlegModuleLabelSelectable::OlegModuleLabelSelectable(float x, InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection) : OlegModuleA(x)
{
	this->page1 = null;
	this->page2 = null;
	this->inputObserver = inputObserver;
	this->colorMatrix = colorMatrix;
	this->inputHandle = null;
	this->field11_0xa4 = 0;
	this->field12_0xa8 = 0;
	this->sfxCollection = sfxCollection;

	this->field_0x88 = 0;
	this->fadeInLength = 0;
	this->startTime = 0;
	this->fadeOutLength = 0;
	this->value = 0.0;
	this->flags = this->flags & 0xffffff1f | 0x110;
}

OlegModuleLabelSelectable::OlegModuleLabelSelectable(float x, UnkFamily10Base* page, InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection) : OlegModuleA(x)
{
	this->page1 = page;
	this->page2 = page;
	this->inputObserver = inputObserver;
	this->colorMatrix = colorMatrix;
	this->inputHandle = null;
	this->field11_0xa4 = 0;
	this->field12_0xa8 = 0;
	this->sfxCollection = sfxCollection;

	this->field_0x88 = 0;
	this->fadeInLength = 0;
	this->startTime = 0;
	this->fadeOutLength = 0;
	this->value = 0.0;
	this->flags = this->flags & 0xffffff1f | 0x110;
}

void OlegModuleLabelSelectable::FUN_001a0f70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleLabelSelectable::FUN_001a0f70(OlegModuleLabelSelectable *this){
		OlegModuleAbstract *this_00;
		if ((int *)this->field11_0xa4 != (int *)0x0) {
		(**(code **)(*(int *)this->field11_0xa4 + 0x14))(0);
		}
		this_00 = (this->parent).parent.next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->CallOther1)(this_00);
		return;
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleLabelSelectable::FUN_001a0fa0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleLabelSelectable::FUN_001a0fa0(OlegModuleLabelSelectable *this){
		OlegModuleAbstract *this_00;
		if ((int *)this->field11_0xa4 != (int *)0x0) {
		(**(code **)(*(int *)this->field11_0xa4 + 0x1c))(0);
		}
		this_00 = (this->parent).parent.next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->CallOther2)(this_00);
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleLabelSelectable::Render(FontRenderer* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleLabelSelectable::Render(OlegModuleLabelSelectable *this,FontRenderer *param_1){
		float fVar1;
		uint uVar2;
		float fVar3;
		int iVar4;
		OlegModuleAbstract *this_00;
		Vector2 local_10;
		Vector2 local_8;
		 Selectable label uVar2 = (this->parent).parent.flags;
		if (((~(byte)(uVar2 >> 9) & 1) != 0) && (this->field12_0xa8 != 0)) {
		local_8.x = (this->parent).array[2].x;
		local_8.y = (this->parent).array[2].y;
		local_10.x = (this->parent).array[6].x;
		local_10.y = (this->parent).array[6].y;
		fVar3 = (this->parent).array[0].x;
		if ((uVar2 & 0x400) != 0) {
		FUN_00104540(false,&(this->parent).parent.field2_0x8,&local_8);
		}
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(false,&local_10);
		}
		iVar4 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar4 != 0) {
		fVar1 = *(float *)(iVar4 + 0x10);
		local_10.x = fVar1 * local_10.x;
		local_10.y = local_10.y * fVar1;
		}
		FUN_001a58b0(this->colorMatrix,this->field12_0xa8,0,(uint)fVar3,&local_8.x,&local_10.x,param_1);
		}
		this_00 = (this->parent).parent.next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->Render)(this_00,param_1);
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleLabelSelectable::FUN_001a6990(Vector2* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleLabelSelectable::FUN_001a6990(OlegModuleLabelSelectable *this,Vector2 *param_1){
		InputObserver *pIVar1;
		int *piVar2;
		uint uVar3;
		undefined **this_00;
		OlegModuleAbstract::Process((OlegModuleAbstract *)this,(SomeState *)param_1);
		uVar3 = (this->parent).parent.flags;
		if (((~(byte)(uVar3 >> 9) & 1) == 0) || (uVar3 = uVar3 & 0xf, uVar3 < 2)) {
		if ((int *)this->field11_0xa4 != (int *)0x0) {
		FUN_001a17d0((int *)this->field11_0xa4);
		if (((this->field_0x88 & 2) != 0) &&((UnkFamily10Base *)this->field11_0xa4 !=(UnkFamily10Base *)&PTR_UnkFamily10_VT_Base_003a3950)) {
		this->page2 = (UnkFamily10Base *)this->field11_0xa4;
		}
		this->field11_0xa4 = 0;
		}
		}
		else {
		if (uVar3 == 3) {
		(*(code *)this->inputObserver->vtable[1])(this->inputHandle,this->field_0x88 & 1);
		}
		else {
		pIVar1 = this->inputObserver;
		pIVar1->inputMask1 = 0;
		pIVar1->inputMask0 = 0;
		}
		if (this->field11_0xa4 == 0) {
		this->field11_0xa4 = this->page2;
		FUN_001a1690(this->page2,0);
		}
		this_00 = FUN_001a6650((void *)this->field11_0xa4,(int)this->inputObserver,(int)this->sfxCollection,0);
		if (this_00 != (undefined **)0x0) {
		piVar2 = (int *)this->field11_0xa4;
		FUN_001a17d0(piVar2);
		if (((this->field_0x88 & 2) != 0) &&((UnkFamily10Base *)this->field11_0xa4 !=(UnkFamily10Base *)&PTR_UnkFamily10_VT_Base_003a3950)) {
		this->page2 = (UnkFamily10Base *)this->field11_0xa4;
		}
		this->field11_0xa4 = this_00;
		FUN_001a1690(this_00,(uint)piVar2);
		}
		}
		uVar3 = (this->parent).parent.flags & 0xf;
		if (((uVar3 == 2) || (uVar3 == 3)) &&(((this->field_0x88 & 1) == 0 ||((undefined **)this->field11_0xa4 != &PTR_UnkFamily10_VT_Base_003a3950)))) {
		this->field12_0xa8 = this->field11_0xa4;
		return;
		}
		if (uVar3 < 2) {
		this->field12_0xa8 = 0;
		}
		return;
		}
		
	*/
	return;
}
