#include "headers/Known/Oleg/Oleg.h"

#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10S.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VA.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10L.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Graphics/Font/Font.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10B.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2C.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VL.h"
#include "headers/Known/Math/Spline/SplineA.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10I.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10P.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"
#include "headers/Unknown/UnkSfxCollection.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10ZA.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxData/SectionDataSfx.h"
#include "headers/Known/Input/InputController/InputStruct.h"
#include "headers/Known/Oleg/Modules/OlegModuleLabelSelectable.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10M.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10N.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VM.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/Chunks/ChunkDesc.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Q.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10R.h"
Oleg::Oleg() : OlegBase()
{
}
Oleg::Oleg(Font* font, ChunkDesc* chunkDesc) : OlegBase()
{
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Oleg * __thiscall Oleg::Construct(Oleg *this,Font *font,ChunkDesc *chunkDesc){
		OlegModuleAF *this_00;
		uint *puVar2;
		float fVar3;
		Vector4 *pVVar4;
		Vector2 *pVVar5;
		float *pfVar6;
		byte *pbVar7;
		OlegModuleIcon *moduleElement;
		int i;
		int extraout_ECX;
		OlegModuleIcon **moduleArray;
		float fStack24;
		float local_14;
		float fStack16;
		float local_c;
		float fStack8;
		float local_4;
		ChunkDesc *puVar4;
		InputObserver *inputObserver;
		OlegModuleLabelPulsating *puVar1;
		Font *_font;
		OlegModuleAH *member38;
		UnkSfxCollection *sfxArr;
		_font = font;
		OlegBase::Construct(&this->parent);
		(this->parent).vtable = (OlegBase_VTable *)&Oleg_VT;
		this->field5_0x320 = 0;
		SplineA::Construct(&this->spline0);
		(this->spline1).parent.next = (SplineAbstract *)0x0;
		(this->spline1).parent.position = 0.0;
		(this->spline1).parent.startupLevel = 0.0;
		(this->spline1).parent.repeats = 0;
		(this->spline1).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_D;
		(this->spline2).parent.next = (SplineAbstract *)0x0;
		(this->spline2).parent.position = 0.0;
		(this->spline2).parent.startupLevel = 0.0;
		(this->spline2).parent.repeats = 0;
		(this->spline2).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_E;
		(this->spline3).parent.next = (SplineAbstract *)0x0;
		(this->spline3).parent.position = 0.0;
		(this->spline3).parent.startupLevel = 0.0;
		(this->spline3).parent.repeats = 0;
		(this->spline3).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_C;
		this->chunkDesc = chunkDesc;
		this->font = font;
		(this->psmPath).value = (char *)0x0;
		(this->psmPath).strLength = 0;
		(this->psmPath).strSize = 0;
		InputWrapper::Construct(&this->inputWrapper,0,7);
		inputObserver = &this->inputObserver;
		InputObserver::Construct(inputObserver,&this->inputWrapper);
		ColorMatrix::Construct(this->colorMatrix,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 1,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 2,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 3,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 4,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 5,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 6,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 7,(float)font);
		ColorMatrix::Construct(this->colorMatrix + 8,(float)font);
		sfxArr = &this->sfxRelated;
		FUN_001a1be0(sfxArr);
		this->page1 = (UnkFamily10VM *)0x0;
		this->page2 = (UnkFamily10B *)0x0;
		this->page3 = (UnkFamily10I *)0x0;
		this->page4 = (UnkFamily10L *)0x0;
		this->page5 = (UnkFamily10M *)0x0;
		this->page6 = (UnkFamily10N *)0x0;
		this->page7 = (UnkFamily10VA *)0x0;
		this->page8 = (UnkFamily10P *)0x0;
		this->page9 = (UnkFamily10P *)0x0;
		this->page10 = (UnkFamily10P *)0x0;
		this->page11 = (UnkFamily10Q *)0x0;
		this->page12 = (UnkFamily10Q *)0x0;
		this->page13 = (UnkFamily10Q *)0x0;
		this->page14 = (UnkFamily10Q *)0x0;
		this->page15 = (UnkFamily10R *)0x0;
		this->page16 = (UnkFamily10S *)0x0;
		this->page17 = (UnkFamily10ZA *)0x0;
		this->page18 = (UnkFamily10VL *)0x0;
		TwinsanityMaterialShader::Construct(&this->material);
		this->unkClass = (ShaderProgramAbstract *)0x0;
		UIElementImage::Construct(&this->materialRelated);
		this->arr1length = 8;
		pVVar4 = (Vector4 *)VirtualPool::AllocateMemory(0x80);
		this->arr1 = pVVar4;
		this->arr2length = 8;
		pVVar5 = (Vector2 *)VirtualPool::AllocateMemory(0x40);
		this->arr2 = pVVar5;
		this->arr3length = 2;
		pfVar6 = (float *)VirtualPool::AllocateMemory(8);
		this->arr3 = pfVar6;
		this->arr4length = 2;
		pfVar6 = (float *)VirtualPool::AllocateMemory(8);
		this->arr4 = pfVar6;
		 param_2 is reused as AutoClass51 ptr chunkDesc = (ChunkDesc *)this->unkStruct12array;
		font = (Font *)&Eight;
		do {
		UnkFamily20Base::Construct((UnkFamily20Base *)chunkDesc);
		 Iterate array of AutoClass51 chunkDesc = (ChunkDesc *)(chunkDesc->uintArray + 6);
		font = (Font *)((int)&font[-1].field7_0x30 + 3);
		 Font reused as INT counter from 8 to 0 }
		 while (font != (Font *)0x0);
		(this->spline4).parent.next = (SplineAbstract *)0x0;
		(this->spline4).parent.position = 0.0;
		(this->spline4).parent.startupLevel = 0.0;
		(this->spline4).parent.repeats = 0;
		(this->spline4).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_B;
		UnkFamily20Base::Construct(&(this->spline4).unkStruct);
		chunkDesc = (ChunkDesc *)&this->someIcon1;
		(this->spline4).unkStruct.vtable = (UnkFamily20Base_VTable *)&UnkFamily20_VT_A;
		font = (Font *)0x2e;
		do {
		UIElementImage::Construct((UIElementImage *)chunkDesc);
		 next chunkDesc = (ChunkDesc *)&(chunkDesc->unkString1).strLength;
		font = (Font *)((int)&font[-1].field7_0x30 + 3);
		}
		 while (font != (Font *)0x0);
		chunkDesc = (ChunkDesc *)this->iconsPsm3;
		font = (Font *)&Eight;
		do {
		UIElementImage::Construct((UIElementImage *)chunkDesc);
		 next chunkDesc = (ChunkDesc *)&(chunkDesc->unkString1).strLength;
		font = (Font *)((int)&font[-1].field7_0x30 + 3);
		}
		 while (font != (Font *)0x0);
		AutoClass11::Construct(&this->screenMessage,_font);
		OlegModuleIcon::Construct(&this->uiIcon01,&this->someIcon1);
		OlegModuleIcon::Construct(&this->uiIcon02,&this->someIcon1);
		OlegModuleIcon::Construct(&this->uiIcon03,&this->someIcon1);
		OlegModuleIcon::Construct(&this->uiIcon04,0.075,&this->crashTwinsanityLogo);
		OlegModuleIcon::Construct(&this->uiIcon05,&this->someIcon1);
		OlegModuleLabelGeneric::Construct(&this->label01,0.5,_font,0x22);
		OlegModuleIcon::Construct(&this->uiIcon06,&this->someIcon1);
		OlegModuleMenuBubble::Construct(&this->bubble01,0.5,8,1,0x40,0);
		OlegModuleMenuBubble::Construct(&this->bubble02,0.5,4,1,0x20,0);
		OlegModuleLabelPulsating::Construct(&this->caption01,0.9,_font,0x1d,0x44);
		OlegModuleLabelPulsating::Construct(&this->caption02,0.9,_font,0xc0,0x44);
		OlegModuleLabelPulsating::Construct(&this->caption03,0.075,_font,0x1c,0x14);
		OlegModuleLabelPulsating::Construct(&this->caption04,0.075,_font,0x1e,0x14);
		OlegModuleLabelPulsating::Construct(&this->caption05,0.9,_font,0x1f,0x44);
		OlegModuleLabelSelectable::Construct(&this->option01,0.5,inputObserver,this->colorMatrix + 6,sfxArr);
		OlegModuleMenuBubble::Construct(&this->bubble03,0.5,4,1,0x20,0);
		OlegModuleLabelSelectable::Construct(&this->option02,0.5,inputObserver,this->colorMatrix,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption06,0.5,_font,0x29,0x22);
		OlegModuleLabelSelectable::Construct(&this->option03,0.5,inputObserver,this->colorMatrix + 2,sfxArr);
		OlegModuleIcon::Construct(&this->uiIcon07,0.5,&this->crashTwinsanityLogo);
		OlegModuleLabelSelectable::Construct(&this->option04,0.5,inputObserver,this->colorMatrix + 4,sfxArr);
		OlegModuleLabelSelectable::Construct(&this->option05,0.5,inputObserver,this->colorMatrix + 2,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption07,0.5,_font,0x65,0x22);
		OlegModuleLabelSelectable::Construct(&this->option06,0.5,inputObserver,this->colorMatrix + 2,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption08,0.5,_font,0x49,0x22);
		OlegModuleLabelSelectable::Construct(&this->option07,0.5,inputObserver,this->colorMatrix + 2,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption09,0.5,_font,0x4a,0x22);
		OlegModuleLabelPulsating::Construct(&this->caption10,0.5,_font,0x20,0x22);
		OlegModuleLabelPulsating::Construct(&this->caption11,0.5,_font,0x24,0x22);
		OlegModuleLabelPulsating::Construct(&this->caption12,0.5,_font,0x25,0x22);
		OlegModuleLabelPulsating::Construct(&this->caption13,0.5,_font,0x27,0x22);
		OlegModuleLabelPulsating::Construct(&this->caption14,0.5,_font,0x28,0x22);
		OlegModuleLabelSelectable::Construct(&this->option08,0.5,inputObserver,this->colorMatrix + 2,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption15,0.5,_font,0x26,0x22);
		OlegModuleLabelPulsating::Construct(&this->caption16,0.5,_font,0x46,0x22);
		OlegModuleIcon::Construct(&this->uiIcon08,0.5,this->iconsPsm2 + 0x11);
		OlegModuleLabelSelectable::Construct(&this->option09,0.5,inputObserver,this->colorMatrix + 2,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption17,0.5,_font,0xb8,0x22);
		OlegModuleLabelSelectable::Construct(&this->option10,0.5,inputObserver,this->colorMatrix + 2,sfxArr);
		OlegModuleMenuBubble::Construct(&this->bubble04,0.5,4,1,0x20,0);
		OlegModuleMenuBubble::Construct(&this->bubble05,0.5,4,1,0x20,0);
		OlegModuleMenuBubble::Construct(&this->bubble06,0.5,4,1,0x20,0);
		OlegModuleMenuBubble::Construct(&this->bubble07,0.5,2,1,0x20,0);
		OlegModuleMenuBubble::Construct(&this->bubble08,0.5,4,1,0x18,0);
		OlegModuleIcon::Construct(&this->uiIcon09,0.5,&this->someIcon2);
		OlegModuleLabelGeneric::Construct(&this->progressPercent,0.5,_font,0x22);
		OlegModuleLabelGeneric::Construct(&this->label03,0.5,_font,0x60);
		OlegModuleIcon::Construct(&this->uiIcon10,0.5,this->iconsPsm2 + 0xd);
		OlegModuleLabelGeneric::Construct(&this->label04,0.5,_font,0x60);
		OlegModuleIcon::Construct(&this->uiIcon11,0.5,this->iconsPsm2);
		OlegModuleLabelGeneric::Construct(&this->label05,0.5,_font,0x60);
		OlegModuleIcon::Construct(&this->uiIcon12,0.5,this->iconsPsm2 + 0xf);
		OlegModuleLabelSelectable::Construct(&this->option11,0.5,inputObserver,this->colorMatrix + 5,sfxArr);
		OlegModuleLabelSelectable::Construct(&this->option12,0.5,inputObserver,this->colorMatrix + 5,sfxArr);
		OlegModuleLabelSelectable::Construct(&this->option13,0.5,inputObserver,this->colorMatrix + 5,sfxArr);
		OlegModuleLabelSelectable::Construct(&this->option14,0.5,inputObserver,this->colorMatrix + 5,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption18,0.5,_font,0x4c,0x22);
		OlegModuleMenuBubble::Construct(&this->bubble09,0.5,4,1,0x20,0);
		OlegModuleLabelSelectable::Construct(&this->option15,0.5,inputObserver,this->colorMatrix + 1,sfxArr);
		OlegModuleMenuBubble::Construct(&this->bubble10,0.5,4,1,0x20,0);
		OlegModuleIcon::Construct(&this->uiIcon13,0.075,&this->crashTwinsanityLogo);
		OlegModuleLabelPulsating::Construct(&this->caption19,0.075,_font,0xb7,0x14);
		OlegModuleLabelSelectable::Construct(&this->option16,0.5,inputObserver,this->colorMatrix + 3,sfxArr);
		OlegModuleLabelGeneric::Construct(&this->label07,0.5,_font,0x22);
		OlegModuleLabelGeneric::Construct(&this->label08,0.5,_font,0x22);
		OlegModuleLabelSelectable::Construct(&this->option17,0.5,inputObserver,this->colorMatrix + 7,sfxArr);
		OlegModuleLabelGeneric::Construct(&this->label09,0.5,_font,0x22);
		OlegModuleMenuBubble::Construct(&this->bubble11,0.5,4,1,0x20,0);
		OlegModuleLabelSelectable::Construct(&this->option18,0.5,inputObserver,this->colorMatrix + 8,sfxArr);
		OlegModuleLabelPulsating::Construct(&this->caption20,0.5,_font,0x47,0x22);
		OlegModuleIcon::Construct(&this->uiIcon14,0.5,this->iconsPsm2 + 0x11);
		OlegModuleLabelGeneric::Construct(&this->label10,0.9,_font,0x30);
		OlegModuleIcon::Construct(&this->uiIcon15,0.075,&this->someIcon4);
		OlegModuleLabelGeneric::Construct(&this->label11,0.9,_font,0x30);
		OlegModuleIcon::Construct(&this->uiIcon16,0.075,this->iconsPsm2 + 0x12);
		puVar4 = this->chunkDesc;
		member38 = &this->module75;
		OlegModuleA::Construct(&member38->parent,0.075);
		*(ChunkDesc **)&(this->module75).field_0x8c = puVar4;
		this_00 = &this->module76;
		(member38->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AH;
		(this->module75).field1_0x88 = &this->someIcon1;
		OlegModuleA::Construct(&this_00->parent,0.5);
		fVar3 = FLOAT_00386ab4;
		(this->module76).field3_0x90 = this->iconsPsm2 + 0xd;
		(this_00->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AF;
		(this->module76).field1_0x88 = fVar3;
		(this->module76).field2_0x8c = this->iconsPsm2 + 6;
		(this->module76).image1 = (UIElementImage *)0x0;
		(this->module76).image2 = (UIElementImage *)0x0;
		OlegModuleLabelGeneric::Construct(&this->wumpaCount,0.075,_font,0x14);
		OlegModuleIcon::Construct(&this->uiIcon17,0.075,this->iconsPsm2 + 0xd);
		OlegModuleLabelGeneric::Construct(&this->label13,0.9,_font,0x44);
		OlegModuleIcon::Construct(&this->uiIcon18,0.9,this->iconsPsm2);
		OlegModuleIcon::Construct(&this->lifeIcon,0.2,this->iconsPsm2);
		OlegModuleIcon::Construct(&this->uiIcon20,0.5,this->iconsPsm2 + 0xe);
		OlegModuleLabelGeneric::Construct(&this->label14,0.9,_font,0x44);
		OlegModuleIcon::Construct(&this->uiIcon21,0.9,this->iconsPsm2 + 0x10);
		OlegModuleIcon::Construct(&this->uiIcon22,&this->someIcon1);
		OlegModuleAC::Construct(&this->module86,0.5,this->iconsPsm3);
		OlegModuleIcon::Construct(&this->uiIcon23,0.075,&this->crashTwinsanityLogo);
		OlegModuleLabelPulsating::Construct(&this->caption21,0.5,_font,0x5c,0x22);
		pbVar7 = &this->iconsPsm2[0].parent.field3_0xc;
		i = 6;
		do {
		*pbVar7 = 1;
		pbVar7 = pbVar7 + 0x20;
		i = i + -1;
		}
		 while (i != 0);
		pbVar7 = &this->iconsPsm2[0x18].parent.field3_0xc;
		i = 0x10;
		do {
		*pbVar7 = 1;
		fVar3 = ENV_FLOAT_92_0_15;
		pbVar7 = pbVar7 + 0x20;
		i = i + -1;
		}
		 while (i != 0);
		(this->crashTwinsanityLogo).parent.field3_0xc = 1;
		(this->someIcon2).parent.field3_0xc = 1;
		this->iconsPsm2[0xd].parent.field3_0xc = 1;
		this->iconsPsm2[0xe].parent.field3_0xc = 1;
		this->iconsPsm2[0xf].parent.field3_0xc = 1;
		this->iconsPsm2[0x11].parent.field3_0xc = 1;
		this->iconsPsm2[0x17].parent.field3_0xc = 1;
		(this->materialRelated).parent.field3_0xc = 1;
		(this->uiIcon12).field2_0x8c = this->unkStruct12array;
		this->field1_0x310 = 0;
		puVar2 = &this->screenFlags;
		*puVar2 = 0;
		this->field3_0x318 = 0;
		this->field4_0x31c = 0;
		*puVar2 = *puVar2 & 0xfffe0203 | 0x202;
		this->field3_0x318 = this->field3_0x318 & 0xfffe3233 | 0x3232;
		this->field4_0x31c = this->field4_0x31c & 0xfffe1819 | 0x1818;
		this->deltaTime = (int)(TicksPerTime * fVar3);
		(this->spline0).parent.length = fVar3;
		chunkDesc = (ChunkDesc *)(this->iconsPsm2 + 7);
		this->field66_0xb00 = 0;
		this->field67_0xb04 = 0;
		this->field68_0xb08 = 0;
		moduleArray = this->iconArray;
		font = (Font *)&PRIMITIVE_TYPE;
		do {
		moduleElement = (OlegModuleIcon *)VirtualPool::AllocateMemory(0xbc);
		if (moduleElement == (OlegModuleIcon *)0x0) {
		moduleElement = (OlegModuleIcon *)0x0;
		}
		else {
		moduleElement = OlegModuleIcon::Construct(moduleElement,0.5,(UIElementImage *)chunkDesc);
		}
		*moduleArray = moduleElement;
		chunkDesc = (ChunkDesc *)&(chunkDesc->unkString1).strLength;
		moduleArray = moduleArray + 1;
		font = (Font *)((int)&font[-1].field7_0x30 + 3);
		 font reused as counter from 6 to 0 }
		 while (font != (Font *)0x0);
		InitModuleMask(this);
		thunk_FUN_000b33f0(extraout_ECX);
		fStack24 = FLOAT_0038bc0c;
		local_14 = 0.0;
		fStack16 = FLOAT_0038639c;
		local_c = FLOAT_0038639c;
		fStack8 = FLOAT_0038c9bc;
		local_4 = FLOAT_0038cae0;
		OlegModuleA::FUN_001a2e90(&member38->parent,COLOR_WHITE,(ColorTransparent *)&stack0xfffffff8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xffffffe8);
		fStack8 = FLOAT_0038639c;
		local_4 = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option02).parent,COLOR_WHITE,&ColorTransparent_0039e304,(ColorTransparent *)&stack0xfffffff8,&ColorTransparent_0039e304);
		fStack8 = FLOAT_0038d548;
		local_4 = FLOAT_0038d548;
		OlegModuleA::UnkFun(&(this->caption06).parent,COLOR_WHITE,&ColorTransparent_0039e2fc,(ColorTransparent *)&stack0xfffffff8,&ColorTransparent_0039e2fc);
		(this->option02).parent.parent.next = (OlegModuleAbstract *)&this->caption06;
		thunk_FUN_000b18e0(this);
		thunk_FUN_000b79f0(this);
		thunk_FUN_000b1a40(this);
		thunk_FUN_000b1c50(this);
		thunk_FUN_000b1d80(this);
		fStack8 = FLOAT_0038639c;
		local_4 = FLOAT_0038639c;
		fStack16 = FLOAT_00386ab4;
		local_c = FLOAT_00386608;
		OlegModuleA::FUN_001a2e30(&(this->option16).parent,(uint)COLOR_WHITE,(Vector2 *)&stack0xfffffff0,(Vector2 *)&stack0xfffffff8);
		thunk_FUN_000b7db0(this);
		thunk_FUN_000b1f60(this);
		thunk_FUN_000b21c0(this);
		thunk_FUN_000b22a0(this);
		thunk_FUN_000b3210(this);
		fStack8 = 0.0;
		local_4 = FLOAT_0038bc0c;
		fStack16 = FLOAT_00386ab4;
		fStack24 = FLOAT_00386ab4;
		local_c = FLOAT_00386608;
		local_14 = FLOAT_0038bf5c;
		OlegModuleA::FUN_001a2e90(&this_00->parent,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		fStack8 = FLOAT_0038a838;
		local_4 = FLOAT_0038a838;
		fStack16 = FLOAT_00386ab4;
		local_c = FLOAT_0038a82c;
		OlegModuleA::FUN_001a2e30(&(this->caption20).parent,(uint)COLOR_WHITE,(Vector2 *)&stack0xfffffff0,(Vector2 *)&stack0xfffffff8);
		fStack8 = 0.0;
		fStack16 = FLOAT_00386608;
		local_c = FLOAT_00386608;
		local_4 = FLOAT_00386ab4;
		fStack24 = FLOAT_00386ab4;
		local_14 = FLOAT_0038ab4c;
		OlegModuleA::FUN_001a40a0((OlegModuleA *)&this->uiIcon14,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		fStack16 = FLOAT_0038cac0;
		fStack8 = FLOAT_0038bc0c;
		local_4 = 0.0;
		(this->uiIcon14).parent.parent.next = (OlegModuleAbstract *)&this->caption20;
		local_c = fStack16;
		fStack24 = FLOAT_0038d77c;
		local_14 = FLOAT_0038a828;
		OlegModuleA::FUN_001a2e90(&(this->wumpaCount).parent,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		fStack8 = FLOAT_0038bc0c;
		local_4 = 0.0;
		fStack16 = FLOAT_0038d778;
		local_c = FLOAT_0038ab54;
		fStack24 = FLOAT_0038c850;
		local_14 = FLOAT_0038b3c8;
		OlegModuleA::FUN_001a40a0((OlegModuleA *)&this->uiIcon17,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		fStack8 = FLOAT_00386ab4;
		local_4 = 0.0;
		fStack16 = FLOAT_0038cac0;
		local_c = FLOAT_0038cac0;
		fStack24 = FLOAT_0038d774;
		local_14 = FLOAT_0038a828;
		OlegModuleA::FUN_001a2e90(&(this->label13).parent,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		fStack8 = FLOAT_00386ab4;
		local_4 = 0.0;
		fStack16 = FLOAT_0038bf5c;
		local_c = FLOAT_0038ab54;
		fStack24 = FLOAT_0038d770;
		local_14 = FLOAT_0038b3c8;
		OlegModuleA::FUN_001a40a0((OlegModuleA *)&this->uiIcon18,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		fStack8 = FLOAT_0038639c;
		local_4 = FLOAT_0038639c;
		fStack16 = FLOAT_0038a838;
		local_c = FLOAT_0038cae4;
		OlegModuleA::FUN_001a2e30(&(this->label14).parent,(uint)COLOR_WHITE,(Vector2 *)&stack0xfffffff0,(Vector2 *)&stack0xfffffff8);
		fStack8 = FLOAT_0038ab54;
		local_4 = FLOAT_0038ab54;
		fStack16 = FLOAT_0038d76c;
		local_c = FLOAT_0038d768;
		OlegModuleLabelGeneric::FUN_001a4010((OlegModuleLabelGeneric *)&this->uiIcon21,(uint)COLOR_WHITE,(Vector2 *)&stack0xfffffff0,(Vector2 *)&stack0xfffffff8);
		fStack8 = FLOAT_00386ab4;
		local_4 = FLOAT_0038a828;
		fStack16 = FLOAT_0038a828;
		local_c = FLOAT_0038a828;
		fStack24 = FLOAT_00386ab4;
		local_14 = FLOAT_0038a828;
		OlegModuleA::FUN_001a41b0((OlegModuleA *)&this->uiIcon20,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		fStack16 = FLOAT_0038bf5c;
		fStack8 = FLOAT_0038d764;
		local_4 = FLOAT_0038b3bc;
		local_c = FLOAT_0038ab54;
		fStack24 = FLOAT_0038d764;
		local_14 = FLOAT_0038b3bc;
		OlegModuleA::FUN_001a41b0((OlegModuleA *)&this->lifeIcon,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xfffffff8);
		(this->wumpaCount).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon17;
		(this->label13).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon18;
		(this->label14).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon21;
		AssignModuleToSlot(this,4,&this->uiIcon06);
		AssignModuleToSlot(this,5,&this->bubble01);
		AssignModuleToSlot(this,6,&this->bubble02);
		AssignModuleToSlot(this,7,&this->caption01);
		AssignModuleToSlot(this,8,&this->caption02);
		AssignModuleToSlot(this,9,&this->caption03);
		AssignModuleToSlot(this,10,&this->caption04);
		AssignModuleToSlot(this,0xb,&this->caption05);
		AssignModuleToSlot(this,0xc,&this->option01);
		AssignModuleToSlot(this,0xe,&this->option03);
		AssignModuleToSlot(this,0xf,&this->uiIcon07);
		AssignModuleToSlot(this,0,&this->uiIcon01);
		AssignModuleToSlot(this,1,&this->uiIcon03);
		AssignModuleToSlot(this,2,&this->uiIcon05);
		AssignModuleToSlot(this,3,&this->label01);
		AssignModuleToSlot(this,0x10,&this->option04);
		AssignModuleToSlot(this,0x11,&this->option05);
		AssignModuleToSlot(this,0x12,&this->option06);
		AssignModuleToSlot(this,0x13,&this->bubble07);
		AssignModuleToSlot(this,0x14,&this->caption10);
		AssignModuleToSlot(this,0x15,&this->caption12);
		AssignModuleToSlot(this,0x2f,&this->option07);
		AssignModuleToSlot(this,0x16,&this->caption13);
		AssignModuleToSlot(this,0x17,&this->caption15);
		AssignModuleToSlot(this,0x18,&this->caption17);
		AssignModuleToSlot(this,0xd,&this->option02);
		AssignModuleToSlot(this,0x19,&this->option11);
		AssignModuleToSlot(this,0x1a,&this->option12);
		AssignModuleToSlot(this,0x1b,&this->option13);
		AssignModuleToSlot(this,0x1c,&this->option14);
		AssignModuleToSlot(this,0x1d,&this->caption18);
		AssignModuleToSlot(this,0x1e,&this->option15);
		AssignModuleToSlot(this,0x1f,&this->uiIcon13);
		AssignModuleToSlot(this,0x20,&this->option16);
		AssignModuleToSlot(this,0x21,&this->label07);
		AssignModuleToSlot(this,0x22,&this->label08);
		AssignModuleToSlot(this,0x23,&this->label09);
		AssignModuleToSlot(this,0x24,&this->uiIcon14);
		AssignModuleToSlot(this,0x25,&this->label10);
		AssignModuleToSlot(this,0x26,member38);
		AssignModuleToSlot(this,0x27,this_00);
		AssignModuleToSlot(this,0x28,&this->wumpaCount);
		AssignModuleToSlot(this,0x29,&this->label13);
		AssignModuleToSlot(this,0x2a,&this->uiIcon20);
		AssignModuleToSlot(this,0x2b,&this->label14);
		AssignModuleToSlot(this,0x2c,&this->uiIcon22);
		AssignModuleToSlot(this,0x2d,&this->module86);
		AssignModuleToSlot(this,0x2e,&this->uiIcon23);
		return this;
		}

	*/
}
Oleg::~Oleg()
{
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::Dispose(Oleg *param_1){
		UnkFamily10B *pUVar1;
		OlegModuleIcon *this;
		int iVar2;
		uint uVar3;
		OlegModuleIcon **ppOVar4;
		UIElementAbstract *pUVar5;
		UnkFamily20Base *this_00;
		pUVar1 = param_1->page2;
		(param_1->parent).vtable = (OlegBase_VTable *)&Oleg_VT;
		if (pUVar1 != (UnkFamily10B *)0x0) {
		(*(code *)((pUVar1->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page3 != (UnkFamily10I *)0x0) {
		(*(code *)((param_1->page3->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page5 != (UnkFamily10M *)0x0) {
		(*(code *)((param_1->page5->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page6 != (UnkFamily10N *)0x0) {
		(*(code *)((param_1->page6->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page7 != (UnkFamily10VA *)0x0) {
		(*(code *)((param_1->page7->parent).parent.vtable)->field3_0xc)(1);
		}
		if (param_1->page18 != (UnkFamily10VL *)0x0) {
		(*(code *)((param_1->page18->parent).parent.vtable)->field3_0xc)(1);
		}
		if (param_1->page4 != (UnkFamily10L *)0x0) {
		(*(code *)((param_1->page4->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page11 != (UnkFamily10Q *)0x0) {
		(*(code *)((param_1->page11->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page12 != (UnkFamily10Q *)0x0) {
		(*(code *)((param_1->page12->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page13 != (UnkFamily10Q *)0x0) {
		(*(code *)((param_1->page13->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page14 != (UnkFamily10Q *)0x0) {
		(*(code *)((param_1->page14->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page15 != (UnkFamily10R *)0x0) {
		(*(code *)((param_1->page15->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page16 != (UnkFamily10S *)0x0) {
		(*(code *)((param_1->page16->parent).vtable)->field3_0xc)(1);
		}
		if (param_1->page17 != (UnkFamily10ZA *)0x0) {
		(*(code *)((param_1->page17->parent).parent.vtable)->field3_0xc)(1);
		}
		uVar3 = 0;
		do {
		thunk_FUN_000adb30((int)param_1,uVar3);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < 3);
		ppOVar4 = param_1->iconArray;
		iVar2 = 6;
		do {
		this = *ppOVar4;
		if (this != (OlegModuleIcon *)0x0) {
		(*((this->parent).parent.vtable)->Dispose)((OlegModuleAbstract *)this,1);
		}
		ppOVar4 = ppOVar4 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption21);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon23);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->module86);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon22);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon21);
		TwinString::Dispose(&(param_1->label14).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label14);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon20);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->lifeIcon);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon18);
		TwinString::Dispose(&(param_1->label13).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label13);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon17);
		TwinString::Dispose(&(param_1->wumpaCount).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->wumpaCount);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->module76);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->module75);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon16);
		TwinString::Dispose(&(param_1->label11).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label11);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon15);
		TwinString::Dispose(&(param_1->label10).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label10);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon14);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption20);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option18);
		OlegModuleMenuBubble::Dispose(&param_1->bubble11);
		TwinString::Dispose(&(param_1->label09).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label09);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option17);
		TwinString::Dispose(&(param_1->label08).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label08);
		TwinString::Dispose(&(param_1->label07).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label07);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option16);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption19);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon13);
		OlegModuleMenuBubble::Dispose(&param_1->bubble10);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option15);
		OlegModuleMenuBubble::Dispose(&param_1->bubble09);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption18);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option14);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option13);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option12);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option11);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon12);
		TwinString::Dispose(&(param_1->label05).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label05);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon11);
		TwinString::Dispose(&(param_1->label04).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label04);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon10);
		TwinString::Dispose(&(param_1->label03).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label03);
		TwinString::Dispose(&(param_1->progressPercent).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->progressPercent);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon09);
		OlegModuleMenuBubble::Dispose(&param_1->bubble08);
		OlegModuleMenuBubble::Dispose(&param_1->bubble07);
		OlegModuleMenuBubble::Dispose(&param_1->bubble06);
		OlegModuleMenuBubble::Dispose(&param_1->bubble05);
		OlegModuleMenuBubble::Dispose(&param_1->bubble04);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option10);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption17);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option09);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon08);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption16);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption15);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option08);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption14);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption13);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption12);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption11);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption10);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption09);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option07);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption08);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option06);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption07);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option05);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option04);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon07);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option03);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption06);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option02);
		OlegModuleMenuBubble::Dispose(&param_1->bubble03);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->option01);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption05);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption04);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption03);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption02);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->caption01);
		OlegModuleMenuBubble::Dispose(&param_1->bubble02);
		OlegModuleMenuBubble::Dispose(&param_1->bubble01);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon06);
		TwinString::Dispose(&(param_1->label01).str);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->label01);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon05);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon04);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon03);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon02);
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)&param_1->uiIcon01);
		TwinString::Dispose(&(param_1->screenMessage).message);
		pUVar5 = (UIElementAbstract *)&param_1->screenMessage;
		iVar2 = 8;
		do {
		pUVar5 = pUVar5 + -2;
		UIElementAbstract::CleanUp(pUVar5);
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		pUVar5 = (UIElementAbstract *)param_1->iconsPsm3;
		iVar2 = 0x2e;
		do {
		pUVar5 = pUVar5 + -2;
		UIElementAbstract::CleanUp(pUVar5);
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		UnkFamily20Base::Dispose(&(param_1->spline4).unkStruct);
		(param_1->spline4).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		this_00 = (UnkFamily20Base *)&param_1->field_0xa74;
		iVar2 = 8;
		do {
		this_00 = this_00 + -1;
		UnkFamily20Base::Dispose(this_00);
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		UIElementAbstract::CleanUp(&(param_1->materialRelated).parent);
		TwinsanityMaterialShader::DisposeShaderPrograms(&param_1->material);
		FUN_001a18b0(&(param_1->inputObserver).vtable);
		InputWrapper::Dispose(&param_1->inputWrapper);
		TwinString::Dispose(&param_1->psmPath);
		(param_1->spline3).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		(param_1->spline2).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		(param_1->spline1).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		(param_1->spline0).parent.vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		(param_1->parent).vtable = (OlegBase_VTable *)&Oleg_VT_Base;
		return;
		}

	*/
	return;
}
bool Oleg::FUN_000c2230(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall Oleg::FUN_000c2230(Oleg *this,int index){
		int iVar1;
		iVar1 = GetHighestBitPosition((this->parent).uiPresetMask[index].high,(this->parent).uiPresetMask[index].low);
		if (iVar1 < 0) {
		return (bool)('\x01' - (1 < ((byte)uRam00000004 & 0xf)));
		}
		return (bool)('\x01' - (1 < ((byte)(this->parent).modules[iVar1]->flags & 0xf)));
		}
		
	*/
	return false;
}

void Oleg::FUN_000b1c50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b1c50(Oleg *this){
		uint uVar1;
		float fVar2;
		float fVar3;
		float fStack16;
		float local_c;
		float fStack8;
		float local_4;
		fVar2 = FLOAT_00386608;
		uVar1 = (this->uiIcon07).parent.parent.flags;
		(this->uiIcon07).field14_0xb0 = FLOAT_0038d088;
		fVar3 = FLOAT_0039e228;
		(this->uiIcon07).field15_0xb4 = FLOAT_0039e228;
		(this->uiIcon07).field16_0xb8 = fVar3 * fVar2;
		(this->uiIcon07).field7_0x94 = FLOAT_003865d0;
		(this->uiIcon07).field8_0x98 = fVar2;
		(this->uiIcon07).parent.parent.flags = uVar1 & 0xffffafff | 0x2800;
		(this->uiIcon07).parent.parent.field13_0x2c = FLOAT_0039e2f8;
		(this->uiIcon07).parent.parent.field14_0x30 = FLOAT_0039e2f0;
		(this->uiIcon07).parent.parent.field15_0x34 = FLOAT_0039e2f4;
		fStack16 = FLOAT_0038639c;
		local_c = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option03).parent,COLOR_WHITE,&ColorTransparent_0039e304,(ColorTransparent *)&stack0xfffffff0,&ColorTransparent_0039e304);
		fStack16 = FLOAT_0038a834;
		local_c = FLOAT_0038b3a4;
		fStack8 = FLOAT_00386ab4;
		local_4 = FLOAT_0038a76c;
		OlegModuleA::FUN_001a41b0((OlegModuleA *)&this->uiIcon07,COLOR_WHITE,(ColorTransparent *)&stack0xfffffff8,(ColorTransparent *)&stack0xfffffff0,&ColorTransparent_0039e2fc);
		return;
		}
		
	*/
	return;
}

void Oleg::ProcessUI(SomeState* state, InputStruct* input, NodeRelated2C* nodeData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::ProcessUI(Oleg *this,SomeState *state,InputStruct *input,NodeRelated2C *nodeData){
		char *pcVar1;
		int iVar2;
		ChunkDesc *pCVar3;
		SomeState *timeState;
		uint wumpaCnt;
		uint _wumpaCnt;
		float fVar4;
		Oleg *local_4;
		timeState = state;
		local_4 = this;
		thunk_FUN_000c4a30(&ENV_FLAGS_95,state);
		if (GameState == 3) {
		this->deltaTime = (int)(TicksPerTime * FLOAT_0038ab54);
		ClearUI(this,(this->parent).uiPresetMask[0x24].high,(this->parent).uiPresetMask[0x24].low,(int)(TicksPerTime * FLOAT_00386608),(int)(TicksPerTime * FLOAT_00386394));
		OlegModuleA::Hide((OlegModuleA *)&this->lifeIcon,(int)(TicksPerTime * FLOAT_00386608),(int)(TicksPerTime * FLOAT_00386394));
		}
		else if (*(char *)((int)&this->field1_0x310 + 1) != '\0') {
		iVar2 = timeState->ticks;
		if (this->deltaTime == iVar2 || this->deltaTime < iVar2) {
		wumpaCnt = this->chunkDesc->flags2 & 0x7f;
		_wumpaCnt = wumpaCnt + 1;
		if (99 < _wumpaCnt) {
		_wumpaCnt = wumpaCnt - 99;
		GrantALife(this,1,'\x01');
		}
		fVar4 = FLOAT_0038ab54;
		pCVar3 = this->chunkDesc;
		pCVar3->flags2 = pCVar3->flags2 ^ (pCVar3->flags2 ^ _wumpaCnt) & 0x7f;
		if (1 < *(byte *)((int)&this->field1_0x310 + 1)) {
		thunk_FUN_000c3d00(FLOAT_0038639c / (float)(uint)*(byte *)((int)&this->field1_0x310 + 1),(float *)&local_4,(float *)&state);
		fVar4 = (float)state * FLOAT_0038ab54;
		}
		pcVar1 = (char *)((int)&this->field1_0x310 + 1);
		*pcVar1 = *pcVar1 + -1;
		this->deltaTime = (int)(TicksPerTime * fVar4);
		(this->spline0).parent.length = fVar4;
		(this->spline0).parent.repeats = (this->spline0).parent.repeats + 1;
		ShowUI(this,(this->parent).uiPresetMask[0x24].high,(this->parent).uiPresetMask[0x24].low,(int)(TicksPerTime * FLOAT_00386608),(int)(TicksPerTime * FLOAT_0038cac0));
		FUN_001a2670(this,(this->parent).uiPresetMask[0x24].high,(this->parent).uiPresetMask[0x24].low,&this->spline0);
		if ((*(char *)((int)&this->field1_0x310 + 1) == '\0') && (1 < (this->spline0).parent.repeats)){
		(this->spline0).parent.repeats = 1;
		}
		}
		else {
		this->deltaTime = this->deltaTime - iVar2;
		}
		}
		CalculateStatsHUD(this,nodeData);
		OlegBase::ProcessAll(&this->parent,timeState);
		(this->screenMessage).module = &this->label01;
		AutoClass11::DrawOnScreenText(&this->screenMessage,timeState);
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b3210() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b3210(Oleg *this){
		OlegModuleMenuBubble *bubble;
		float fStack24;
		float local_14;
		float fStack16;
		float local_c;
		float fStack8;
		float local_4;
		OlegModuleA::UnkFun(&(this->label07).parent,COLOR_WHITE,&ColorTransparent_0039e324,&ColorTransparent_0039e32c,&ColorTransparent_0039e324);
		OlegModuleA::UnkFun(&(this->label08).parent,COLOR_WHITE,&ColorTransparent_0039e324,&ColorTransparent_0039e32c,&ColorTransparent_0039e324);
		fStack24 = FLOAT_0038639c;
		local_14 = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option17).parent,COLOR_WHITE,&ColorTransparent_0039e304,(ColorTransparent *)&stack0xffffffe8,&ColorTransparent_0039e304);
		fStack24 = 0.0;
		local_14 = FLOAT_0038bc0c;
		fStack16 = FLOAT_00386ab4;
		local_c = FLOAT_00386608;
		OlegModuleA::FUN_001a2e90(&(this->label09).parent,COLOR_WHITE,(ColorTransparent *)&stack0xfffffff0,&ColorTransparent_0039e32c,(ColorTransparent *)&stack0xffffffe8);
		fStack16 = 0.0;
		local_c = FLOAT_0038bc0c;
		fStack24 = FLOAT_0038639c;
		local_14 = FLOAT_0038639c;
		fStack8 = FLOAT_00386ab4;
		bubble = &this->bubble11;
		local_4 = FLOAT_00386608;
		OlegModuleA::FUN_001a2e90(&bubble->parent,COLOR_WHITE,(ColorTransparent *)&stack0xfffffff8,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0);
		fStack8 = FLOAT_0038639c;
		local_4 = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option18).parent,COLOR_WHITE,&ColorTransparent_0039e304,(ColorTransparent *)&stack0xfffffff8,&ColorTransparent_0039e304);
		fStack8 = FLOAT_0038b3a4;
		local_4 = FLOAT_0038a934;
		thunk_FUN_000ad710((float *)&stack0xfffffff8,bubble);
		(this->label09).parent.parent.next = (OlegModuleAbstract *)bubble;
		(this->label08).parent.parent.next = (OlegModuleAbstract *)&this->option17;
		(this->bubble11).parent.parent.next = (OlegModuleAbstract *)&this->option18;
		return;
		}
		
	*/
	return;
}

void Oleg::InitMenuPages(InputStruct* inputHandle, Font* font1, Font* font2, SectionDataSfx* sfxData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::InitMenuPages(Oleg *this,InputStruct *inputHandle,Font *font1,Font *font2,SectionDataSfx *sfxData){
		undefined *puVar1;
		UnkFamily10Base *pUVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Color CVar7;
		SaveSystem *mainMenu;
		UnkFamily10VM *page1;
		UnkFamily10B *page2;
		UnkFamily10I *page3;
		UnkFamily10L *page4;
		UnkFamily10M *page5;
		UnkFamily10N *page6;
		UnkFamily10VA *page7;
		UnkFamily10P *page8;
		UnkFamily10Q *page14;
		UnkFamily10R *page15;
		UnkFamily10S *page16;
		UnkFamily10ZA *page17;
		UnkFamily10VL *page18;
		InputWrapper *inputWrapper;
		mainMenu = SaveSystem;
		page1 = (UnkFamily10VM *)VirtualPool::AllocateMemory(0x50);
		if (page1 == (UnkFamily10VM *)0x0) {
		page1 = (UnkFamily10VM *)0x0;
		}
		else {
		page1 = UnkFamily10VM::Construct(page1,0);
		}
		this->page1 = page1;
		page2 = (UnkFamily10B *)VirtualPool::AllocateMemory(0x248);
		if (page2 == (UnkFamily10B *)0x0) {
		page2 = (UnkFamily10B *)0x0;
		}
		else {
		page2 = UnkFamily10B::Construct(page2);
		}
		this->page2 = page2;
		page3 = (UnkFamily10I *)VirtualPool::AllocateMemory(0xf8);
		if (page3 == (UnkFamily10I *)0x0) {
		page3 = (UnkFamily10I *)0x0;
		}
		else {
		page3 = UnkFamily10I::Construct(page3);
		}
		this->page3 = page3;
		page4 = (UnkFamily10L *)VirtualPool::AllocateMemory(0x50);
		if (page4 == (UnkFamily10L *)0x0) {
		page4 = (UnkFamily10L *)0x0;
		}
		else {
		page4 = UnkFamily10L::Construct(page4);
		}
		this->page4 = page4;
		page5 = (UnkFamily10M *)VirtualPool::AllocateMemory(0x148);
		if (page5 == (UnkFamily10M *)0x0) {
		page5 = (UnkFamily10M *)0x0;
		}
		else {
		page5 = UnkFamily10M::Construct(page5);
		}
		this->page5 = page5;
		page6 = (UnkFamily10N *)VirtualPool::AllocateMemory(0x50);
		if (page6 == (UnkFamily10N *)0x0) {
		page6 = (UnkFamily10N *)0x0;
		}
		else {
		page6 = UnkFamily10N::Construct(page6,0);
		}
		this->page6 = page6;
		page7 = (UnkFamily10VA *)VirtualPool::AllocateMemory(0x50);
		if (page7 == (UnkFamily10VA *)0x0) {
		page7 = (UnkFamily10VA *)0x0;
		}
		else {
		page7 = UnkFamily10VA::Construct(page7,0);
		}
		this->page7 = page7;
		page8 = (UnkFamily10P *)VirtualPool::AllocateMemory(0x50);
		if (page8 == (UnkFamily10P *)0x0) {
		page8 = (UnkFamily10P *)0x0;
		}
		else {
		page8 = UnkFamily10P::Construct(page8,0);
		}
		this->page8 = page8;
		page8 = (UnkFamily10P *)VirtualPool::AllocateMemory(0x50);
		if (page8 == (UnkFamily10P *)0x0) {
		page8 = (UnkFamily10P *)0x0;
		}
		else {
		page8 = UnkFamily10P::Construct(page8,0);
		}
		this->page9 = page8;
		page8 = (UnkFamily10P *)VirtualPool::AllocateMemory(0x50);
		if (page8 == (UnkFamily10P *)0x0) {
		page8 = (UnkFamily10P *)0x0;
		}
		else {
		page8 = UnkFamily10P::Construct(page8,0);
		}
		this->page10 = page8;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::Construct(page14,0,&this->option11);
		}
		this->page11 = page14;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::Construct(page14,1,&this->option12);
		}
		this->page12 = page14;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::Construct(page14,2,&this->option13);
		}
		this->page13 = page14;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::Construct(page14,3,&this->option14);
		}
		this->page14 = page14;
		page15 = (UnkFamily10R *)VirtualPool::AllocateMemory(0x144);
		if (page15 == (UnkFamily10R *)0x0) {
		page15 = (UnkFamily10R *)0x0;
		}
		else {
		page15 = UnkFamily10R::Construct(page15,0);
		}
		this->page15 = page15;
		page16 = (UnkFamily10S *)VirtualPool::AllocateMemory(0x54);
		if (page16 == (UnkFamily10S *)0x0) {
		page16 = (UnkFamily10S *)0x0;
		}
		else {
		page16 = UnkFamily10S::Construct(page16,mainMenu);
		}
		this->page16 = page16;
		page17 = (UnkFamily10ZA *)VirtualPool::AllocateMemory(0x60);
		if (page17 == (UnkFamily10ZA *)0x0) {
		page17 = (UnkFamily10ZA *)0x0;
		}
		else {
		page17 = UnkFamily10ZA::Construct(page17,mainMenu,&this->option18);
		}
		this->page17 = page17;
		page18 = (UnkFamily10VL *)VirtualPool::AllocateMemory(0x50);
		if (page18 == (UnkFamily10VL *)0x0) {
		page18 = (UnkFamily10VL *)0x0;
		}
		else {
		page18 = UnkFamily10VL::Construct(page18,0);
		}
		this->page18 = page18;
		pUVar2 = (UnkFamily10Base *)this->page1;
		(this->option02).page1 = pUVar2;
		(this->option02).page2 = pUVar2;
		page2 = this->page2;
		(this->option15).page1 = &page2->parent;
		(this->option15).page2 = &page2->parent;
		page3 = this->page3;
		(this->option03).page1 = &page3->parent;
		(this->option03).page2 = &page3->parent;
		pUVar2 = (UnkFamily10Base *)this->page4;
		(this->option16).page1 = pUVar2;
		(this->option16).page2 = pUVar2;
		page5 = this->page5;
		(this->option04).page1 = &page5->parent;
		(this->option04).page2 = &page5->parent;
		pUVar2 = (UnkFamily10Base *)this->page6;
		(this->option05).page1 = pUVar2;
		(this->option05).page2 = pUVar2;
		pUVar2 = (UnkFamily10Base *)this->page7;
		(this->option06).page1 = pUVar2;
		(this->option06).page2 = pUVar2;
		pUVar2 = (UnkFamily10Base *)this->page18;
		(this->option07).page1 = pUVar2;
		(this->option07).page2 = pUVar2;
		pUVar2 = (UnkFamily10Base *)this->page8;
		(this->option08).page1 = pUVar2;
		(this->option08).page2 = pUVar2;
		pUVar2 = (UnkFamily10Base *)this->page9;
		(this->option09).page1 = pUVar2;
		(this->option09).page2 = pUVar2;
		pUVar2 = (UnkFamily10Base *)this->page10;
		(this->option10).page1 = pUVar2;
		(this->option10).page2 = pUVar2;
		page14 = this->page11;
		(this->option11).page1 = &page14->parent;
		(this->option11).page2 = &page14->parent;
		page14 = this->page12;
		(this->option12).page1 = &page14->parent;
		(this->option12).page2 = &page14->parent;
		page14 = this->page13;
		(this->option13).page1 = &page14->parent;
		(this->option13).page2 = &page14->parent;
		page14 = this->page14;
		(this->option14).page1 = &page14->parent;
		(this->option14).page2 = &page14->parent;
		page15 = this->page15;
		(this->option01).page1 = &page15->parent;
		(this->option01).page2 = &page15->parent;
		page16 = this->page16;
		(this->option17).page1 = &page16->parent;
		(this->option17).page2 = &page16->parent;
		page17 = this->page17;
		(this->option18).page1 = (UnkFamily10Base *)page17;
		(this->option18).page2 = (UnkFamily10Base *)page17;
		puVar1 = &(this->option02).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option15).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option03).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		*(uint *)&(this->option16).field_0x88 = *(uint *)&(this->option16).field_0x88 & 0xfffffffe;
		puVar1 = &(this->option04).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option05).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option06).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option07).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option08).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option09).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option10).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option11).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option12).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option13).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option14).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option01).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 1;
		puVar1 = &(this->option17).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
		puVar1 = &(this->option18).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
		(this->option02).inputHandle = inputHandle;
		(this->option15).inputHandle = inputHandle;
		(this->option03).inputHandle = inputHandle;
		(this->option16).inputHandle = inputHandle;
		(this->option04).inputHandle = inputHandle;
		(this->option05).inputHandle = inputHandle;
		(this->option06).inputHandle = inputHandle;
		(this->option07).inputHandle = inputHandle;
		(this->option08).inputHandle = inputHandle;
		(this->option09).inputHandle = inputHandle;
		(this->option10).inputHandle = inputHandle;
		(this->option11).inputHandle = inputHandle;
		(this->option12).inputHandle = inputHandle;
		(this->option13).inputHandle = inputHandle;
		(this->option14).inputHandle = inputHandle;
		(this->option01).inputHandle = inputHandle;
		(this->option17).inputHandle = inputHandle;
		(this->option18).inputHandle = inputHandle;
		puVar1 = &(this->option15).field_0x88;
		*(uint *)puVar1 = *(uint *)puVar1 | 2;
		(mainMenu->parent).label0 = &this->label07;
		(mainMenu->parent).field17_0x64 = (int)this->page17;
		(mainMenu->parent).label2 = &this->label09;
		(mainMenu->parent).field16_0x60 = (int)this->page16;
		(mainMenu->parent).label1 = &this->label08;
		(mainMenu->parent).uiPresetIndex1 = ClearUIMaskA;
		(mainMenu->parent).uiPresetIndex2 = Loading;
		inputWrapper = &this->inputWrapper;
		(mainMenu->parent).uiPresetIndex3 = WeirdMenu;
		(mainMenu->parent).field9_0x2c = 0x1d;
		InputWrapper::AddKey(inputWrapper,0,KEY_A);
		InputWrapper::AddKey(inputWrapper,1,KEY_B);
		InputWrapper::AddKey(inputWrapper,2,KEY_START);
		InputWrapper::AddKey(inputWrapper,3,KEY_UP);
		InputWrapper::AddKey(inputWrapper,3,0x10);
		InputWrapper::AddKey(inputWrapper,4,KEY_DOWN);
		InputWrapper::AddKey(inputWrapper,4,0x11);
		InputWrapper::AddKey(inputWrapper,5,KEY_LEFT);
		InputWrapper::AddKey(inputWrapper,5,0x12);
		InputWrapper::AddKey(inputWrapper,6,KEY_RIGHT);
		InputWrapper::AddKey(inputWrapper,6,0x13);
		this->colorMatrix[0].matrix.m11 = 0.0;
		this->colorMatrix[0].matrix.m12 = 0.0;
		this->colorMatrix[0].matrix.m13 = 0.0;
		this->colorMatrix[0].matrix.m14 = 0.0;
		fVar3 = FLOAT_0038d688;
		fVar5 = FLOAT_0038a934;
		this->colorMatrix[0].unkFiled4 = 0x22;
		this->colorMatrix[0].matrix.m21 = DAT_003e2d3c;
		this->colorMatrix[0].matrix.m22 = DAT_003e2d40;
		this->colorMatrix[0].matrix.m32 = FLOAT_0039e30c;
		this->colorMatrix[0].matrix.m33 = FLOAT_0039e310;
		this->colorMatrix[0].matrix.m34 = fVar5;
		this->colorMatrix[0].color2 = COLOR_WHITE;
		this->colorMatrix[0].matrix.m42 = (float)font2;
		fVar4 = FLOAT_0038a838;
		this->colorMatrix[0].color3 = Color_0039f23c;
		this->colorMatrix[0].matrix.m43 = (float)font2;
		this->colorMatrix[0].color4 = COLOR_DARK_GRAY;
		this->colorMatrix[0].matrix.m44 = (float)font2;
		this->colorMatrix[0].unkFiled6 = &ENV_FLAGS_95;
		this->colorMatrix[1].matrix.m11 = 0.0;
		this->colorMatrix[1].matrix.m12 = 0.0;
		this->colorMatrix[1].matrix.m13 = fVar4;
		this->colorMatrix[1].matrix.m14 = fVar4;
		this->colorMatrix[1].unkFiled3 = 0x22;
		this->colorMatrix[1].unkFiled4 = 0x22;
		this->colorMatrix[1].matrix.m21 = 0.0;
		this->colorMatrix[1].matrix.m22 = fVar3;
		fVar3 = FLOAT_00386ab4;
		this->colorMatrix[1].unkFiled1 = 9;
		this->colorMatrix[1].matrix.m23 = fVar4;
		this->colorMatrix[1].matrix.m24 = fVar4;
		this->colorMatrix[1].matrix.m31 = fVar5;
		this->colorMatrix[1].unkFiled2 = 0x11;
		this->colorMatrix[1].matrix.m32 = fVar3;
		this->colorMatrix[1].matrix.m33 = fVar3;
		this->colorMatrix[1].matrix.m34 = FLOAT_0038d684;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[1].matrix.m42 = (float)font2;
		this->colorMatrix[1].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[1].matrix.m43 = (float)font2;
		this->colorMatrix[1].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		this->colorMatrix[1].matrix.m44 = (float)font2;
		this->colorMatrix[1].color4 = CVar7;
		this->colorMatrix[1].unkFiled6 = &ENV_FLAGS_95;
		this->colorMatrix[2].matrix.m11 = 0.0;
		this->colorMatrix[2].matrix.m12 = 0.0;
		this->colorMatrix[2].matrix.m13 = 0.0;
		this->colorMatrix[2].matrix.m14 = 0.0;
		this->colorMatrix[2].unkFiled4 = 0x22;
		this->colorMatrix[2].matrix.m21 = DAT_003e2d3c;
		this->colorMatrix[2].matrix.m22 = DAT_003e2d40;
		this->colorMatrix[2].unkFiled2 = 7;
		this->colorMatrix[2].matrix.m32 = FLOAT_0039e30c;
		this->colorMatrix[2].matrix.m33 = FLOAT_0039e310;
		this->colorMatrix[2].matrix.m34 = fVar5;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[2].matrix.m42 = (float)font2;
		this->colorMatrix[2].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[2].matrix.m43 = (float)font2;
		this->colorMatrix[2].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		this->colorMatrix[2].matrix.m44 = (float)font2;
		this->colorMatrix[2].color4 = CVar7;
		this->colorMatrix[2].unkFiled6 = &ENV_FLAGS_95;
		this->colorMatrix[3].matrix.m11 = 0.0;
		this->colorMatrix[3].matrix.m12 = 0.0;
		fVar3 = FLOAT_0038cac0;
		this->colorMatrix[3].matrix.m13 = FLOAT_0038cac0;
		this->colorMatrix[3].matrix.m14 = fVar3;
		this->colorMatrix[3].unkFiled3 = 3;
		this->colorMatrix[3].unkFiled4 = 3;
		this->colorMatrix[3].matrix.m21 = 0.0;
		fVar6 = FLOAT_0038ab54;
		this->colorMatrix[3].matrix.m22 = FLOAT_0038ab54;
		this->colorMatrix[3].matrix.m32 = fVar4;
		this->colorMatrix[3].matrix.m33 = fVar4;
		this->colorMatrix[3].matrix.m34 = fVar5;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[3].matrix.m42 = (float)font2;
		this->colorMatrix[3].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[3].matrix.m43 = (float)font2;
		this->colorMatrix[3].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		fVar3 = FLOAT_0038d680;
		this->colorMatrix[3].matrix.m44 = (float)font2;
		this->colorMatrix[3].color4 = CVar7;
		this->colorMatrix[3].unkFiled6 = &ENV_FLAGS_95;
		this->colorMatrix[6].matrix.m11 = 0.0;
		this->colorMatrix[6].matrix.m12 = 0.0;
		this->colorMatrix[6].matrix.m13 = fVar4;
		this->colorMatrix[6].matrix.m14 = fVar4;
		this->colorMatrix[6].unkFiled3 = 0x22;
		this->colorMatrix[6].unkFiled4 = 0x22;
		this->colorMatrix[6].matrix.m21 = 0.0;
		this->colorMatrix[6].matrix.m22 = fVar3;
		this->colorMatrix[6].matrix.m32 = FLOAT_0038d548;
		this->colorMatrix[6].matrix.m33 = fVar4;
		this->colorMatrix[6].matrix.m34 = fVar5;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[6].matrix.m42 = (float)font2;
		this->colorMatrix[6].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[6].matrix.m43 = (float)font2;
		this->colorMatrix[6].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		this->colorMatrix[6].matrix.m44 = (float)font2;
		this->colorMatrix[6].color4 = CVar7;
		this->colorMatrix[6].unkFiled6 = &ENV_FLAGS_95;
		this->colorMatrix[4].matrix.m11 = 0.0;
		this->colorMatrix[4].matrix.m12 = 0.0;
		this->colorMatrix[4].matrix.m13 = 0.0;
		this->colorMatrix[4].matrix.m14 = 0.0;
		this->colorMatrix[4].unkFiled4 = 0x22;
		this->colorMatrix[4].matrix.m21 = DAT_003e2d3c;
		this->colorMatrix[4].matrix.m22 = DAT_003e2d40;
		this->colorMatrix[4].unkFiled2 = 7;
		this->colorMatrix[4].matrix.m32 = FLOAT_0039e30c;
		this->colorMatrix[4].matrix.m33 = FLOAT_0039e310;
		this->colorMatrix[4].matrix.m34 = fVar5;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[4].matrix.m42 = (float)font2;
		this->colorMatrix[4].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[4].matrix.m43 = (float)font2;
		this->colorMatrix[4].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		this->colorMatrix[4].matrix.m44 = (float)font2;
		this->colorMatrix[4].color4 = CVar7;
		this->colorMatrix[4].unkFiled6 = &ENV_FLAGS_95;
		this->colorMatrix[5].matrix.m11 = 0.0;
		this->colorMatrix[5].matrix.m12 = 0.0;
		this->colorMatrix[5].matrix.m13 = 0.0;
		this->colorMatrix[5].matrix.m14 = 0.0;
		this->colorMatrix[5].unkFiled3 = 3;
		this->colorMatrix[5].unkFiled4 = 3;
		this->colorMatrix[5].matrix.m21 = 0.0;
		this->colorMatrix[5].matrix.m22 = 0.0;
		fVar3 = FLOAT_0038639c;
		this->colorMatrix[5].matrix.m32 = FLOAT_0038639c;
		this->colorMatrix[5].matrix.m33 = fVar3;
		this->colorMatrix[5].matrix.m34 = fVar6;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[5].matrix.m42 = (float)font2;
		this->colorMatrix[5].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[5].matrix.m43 = (float)font2;
		this->colorMatrix[5].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		this->colorMatrix[5].matrix.m44 = (float)font2;
		this->colorMatrix[5].color4 = CVar7;
		this->colorMatrix[7].matrix.m11 = 0.0;
		this->colorMatrix[7].matrix.m12 = 0.0;
		this->colorMatrix[7].matrix.m13 = 0.0;
		this->colorMatrix[7].matrix.m14 = 0.0;
		this->colorMatrix[7].unkFiled4 = 0x22;
		this->colorMatrix[7].matrix.m21 = DAT_003e2d3c;
		this->colorMatrix[7].matrix.m22 = DAT_003e2d40;
		this->colorMatrix[7].unkFiled2 = 7;
		this->colorMatrix[7].matrix.m32 = FLOAT_0039e30c;
		this->colorMatrix[7].matrix.m33 = FLOAT_0039e310;
		this->colorMatrix[7].matrix.m34 = fVar5;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[7].matrix.m42 = (float)font2;
		this->colorMatrix[7].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[7].matrix.m43 = (float)font2;
		this->colorMatrix[7].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		this->colorMatrix[7].matrix.m44 = (float)font2;
		this->colorMatrix[7].color4 = CVar7;
		this->colorMatrix[7].unkFiled6 = &ENV_FLAGS_95;
		this->colorMatrix[8].matrix.m11 = 0.0;
		this->colorMatrix[8].matrix.m12 = 0.0;
		this->colorMatrix[8].matrix.m13 = 0.0;
		this->colorMatrix[8].matrix.m14 = 0.0;
		this->colorMatrix[8].unkFiled4 = 0x22;
		this->colorMatrix[8].matrix.m21 = DAT_003e2d3c;
		this->colorMatrix[8].matrix.m22 = DAT_003e2d40;
		this->colorMatrix[8].unkFiled2 = 7;
		this->colorMatrix[8].matrix.m32 = FLOAT_0039e30c;
		this->colorMatrix[8].matrix.m33 = FLOAT_0039e310;
		this->colorMatrix[8].matrix.m34 = fVar5;
		CVar7 = COLOR_WHITE;
		this->colorMatrix[8].matrix.m42 = (float)font2;
		this->colorMatrix[8].color2 = CVar7;
		CVar7 = Color_0039f23c;
		this->colorMatrix[8].matrix.m43 = (float)font2;
		this->colorMatrix[8].color3 = CVar7;
		CVar7 = COLOR_DARK_GRAY;
		this->colorMatrix[8].matrix.m44 = (float)font2;
		this->colorMatrix[8].color4 = CVar7;
		this->colorMatrix[8].unkFiled6 = &ENV_FLAGS_95;
		(this->sfxRelated).sfx[1] = (sfxData->parent).elements[1];
		(this->sfxRelated).sfx[3] = (sfxData->parent).elements[1];
		(this->sfxRelated).sfx[5] = (sfxData->parent).elements[1];
		(this->sfxRelated).sfx[7] = (sfxData->parent).elements[1];
		(this->sfxRelated).sfx[9] = (sfxData->parent).elements[1];
		(this->sfxRelated).sfx[10] = *(sfxData->parent).elements;
		(this->sfxRelated).sfx[0xb] = (sfxData->parent).elements[2];
		(this->sfxRelated).sfx[0xc] = (sfxData->parent).elements[2];
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b18e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b18e0(Oleg *this){
		Vector2 vec1;
		Vector2 vec2;
		vec1.x = FLOAT_0038639c;
		vec1.y = FLOAT_0038639c;
		vec2.x = FLOAT_0038ab54;
		vec2.y = FLOAT_0038adb8;
		OlegModuleA::FUN_001a2e30(&(this->label10).parent,COLOR_WHITE,&vec2,&vec1);
		vec2.x = FLOAT_00386608;
		vec2.y = FLOAT_00386608;
		vec1.x = FLOAT_00386608;
		vec1.y = FLOAT_0038a83c;
		OlegModuleLabelGeneric::FUN_001a4010((OlegModuleLabelGeneric *)&this->uiIcon15,COLOR_WHITE,&vec1,&vec2);
		vec2.x = FLOAT_0038639c;
		vec2.y = FLOAT_0038639c;
		vec1.x = FLOAT_0038ab54;
		vec1.y = FLOAT_0038a83c;
		OlegModuleA::FUN_001a2e30(&(this->label11).parent,COLOR_WHITE,&vec1,&vec2);
		vec2.x = FLOAT_00386608;
		vec2.y = FLOAT_00386608;
		vec1.x = FLOAT_00386608;
		vec1.y = FLOAT_0038a83c;
		OlegModuleLabelGeneric::FUN_001a4010((OlegModuleLabelGeneric *)&this->uiIcon16,COLOR_WHITE,&vec1,&vec2);
		(this->label10).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon15;
		(this->uiIcon15).parent.parent.next = (OlegModuleAbstract *)&this->label11;
		(this->label11).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon16;
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b21c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b21c0(Oleg *this){
		OlegModuleMenuBubble *bubble;
		float local_10;
		float local_c;
		float fStack8;
		float local_4;
		local_10 = FLOAT_0038639c;
		local_c = FLOAT_0038639c;
		fStack8 = FLOAT_00386ab4;
		local_4 = FLOAT_00386608;
		OlegModuleA::FUN_001a2e30(&(this->option01).parent,COLOR_WHITE,(Vector2 *)&stack0xfffffff8,(Vector2 *)&local_10);
		fStack8 = FLOAT_0038639c;
		local_4 = FLOAT_0038639c;
		local_10 = FLOAT_00386ab4;
		bubble = &this->bubble03;
		local_c = FLOAT_00386608;
		OlegModuleA::FUN_001a2e30(&bubble->parent,COLOR_WHITE,(Vector2 *)&local_10,(Vector2 *)&stack0xfffffff8);
		fStack8 = FLOAT_0038a76c;
		local_4 = FLOAT_0038a934;
		thunk_FUN_000ad710((float *)&stack0xfffffff8,bubble);
		(this->option01).parent.parent.next = (OlegModuleAbstract *)bubble;
		return;
		}
		
	*/
	return;
}

void Oleg::CalculateStatsHUD(NodeRelated2C* data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::CalculateStatsHUD(Oleg *this,NodeRelated2C *data){
		uint *puVar1;
		uint *puVar2;
		UnkFamily10Base *pUVar3;
		ChunkDesc *pCVar4;
		bool bVar5;
		uint num1;
		OlegModuleLabelSelectable *pOVar6;
		char *srcStr;
		UnkFamily20Base *pUVar7;
		UIElementImage *pUVar8;
		UnkFamily8Abstract *pUVar9;
		int seconds;
		uint uVar10;
		UnkFamily20Base *pUVar11;
		float fVar12;
		bool bVar13;
		bool bVar14;
		bool bVar15;
		float fVar16;
		int *local_70;
		ColorTransparent local_6c;
		ColorTransparent CStack100;
		ColorTransparent local_5c;
		TwinString time;
		TwinString tmpStr1;
		TwinString TStack60;
		TwinString wumpaCountStr;
		TwinString local_24;
		TwinString somethingStr;
		TwinString timeMinutes;
		int var;
		pUVar11 = (UnkFamily20Base *)0x0;
		if (data == (NodeRelated2C *)0x0) {
		local_6c.alpha = 0.0;
		local_70 = (int *)0x0;
		}
		else {
		local_6c.alpha = (float)data->data;
		local_70 = (int *)data->field22_0xb8;
		}
		fVar12 = (float)(this->chunkDesc->flags2 >> 7 & 0x7f);
		num1 = this->chunkDesc->flags & 0xf;
		bVar13 = num1 == 1;
		bVar14 = num1 == 2;
		local_5c.alpha = fVar12;
		if (local_70 == (int *)0x0) {
		LAB_000b70f6:bVar5 = false;
		}
		else {
		seconds = (**(code **)(*local_70 + 0x1c))();
		bVar5 = true;
		if (seconds != 6) goto LAB_000b70f6;
		}
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		wumpaCountStr.value = (char *)0x0;
		wumpaCountStr.strLength = 0;
		wumpaCountStr.strSize = 0;
		somethingStr.value = (char *)0x0;
		somethingStr.strLength = 0;
		somethingStr.strSize = 0;
		bVar15 = (US001 *)local_6c.alpha == (US001 *)0x0;
		 Wumpa Count TwinString::AppendInt(&tmpStr1,this->chunkDesc->flags2 & 0x7f);
		TwinString::Append(&wumpaCountStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		num1 = ChunkDesc::CountSomething1(this->chunkDesc);
		TwinString::AppendInt(&tmpStr1,num1);
		TwinString::Append(&somethingStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		if (((byte)(this->option11).parent.parent.flags & 0xf) < 2) {
		if (1 < ((byte)(this->option12).parent.parent.flags & 0xf)) {
		pOVar6 = &this->option12;
		goto LAB_000b71d5;
		}
		if (1 < ((byte)(this->option13).parent.parent.flags & 0xf)) {
		pOVar6 = &this->option13;
		goto LAB_000b71d5;
		}
		if (1 < ((byte)(this->option14).parent.parent.flags & 0xf)) {
		pOVar6 = &this->option14;
		goto LAB_000b71d5;
		}
		}
		else {
		pOVar6 = &this->option11;
		LAB_000b71d5:if (pOVar6 != (OlegModuleLabelSelectable *)0x0) {
		pUVar3 = pOVar6->page1;
		if ((int)(uint)*pUVar3->buffer2 < (int)(pUVar3->field16_0x40).cnt) {
		pUVar9 = (pUVar3->field16_0x40).ptrArray[*pUVar3->buffer2];
		}
		else {
		pUVar9 = (UnkFamily8Abstract *)0x0;
		}
		num1 = pUVar9->field2_0x8 & 0xfff;
		var = *(int *)(&DAT_0039e020 + num1 * 4) + 0x4c;
		if ((this->chunkDesc->flags >> 0x1a & 0x1f) < num1) {
		var = 0x5d;
		}
		(this->caption18).index1 = var;
		}
		}
		if (bVar14) {
		seconds = (int)((float)this->chunkDesc->someDTime * TimePerTick1);
		CStack100.alpha = (float)(seconds % 0x3c);
		tmpStr1.value = (char *)0x0;
		tmpStr1.strLength = 0;
		tmpStr1.strSize = 0;
		time.value = (char *)0x0;
		time.strLength = 0;
		time.strSize = 0;
		TwinString::AppendInt(&timeMinutes,this->chunkDesc->flags2 >> 0x1a);
		TwinString::Copy(&tmpStr1,timeMinutes.value);
		TwinString::Dispose(&timeMinutes);
		TwinString::Append(&tmpStr1,"/");
		TwinString::AppendInt(&timeMinutes,this->chunkDesc->flags2 >> 0x14 & 0x3f);
		TwinString::Append(&tmpStr1,timeMinutes.value);
		TwinString::Dispose(&timeMinutes);
		TwinString::ParseInt(&timeMinutes,seconds / 60);
		TwinString::Copy(&time,timeMinutes.value);
		TwinString::Dispose(&timeMinutes);
		fVar12 = CStack100.alpha;
		srcStr = ":0";
		if (9 < (int)CStack100.alpha) {
		srcStr = ":";
		}
		TwinString::Append(&time,srcStr);
		TwinString::ParseInt(&timeMinutes,(uint)fVar12);
		TwinString::Append(&time,timeMinutes.value);
		TwinString::Dispose(&timeMinutes);
		TwinString::Copy(&(this->label10).str,tmpStr1.value);
		TwinString::Copy(&(this->label11).str,time.value);
		TwinString::Dispose(&time);
		TwinString::Dispose(&tmpStr1);
		fVar12 = local_5c.alpha;
		}
		num1 = (uint)!bVar14 << 9;
		(this->label10).parent.parent.flags = (this->label10).parent.parent.flags & 0xfffffdff | num1;
		if ((bVar14) && (this->field67_0xb04 != 0)) {
		bVar14 = true;
		}
		else {
		bVar14 = false;
		}
		uVar10 = (this->uiIcon15).parent.parent.flags;
		(this->uiIcon15).parent.parent.flags = uVar10 ^ ((uint)!bVar14 << 9 ^ uVar10) & 0x200;
		(this->label11).parent.parent.flags = (this->label11).parent.parent.flags & 0xfffffdff | num1;
		(this->uiIcon16).parent.parent.flags = (this->uiIcon16).parent.parent.flags & 0xfffffdff | num1;
		if (!bVar13) {
		TwinString::Copy(&(this->wumpaCount).str,wumpaCountStr.value);
		}
		num1 = (this->module75).parent.parent.flags;
		(this->module75).parent.parent.flags = num1 ^ ((uint)!bVar13 << 9 ^ num1) & 0x200;
		num1 = (this->wumpaCount).parent.parent.flags;
		(this->wumpaCount).parent.parent.flags = num1 ^ ((uint)bVar13 << 9 ^ num1) & 0x200;
		if (bVar5) {
		fVar16 = thunk_FUN_00080590((int)local_70);
		(this->module76).field1_0x88 = fVar16 - FLOAT_00386ab4;
		(this->module76).image1 = this->iconsPsm2;
		(this->module76).image2 = &this->someIcon5;
		}
		num1 = (this->module76).parent.parent.flags;
		(this->module76).parent.parent.flags = num1 ^ ((uint)!bVar5 << 9 ^ num1) & 0x200;
		TwinString::Copy(&(this->label03).str,wumpaCountStr.value);
		TwinString::Copy(&(this->label05).str,somethingStr.value);
		(this->uiIcon20).field1_0x88 = &this->someIcon1 + (this->field1_0x310 & 0xff);
		if ((uint)fVar12 < 2) {
		num1 = 0;
		}
		else {
		num1 = (int)fVar12 - 1;
		}
		TwinString::AppendInt(&timeMinutes,num1);
		TwinString::Append(&local_24,timeMinutes.value);
		TwinString::Dispose(&timeMinutes);
		if (1 < ((byte)(this->uiIcon18).parent.parent.flags & 0xf)) {
		TwinString::Copy(&(this->label13).str,local_24.value);
		(this->uiIcon18).field1_0x88 = this->iconsPsm2 + (this->chunkDesc->flags >> 8 & 0xf);
		}
		if (1 < ((byte)(this->uiIcon11).parent.parent.flags & 0xf)) {
		TwinString::Copy(&(this->label04).str,local_24.value);
		pCVar4 = this->chunkDesc;
		(this->uiIcon11).field1_0x88 = this->iconsPsm2 + (pCVar4->flags >> 8 & 0xf);
		if ((pCVar4->flags & 0xf00) == 0) {
		(this->uiIcon11).field2_0x8c = this->unkStruct12array + 7;
		}
		else {
		(this->uiIcon11).field2_0x8c = (UnkFamily20Base *)0x0;
		}
		}
		if (!bVar15) {
		tmpStr1.value = (char *)0x0;
		tmpStr1.strLength = 0;
		tmpStr1.strSize = 0;
		TwinString::AppendInt(&timeMinutes,*(uint *)((int)local_6c.alpha + 8) >> 0xd & 0x7f);
		TwinString::Append(&tmpStr1,timeMinutes.value);
		TwinString::Dispose(&timeMinutes);
		TwinString::Copy(&(this->label14).str,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		if (!bVar13) {
		bVar14 = true;
		goto LAB_000b7613;
		}
		}
		bVar14 = false;
		LAB_000b7613:num1 = (this->uiIcon21).parent.parent.flags;
		(this->uiIcon21).parent.parent.flags = num1 ^ ((uint)!bVar14 << 9 ^ num1) & 0x200;
		if ((bVar15) || (bVar13)) {
		bVar13 = false;
		}
		else {
		bVar13 = true;
		}
		num1 = (this->label14).parent.parent.flags;
		(this->label14).parent.parent.flags = num1 ^ ((uint)!bVar13 << 9 ^ num1) & 0x200;
		if (1 < ((byte)(this->uiIcon14).parent.parent.flags & 0xf)) {
		num1 = (this->caption20).parent.parent.flags;
		if ((uint)this->field5_0x320 < 2) {
		(this->caption20).parent.parent.flags = num1 & 0xfffffdff;
		*(uint **)&(this->uiIcon14).parent.parent.field_0x28 = &ENV_FLAGS_95;
		}
		else {
		(this->caption20).parent.parent.flags = num1 | 0x200;
		*(undefined4 *)&(this->uiIcon14).parent.parent.field_0x28 = 0;
		}
		}
		pCVar4 = this->chunkDesc;
		TStack60.value = (char *)0x0;
		TStack60.strLength = 0;
		TStack60.strSize = 0;
		uVar10 = *(byte *)((int)&pCVar4->flags + 2) & 0x1f;
		puVar2 = pCVar4->uintArray + *(int *)(&DAT_0039e020 + uVar10 * 4);
		num1 = ChunkDesc::CountSomething2(pCVar4);
		TwinString::AppendInt(&timeMinutes,num1);
		TwinString::Copy(&TStack60,timeMinutes.value);
		TwinString::Dispose(&timeMinutes);
		TwinString::Append(&TStack60,"%");
		TwinString::Copy(&(this->progressPercent).str,TStack60.value);
		if (((this->field3_0x318 & 1) == 0) && ((this->field3_0x318 >> 1 & 0xff) == uVar10)) {
		switch(*(byte *)((int)&this->chunkDesc->flags + 2) & 0x1f) {
		case 0:case 6:case 0xd:case 0x14:local_5c.alpha = FLOAT_0038a82c;
		break;
		default:local_5c.alpha = FLOAT_0038a830;
		}
		local_5c.color = FLOAT_0038a82c;
		CStack100.alpha = FLOAT_00386ab4;
		CStack100.color = FLOAT_0038d688;
		local_6c.alpha = FLOAT_00386ab4;
		local_6c.color = FLOAT_00386ab4;
		OlegModuleA::FUN_001a41b0((OlegModuleA *)&this->uiIcon09,COLOR_WHITE,&CStack100,&local_5c,&local_6c);
		(this->uiIcon09).parent.parent.field13_0x2c = FLOAT_0039e2f8;
		(this->uiIcon09).parent.parent.field14_0x30 = FLOAT_0039e2f0;
		(this->uiIcon09).parent.parent.field15_0x34 = FLOAT_0039e2f4;
		fVar12 = FLOAT_0038a830;
		(this->uiIcon09).parent.parent.flags = (this->uiIcon09).parent.parent.flags & 0xfffffdff;
		(this->uiIcon09).field7_0x94 = fVar12;
		(this->uiIcon09).field8_0x98 = FLOAT_0038bd20;
		}
		else {
		if ((*(byte *)&this->field3_0x318 & 1) == 0) {
		this->field3_0x318 = this->field3_0x318 ^ (uVar10 << 9 ^ this->field3_0x318) & 0x1fe00;
		thunk_FUN_000b4f10(this,1,'\0');
		}
		puVar1 = &(this->uiIcon09).parent.parent.flags;
		*puVar1 = *puVar1 | 0x200;
		}
		pUVar7 = (UnkFamily20Base *)0x0;
		if ((*(byte *)puVar2 & 1) == 0) {
		pUVar8 = this->iconsPsm2 + 6;
		}
		else {
		pUVar8 = this->iconsPsm2 + 7;
		pUVar7 = this->unkStruct12array + 1;
		}
		this->iconArray[0]->field1_0x88 = pUVar8;
		this->iconArray[0]->field2_0x8c = pUVar7;
		pUVar7 = (UnkFamily20Base *)0x0;
		if ((*(byte *)puVar2 & 2) == 0) {
		pUVar8 = this->iconsPsm2 + 6;
		}
		else {
		pUVar8 = this->iconsPsm2 + 8;
		pUVar7 = this->unkStruct12array + 2;
		}
		this->iconArray[1]->field1_0x88 = pUVar8;
		this->iconArray[1]->field2_0x8c = pUVar7;
		pUVar7 = (UnkFamily20Base *)0x0;
		if ((*(byte *)puVar2 & 4) == 0) {
		pUVar8 = this->iconsPsm2 + 6;
		}
		else {
		pUVar8 = this->iconsPsm2 + 9;
		pUVar7 = this->unkStruct12array + 3;
		}
		this->iconArray[2]->field1_0x88 = pUVar8;
		this->iconArray[2]->field2_0x8c = pUVar7;
		pUVar7 = (UnkFamily20Base *)0x0;
		if ((*(byte *)puVar2 & 8) == 0) {
		pUVar8 = this->iconsPsm2 + 6;
		}
		else {
		pUVar8 = this->iconsPsm2 + 10;
		pUVar7 = this->unkStruct12array + 4;
		}
		this->iconArray[3]->field1_0x88 = pUVar8;
		this->iconArray[3]->field2_0x8c = pUVar7;
		pUVar7 = (UnkFamily20Base *)0x0;
		if ((*(byte *)puVar2 & 0x10) == 0) {
		pUVar8 = this->iconsPsm2 + 6;
		}
		else {
		pUVar8 = this->iconsPsm2 + 0xb;
		pUVar7 = this->unkStruct12array + 5;
		}
		this->iconArray[4]->field1_0x88 = pUVar8;
		this->iconArray[4]->field2_0x8c = pUVar7;
		if ((*(byte *)puVar2 & 0x20) == 0) {
		pUVar8 = this->iconsPsm2 + 6;
		}
		else {
		pUVar8 = this->iconsPsm2 + 0xc;
		pUVar11 = this->unkStruct12array + 6;
		}
		this->iconArray[5]->field1_0x88 = pUVar8;
		this->iconArray[5]->field2_0x8c = pUVar11;
		TwinString::Dispose(&TStack60);
		TwinString::Dispose(&somethingStr);
		TwinString::Dispose(&wumpaCountStr);
		TwinString::Dispose(&local_24);
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b7db0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall Oleg::FUN_000b7db0(Oleg *this){
		OlegModuleMenuBubble *this_00;
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Matrix4 *pMVar7;
		UNV026 *pUVar8;
		UNV027 *pUVar9;
		UIElementSimpleShapeA *pUVar10;
		UIElementSimpleShapeA *pUVar11;
		UIElementSimpleShapeA *pUVar12;
		UIElementSimpleShapeA *pUVar13;
		UIElementSimpleShapeA *pUVar14;
		UIElementSimpleShapeA *pUVar15;
		undefined *puVar16;
		float fVar17;
		uint local_40;
		Vector2 local_2c;
		UIElementSimpleShapeA *local_24;
		ColorTransparent local_20;
		UIElementSimpleShapeA *local_18;
		float local_14;
		this_00 = &this->bubble01;
		pUVar10 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,0,&ENV_CLASS_94);
		local_18 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,1,&ENV_CLASS_94);
		pUVar11 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,2,&ENV_CLASS_94);
		pUVar12 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,3,&ENV_CLASS_94);
		pUVar13 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,4,&ENV_CLASS_94);
		pUVar14 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,5,&ENV_CLASS_94);
		pUVar15 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,6,&ENV_CLASS_94);
		local_24 = OlegModuleMenuBubble::FUN_001a0fd0(this_00,7,&ENV_CLASS_94);
		local_40 = 0;
		do {
		fVar17 = (float)local_40;
		if ((int)local_40 < 0) {
		fVar17 = fVar17 + FLOAT_00386458;
		}
		local_20.alpha = (float)__ftol2((FLOAT_003863a8 / FLOAT_0039e238) * fVar17 * FLOAT_0038d760);
		fVar17 = FUN_000e22f0((int *)&local_20);
		local_2c.x = fVar17 * FLOAT_00386608 + FLOAT_0038639c;
		*(float *)(&ENV_PTR_95_0X78->field_0x0 + local_40 * 4) = local_2c.x;
		pMVar7 = ENV_PTR_97_0X40;
		fVar17 = FLOAT_0038d75c;
		if (local_40 == 0) {
		DAT_003e2dfc = local_2c.x;
		}
		local_40 = local_40 + 1;
		}
		 while (local_40 < 0x1e);
		if ((ENV_FLAGS_95 & 0x8000) == 0) {
		ENV_FLAGS_95 = (uint)((uint3)ENV_FLAGS_95 & 0xffff);
		ENV_FLAGS_95 = ENV_FLAGS_95 | 0x8000;
		_DAT_003e2df0 = 0;
		_DAT_003e2df4 = (int)(TicksPerTime * FLOAT_00386ab4);
		}
		ENV_PTR_97_0X40->m11 = FLOAT_0038d75c;
		pMVar7->m12 = fVar17;
		pMVar7 = ENV_PTR_97_0X40;
		fVar3 = FLOAT_0038d758;
		ENV_PTR_97_0X40->m13 = FLOAT_0038d758;
		pMVar7->m14 = fVar3;
		pMVar7 = ENV_PTR_97_0X40;
		fVar17 = FLOAT_0038d754;
		ENV_PTR_97_0X40->m21 = FLOAT_0038d754;
		pMVar7->m22 = fVar17;
		pMVar7 = ENV_PTR_97_0X40;
		ENV_PTR_97_0X40->m23 = fVar17;
		pMVar7->m24 = fVar17;
		pMVar7 = ENV_PTR_97_0X40;
		ENV_PTR_97_0X40->m31 = fVar17;
		pMVar7->m32 = fVar17;
		pMVar7 = ENV_PTR_97_0X40;
		fVar17 = FLOAT_0038b79c;
		ENV_PTR_97_0X40->m33 = FLOAT_0038b79c;
		pMVar7->m34 = fVar17;
		pMVar7 = ENV_PTR_97_0X40;
		fVar2 = FLOAT_0038d750;
		fVar17 = FLOAT_0038639c;
		ENV_PTR_97_0X40->m41 = FLOAT_0038639c;
		pMVar7->m42 = fVar17;
		pMVar7 = ENV_PTR_97_0X40;
		fVar1 = FLOAT_0038d74c;
		ENV_PTR_97_0X40->m43 = fVar2;
		pMVar7->m44 = fVar2;
		pMVar7 = ENV_PTR_96_0X40;
		ENV_PTR_96_0X40->m11 = fVar1;
		pMVar7->m12 = fVar1;
		pMVar7 = ENV_PTR_96_0X40;
		ENV_PTR_96_0X40->m13 = fVar2;
		pMVar7->m14 = fVar2;
		pMVar7 = ENV_PTR_96_0X40;
		ENV_PTR_96_0X40->m21 = fVar2;
		pMVar7->m22 = fVar2;
		pMVar7 = ENV_PTR_96_0X40;
		ENV_PTR_96_0X40->m23 = fVar2;
		pMVar7->m24 = fVar2;
		pMVar7 = ENV_PTR_96_0X40;
		fVar1 = FLOAT_0038d748;
		ENV_PTR_96_0X40->m31 = FLOAT_0038d748;
		pMVar7->m32 = fVar1;
		pMVar7 = ENV_PTR_96_0X40;
		fVar1 = FLOAT_0038d744;
		ENV_PTR_96_0X40->m33 = FLOAT_0038d744;
		pMVar7->m34 = fVar1;
		pMVar7 = ENV_PTR_96_0X40;
		fVar1 = FLOAT_0038d740;
		ENV_PTR_96_0X40->m41 = FLOAT_0038d740;
		pMVar7->m42 = fVar1;
		pMVar7 = ENV_PTR_96_0X40;
		fVar1 = FLOAT_00386608;
		ENV_PTR_96_0X40->m43 = fVar3;
		pMVar7->m44 = fVar3;
		pUVar8 = ENV_PTR_98_0X100;
		fVar6 = FLOAT_0038d73c;
		*(float *)ENV_PTR_98_0X100 = fVar1;
		*(float *)&pUVar8->field_0x4 = fVar6;
		*(float *)&pUVar8->field_0x8 = fVar17;
		*(float *)&pUVar8->field_0xc = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x10 = fVar1;
		*(float *)&pUVar8->field_0x14 = fVar6;
		*(float *)&pUVar8->field_0x18 = fVar17;
		*(float *)&pUVar8->field_0x1c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x20 = fVar1;
		*(float *)&pUVar8->field_0x24 = fVar6;
		*(float *)&pUVar8->field_0x28 = fVar17;
		*(float *)&pUVar8->field_0x2c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x30 = fVar1;
		*(float *)&pUVar8->field_0x34 = fVar6;
		*(float *)&pUVar8->field_0x38 = fVar17;
		*(float *)&pUVar8->field_0x3c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x40 = fVar1;
		*(float *)&pUVar8->field_0x44 = fVar6;
		*(float *)&pUVar8->field_0x48 = fVar17;
		*(float *)&pUVar8->field_0x4c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x50 = FLOAT_0038bc04;
		*(float *)&pUVar8->field_0x58 = fVar17;
		*(float *)&pUVar8->field_0x5c = fVar17;
		*(float *)&pUVar8->field_0x54 = FLOAT_0038d738;
		pUVar8 = ENV_PTR_98_0X100;
		fVar5 = FLOAT_0038d734;
		fVar4 = FLOAT_0038bd04;
		*(float *)&ENV_PTR_98_0X100->field_0x60 = FLOAT_0038bd04;
		*(float *)&pUVar8->field_0x64 = fVar5;
		*(float *)&pUVar8->field_0x68 = fVar17;
		*(float *)&pUVar8->field_0x6c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x70 = fVar1;
		*(float *)&pUVar8->field_0x74 = fVar6;
		*(float *)&pUVar8->field_0x78 = fVar17;
		*(float *)&pUVar8->field_0x7c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x80 = fVar1;
		*(float *)&pUVar8->field_0x84 = fVar6;
		*(float *)&pUVar8->field_0x88 = fVar17;
		*(float *)&pUVar8->field_0x8c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0x90 = fVar1;
		*(float *)&pUVar8->field_0x94 = fVar6;
		*(float *)&pUVar8->field_0x98 = fVar17;
		*(float *)&pUVar8->field_0x9c = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0xa0 = fVar1;
		*(float *)&pUVar8->field_0xa4 = fVar6;
		*(float *)&pUVar8->field_0xa8 = fVar17;
		*(float *)&pUVar8->field_0xac = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0xb0 = fVar1;
		*(float *)&pUVar8->field_0xb4 = fVar6;
		*(float *)&pUVar8->field_0xb8 = fVar17;
		*(float *)&pUVar8->field_0xbc = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0xc0 = fVar1;
		*(float *)&pUVar8->field_0xc4 = fVar6;
		*(float *)&pUVar8->field_0xc8 = fVar17;
		*(float *)&pUVar8->field_0xcc = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0xd0 = fVar1;
		*(float *)&pUVar8->field_0xd4 = fVar6;
		*(float *)&pUVar8->field_0xd8 = fVar17;
		*(float *)&pUVar8->field_0xdc = fVar17;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0xe8 = fVar17;
		*(float *)&pUVar8->field_0xec = fVar17;
		*(float *)&pUVar8->field_0xe0 = fVar1;
		*(float *)&pUVar8->field_0xe4 = fVar6;
		pUVar8 = ENV_PTR_98_0X100;
		*(float *)&ENV_PTR_98_0X100->field_0xf8 = fVar17;
		*(float *)&pUVar8->field_0xfc = fVar17;
		*(float *)&pUVar8->field_0xf0 = fVar1;
		*(float *)&pUVar8->field_0xf4 = fVar6;
		pUVar9 = ENV_PTR_99_0X80;
		fVar2 = FLOAT_0038a830;
		*(float *)&ENV_PTR_99_0X80->field_0x8 = fVar17;
		*(float *)&pUVar9->field_0xc = fVar17;
		*(float *)pUVar9 = fVar1;
		*(float *)&pUVar9->field_0x4 = fVar6;
		pUVar9 = ENV_PTR_99_0X80;
		*(float *)&ENV_PTR_99_0X80->field_0x18 = fVar17;
		*(float *)&pUVar9->field_0x1c = fVar17;
		*(float *)&pUVar9->field_0x14 = fVar2;
		*(float *)&pUVar9->field_0x10 = fVar1;
		pUVar9 = ENV_PTR_99_0X80;
		fVar2 = FLOAT_0038adb8;
		fVar3 = FLOAT_0038a82c;
		*(float *)&ENV_PTR_99_0X80->field_0x28 = fVar17;
		*(float *)&pUVar9->field_0x2c = fVar17;
		*(float *)&pUVar9->field_0x20 = fVar3;
		*(float *)&pUVar9->field_0x24 = fVar2;
		pUVar9 = ENV_PTR_99_0X80;
		*(float *)&ENV_PTR_99_0X80->field_0x38 = fVar17;
		*(float *)&pUVar9->field_0x3c = fVar17;
		*(float *)&pUVar9->field_0x30 = fVar4;
		fVar2 = FLOAT_0038d730;
		*(float *)&pUVar9->field_0x34 = fVar5;
		pUVar9 = ENV_PTR_99_0X80;
		*(float *)&ENV_PTR_99_0X80->field_0x48 = fVar17;
		*(float *)&pUVar9->field_0x4c = fVar17;
		*(float *)&pUVar9->field_0x44 = fVar2;
		fVar2 = FLOAT_0038a76c;
		*(float *)&pUVar9->field_0x40 = fVar1;
		pUVar9 = ENV_PTR_99_0X80;
		*(float *)&ENV_PTR_99_0X80->field_0x58 = fVar17;
		*(float *)&pUVar9->field_0x5c = fVar17;
		*(float *)&pUVar9->field_0x50 = fVar1;
		*(float *)&pUVar9->field_0x54 = fVar3;
		pUVar9 = ENV_PTR_99_0X80;
		*(float *)&ENV_PTR_99_0X80->field_0x68 = fVar17;
		*(float *)&pUVar9->field_0x6c = fVar17;
		*(float *)&pUVar9->field_0x60 = fVar1;
		*(float *)&pUVar9->field_0x64 = fVar2;
		pUVar9 = ENV_PTR_99_0X80;
		puVar16 = &ENV_PTR_99_0X80->field_0x70;
		*(float *)&ENV_PTR_99_0X80->field_0x78 = fVar17;
		*(float *)&pUVar9->field_0x7c = fVar17;
		local_20.alpha = FLOAT_0038d548;
		*(float *)puVar16 = fVar1;
		*(float *)&pUVar9->field_0x74 = fVar6;
		local_20.color = local_20.alpha;
		local_2c.x = FLOAT_0038a83c;
		local_2c.y = FLOAT_0038cae4;
		OlegModuleA::FUN_001a2e30(&(this->caption01).parent,(uint)COLOR_WHITE,&local_2c,(Vector2 *)&local_20);
		local_20.alpha = FLOAT_0038d548;
		local_20.color = FLOAT_0038d548;
		local_2c.x = FLOAT_0038a83c;
		local_2c.y = FLOAT_0038cae4;
		OlegModuleA::FUN_001a2e30(&(this->caption02).parent,(uint)COLOR_WHITE,&local_2c,(Vector2 *)&local_20);
		local_20.alpha = FLOAT_0038d548;
		local_20.color = FLOAT_0038d548;
		local_2c.x = FLOAT_0038c9bc;
		local_2c.y = FLOAT_0038cae4;
		OlegModuleA::FUN_001a2e30(&(this->caption03).parent,(uint)COLOR_WHITE,&local_2c,(Vector2 *)&local_20);
		local_20.alpha = FLOAT_0038a838;
		local_20.color = FLOAT_0038a838;
		local_2c.x = FLOAT_0038c9bc;
		local_2c.y = FLOAT_0038d72c;
		OlegModuleA::FUN_001a2e30(&(this->caption04).parent,(uint)COLOR_WHITE,&local_2c,(Vector2 *)&local_20);
		local_20.alpha = FLOAT_0038a838;
		local_20.color = FLOAT_0038a838;
		local_2c.x = FLOAT_0038a83c;
		local_2c.y = FLOAT_0038d72c;
		OlegModuleA::FUN_001a2e30(&(this->caption05).parent,(uint)COLOR_WHITE,&local_2c,(Vector2 *)&local_20);
		local_20.alpha = FLOAT_0038639c;
		local_20.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&this_00->parent,COLOR_WHITE,&ColorTransparent_0039e2fc,&local_20,&ColorTransparent_0039e2fc);
		local_20.alpha = FLOAT_0038639c;
		local_20.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->bubble02).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_20,&ColorTransparent_0039e304);
		*(undefined4 *)&pUVar10->field_0x44 = DAT_0039e3a8;
		*(undefined4 *)&local_18->field_0x44 = DAT_0039e3a8;
		*(undefined4 *)&pUVar11->field_0x44 = DAT_0039e3b0;
		*(undefined4 *)&pUVar12->field_0x44 = DAT_0039e3b0;
		*(undefined4 *)&pUVar13->field_0x44 = DAT_0039e3a8;
		*(undefined4 *)&pUVar14->field_0x44 = DAT_0039e3a8;
		*(undefined4 *)&pUVar15->field_0x44 = DAT_0039e3a8;
		*(undefined4 *)&local_24->field_0x44 = DAT_0039e3a8;
		pUVar10->field1_0x1c = DAT_0039e3cc;
		pUVar10->field2_0x20 = DAT_0039e3cc;
		local_18->field2_0x20 = DAT_0039e3c4;
		pUVar11->field2_0x20 = DAT_0039e3c4;
		fVar17 = FLOAT_0038d728;
		pUVar12->field2_0x20 = DAT_0039e3cc;
		*(undefined **)&pUVar13->field_0x38 = &DAT_0039e3f0;
		pUVar14->field2_0x20 = DAT_0039e3c4;
		pUVar15->field2_0x20 = DAT_0039e3c4;
		local_24->field2_0x20 = DAT_0039e3c8;
		*(float *)&pUVar10->field_0x2c = fVar17;
		*(float *)&pUVar10->field_0x30 = FLOAT_0038ab54;
		*(float *)&local_18->field_0x2c = FLOAT_0038d724;
		*(float *)&local_18->field_0x30 = FLOAT_0038d720;
		*(float *)&pUVar11->field_0x2c = FLOAT_0038bc04;
		*(float *)&pUVar11->field_0x30 = FLOAT_0038cb00;
		*(float *)&pUVar12->field_0x2c = FLOAT_0038d630;
		*(float *)&pUVar12->field_0x30 = FLOAT_0038d71c;
		*(float *)&pUVar13->field_0x2c = FLOAT_0038d718;
		*(float *)&pUVar13->field_0x30 = FLOAT_0038a76c;
		*(float *)&pUVar14->field_0x2c = FLOAT_0038d714;
		*(float *)&pUVar14->field_0x30 = FLOAT_0038d710;
		*(float *)&pUVar15->field_0x2c = FLOAT_0038d618;
		*(float *)&pUVar15->field_0x30 = FLOAT_0038ca88;
		*(float *)&local_24->field_0x2c = FLOAT_0038d70c;
		*(float *)&local_24->field_0x30 = FLOAT_0038d708;
		local_18 = (UIElementSimpleShapeA *)FLOAT_0038b3bc;
		(this->bubble01).parent.parent.flags = (this->bubble01).parent.parent.flags & 0xffff97ff | 0x1000;
		local_14 = FLOAT_0038bf5c;
		thunk_FUN_000ad710((float *)&local_18,&this->bubble02);
		(this->uiIcon06).parent.array[1].y = -0.5;
		(this->uiIcon06).parent.array[1].x = 0.0;
		(this->uiIcon06).parent.parent.flags = (this->uiIcon06).parent.parent.flags & 0xffff8fff | 0x800;
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b79f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b79f0(Oleg *this){
		uint uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		Vector2 local_10;
		Vector2 local_8;
		fVar2 = ENV_COL_91_BLACK;
		(this->uiIcon01).parent.array[1].y = ENV_COL_91_BLACK;
		(this->uiIcon01).parent.array[1].x = fVar2;
		(this->uiIcon01).parent.array[5].x = DAT_003e2d44;
		(this->uiIcon01).parent.array[5].y = DAT_003e2d48;
		(this->uiIcon01).parent.array[4].x = FLOAT_0039e344;
		(this->uiIcon01).parent.array[4].y = FLOAT_0039e348;
		(this->uiIcon01).parent.array[9].x = FLOAT_0039e33c;
		(this->uiIcon01).parent.array[9].y = FLOAT_0039e340;
		(this->uiIcon01).parent.array[8].x = FLOAT_0039e34c;
		(this->uiIcon01).parent.array[8].y = FLOAT_0039e350;
		(this->uiIcon01).parent.parent.flags = (this->uiIcon01).parent.parent.flags & 0xffff97ff | 0x1000;
		fVar2 = ENV_COL_91_BLACK;
		(this->uiIcon02).parent.array[1].y = ENV_COL_91_BLACK;
		(this->uiIcon02).parent.array[1].x = fVar2;
		(this->uiIcon02).parent.array[5].x = FLOAT_0039e354;
		(this->uiIcon02).parent.array[5].y = FLOAT_0039e358;
		(this->uiIcon02).parent.array[4].x = FLOAT_0039e364;
		(this->uiIcon02).parent.array[4].y = FLOAT_0039e368;
		(this->uiIcon02).parent.array[9].x = FLOAT_0039e35c;
		(this->uiIcon02).parent.array[9].y = FLOAT_0039e360;
		(this->uiIcon02).parent.array[8].x = FLOAT_0039e36c;
		(this->uiIcon02).parent.array[8].y = FLOAT_0039e370;
		fVar3 = FLOAT_0038d088;
		fVar2 = FLOAT_00386608;
		(this->uiIcon02).parent.parent.flags = (this->uiIcon02).parent.parent.flags & 0xffff97ff | 0x1000;
		fVar4 = COLOR_BLACK;
		(this->uiIcon03).parent.array[1].x = FLOAT_0039f1f8;
		(this->uiIcon03).parent.array[1].y = fVar4;
		(this->uiIcon03).parent.parent.flags = (this->uiIcon03).parent.parent.flags & 0xffff8fff | 0x800;
		uVar1 = (this->uiIcon04).parent.parent.flags;
		(this->uiIcon04).field14_0xb0 = fVar3;
		fVar3 = FLOAT_0039e228;
		(this->uiIcon04).field15_0xb4 = FLOAT_0039e228;
		(this->uiIcon04).field16_0xb8 = fVar3 * fVar2;
		(this->uiIcon04).field7_0x94 = FLOAT_003865d0;
		local_8.y = FLOAT_0038d704;
		local_10.x = FLOAT_0038d5b8;
		local_10.y = FLOAT_0038bf5c;
		local_8.x = FLOAT_0038d5b4;
		(this->uiIcon04).field8_0x98 = fVar2;
		(this->uiIcon04).parent.parent.flags = uVar1 & 0xffffafff | 0x2800;
		OlegModuleLabelGeneric::FUN_001a4010((OlegModuleLabelGeneric *)&this->uiIcon04,0x7fffffff,&local_8,&local_10);
		(this->uiIcon04).parent.parent.flags = (this->uiIcon04).parent.parent.flags & 0xffffafff | 0x2800;
		fVar2 = FLOAT_003e2d70;
		(this->uiIcon05).parent.array[1].y = FLOAT_0039e374;
		(this->uiIcon05).parent.array[1].x = fVar2;
		(this->uiIcon05).parent.array[5].x = FLOAT_0039e390;
		(this->uiIcon05).parent.array[5].y = FLOAT_0039e394;
		(this->uiIcon05).parent.array[4].x = FLOAT_0039e390;
		(this->uiIcon05).parent.array[4].y = FLOAT_0039e394;
		(this->uiIcon05).parent.array[9].x = FLOAT_0039e380;
		(this->uiIcon05).parent.array[9].y = FLOAT_0039e384;
		(this->uiIcon05).parent.array[8].x = FLOAT_0039e380;
		(this->uiIcon05).parent.array[8].y = FLOAT_0039e384;
		(this->uiIcon05).parent.parent.flags = (this->uiIcon05).parent.parent.flags & 0xffff97ff | 0x1000;
		fVar2 = FLOAT_0039e37c;
		(this->label01).parent.array[1].y = FLOAT_0039e378;
		(this->label01).parent.array[1].x = fVar2;
		(this->label01).parent.array[5].x = FLOAT_0039e388;
		(this->label01).parent.array[5].y = FLOAT_0039e38c;
		(this->label01).parent.array[4].x = FLOAT_0039e388;
		(this->label01).parent.array[4].y = FLOAT_0039e38c;
		(this->label01).parent.array[9].x = FLOAT_0039e398;
		(this->label01).parent.array[9].y = FLOAT_0039e39c;
		(this->label01).parent.array[8].x = FLOAT_0039e398;
		(this->label01).parent.array[8].y = FLOAT_0039e39c;
		(this->uiIcon01).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon02;
		(this->uiIcon03).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon04;
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b22a0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b22a0(Oleg *this){
		OlegModuleMenuBubble *pOVar1;
		OlegModuleMenuBubble *bubble;
		OlegModuleMenuBubble *bubble_00;
		OlegModuleIcon *pOVar2;
		OlegModuleIcon *pOVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		undefined4 uVar9;
		UIElementSimpleShapeA *pUVar10;
		UIElementSimpleShapeA *pUVar11;
		UIElementSimpleShapeA *pUVar12;
		UIElementSimpleShapeA *pUVar13;
		float local_38;
		float local_34;
		int local_30;
		float local_2c;
		ColorTransparent local_28;
		ColorTransparent local_20;
		float fStack24;
		float local_14;
		ColorTransparent local_10;
		local_28.alpha = FLOAT_0038639c;
		local_28.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option04).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_28,&ColorTransparent_0039e304);
		local_28.alpha = FLOAT_0038639c;
		local_28.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option05).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_28,&ColorTransparent_0039e304);
		local_28.alpha = FLOAT_0038639c;
		local_28.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option06).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_28,&ColorTransparent_0039e304);
		local_28.color = FLOAT_0038bc04;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_28.alpha = FLOAT_00386ab4;
		local_38 = FLOAT_00386ab4;
		local_34 = FLOAT_0038cb00;
		OlegModuleA::UnkFun(&(this->caption11).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038a834;
		local_28.color = FLOAT_0038a834;
		OlegModuleA::UnkFun(&(this->caption07).parent,COLOR_WHITE,&ColorTransparent_0039e2fc,&local_28,&ColorTransparent_0039e2fc);
		local_28.alpha = FLOAT_0038639c;
		local_28.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option07).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_28,&ColorTransparent_0039e304);
		local_28.alpha = FLOAT_00386ab4;
		local_28.color = FLOAT_00386ab4;
		local_38 = FLOAT_00386ab4;
		local_30 = (int)FLOAT_0038a834;
		local_2c = FLOAT_0038a834;
		local_34 = FLOAT_0038bfe4;
		OlegModuleA::UnkFun(&(this->caption09).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_00386ab4;
		local_28.color = FLOAT_00386ab4;
		local_38 = FLOAT_00386ab4;
		local_30 = (int)FLOAT_0038a834;
		local_2c = FLOAT_0038a834;
		local_34 = FLOAT_0038bfe4;
		OlegModuleA::UnkFun(&(this->caption08).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_00386ab4;
		local_28.color = FLOAT_00386ab4;
		local_38 = FLOAT_00386ab4;
		local_30 = (int)FLOAT_0038a834;
		local_2c = FLOAT_0038a834;
		local_34 = FLOAT_0038bfe4;
		OlegModuleA::UnkFun(&(this->caption10).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_00386ab4;
		local_28.color = FLOAT_00386ab4;
		local_38 = FLOAT_00386ab4;
		local_30 = (int)FLOAT_0038adb8;
		local_2c = FLOAT_0038adb8;
		local_34 = FLOAT_0038a82c;
		OlegModuleA::UnkFun(&(this->caption12).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_30 = (int)FLOAT_00386ab4;
		local_28.alpha = FLOAT_0038ab4c;
		local_28.color = FLOAT_0038ab4c;
		(this->option07).parent.parent.next = (OlegModuleAbstract *)&this->caption09;
		local_2c = FLOAT_0038cb00;
		OlegModuleA::UnkFun(&(this->caption13).parent,COLOR_WHITE,(ColorTransparent *)&local_30,&local_28,&ColorTransparent_0039e2fc);
		OlegModuleA::UnkFun(&(this->caption14).parent,COLOR_WHITE,&ColorTransparent_0039e324,&ColorTransparent_0039e32c,&ColorTransparent_0039e2fc);
		local_28.alpha = FLOAT_0038639c;
		local_28.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option08).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_28,&ColorTransparent_0039e304);
		OlegModuleA::UnkFun(&(this->caption15).parent,COLOR_WHITE,&ColorTransparent_0039e314,&ColorTransparent_0039e31c,&ColorTransparent_0039e2fc);
		OlegModuleA::UnkFun(&(this->caption16).parent,COLOR_WHITE,&ColorTransparent_0039e324,&ColorTransparent_0039e32c,&ColorTransparent_0039e2fc);
		local_28.alpha = FLOAT_00386608;
		local_28.color = FLOAT_0038c9bc;
		local_30 = (int)FLOAT_00386ab4;
		local_2c = FLOAT_0038d64c;
		OlegModuleA::FUN_001a41b0((OlegModuleA *)&this->uiIcon08,COLOR_WHITE,(ColorTransparent *)&local_30,&local_28,&ColorTransparent_0039e304);
		local_28.alpha = FLOAT_0038639c;
		local_28.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option09).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_28,&ColorTransparent_0039e304);
		OlegModuleA::UnkFun(&(this->caption17).parent,COLOR_WHITE,&ColorTransparent_0039e324,&ColorTransparent_0039e32c,&ColorTransparent_0039e2fc);
		local_28.alpha = FLOAT_0038639c;
		local_28.color = FLOAT_0038639c;
		OlegModuleA::UnkFun(&(this->option10).parent,COLOR_WHITE,&ColorTransparent_0039e304,&local_28,&ColorTransparent_0039e304);
		(this->caption11).parent.parent.next = (OlegModuleAbstract *)&this->caption12;
		(this->caption14).parent.parent.next = (OlegModuleAbstract *)&this->option08;
		(this->caption15).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon08;
		(this->uiIcon08).parent.parent.next = (OlegModuleAbstract *)&this->caption16;
		(this->option05).parent.parent.next = (OlegModuleAbstract *)&this->caption07;
		(this->caption16).parent.parent.next = (OlegModuleAbstract *)&this->option09;
		(this->option06).parent.parent.next = (OlegModuleAbstract *)&this->caption08;
		(this->caption13).parent.parent.next = (OlegModuleAbstract *)&this->caption14;
		(this->caption17).parent.parent.next = (OlegModuleAbstract *)&this->option10;
		local_30 = (int)OlegModuleMenuBubble::FUN_001a0fd0(&this->bubble07,0,&ENV_CLASS_94);
		local_38 = (float)OlegModuleMenuBubble::FUN_001a0fd0(&this->bubble07,1,&ENV_CLASS_94);
		pOVar1 = &this->bubble08;
		pUVar10 = OlegModuleMenuBubble::FUN_001a0fd0(pOVar1,0,&ENV_CLASS_94);
		pUVar11 = OlegModuleMenuBubble::FUN_001a0fd0(pOVar1,1,&ENV_CLASS_94);
		pUVar12 = OlegModuleMenuBubble::FUN_001a0fd0(pOVar1,2,&ENV_CLASS_94);
		pUVar13 = OlegModuleMenuBubble::FUN_001a0fd0(&this->bubble08,3,&ENV_CLASS_94);
		*(undefined4 *)(local_30 + 0x1c) = DAT_0039e3cc;
		*(undefined **)(local_30 + 0x38) = &DAT_0039e3f0;
		*(float *)(local_30 + 0x2c) = FLOAT_0038c9bc;
		*(float *)(local_30 + 0x30) = FLOAT_00386608;
		*(undefined4 *)((int)local_38 + 0x20) = DAT_0039e3d0;
		*(float *)((int)local_38 + 0x2c) = FLOAT_0038d648;
		*(float *)((int)local_38 + 0x30) = FLOAT_0038d644;
		uVar9 = DAT_0039e3c0;
		*(undefined4 *)&pUVar10->field_0x48 = DAT_0039e3bc;
		*(undefined4 *)&pUVar10->field_0x4c = uVar9;
		pUVar10->field1_0x1c = DAT_0039e3d8;
		pUVar10->field2_0x20 = DAT_0039e3d8;
		*(undefined **)&pUVar10->field_0x3c = &DAT_0039e3e0;
		fVar8 = FLOAT_0038d640;
		fVar7 = FLOAT_0038d63c;
		fVar6 = FLOAT_0038d638;
		fVar5 = FLOAT_0038d634;
		fVar4 = FLOAT_0038bfe4;
		*(undefined **)&pUVar10->field_0x40 = &DAT_0039e3e8;
		*(undefined4 *)&pUVar10->field_0x44 = DAT_0039e3ac;
		*(float *)&pUVar10->field_0x24 = fVar8;
		*(float *)&pUVar10->field_0x28 = fVar7;
		*(float *)&pUVar10->field_0x2c = fVar4;
		*(float *)&pUVar10->field_0x30 = fVar6;
		uVar9 = DAT_0039e3c0;
		*(undefined4 *)&pUVar11->field_0x48 = DAT_0039e3bc;
		*(undefined4 *)&pUVar11->field_0x4c = uVar9;
		pUVar11->field1_0x1c = DAT_0039e3dc;
		pUVar11->field2_0x20 = DAT_0039e3d8;
		*(undefined **)&pUVar11->field_0x3c = &DAT_0039e3e0;
		*(undefined **)&pUVar11->field_0x40 = &DAT_0039e3e0;
		*(undefined4 *)&pUVar11->field_0x44 = DAT_0039e3ac;
		*(float *)&pUVar11->field_0x24 = fVar5;
		*(float *)&pUVar11->field_0x28 = FLOAT_0038d630;
		*(float *)&pUVar11->field_0x2c = fVar8;
		*(float *)&pUVar11->field_0x30 = fVar7;
		uVar9 = DAT_0039e3c0;
		*(undefined4 *)&pUVar12->field_0x48 = DAT_0039e3bc;
		*(undefined4 *)&pUVar12->field_0x4c = uVar9;
		pUVar12->field1_0x1c = DAT_0039e3d8;
		pUVar12->field2_0x20 = DAT_0039e3dc;
		*(undefined **)&pUVar12->field_0x3c = &DAT_0039e3e8;
		*(undefined **)&pUVar12->field_0x40 = &DAT_0039e3e8;
		*(undefined4 *)&pUVar12->field_0x44 = DAT_0039e3ac;
		*(float *)&pUVar12->field_0x24 = fVar4;
		fVar4 = FLOAT_0038d62c;
		*(float *)&pUVar12->field_0x28 = fVar6;
		*(float *)&pUVar12->field_0x2c = fVar4;
		*(float *)&pUVar12->field_0x30 = FLOAT_0038d628;
		uVar9 = DAT_0039e3b8;
		fVar4 = FLOAT_0038d624;
		*(undefined4 *)&pUVar13->field_0x48 = DAT_0039e3b4;
		*(undefined4 *)&pUVar13->field_0x4c = uVar9;
		pUVar13->field1_0x1c = DAT_0039e3d4;
		pUVar13->field2_0x20 = DAT_0039e3d4;
		*(undefined **)&pUVar13->field_0x3c = &DAT_0039e3e0;
		*(undefined **)&pUVar13->field_0x40 = &DAT_0039e3e8;
		*(undefined4 *)&pUVar13->field_0x44 = DAT_0039e3ac;
		*(float *)&pUVar13->field_0x24 = fVar4;
		*(float *)&pUVar13->field_0x28 = FLOAT_0038d620;
		*(float *)&pUVar13->field_0x2c = FLOAT_0038d61c;
		*(float *)&pUVar13->field_0x30 = FLOAT_0038d618;
		local_28.color = FLOAT_0038d610;
		pOVar1 = &this->bubble08;
		bubble = &this->bubble04;
		local_28.alpha = FLOAT_0038d614;
		*(uint *)&(this->bubble08).cnt = *(uint *)&(this->bubble08).cnt | 0x1000000;
		thunk_FUN_000ad710(&local_28.alpha,bubble);
		bubble_00 = &this->bubble05;
		local_28.alpha = FLOAT_0038d614;
		local_28.color = FLOAT_0038d610;
		thunk_FUN_000ad710(&local_28.alpha,bubble_00);
		local_28.alpha = FLOAT_0038d614;
		local_28.color = FLOAT_0038d610;
		thunk_FUN_000ad710(&local_28.alpha,&this->bubble06);
		local_28.alpha = FLOAT_00386ab4;
		local_28.color = FLOAT_00386ab4;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038d60c;
		local_34 = FLOAT_0038d608;
		OlegModuleA::UnkFun(&(this->bubble07).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_00386ab4;
		local_28.color = FLOAT_00386ab4;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038d60c;
		local_34 = FLOAT_0038d608;
		OlegModuleA::UnkFun(&(this->progressPercent).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_00386ab4;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038d604;
		local_34 = FLOAT_0038d600;
		OlegModuleA::FUN_001a2e90(&pOVar1->parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038d5fc;
		local_34 = FLOAT_0038d5f8;
		OlegModuleA::FUN_001a2e90(&bubble->parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038d5f4;
		local_34 = FLOAT_0038d5f8;
		OlegModuleA::FUN_001a2e90(&(this->label03).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_00386608;
		local_2c = FLOAT_0038b3c8;
		local_38 = FLOAT_0038d5f0;
		local_34 = FLOAT_0038d5ec;
		OlegModuleA::FUN_001a40a0((OlegModuleA *)&this->uiIcon10,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038a828;
		local_34 = FLOAT_0038d5e8;
		OlegModuleA::FUN_001a2e90(&bubble_00->parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038d5e4;
		local_34 = FLOAT_0038d5e0;
		OlegModuleA::FUN_001a2e90(&(this->label04).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038b3c8;
		local_2c = FLOAT_0038b3c8;
		local_38 = FLOAT_0038d5f0;
		local_34 = FLOAT_0038d5dc;
		OlegModuleA::FUN_001a40a0((OlegModuleA *)&this->uiIcon11,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038d5bc;
		local_34 = FLOAT_0038d5d8;
		OlegModuleA::FUN_001a2e90(&(this->bubble06).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038639c;
		local_2c = FLOAT_0038639c;
		local_38 = FLOAT_0038a828;
		local_34 = FLOAT_0038d5d4;
		OlegModuleA::FUN_001a2e90(&(this->label05).parent,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		local_28.alpha = FLOAT_0038bc0c;
		local_28.color = 0.0;
		local_30 = (int)FLOAT_0038c850;
		local_2c = FLOAT_0038d5d0;
		local_38 = FLOAT_0038d5cc;
		local_34 = FLOAT_0038d5d8;
		OlegModuleA::FUN_001a40a0((OlegModuleA *)&this->uiIcon12,COLOR_WHITE,(ColorTransparent *)&local_38,(ColorTransparent *)&local_30,&local_28);
		(this->uiIcon10).field7_0x94 = FLOAT_0038b718;
		(this->uiIcon10).field8_0x98 = FLOAT_00386608;
		(this->uiIcon11).field10_0xa0 = FLOAT_0038d5c8;
		(this->uiIcon11).field12_0xa8 = FLOAT_0038d5c4;
		(this->uiIcon11).field14_0xb0 = FLOAT_0038639c;
		(this->uiIcon11).field16_0xb8 = FLOAT_0039e230 * FLOAT_0038cb00;
		(this->uiIcon12).field10_0xa0 = FLOAT_0038a834;
		local_38 = (float)this->iconArray;
		(this->uiIcon12).field12_0xa8 = FLOAT_0038b3b8;
		local_30 = 1;
		do {
		local_28.alpha = (float)local_30 * FLOAT_0038d5c0;
		FUN_001a1020((int)pOVar1,local_28.alpha,&local_10.alpha);
		local_20.alpha = FLOAT_00386ab4;
		local_20.color = 0;
		fStack24 = FLOAT_00386608;
		local_14 = FLOAT_00386608;
		OlegModuleA::FUN_001a40a0(*(OlegModuleA **)local_38,COLOR_WHITE,&local_10,(ColorTransparent *)&stack0xffffffe8,&local_20);
		local_38 = (float)((int)local_38 + 4);
		local_30 = local_30 + 2;
		}
		 while ((uint)local_30 < 0xd);
		pOVar2 = this->iconArray[1];
		(this->bubble07).parent.parent.next = (OlegModuleAbstract *)&this->progressPercent;
		(this->bubble05).parent.parent.next = (OlegModuleAbstract *)&this->bubble06;
		(this->bubble06).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon10;
		(this->uiIcon10).parent.parent.next = (OlegModuleAbstract *)&this->label03;
		(this->label03).parent.parent.next = (OlegModuleAbstract *)&this->label04;
		(this->label04).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon11;
		(this->uiIcon11).parent.parent.next = (OlegModuleAbstract *)&this->label05;
		(this->label05).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon12;
		pOVar3 = this->iconArray[0];
		(this->uiIcon12).parent.parent.next = (OlegModuleAbstract *)pOVar3;
		(this->progressPercent).parent.parent.next = (OlegModuleAbstract *)pOVar1;
		(this->uiIcon09).parent.parent.next = (OlegModuleAbstract *)bubble;
		(this->bubble04).parent.parent.next = (OlegModuleAbstract *)bubble_00;
		(this->bubble08).parent.parent.next = (OlegModuleAbstract *)&this->uiIcon09;
		(pOVar3->parent).parent.next = (OlegModuleAbstract *)pOVar2;
		(this->iconArray[1]->parent).parent.next = (OlegModuleAbstract *)this->iconArray[2];
		(this->iconArray[2]->parent).parent.next = (OlegModuleAbstract *)this->iconArray[3];
		(this->iconArray[3]->parent).parent.next = (OlegModuleAbstract *)this->iconArray[4];
		(this->iconArray[4]->parent).parent.next = (OlegModuleAbstract *)this->iconArray[5];
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b4f10(int i, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::FUN_000b4f10(Oleg *this,int i,char param_2){
		GameReaderStorage *this_00;
		int index;
		int iVar1;
		XBE_SECTION_HEADER *pXVar2;
		size_t length;
		void *memptr;
		SectionReaderUnknownX *reader;
		FileResourceDescG *pFVar3;
		char *pcVar4;
		uint uVar5;
		TwinString local_20;
		MemoryStream local_14;
		index = i;
		if ((i == 1) &&(iVar1 = __stricmp((&LevelList)[this->field3_0x318 >> 1 & 0xff],(&LevelList)[this->field3_0x318 >> 9 & 0xff]), iVar1 == 0)) {
		this->field3_0x318 = this->field3_0x318 >> 8 & 0x1fe | this->field3_0x318 & 0xfffffe00;
		return;
		}
		this_00 = GAME_READER_STORAGE[1];
		local_20.value = (char *)0x0;
		local_20.strLength = 0;
		local_20.strSize = 0;
		if (index == 0) {
		TwinString::Copy(&local_20,"Language\\Titles\\");
		TwinString::Append(&local_20,LANG_NAMES[LNG_INDEX]);
		pcVar4 = "\\Crash";
		}
		else if (index == 1) {
		TwinString::Copy(&local_20,"Language\\Titles\\");
		TwinString::Append(&local_20,LANG_NAMES[LNG_INDEX]);
		i = CONCAT22(i._2_2_,0x5c);
		TwinString::Append(&local_20,(char *)&i);
		pcVar4 = (&LevelList)[this->field3_0x318 >> 9 & 0xff];
		}
		else {
		if (index != 2) goto LAB_000b50c9;
		uVar5 = this->field4_0x31c >> 9 & 0xff;
		if (uVar5 == 0) {
		TwinString::Copy(&local_20,"Language\\");
		TwinString::Append(&local_20,PSM_PATH_ARRAY);
		i = CONCAT22(i._2_2_,0x5c);
		TwinString::Append(&local_20,(char *)&i);
		pcVar4 = LANG_NAMES[LNG_INDEX];
		}
		else {
		if ((8 < uVar5) && (uVar5 < 0xb)) {
		TwinString::Copy(&local_20,(this->psmPath).value);
		goto LAB_000b50c9;
		}
		TwinString::Copy(&local_20,"Language\\");
		pcVar4 = (&PSM_PATH_ARRAY)[uVar5];
		}
		}
		TwinString::Append(&local_20,pcVar4);
		LAB_000b50c9:TwinString::Append(&local_20,PSM_EXT_STR);
		thunk_FUN_000adb30((int)this,index);
		if ((index == 0) || (index == 1)) {
		pcVar4 = (&LevelList)[this->field3_0x318 >> 9 & 0xff];
		if (index == 0) {
		pcVar4 = "Crash";
		}
		pXVar2 = _XGetSectionHandleA@4(pcVar4);
		if (pXVar2 != (XBE_SECTION_HEADER *)0xffffffff) {
		iVar1 = __stricmp(pcVar4,(&LevelList)[this->field3_0x318 >> 1 & 0xff]);
		uVar5 = (&this->screenFlags)[index];
		if (iVar1 == 0) {
		(&this->screenFlags)[index] = uVar5 >> 8 & 0x1fe | uVar5 & 0xfffffe00;
		TwinString::Dispose(&local_20);
		return;
		}
		(&this->screenFlags)[index] = (uVar5 >> 8 ^ uVar5) & 0x1fe ^ uVar5 | 1;
		length = XAPILIB::XGetSectionSize((int)pXVar2);
		memptr = (void *)_XLoadSectionByHandle@4((int)pXVar2);
		MemoryStream::Construct(&local_14,memptr,length,0,0x40);
		ReadUI(this,index,&local_14);
		_XFreeSectionByHandle@4(pXVar2);
		MemoryStream::Dispose(&local_14);
		TwinString::Dispose(&local_20);
		return;
		}
		}
		uVar5 = (&this->screenFlags)[index];
		(&this->screenFlags)[index] = (uVar5 >> 8 ^ uVar5) & 0x1fe ^ uVar5 | 1;
		reader = (SectionReaderUnknownX *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderUnknownX *)0x0) {
		reader = (SectionReaderUnknownX *)0x0;
		}
		else {
		reader->oleg = this;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_X;
		reader->someIndex = index;
		}
		pFVar3 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar3 == (FileResourceDescG *)0x0) {
		pFVar3 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar3 = FileResourceDescG::Construct(pFVar3,local_20.value,&reader->parent,0xd);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar3->parent,0);
		if (param_2 != '\0') {
		GameReaderStorage::ReadStuff();
		}
		TwinString::Dispose(&local_20);
		return;
		}
		
	*/
	return;
}

void Oleg::InitModuleMask() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::InitModuleMask(Oleg *this){
		 Letterboxes (this->parent).uiPresetMask[0].high = 9;
		(this->parent).uiPresetMask[0].low = 0;
		 Logo at bottom left (this->parent).uiPresetMask[1].high = 2;
		(this->parent).uiPresetMask[1].low = 0;
		 Dimmed stripe for text (this->parent).uiPresetMask[2].high = 0xc;
		(this->parent).uiPresetMask[2].low = 0;
		 Dimmed screen (this->parent).uiPresetMask[3].high = 0x10;
		(this->parent).uiPresetMask[3].low = 0;
		 B (this->parent).uiPresetMask[4].high = 0x80;
		(this->parent).uiPresetMask[4].low = 0;
		 Y (this->parent).uiPresetMask[5].high = 0x100;
		(this->parent).uiPresetMask[5].low = 0;
		 A (this->parent).uiPresetMask[6].high = 0x200;
		(this->parent).uiPresetMask[6].low = 0;
		 L (this->parent).uiPresetMask[7].high = 0x400;
		(this->parent).uiPresetMask[7].low = 0;
		 R (this->parent).uiPresetMask[8].high = 0x800;
		(this->parent).uiPresetMask[8].low = 0;
		 Options (this->parent).uiPresetMask[9].high = 0x12b0;
		(this->parent).uiPresetMask[9].low = 0;
		 Placeholder message (this->parent).uiPresetMask[10].high = 0x22f0;
		(this->parent).uiPresetMask[10].low = 0;
		 Tile screen menu (this->parent).uiPresetMask[0xb].high = 0xc2f0;
		(this->parent).uiPresetMask[0xb].low = 0;
		 In-game Main Menu (this->parent).uiPresetMask[0xc].high = 0x90ef0;
		(this->parent).uiPresetMask[0xc].low = 0;
		 Disable autosave? (this->parent).uiPresetMask[0xd].high = 0x20ef0;
		(this->parent).uiPresetMask[0xd].low = 0;
		 Are you sure you want to quit (this->parent).uiPresetMask[0xe].high = (uint)&UINT_00040ef0;
		(this->parent).uiPresetMask[0xe].low = 0;
		 Reconnect controller (this->parent).uiPresetMask[0xf].high = (uint)FUN_00100030;
		(this->parent).uiPresetMask[0xf].low = 0;
		 Problem with the disk (this->parent).uiPresetMask[0x10].high = 0x200030;
		(this->parent).uiPresetMask[0x10].low = 0;
		 Autosave disabled (this->parent).uiPresetMask[0x11].high = 0x400270;
		(this->parent).uiPresetMask[0x11].low = 0;
		 Autosave enables (this->parent).uiPresetMask[0x12].high = 0x800270;
		(this->parent).uiPresetMask[0x12].low = 0;
		 Autosave failed (this->parent).uiPresetMask[0x13].high = 0x1000270;
		(this->parent).uiPresetMask[0x13].low = 0;
		 Earth hub gems (this->parent).uiPresetMask[0x14].high = 0x22000cb0;
		(this->parent).uiPresetMask[0x14].low = 0;
		 Hub gems (this->parent).uiPresetMask[0x15].high = 0x24000cb0;
		(this->parent).uiPresetMask[0x15].low = 0;
		 Hub gems (this->parent).uiPresetMask[0x16].high = 0x28000cb0;
		(this->parent).uiPresetMask[0x16].low = 0;
		 Hub gems (this->parent).uiPresetMask[0x17].high = 0x30000cb0;
		(this->parent).uiPresetMask[0x17].low = 0;
		 Extras screen (this->parent).uiPresetMask[0x18].high = 0x40000eb0;
		(this->parent).uiPresetMask[0x18].low = 0;
		 Gallery (this->parent).uiPresetMask[0x19].high = 0x80000080;
		(this->parent).uiPresetMask[0x19].low = 0x2000;
		 Game Over (this->parent).uiPresetMask[0x1a].high = 0x200;
		(this->parent).uiPresetMask[0x1a].low = 0x3001;
		 Loading game (this->parent).uiPresetMask[0x1b].high = 0x30;
		(this->parent).uiPresetMask[0x1b].low = 2;
		 Weird menu (this->parent).uiPresetMask[0x1c].high = 0x270;
		(this->parent).uiPresetMask[0x1c].low = 4;
		 Select slot to save (this->parent).uiPresetMask[0x1d].high = 0x270;
		(this->parent).uiPresetMask[0x1d].low = 8;
		 Autosave data (this->parent).uiPresetMask[0x1e].high = 0;
		(this->parent).uiPresetMask[0x1e].low = 0x10;
		(this->parent).uiPresetMask[0x1f].high = 0;
		(this->parent).uiPresetMask[0x1f].low = 0x300;
		(this->parent).uiPresetMask[0x20].high = 0;
		(this->parent).uiPresetMask[0x20].low = 0x20;
		 Life counter (this->parent).uiPresetMask[0x21].high = 0;
		(this->parent).uiPresetMask[0x21].low = 0x240;
		(this->parent).uiPresetMask[0x22].high = 0;
		(this->parent).uiPresetMask[0x22].low = 0x80;
		 Life counter (this->parent).uiPresetMask[0x23].high = 0;
		(this->parent).uiPresetMask[0x23].low = 0x200;
		(this->parent).uiPresetMask[0x24].high = 0;
		(this->parent).uiPresetMask[0x24].low = 0x100;
		 Centered icon (this->parent).uiPresetMask[0x25].high = 0;
		(this->parent).uiPresetMask[0x25].low = 0x400;
		(this->parent).uiPresetMask[0x26].high = 0;
		(this->parent).uiPresetMask[0x26].low = 0x800;
		(this->parent).uiPresetMask[0x27].high = 0;
		(this->parent).uiPresetMask[0x28].high = 0;
		(this->parent).uiPresetMask[0x29].high = 0;
		 Black screen (this->parent).uiPresetMask[0x27].low = 0x1000;
		 PSM Screen without UI (this->parent).uiPresetMask[0x28].low = 0x2000;
		 Loading screen (this->parent).uiPresetMask[0x29].low = 0x6000;
		 Clear UI mask (this->parent).uiPresetMask[0x2a].high = 0xfffffff8;
		(this->parent).uiPresetMask[0x2a].low = 0xffffffff;
		 Clear UI mask (this->parent).uiPresetMask[0x2b].high = 0xfffeffff;
		(this->parent).uiPresetMask[0x2b].low = 0xffffffff;
		 You will lose all unsaved progress message (this->parent).uiPresetMask[0x2c].high = 0x2f0;
		(this->parent).uiPresetMask[0x2c].low = 0x8000;
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b1d80() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b1d80(Oleg *this){
		uint uVar1;
		float fVar2;
		float fVar3;
		float fStack16;
		float local_c;
		float fStack8;
		float local_4;
		fVar2 = FLOAT_00386608;
		uVar1 = (this->uiIcon23).parent.parent.flags;
		(this->uiIcon23).field14_0xb0 = FLOAT_0038d088;
		fVar3 = FLOAT_0039e228;
		(this->uiIcon23).field15_0xb4 = FLOAT_0039e228;
		(this->uiIcon23).field8_0x98 = fVar2;
		(this->uiIcon23).parent.parent.flags = uVar1 & 0xffffafff | 0x2800;
		(this->uiIcon23).field16_0xb8 = fVar3 * fVar2;
		(this->uiIcon23).field7_0x94 = FLOAT_003865d0;
		*(uint **)&(this->caption21).parent.parent.field_0x28 = &ENV_FLAGS_95;
		fVar2 = DAT_0039e3a4;
		(this->module86).parent.array[1].x = DAT_0039e3a0;
		fStack16 = FLOAT_0038bc04;
		(this->module86).parent.array[1].y = fVar2;
		(this->module86).parent.parent.flags = (this->module86).parent.parent.flags & 0xffffa7ff | 0x2000;
		fVar2 = COLOR_BLACK;
		(this->uiIcon22).parent.array[1].x = FLOAT_0039f1f8;
		(this->uiIcon22).parent.array[1].y = fVar2;
		(this->uiIcon22).parent.parent.flags = (this->uiIcon22).parent.parent.flags & 0xffff8fff | 0x800;
		local_c = FLOAT_0038a828;
		fStack8 = FLOAT_0038d5bc;
		local_4 = FLOAT_0038bf5c;
		OlegModuleLabelGeneric::FUN_001a4010((OlegModuleLabelGeneric *)&this->uiIcon23,COLOR_WHITE,(Vector2 *)&stack0xfffffff8,(Vector2 *)&stack0xfffffff0);
		fStack8 = FLOAT_0038a838;
		local_4 = FLOAT_0038a838;
		fStack16 = FLOAT_00386ab4;
		local_c = FLOAT_0038a83c;
		OlegModuleA::FUN_001a2e30(&(this->caption21).parent,COLOR_WHITE,(Vector2 *)&stack0xfffffff0,(Vector2 *)&stack0xfffffff8);
		(this->uiIcon23).parent.parent.next = (OlegModuleAbstract *)&this->caption21;
		return;
		}
		
	*/
	return;
}

void Oleg::SetInputHandles(InputStruct* inputHandle) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::SetInputHandles(Oleg *this,InputStruct *inputHandle){
		(this->option02).inputHandle = inputHandle;
		(this->option15).inputHandle = inputHandle;
		(this->option03).inputHandle = inputHandle;
		(this->option16).inputHandle = inputHandle;
		(this->option04).inputHandle = inputHandle;
		(this->option05).inputHandle = inputHandle;
		(this->option06).inputHandle = inputHandle;
		(this->option07).inputHandle = inputHandle;
		(this->option08).inputHandle = inputHandle;
		(this->option09).inputHandle = inputHandle;
		(this->option10).inputHandle = inputHandle;
		(this->option11).inputHandle = inputHandle;
		(this->option12).inputHandle = inputHandle;
		(this->option13).inputHandle = inputHandle;
		(this->option14).inputHandle = inputHandle;
		(this->option01).inputHandle = inputHandle;
		(this->option17).inputHandle = inputHandle;
		(this->option18).inputHandle = inputHandle;
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b1a40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b1a40(Oleg *this){
		OlegModuleMenuBubble *bubble;
		float fVar1;
		float fVar2;
		uint uVar3;
		Vector2 local_10;
		float fStack8;
		float local_4;
		local_10.x = FLOAT_0038639c;
		local_10.y = FLOAT_0038639c;
		fStack8 = FLOAT_00386ab4;
		local_4 = FLOAT_00386608;
		OlegModuleA::FUN_001a2e30(&(this->option15).parent,COLOR_WHITE,(Vector2 *)&stack0xfffffff8,&local_10);
		fStack8 = FLOAT_0038639c;
		local_4 = FLOAT_0038639c;
		local_10.x = FLOAT_00386ab4;
		bubble = &this->bubble10;
		local_10.y = FLOAT_00386608;
		OlegModuleA::FUN_001a2e30(&bubble->parent,COLOR_WHITE,&local_10,(Vector2 *)&stack0xfffffff8);
		fStack8 = FLOAT_0038d5b8;
		local_4 = FLOAT_0038bf5c;
		local_10.x = FLOAT_0038d5b4;
		local_10.y = FLOAT_0038d5b0;
		OlegModuleLabelGeneric::FUN_001a4010((OlegModuleLabelGeneric *)&this->uiIcon13,COLOR_WHITE,&local_10,(Vector2 *)&stack0xfffffff8);
		fStack8 = FLOAT_0038d548;
		local_4 = FLOAT_0038d548;
		local_10.x = FLOAT_0038c9bc;
		local_10.y = FLOAT_0038cae4;
		OlegModuleA::FUN_001a2e30(&(this->caption19).parent,COLOR_WHITE,&local_10,(Vector2 *)&stack0xfffffff8);
		fStack8 = FLOAT_0038a76c;
		local_4 = FLOAT_0038a934;
		thunk_FUN_000ad710((float *)&stack0xfffffff8,bubble);
		fVar1 = FLOAT_00386608;
		uVar3 = (this->uiIcon13).parent.parent.flags;
		(this->uiIcon13).field14_0xb0 = FLOAT_0038d088;
		fVar2 = FLOAT_0039e228;
		uVar3 = uVar3 & 0xffffafff;
		(this->uiIcon13).field15_0xb4 = FLOAT_0039e228;
		(this->uiIcon13).field16_0xb8 = fVar2 * fVar1;
		(this->uiIcon13).field7_0x94 = FLOAT_003865d0;
		(this->uiIcon13).field8_0x98 = fVar1;
		(this->uiIcon13).parent.parent.flags = uVar3 | 0x2800;
		(this->uiIcon13).parent.parent.flags = uVar3 | 0x2800;
		(this->option15).parent.parent.next = (OlegModuleAbstract *)bubble;
		(this->uiIcon13).parent.parent.next = (OlegModuleAbstract *)&this->caption19;
		return;
		}
		
	*/
	return;
}

void Oleg::LoadIconsPsm() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::LoadIconsPsm(Oleg *this){
		UIElementAbstract *icon;
		int i;
		TwinString fname;
		MemoryStream stream;
		TwinString::Set(&fname,PTR_s_StartUp\Icons.psm_0039e0a4);
		MemoryStream::ConstructFile(&stream,fname.value,'\0');
		icon = (UIElementAbstract *)this->iconsPsm2;
		i = 40;
		do {
		(*icon->vtable->Read)(icon,&stream);
		icon = icon + 2;
		i = i + -1;
		}
		 while (i != 0);
		MemoryStream::Dispose(&stream);
		TwinString::Dispose(&fname);
		return;
		}
		
	*/
	return;
}

bool Oleg::FUN_000c2290(UIPresetIndex index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall Oleg::FUN_000c2290(Oleg *this,UIPresetIndex index){
		int iVar1;
		iVar1 = GetHighestBitPosition((this->parent).uiPresetMask[index].high,(this->parent).uiPresetMask[index].low);
		if (iVar1 < 0) {
		return (bool)('\x01' - (((byte)uRam00000004 & 0xf) != 3));
		}
		return (bool)('\x01' - (((byte)(this->parent).modules[iVar1]->flags & 0xf) != 3));
		}
		
	*/
	return false;
}

OlegModuleLabelSelectable* Oleg::GetSelectedLabel() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleLabelSelectable * __fastcall Oleg::GetSelectedLabel(Oleg *this){
		if (((byte)(this->option02).parent.parent.flags & 0xf) == 3) {
		return &this->option02;
		}
		if (((byte)(this->option15).parent.parent.flags & 0xf) == 3) {
		return &this->option15;
		}
		if (((byte)(this->option03).parent.parent.flags & 0xf) == 3) {
		return &this->option03;
		}
		if (((byte)(this->option11).parent.parent.flags & 0xf) == 3) {
		return &this->option11;
		}
		if (((byte)(this->option12).parent.parent.flags & 0xf) == 3) {
		return &this->option12;
		}
		if (((byte)(this->option13).parent.parent.flags & 0xf) == 3) {
		return &this->option13;
		}
		if (((byte)(this->option14).parent.parent.flags & 0xf) == 3) {
		return &this->option14;
		}
		if (((byte)(this->option01).parent.parent.flags & 0xf) == 3) {
		return &this->option01;
		}
		if (((byte)(this->option04).parent.parent.flags & 0xf) == 3) {
		return &this->option04;
		}
		if (((byte)(this->option05).parent.parent.flags & 0xf) == 3) {
		return &this->option05;
		}
		if (((byte)(this->option06).parent.parent.flags & 0xf) == 3) {
		return &this->option06;
		}
		if (((byte)(this->option07).parent.parent.flags & 0xf) == 3) {
		return &this->option07;
		}
		if (((byte)(this->option09).parent.parent.flags & 0xf) == 3) {
		return &this->option09;
		}
		if (((byte)(this->option08).parent.parent.flags & 0xf) == 3) {
		return &this->option08;
		}
		if (((byte)(this->option10).parent.parent.flags & 0xf) == 3) {
		return &this->option10;
		}
		return (OlegModuleLabelSelectable *)0x0;
		}
		
	*/
	return null;
}

void Oleg::FUN_000b1f60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_000b1f60(Oleg *this){
		OlegModuleMenuBubble *bubble;
		float fStack32;
		float local_1c;
		float fStack24;
		float local_14;
		float fStack16;
		float local_c;
		fStack32 = FLOAT_0038639c;
		local_1c = FLOAT_0038639c;
		fStack24 = FLOAT_00386ab4;
		local_14 = FLOAT_0038a934;
		OlegModuleA::FUN_001a2e30(&(this->option11).parent,(uint)COLOR_WHITE,(Vector2 *)&stack0xffffffe8,(Vector2 *)&stack0xffffffe0);
		fStack24 = FLOAT_0038639c;
		local_14 = FLOAT_0038639c;
		fStack32 = FLOAT_00386ab4;
		local_1c = FLOAT_0038a934;
		OlegModuleA::FUN_001a2e30(&(this->option12).parent,(uint)COLOR_WHITE,(Vector2 *)&stack0xffffffe0,(Vector2 *)&stack0xffffffe8);
		fStack24 = FLOAT_0038639c;
		local_14 = FLOAT_0038639c;
		fStack32 = FLOAT_00386ab4;
		local_1c = FLOAT_0038a934;
		OlegModuleA::FUN_001a2e30(&(this->option13).parent,(uint)COLOR_WHITE,(Vector2 *)&stack0xffffffe0,(Vector2 *)&stack0xffffffe8);
		fStack24 = FLOAT_0038639c;
		local_14 = FLOAT_0038639c;
		fStack32 = FLOAT_00386ab4;
		local_1c = FLOAT_0038a934;
		OlegModuleA::FUN_001a2e30(&(this->option14).parent,(uint)COLOR_WHITE,(Vector2 *)&stack0xffffffe0,(Vector2 *)&stack0xffffffe8);
		fStack32 = FLOAT_0038d548;
		local_c = FLOAT_0038a838;
		fStack24 = 0.0;
		local_14 = FLOAT_00386ab4;
		fStack16 = FLOAT_00386ab4;
		*(uint **)&(this->caption18).parent.parent.field_0x28 = &ENV_FLAGS_95;
		local_1c = fStack32;
		OlegModuleA::FUN_001a2e90(&(this->caption18).parent,COLOR_WHITE,(ColorTransparent *)&stack0xfffffff0,(ColorTransparent *)&stack0xffffffe0,(ColorTransparent *)&stack0xffffffe8);
		fStack16 = 0.0;
		fStack24 = FLOAT_0038639c;
		local_14 = FLOAT_0038639c;
		bubble = &this->bubble09;
		local_c = FLOAT_00386ab4;
		fStack32 = FLOAT_00386ab4;
		local_1c = FLOAT_0038a838;
		OlegModuleA::FUN_001a2e90(&bubble->parent,COLOR_WHITE,(ColorTransparent *)&stack0xffffffe0,(ColorTransparent *)&stack0xffffffe8,(ColorTransparent *)&stack0xfffffff0);
		fStack16 = FLOAT_0038bc04;
		local_c = FLOAT_0038a934;
		thunk_FUN_000ad710((float *)&stack0xfffffff0,bubble);
		(this->caption18).parent.parent.next = (OlegModuleAbstract *)bubble;
		return;
		}
		
	*/
	return;
}

void Oleg::ShowUI(UIPresetIndex index, int appearTime, int disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::ShowUI(Oleg *this,UIPresetIndex index,int appearTime,int disappearTime){
		ShowUI(this,(this->parent).uiPresetMask[index].high,(this->parent).uiPresetMask[index].low,appearTime,disappearTime);
		return;
		}
		
	*/
	return;
}

void Oleg::ChoseRandomLoadingPicture(int uiIndex, int startIndex, int picAmount) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::ChoseRandomLoadingPicture(Oleg *this,int uiIndex,int startIndex,int picAmount){
		long lVar1;
		float fVar1;
		fVar1 = PerceptRandom::GetUtilityScoreInternal();
		if (fVar1 < FLOAT_0038639c) {
		lVar1 = __ftol2((float)((picAmount - startIndex) + 1) * fVar1);
		picAmount = lVar1 + startIndex;
		}
		(&this->screenFlags)[uiIndex] =(&this->screenFlags)[uiIndex] ^ (picAmount << 9 ^ (&this->screenFlags)[uiIndex]) & 0x1fe00;
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_000b5270(int param_1, InstanceContext* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::FUN_000b5270(Oleg *this,int param_1,InstanceContext *param_2){
		OGI *pOVar1;
		TwinsanityMaterialShader *shader;
		uint uVar2;
		int iVar3;
		if ((short)param_2 == -1) {
		(&this->field66_0xb00)[param_1] = 0;
		(*(this->iconsPsm2[param_1 + -3].parent.vtable)->ReplaceShader)((UIElementAbstract *)(this->iconsPsm2 + param_1 + -3),&ENV_CLASS_94);
		}
		else {
		pOVar1 = ((GameResources->parent).ogis)->elements[(uint)param_2 & 0x7fff];
		if (pOVar1 != (OGI *)0x0) {
		if ((pOVar1->rigidModelReferences == (uint *)0x0) || (pOVar1->header[5] == 0)) {
		uVar2 = 0;
		}
		else {
		uVar2 = *pOVar1->rigidModelReferences;
		}
		if ((*(int **)(uVar2 + 0xc) == (int *)0x0) || (*(int *)(uVar2 + 0x1c) == 0)) {
		iVar3 = 0;
		}
		else {
		iVar3 = **(int **)(uVar2 + 0xc);
		}
		shader = *(TwinsanityMaterialShader **)(iVar3 + 8);
		(&this->field66_0xb00)[param_1] = iVar3;
		(*((UIElementAbstract *)(this->iconsPsm2 + param_1 + -3))->vtable->ReplaceShader)((UIElementAbstract *)(this->iconsPsm2 + param_1 + -3),shader);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void Oleg::ReadUI(int index, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::ReadUI(Oleg *this,int index,MemoryStream *stream){
		UIElementAbstract *icons;
		int iVar1;
		(&this->screenFlags)[index] = (&this->screenFlags)[index] & 0xfffffffe;
		if (index == 0) {
		(*((this->crashTwinsanityLogo).parent.vtable)->Read)(&(this->crashTwinsanityLogo).parent,stream);
		}
		else {
		if (index == 1) {
		(*((this->someIcon2).parent.vtable)->Read)(&(this->someIcon2).parent,stream);
		return;
		}
		if (index == 2) {
		icons = (UIElementAbstract *)this->iconsPsm3;
		iVar1 = 8;
		do {
		(*icons->vtable->Read)(icons,stream);
		icons = icons + 2;
		iVar1 = iVar1 + -1;
		}
		 while (iVar1 != 0);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void Oleg::GrandALife(int param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::GrandALife(Oleg *this,int param_1,char param_2){
		int *piVar1;
		SplineC *this_00;
		SplineD *this_01;
		SplineE *this_02;
		ChunkDesc *pCVar2;
		uint uVar3;
		OlegModuleAbstract *pOVar4;
		int iVar5;
		pCVar2 = this->chunkDesc;
		uVar3 = pCVar2->flags2;
		iVar5 = (uVar3 >> 7 & 0x7f) + param_1;
		if (iVar5 < 0) {
		pCVar2->flags2 = uVar3 & 0xffffc07f;
		}
		else if (iVar5 < 100) {
		pCVar2->flags2 = (iVar5 * 0x80 ^ uVar3) & 0x3f80 ^ uVar3;
		}
		else {
		pCVar2->flags2 = uVar3 & 0xfffff27f | 0x3200;
		}
		ShowUI(this,(this->parent).uiPresetMask[0x23].high,(this->parent).uiPresetMask[0x23].low,(int)TicksPerTime,(int)(TicksPerTime * FLOAT_0038cac0));
		this_00 = &this->spline3;
		(*((this->spline3).parent.vtable)->Reset)(&this_00->parent);
		(this->spline3).parent.length = FLOAT_0038b3a4;
		(this->spline3).parent.repeats = 7;
		pOVar4 = (this->uiIcon18).parent.parent.next;
		(this->uiIcon18).parent.parent.spline = (SplineA *)this_00;
		if (pOVar4 != (OlegModuleAbstract *)0x0) {
		OlegModuleAbstract::SetSplineToAll(pOVar4,this_00);
		}
		if (param_2 != '\0') {
		(this->lifeIcon).field1_0x88 = this->iconsPsm2 + (this->chunkDesc->flags >> 8 & 0xf);
		OlegModuleA::Show((OlegModuleA *)&this->lifeIcon,(int)(TicksPerTime * FLOAT_00386ab4),(int)TicksPerTime);
		this_01 = &this->spline1;
		(*((this->spline1).parent.vtable)->Reset)(&this_01->parent);
		(this->spline1).parent.length = FLOAT_0038a838;
		this_02 = &this->spline2;
		(this->spline1).parent.repeats = (this->spline1).parent.repeats + 1;
		(*((this_02->parent).vtable)->Reset)(&this_02->parent);
		(this->spline2).parent.length = FLOAT_0038a838;
		piVar1 = &(this->spline2).parent.repeats;
		*piVar1 = *piVar1 + 1;
		(this->spline1).parent.next = &this_02->parent;
		(this->lifeIcon).parent.parent.spline = (SplineA *)this_01;
		pOVar4 = (this->lifeIcon).parent.parent.next;
		if (pOVar4 != (OlegModuleAbstract *)0x0) {
		OlegModuleAbstract::SetSplineToAll(pOVar4,this_01);
		}
		FUN_00133d20(0x10a,0,0.2,-1.0,0,-1);
		}
		return;
		}
		
	*/
	return;
}

void Oleg::AssignModuleToSlot(int index, uint module) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::AssignModuleToSlot(Oleg *this,int index,OlegModuleAbstract *module){
		(this->parent).modules[index] = module;
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_001a1be0(UnkSfxCollection* _struct) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::FUN_001a1be0(UnkSfxCollection *struct){
		uint i;
		i = 0;
		do {
		struct->sfx[i] = (Sfx *)0x0;
		struct->arr2[i] = 3;
		i = i + 1;
		}
		 while (i < 0xd);
		return;
		}
		
	*/
	return;
}

void Oleg::FUN_001a2670(uint param_1, uint param_2, SplineA* spline) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::FUN_001a2670(Oleg *this,uint param_1,uint param_2,SplineA *spline){
		int index;
		OlegModuleAbstract *pOVar1;
		index = GetHighestBitPosition(param_1,param_2);
		if (index < 0) {
		pOVar1 = (OlegModuleAbstract *)0x0;
		}
		else {
		pOVar1 = (this->parent).modules[index];
		}
		pOVar1->spline = spline;
		if (pOVar1->next != (OlegModuleAbstract *)0x0) {
		OlegModuleAbstract::SetSplineToAll(pOVar1->next,spline);
		}
		return;
		}
		
	*/
	return;
}

void Oleg::ShowUI_30(uint flags1, uint flags2, int appearTime, int disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::ShowUI(Oleg *this,uint flags1,uint flags2,int appearTime,int disappearTime){
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		int i;
		uVar1 = (this->parent).field3_0xc;
		uVar4 = 0;
		uVar2 = ~(this->parent).field2_0x8 & flags1;
		flags1 = (uint)(this->parent).modules;
		uVar3 = 1;
		i = 0x40;
		do {
		if (((uVar2 & uVar3 | ~uVar1 & flags2 & uVar4) != 0) &&(*(OlegModuleA **)flags1 != (OlegModuleA *)0x0)) {
		OlegModuleA::Show(*(OlegModuleA **)flags1,appearTime,disappearTime);
		}
		uVar4 = uVar4 << 1 | uVar3 >> 0x1f;
		flags1 = flags1 + 4;
		uVar3 = uVar3 << 1;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void Oleg::ClearUI(uint maskLow, uint maskHigh, int appearTime, int disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::ClearUI(Oleg *this,uint maskLow,uint maskHigh,int appearTime,int disappearTime){
		uint maskedFlags1;
		uint uVar1;
		uint uVar2;
		int i;
		uint uVar3;
		uVar3 = (this->parent).field3_0xc;
		uVar2 = 0;
		maskedFlags1 = ~(this->parent).field2_0x8 & maskLow;
		 x is reused as AutoClass17** maskLow = (uint)(this->parent).modules;
		uVar1 = 1;
		i = 0x40;
		do {
		if (((maskedFlags1 & uVar1 | ~uVar3 & maskHigh & uVar2) != 0) &&(*(OlegModuleA **)maskLow != (OlegModuleA *)0x0)) {
		 Interpolate modules that has 1 in mask OlegModuleA::Hide(*(OlegModuleA **)maskLow,appearTime,disappearTime);
		}
		uVar2 = uVar2 << 1 | uVar1 >> 0x1f;
		 Iterate array maskLow = maskLow + 4;
		uVar1 = uVar1 << 1;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void Oleg::SetScreenFlag(int index, int value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::SetScreenFlag(Oleg *this,int index,int value){
		(&this->screenFlags)[index] =(&this->screenFlags)[index] ^ (value << 9 ^ (&this->screenFlags)[index]) & 0x1fe00;
		return;
		}
		
	*/
	return;
}

void Oleg::InitValues() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::InitValues(Oleg *this){
		uint *puVar1;
		uint uVar2;
		Vector2 *pVVar3;
		Vector4 *pVVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		int iVar10;
		ShaderProgramAbstract *pSVar11;
		int *piVar12;
		int iVar13;
		float *puVar7;
		Vector4 fStack36;
		UIElementImage *notThis;
		iVar10 = SECURITY_COOKIE;
		(this->material).shaderType = 0x18;
		(this->material).shaderProgramCnt = 0;
		(this->material).field6_0x18 = 2;
		(this->material).field7_0x1c = 0;
		pSVar11 = (ShaderProgramAbstract *)VirtualPool::AllocateMemory(0x80);
		if (pSVar11 == (ShaderProgramAbstract *)0x0) {
		pSVar11 = (ShaderProgramAbstract *)0x0;
		}
		else {
		ShaderProgramAbstract::Construct(pSVar11);
		pSVar11->vtable = (ShaderProgramAbstract_VTable *)&PTR_Dispose_0038d440;
		pSVar11->id = 0xe;
		}
		this->unkClass = pSVar11;
		uVar2 = (this->material).shaderProgramCnt;
		if (uVar2 < 4) {
		(this->material).shaderPrograms[uVar2] = pSVar11;
		puVar1 = &(this->material).shaderProgramCnt;
		*puVar1 = *puVar1 + 1;
		}
		pSVar11 = PTR_003e2d28;
		fVar5 = FLOAT_0038639c;
		(PTR_003e2d28->vec0).x = FLOAT_0038639c;
		(pSVar11->vec0).y = fVar5;
		(pSVar11->vec0).z = fVar5;
		(pSVar11->vec0).w = fVar5;
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 | 1;
		this->unkClass->flags = this->unkClass->flags & 0xffffffe3 | 2;
		this->unkClass->states = this->unkClass->states | 0x8000000;
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 & 0xffffffdf;
		puVar1 = &this->unkClass->states;
		*puVar1 = *puVar1 & 0xfeffffff;
		puVar1 = &this->unkClass->states;
		*puVar1 = *puVar1 & 0xfdffffff;
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 & 0xfff7ffff;
		puVar1 = &this->unkClass->states;
		*puVar1 = *puVar1 & 0xfffffff8;
		puVar1 = &this->unkClass->states;
		*puVar1 = *puVar1 & 0xffffffc7;
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 & 0xfc7fffff;
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 | 0x4000000;
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 & 0xdfffffff;
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 & 0xbfffffff;
		this->unkClass->flags = this->unkClass->flags | 0x8000000;
		piVar12 = (int *)FUN_0012a140(0);
		if (piVar12 == (int *)0x0) {
		iVar13 = 0;
		}
		else {
		iVar13 = *piVar12;
		}
		iVar13 = *(int *)(iVar13 + 0x24);
		puVar1 = &this->unkClass->flags;
		*puVar1 = *puVar1 | 0x10000000;
		ShaderProgramAbstract::FUN_000ff9d0(this->unkClass,*(uint **)(iVar13 + 4));
		(*this->unkClass->vtable->Method4)();
		fStack36.x = FLOAT_00386ab4;
		fStack36.y = FLOAT_0038cb00;
		fStack36.z = FLOAT_0038cb00;
		notThis = &this->materialRelated;
		fStack36.w = 0.0;
		FUN_00109230(notThis,(int)&this->material,&fStack36.z,&fStack36.x);
		fVar7 = FLOAT_00386ab4;
		pVVar3 = this->arr2;
		pVVar3->x = FLOAT_00386ab4;
		pVVar3->y = fVar7;
		fVar8 = FLOAT_0038a830;
		pVVar3 = this->arr2;
		pVVar3[1].x = FLOAT_0038a830;
		pVVar3[1].y = fVar8;
		fVar5 = FLOAT_0038d660;
		fVar9 = FLOAT_0038adb8;
		pVVar3 = this->arr2;
		pVVar3[2].x = FLOAT_0038adb8;
		pVVar3[2].y = fVar9;
		pVVar3 = this->arr2;
		pVVar3[3].x = fVar5;
		pVVar3[3].y = fVar5;
		fVar5 = FLOAT_0038cac0;
		pVVar3 = this->arr2;
		pVVar3[4].x = FLOAT_0038cac0;
		pVVar3[4].y = fVar5;
		fVar6 = FLOAT_0038d65c;
		fVar5 = FLOAT_0038a828;
		pVVar3 = this->arr2;
		pVVar3[5].x = FLOAT_0038d65c;
		pVVar3[5].y = fVar6;
		fVar6 = FLOAT_00386608;
		pVVar3 = this->arr2;
		pVVar3[6].x = fVar8;
		pVVar3[6].y = fVar8;
		pVVar3 = this->arr2;
		pVVar3[7].x = fVar6;
		pVVar3[7].y = fVar6;
		pVVar4 = this->arr1;
		pVVar4->x = fVar5;
		pVVar4->y = fVar5;
		pVVar4->z = fVar5;
		pVVar4->w = fVar6;
		pVVar4 = this->arr1;
		pVVar4[1].x = fVar8;
		pVVar4[1].y = fVar8;
		pVVar4[1].z = fVar8;
		pVVar4[1].w = fVar7;
		pVVar4 = this->arr1;
		pVVar4[2].x = fVar9;
		pVVar4[2].y = fVar9;
		pVVar4[2].z = fVar9;
		fVar8 = FLOAT_0038a83c;
		fVar5 = FLOAT_0038639c;
		pVVar4[2].w = FLOAT_0038a83c;
		pVVar4 = this->arr1;
		pVVar4[3].x = fVar5;
		pVVar4[3].y = fVar5;
		pVVar4[3].z = fVar5;
		pVVar4[3].w = fVar5;
		pVVar4 = this->arr1;
		pVVar4[4].x = fVar5;
		pVVar4[4].y = fVar5;
		pVVar4[4].z = fVar5;
		pVVar4[4].w = fVar5;
		pVVar4 = this->arr1;
		pVVar4[5].x = fVar9;
		pVVar4[5].y = fVar9;
		pVVar4[5].z = fVar9;
		fVar5 = FLOAT_0038a82c;
		pVVar4[5].w = fVar8;
		pVVar4 = this->arr1;
		pVVar4[6].x = fVar5;
		pVVar4[6].y = fVar5;
		pVVar4[6].z = fVar5;
		pVVar4[6].w = fVar7;
		pVVar4 = this->arr1;
		pVVar4[7].x = fVar6;
		pVVar4[7].y = fVar6;
		pVVar4[7].z = fVar6;
		pVVar4[7].w = fVar6;
		*this->arr3 = 0.0;
		this->arr3[1] = FLOAT_0039e22c;
		*this->arr4 = 0.0;
		this->arr4[1] = FLOAT_0039e238;
		UnkFamily20Base::FUN_00113af0(this->unkStruct12array,notThis,6);
		this->unkStruct12array[0].field6_0x34 = FLOAT_00386ab4;
		this->unkStruct12array[0].field7_0x38 = FLOAT_0038bd20;
		fVar5 = FLOAT_0038a934;
		this->unkStruct12array[0].vec.x = FLOAT_0038a934;
		this->unkStruct12array[0].vec.y = fVar5;
		this->unkStruct12array[0].vec.z = FLOAT_0038d658;
		this->unkStruct12array[0].vec.w = FLOAT_0038a838;
		this->unkStruct12array[0].field9_0x40 = &this->arr1length;
		this->unkStruct12array[0].field10_0x44 = &this->arr2length;
		this->unkStruct12array[0].field11_0x48 = (uint)&this->arr3length;
		puVar7 = &this->unkStruct12array[1].vec.w;
		fStack36.x = 8.407791e-45;
		do {
		UnkFamily20Base::FUN_00113af0((UnkFamily20Base *)(puVar7 + -9),notThis,4);
		puVar7[4] = FLOAT_0038b3a4;
		puVar7[5] = FLOAT_0038d654;
		fVar5 = FLOAT_0038a934;
		puVar7[-3] = FLOAT_0038a934;
		puVar7[-2] = fVar5;
		fVar5 = FLOAT_00386ab4;
		puVar7[-1] = FLOAT_00386ab4;
		*puVar7 = fVar5;
		puVar7[7] = (float)&this->arr1length;
		puVar7[8] = (float)&this->arr2length;
		puVar7[9] = (float)&this->arr3length;
		puVar7 = puVar7 + 0x13;
		fStack36.x = (float)((int)fStack36.x + -1);
		}
		 while (fStack36.x != 0.0);
		UnkFamily20Base::FUN_00113af0(this->unkStruct12array + 7,notThis,2);
		this->unkStruct12array[7].field6_0x34 = FLOAT_0038a82c;
		this->unkStruct12array[7].field7_0x38 = FLOAT_0038b694;
		fVar5 = FLOAT_0038a934;
		this->unkStruct12array[7].vec.x = FLOAT_0038a934;
		this->unkStruct12array[7].vec.y = fVar5;
		this->unkStruct12array[7].vec.z = FLOAT_0038d640;
		this->unkStruct12array[7].vec.w = FLOAT_0038cb00;
		fVar5 = FLOAT_0038d650;
		this->unkStruct12array[7].field10_0x44 = &this->arr2length;
		this->unkStruct12array[7].field9_0x40 = &this->arr1length;
		this->unkStruct12array[7].field11_0x48 = (uint)&this->arr3length;
		this->unkStruct12array[7].field3_0x28 = fVar5;
		this->unkStruct12array[7].field4_0x2c = FLOAT_0038abc4;
		UnkFamily20Base::FUN_00113af0(&(this->spline4).unkStruct,notThis,0x80);
		fVar6 = FLOAT_0038cf68;
		fVar5 = FLOAT_0038639c;
		(this->spline4).unkStruct.vec.x = FLOAT_0038cf68;
		(this->spline4).unkStruct.vec.y = fVar6;
		fVar6 = FLOAT_00386ab4;
		(this->spline4).unkStruct.vec.z = FLOAT_00386ab4;
		(this->spline4).unkStruct.vec.w = fVar6;
		(this->spline4).unkStruct.field9_0x40 = &this->arr1length;
		(this->spline4).unkStruct.field11_0x48 = (uint)&this->arr4length;
		(this->spline4).unkStruct.field10_0x44 = &this->arr2length;
		(this->field65_0xaf0).x = 0.0;
		(this->field65_0xaf0).z = 0.0;
		fVar6 = FLOAT_0038b3cc;
		(this->field65_0xaf0).y = fVar5;
		(this->field65_0xaf0).w = fVar5;
		(this->spline4).parent.length = fVar6;
		@__security_check_cookie@4(iVar10);
		return;
		}
		
	*/
	return;
}

void Oleg::ClearUI_34(UIPresetIndex index, int appearTime, int disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::ClearUI(Oleg *this,UIPresetIndex index,int appearTime,int disappearTime){
		ClearUI(this,(this->parent).uiPresetMask[index].high,(this->parent).uiPresetMask[index].low,appearTime,disappearTime);
		return;
		}
		
	*/
	return;
}

void Oleg::StartGemCrystalAnimation(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Oleg::StartGemCrystalAnimation(Oleg *this,int param_1){
		int *piVar1;
		SplineB *spline;
		int iVar2;
		if ((_DAT_003e5f74 & 1) == 0) {
		_DAT_003e5f74 = _DAT_003e5f74 | 1;
		}
		if (DAT_003e5f73 == '\0') {
		_DAT_003e5f30 = FLOAT_0038d0b4;
		_DAT_003e5f38 = FLOAT_0038d0b4;
		_DAT_003e5f40 = FLOAT_0038d0a8;
		_DAT_003e5f20 = FLOAT_0038d0b0;
		_DAT_003e5f44 = FLOAT_0038d0a4;
		_DAT_003e5f00 = FLOAT_0038d0ac;
		_DAT_003e5f24 = FLOAT_0038d0a0;
		_DAT_003e5f48 = FLOAT_0038d09c;
		_DAT_003e5f04 = FLOAT_0038d098;
		_DAT_003e5f28 = FLOAT_0038d094;
		_DAT_003e5f50 = FLOAT_0038d090;
		_DAT_003e5f54 = FLOAT_0038d090;
		DAT_003e5f73 = '\x01';
		_DAT_003e5f08 = FLOAT_0038639c;
		_DAT_003e5f0c = FLOAT_0038639c;
		_DAT_003e5f10 = FLOAT_0038639c;
		_DAT_003e5f14 = FLOAT_0038639c;
		_DAT_003e5f18 = FLOAT_0038639c;
		_DAT_003e5f1c = FLOAT_0038639c;
		_DAT_003e5f2c = FLOAT_0038639c;
		_DAT_003e5f34 = 0;
		_DAT_003e5f3c = FLOAT_0038639c;
		_DAT_003e5f4c = FLOAT_0038639c;
		_DAT_003e5f58 = 0;
		_DAT_003e5f5c = FLOAT_0038639c;
		DAT_003e5f60 = FLOAT_0038d08c;
		DAT_003e5f64 = 0.0;
		DAT_003e5f68 = 0.0;
		DAT_003e5f6c = FLOAT_0038639c;
		}
		if (param_1 == 0x23) {
		(*((this->spline3).parent.vtable)->Reset)(&(this->spline3).parent);
		(this->spline3).parent.length = FLOAT_0038b3a4;
		(this->spline3).parent.repeats = 7;
		FUN_001a2670(this,(this->parent).uiPresetMask[0x23].high,(this->parent).uiPresetMask[0x23].low,(SplineA *)&this->spline3);
		}
		else if (param_1 == 0x25) {
		spline = &this->spline4;
		(*((this->spline4).parent.vtable)->Reset)(&spline->parent);
		piVar1 = &(this->spline4).parent.repeats;
		*piVar1 = *piVar1 + 1;
		if ((char)this->field1_0x310 == '\x14') {
		(this->field65_0xaf0).x = DAT_003e5f60;
		(this->field65_0xaf0).y = DAT_003e5f64;
		(this->field65_0xaf0).z = DAT_003e5f68;
		(this->field65_0xaf0).w = DAT_003e5f6c;
		FUN_001a2670(this,(this->parent).uiPresetMask[0x25].high,(this->parent).uiPresetMask[0x25].low,(SplineA *)spline);
		return;
		}
		iVar2 = (this->field1_0x310 >> 0x10 & 0xf) * 0x10;
		(this->field65_0xaf0).x = *(float *)(&DAT_003e5f00 + iVar2);
		(this->field65_0xaf0).y = *(float *)(&DAT_003e5f04 + iVar2);
		(this->field65_0xaf0).z = *(float *)(&DAT_003e5f08 + iVar2);
		(this->field65_0xaf0).w = *(float *)(&DAT_003e5f0c + iVar2);
		FUN_001a2670(this,(this->parent).uiPresetMask[0x25].high,(this->parent).uiPresetMask[0x25].low,(SplineA *)spline);
		return;
		}
		return;
		}
		
	*/
	return;
}

void Oleg::ResetScreenMessage() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Oleg::ResetScreenMessage(Oleg *this){
		UIElementAbstract *this_00;
		int i;
		TwinString::Copy(&(this->screenMessage).message,"");
		*(undefined *)((int)&this->field1_0x310 + 1) = 0;
		this->deltaTime = (int)(TicksPerTime * ENV_FLOAT_92_0_15);
		this_00 = (UIElementAbstract *)&this->someIcon3;
		i = 3;
		do {
		(*this_00->vtable->ReplaceShader)(this_00,&ENV_CLASS_94);
		this_00 = this_00 + 2;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void Oleg::RenderUI(FontRenderer* fontRenderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Oleg::RenderUI(Oleg *this,FontRenderer *fontRenderer){
		OlegBase::Render(&this->parent,fontRenderer);
		AutoClass11::DrawMessage(&this->screenMessage,fontRenderer);
		return;
		}
		
	*/
	return;
}

