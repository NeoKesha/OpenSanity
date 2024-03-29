#include "headers/Known/Oleg/Oleg.h"
#include "headers/Global.h"

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
#include "headers/Known/ColorTransparent.h"
#include "headers/Known/Oleg/UIElement/UIElementSimpleShapeA.h"
#include "headers/Unknown/NonVirtualClasses/UNV025.h"
#include "headers/Unknown/NonVirtualClasses/UNV026.h"
#include "headers/Unknown/NonVirtualClasses/UNV027.h"


//TODO: Remove all default consfxRelatedions from consfxRelatedor and initialized to avoid double work
Oleg::Oleg(Font* font, ChunkDesc* chunkDesc) : OlegBase(),
spline0(), spline1(), spline2(), spline3(),
inputWrapper(0, 7), inputObserver(&inputWrapper),
material(), materialRelated(), spline4(), screenMessage(font),
uiIcon01(&someIcon1), uiIcon02(&someIcon1), uiIcon03(&someIcon1), uiIcon04(0.75f, &crashTwinsanityLogo), uiIcon05(&someIcon1),
label01(0.5f, font, 0x22), uiIcon06(&someIcon1), uiIcon07(0.5f, &crashTwinsanityLogo), uiIcon08(0.5f, &iconsPsm2[17]), bubble01(0.5f, 8, 1, 0x40, 0), bubble02(0.5f, 4, 1, 0x20, 0),
caption01(0.9f, font, 0x1d, 0x44), caption02(0.9f, font, 0xc0, 0x44), caption03(0.075f, font, 0x1c, 0x14), caption04(0.075f, font, 0x1e, 0x14), caption05(0.9f, font, 0x1f, 0x44),
option01(0.5f, &inputObserver, &colorMatrix[6], &sfxRelated),
bubble03(0.5f, 4, 1, 0x20, 0),
option02(0.5f, &inputObserver, &colorMatrix[0], &sfxRelated),
caption06(0.5f, font, 0x29, 0x22),
option03(0.5f, &inputObserver, &colorMatrix[2], &sfxRelated),
option04(0.5f, &inputObserver, &colorMatrix[4], &sfxRelated),
option05(0.5f, &inputObserver, &colorMatrix[2], &sfxRelated),
caption07(0.5f, font, 0x65, 0x22),
option06(0.5f, &inputObserver, &colorMatrix[2], &sfxRelated),
caption08(0.5f, font, 0x49, 0x22),
option07(0.5f, &inputObserver, &colorMatrix[2], &sfxRelated),
caption09(0.5f, font, 0x4a, 0x22),
caption10(0.5f, font, 0x20, 0x22),
caption11(0.5f, font, 0x24, 0x22),
caption12(0.5f, font, 0x25, 0x22),
caption13(0.5f, font, 0x27, 0x22),
caption14(0.5f, font, 0x28, 0x22),
option08(0.5f, &inputObserver, &colorMatrix[2], &sfxRelated),
caption15(0.5f, font, 0x26, 0x22),
caption16(0.5f, font, 0x46, 0x22),
option09(0.5f, &inputObserver, &colorMatrix[2], &sfxRelated),
caption17(0.5f, font, 0xb8, 0x22),
option10(0.5f, &inputObserver, &colorMatrix[2], &sfxRelated),
bubble04(0.5f, 4, 1, 0x20, 0),
bubble05(0.5f, 4, 1, 0x20, 0),
bubble06(0.5f, 4, 1, 0x20, 0),
bubble07(0.5f, 2, 1, 0x20, 0),
bubble08(0.5f, 4, 1, 0x18, 0),
uiIcon09(0.5f, &someIcon2),
progressPercent(0.5f, font, 0x22),
label03(0.5f, font, 0x60),
uiIcon10(0.5f, &iconsPsm2[0xd]),
label04(0.5f, font, 0x60),
uiIcon11(0.5f, &iconsPsm2[0]),
label05(0.5f, font, 0x60),
uiIcon12(0.5f, &iconsPsm2[0xf]),
option11(0.5f, &inputObserver, &colorMatrix[5], &sfxRelated),
option12(0.5f, &inputObserver, &colorMatrix[5], &sfxRelated),
option13(0.5f, &inputObserver, &colorMatrix[5], &sfxRelated),
option14(0.5f, &inputObserver, &colorMatrix[5], &sfxRelated),
caption18(0.5f, font, 0x4c, 0x22),
bubble09(0.5f, 4, 1, 0x20, 0),
option15(0.5f, &inputObserver, &colorMatrix[1], &sfxRelated),
bubble10(0.5f, 4, 1, 0x20, 0),
uiIcon13(0.5f, &crashTwinsanityLogo),
caption19(0.5f, font, 0xb7, 0x14),
option16(0.5f, &inputObserver, &colorMatrix[3], &sfxRelated),
label07(0.5f, font, 0x22),
label08(0.5f, font, 0x22),
option17(0.5f, &inputObserver, &colorMatrix[7], &sfxRelated),
label09(0.5f, font, 0x22),
bubble11(0.5f, 4, 1, 0x20, 0),
option18(0.5f, &inputObserver, &colorMatrix[8], &sfxRelated),
caption20(0.5f, font, 0x47, 0x22),
uiIcon14(0.5f, &iconsPsm2[0x11]),
label10(0.9, font, 0x30),
uiIcon15(0.5f, &someIcon4),
label11(0.9f, font, 0x30),
uiIcon16(0.5f, &iconsPsm2[0x12]),
module75(0.075f, &someIcon1, chunkDesc),
module76(0.5f, &iconsPsm2[6], &iconsPsm2[0xd]),
wumpaCount(0.075f, font, 0x14),
uiIcon17(0.075f, &iconsPsm2[0xd]),
label13(0.9f, font, 0x44),
uiIcon18(0.9f, &iconsPsm2[0]),
lifeIcon(0.2f, &iconsPsm2[0]),
uiIcon20(0.5f, &iconsPsm2[0xe]),
label14(0.9f, font, 0x44),
uiIcon21(0.9f, &iconsPsm2[0x10]),
uiIcon22(&someIcon1),
module86(0.5f, &iconsPsm3[0]),
uiIcon23(0.075f, &crashTwinsanityLogo),
caption21(0.5f, font, 0x5c, 0x22)
{
	Global* GLOBAL = Global::Get();

	this->field5_0x320 = 0;
	this->chunkDesc = chunkDesc;
	this->font = font;
	FUN_001a1be0(&this->sfxRelated);
	this->page1 = null;
	this->page2 = null;
	this->page3 = null;
	this->page4 = null;
	this->page5 = null;
	this->page6 = null;
	this->page7 = null;
	this->page8 = null;
	this->page9 = null;
	this->page10 = null;
	this->page11 = null;
	this->page12 = null;
	this->page13 = null;
	this->page14 = null;
	this->page15 = null;
	this->page16 = null;
	this->page17 = null;
	this->page18 = null;
	this->unkClass = null;
	this->arr1length = 8;
	this->arr1 = new Vector4[this->arr1length];
	this->arr2length = 8;
	this->arr2 = new Vector2[this->arr2length];
	this->arr3length = 2;
	this->arr3 = new float[this->arr3length];
	this->arr4length = 2;
	this->arr4 = new float[this->arr4length];

	for (int i = 0; i < 6; ++i) {
		this->iconsPsm2[i].field3_0xc = 1;
	}
	for (int i = 0x18; i < 0x28; ++i) {
		this->iconsPsm2[i].field3_0xc = 1;
	}
	(this->crashTwinsanityLogo).field3_0xc = 1;
	(this->someIcon2).field3_0xc = 1;
	this->iconsPsm2[0xd].field3_0xc = 1;
	this->iconsPsm2[0xe].field3_0xc = 1;
	this->iconsPsm2[0xf].field3_0xc = 1;
	this->iconsPsm2[0x11].field3_0xc = 1;
	this->iconsPsm2[0x17].field3_0xc = 1;
	(this->materialRelated).field3_0xc = 1;
	(this->uiIcon12).field2_0x8c = this->unkStruct12array;
	this->field1_0x310 = 0;
	this->screenFlags = 0;
	this->field3_0x318 = 0;
	this->field4_0x31c = 0;
	this->screenFlags = this->screenFlags & 0xfffe0203 | 0x202;
	this->field3_0x318 = this->field3_0x318 & 0xfffe3233 | 0x3232;
	this->field4_0x31c = this->field4_0x31c & 0xfffe1819 | 0x1818;
	this->deltaTime = (int)(GLOBAL->TICKS_PER_TIME * GLOBAL->ENV_FLOAT_92_0_15);
	(this->spline0).length = GLOBAL->ENV_FLOAT_92_0_15;
	
	this->field66_0xb00 = 0;
	this->field67_0xb04 = 0;
	this->field68_0xb08 = 0;
	chunkDesc = (ChunkDesc*)(this->iconsPsm2 + 7);

	for (int i = 0; i < 6; ++i) {
		this->iconArray[i] = new OlegModuleIcon(0.5f, &this->iconsPsm2[7 + i]);
	}
	InitModuleMask();
	FUN_000b33f0();

	Vector2 v1(-0.5f, 0.0f);
	Vector2 v2(1.0f, 1.0f); 
	Vector2 v3(0.075f, 0.06f); 
	module75.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2, &v3); //TODO: in case of bug reverse order?

	Vector2 v4(0.5f, 0.764f);
	Vector2 v5(1.0f, 1.0f);
	Vector2 v6(0.5f, 0.764f);
	option02.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v4, &v5, &v6);

	Vector2 v7(0.5f, 0.414);
	Vector2 v8(0.625f, 0.625f);
	Vector2 v9(0.5f, 0.414);
	caption06.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v7, &v8, &v9);
	option02.next = &caption06;

	FUN_000b18e0();
	FUN_000b79f0();
	FUN_000b1a40();
	FUN_000b1c50();
	FUN_000b1d80();

	Vector2 v10(1.0f, 1.0f);
	Vector2 v11(0.5f, 0.1f);
	option16.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v10, &v11);

	FUN_000b7db0();
	FUN_000b1f60();
	FUN_000b21c0();
	FUN_000b22a0();
	FUN_000b3210();

	Vector2 v12(0.0f, -0.5f);
	Vector2 v13(0.5f, 0.5f);
	Vector2 v14(0.1f, 0.16f);
	module76.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v12, &v13, &v14);

	Vector2 v15(0.75f, 0.75f);
	Vector2 v16(0.5f, 0.4f);
	caption20.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v15, &v16);

	Vector2 v17(0.0f, 0.1f);
	Vector2 v18(0.1f, 0.5f);
	Vector2 v19(0.5f, 0.85f);
	uiIcon14.FUN_001a40a0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v17, &v18, &v19);
	uiIcon14.next = &caption20;

	Vector2 v20(-0.5f, 0.0f);
	Vector2 v21(1.5f, 1.5f);
	Vector2 v22(0.185f, 0.2f);
	wumpaCount.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v20, &v21, &v22);

	Vector2 v23(-0.5f, 0.0f);
	Vector2 v24(0.11f, 0.15f);
	Vector2 v25(0.125f, 0.13f);
	uiIcon17.FUN_001a40a0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v23, &v24, &v25);

	Vector2 v26(0.5f, 0.0f);
	Vector2 v27(1.5f, 1.5f);
	Vector2 v28(0.76f, 0.2f);
	label13.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v26, &v27, &v28);

	Vector2 v29(0.5f, 0.0f);
	Vector2 v30(0.16f, 0.15f);
	Vector2 v31(0.83f, 0.13f);
	uiIcon18.FUN_001a40a0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v29, &v30, &v31);

	Vector2 v32(1.0f, 1.0f);
	Vector2 v33(0.75f, 0.92f);
	label14.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v32, &v33);

	Vector2 v34(0.15f, 0.15f);
	Vector2 v35(0.825f, 0.845f);
	uiIcon21.FUN_001a4010(Color(1.0f, 1.0f, 1.0f, 1.0f), &v34, &v35);

	Vector2 v36(0.5f, 0.2f);
	Vector2 v37(0.2f, 0.12f);
	Vector2 v38(0.5f, 0.2f);
	uiIcon20.FUN_001a41b0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v36, &v37, &v38);

	Vector2 v39(0.16f, 0.34f);
	Vector2 v40(0.12f, 0.15f);
	Vector2 v41(0.34f, 0.12f);
	lifeIcon.FUN_001a41b0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v39, &v40, &v41);

	wumpaCount.next = &uiIcon17;
	label13.next = &uiIcon18;
	label14.next = &uiIcon21;
	AssignModuleToSlot(4, &this->uiIcon06);
	AssignModuleToSlot(5, &this->bubble01);
	AssignModuleToSlot(6, &this->bubble02);
	AssignModuleToSlot(7, &this->caption01);
	AssignModuleToSlot(8, &this->caption02);
	AssignModuleToSlot(9, &this->caption03);
	AssignModuleToSlot(0, &this->caption04);
	AssignModuleToSlot(0xb, &this->caption05);
	AssignModuleToSlot(0xc, &this->option01);
	AssignModuleToSlot(0xe, &this->option03);
	AssignModuleToSlot(0xf, &this->uiIcon07);
	AssignModuleToSlot(0, &this->uiIcon01);
	AssignModuleToSlot(1, &this->uiIcon03);
	AssignModuleToSlot(2, &this->uiIcon05);
	AssignModuleToSlot(3, &this->label01);
	AssignModuleToSlot(0x10, &this->option04);
	AssignModuleToSlot(0x11, &this->option05);
	AssignModuleToSlot(0x12, &this->option06);
	AssignModuleToSlot(0x13, &this->bubble07);
	AssignModuleToSlot(0x14, &this->caption10);
	AssignModuleToSlot(0x15, &this->caption12);
	AssignModuleToSlot(0x2f, &this->option07);
	AssignModuleToSlot(0x16, &this->caption13);
	AssignModuleToSlot(0x17, &this->caption15);
	AssignModuleToSlot(0x18, &this->caption17);
	AssignModuleToSlot(0xd, &this->option02);
	AssignModuleToSlot(0x19, &this->option11);
	AssignModuleToSlot(0x1a, &this->option12);
	AssignModuleToSlot(0x1b, &this->option13);
	AssignModuleToSlot(0x1c, &this->option14);
	AssignModuleToSlot(0x1d, &this->caption18);
	AssignModuleToSlot(0x1e, &this->option15);
	AssignModuleToSlot(0x1f, &this->uiIcon13);
	AssignModuleToSlot(0x20, &this->option16);
	AssignModuleToSlot(0x21, &this->label07);
	AssignModuleToSlot(0x22, &this->label08);
	AssignModuleToSlot(0x23, &this->label09);
	AssignModuleToSlot(0x24, &this->uiIcon14);
	AssignModuleToSlot(0x25, &this->label10);
	AssignModuleToSlot(0x26, &this->module75);
	AssignModuleToSlot(0x27, &this->module76);
	AssignModuleToSlot(0x28, &this->wumpaCount);
	AssignModuleToSlot(0x29, &this->label13);
	AssignModuleToSlot(0x2a, &this->uiIcon20);
	AssignModuleToSlot(0x2b, &this->label14);
	AssignModuleToSlot(0x2c, &this->uiIcon22);
	AssignModuleToSlot(0x2d, &this->module86);
	AssignModuleToSlot(0x2e, &this->uiIcon23);
}
Oleg::~Oleg()
{
	delete this->arr1;
	delete this->arr2;
	delete this->arr3;
	delete this->arr4;
	for (int i = 0; i < 6; ++i) {
		delete this->iconArray[i];
	}
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
	Global* GLOBAL = Global::Get();
	(this->uiIcon07).field11_0xb0 = 7.0;
	(this->uiIcon07).field12_0xb4 = GLOBAL->PI_05;
	(this->uiIcon07).field13_0xb8 = GLOBAL->PI_05 * 0.1;
	(this->uiIcon07).field4_0x94 = 3.0;
	(this->uiIcon07).field5_0x98 = 0.1;
	(this->uiIcon07).flags = (this->uiIcon07).flags & 0xffffafff | 0x2800;
	(this->uiIcon07).field13_0x2c = Color(0.0f,0.0f,0.0f,0.5f);
	(this->uiIcon07).field14_0x30.x = 0.01f;
	(this->uiIcon07).field14_0x30.y = 0.01f;

	Vector2 v1(0.5f, 0.764f);
	Vector2 v2(1.0f,1.0f);
	Vector2 v3(0.5f, 0.764f);
	this->option03.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2, &v3);

	Vector2 v4(0.5f, 0.35f);
	Vector2 v5(0.7f, 0.45f);
	Vector2 v6(0.5f, 0.414f);
	this->uiIcon07.FUN_001a41b0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v4, &v5, &v6);
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
		(this->spline0).length = fVar4;
		(this->spline0).repeats = (this->spline0).repeats + 1;
		ShowUI(this,(this->parent).uiPresetMask[0x24].high,(this->parent).uiPresetMask[0x24].low,(int)(TicksPerTime * FLOAT_00386608),(int)(TicksPerTime * FLOAT_0038cac0));
		FUN_001a2670(this,(this->parent).uiPresetMask[0x24].high,(this->parent).uiPresetMask[0x24].low,&this->spline0);
		if ((*(char *)((int)&this->field1_0x310 + 1) == '\0') && (1 < (this->spline0).repeats)){
		(this->spline0).repeats = 1;
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
	Vector2 v1(0.5f, 0.4f);
	Vector2 v2(0.625f, 0.625f);
	Vector2 v3(0.5f, 0.4f);
	this->label07.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2, &v3);
	this->label08.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2, &v3);

	Vector2 v4(0.5f, 0.764f);
	Vector2 v5(1.0f, 1.0f);
	Vector2 v6(0.5f, 0.764f);
	this->option17.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v4, &v5, &v6);

	Vector2 v7(0.5f, 0.1f);
	Vector2 v8(0.625f, 0.625f);
	Vector2 v9(0.0f, -0.5f);
	this->label09.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v7, &v8, &v9);

	Vector2 v10(0.5f, 0.1f);
	Vector2 v11(1.0f, 1.0f);
	Vector2 v12(0.0f, -0.5f);
	this->bubble11.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v10, &v11, &v12);


	Vector2 v13(0.5f, 0.764f);
	Vector2 v14(1.0f, 1.0f);
	Vector2 v15(0.5f, 0.764f);
	this->option18.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v13, &v14, &v15);

	Vector2 v16(0.45f, 0.05f);
	FUN_000ad710(&v16, &this->bubble11);
	(this->label09).next = &this->bubble11;
	(this->label08).next = &this->option17;
	(this->bubble11).next = &this->option18;
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
		page1 = UnkFamily10VM::ConsfxRelated(page1,0);
		}
		this->page1 = page1;
		page2 = (UnkFamily10B *)VirtualPool::AllocateMemory(0x248);
		if (page2 == (UnkFamily10B *)0x0) {
		page2 = (UnkFamily10B *)0x0;
		}
		else {
		page2 = UnkFamily10B::ConsfxRelated(page2);
		}
		this->page2 = page2;
		page3 = (UnkFamily10I *)VirtualPool::AllocateMemory(0xf8);
		if (page3 == (UnkFamily10I *)0x0) {
		page3 = (UnkFamily10I *)0x0;
		}
		else {
		page3 = UnkFamily10I::ConsfxRelated(page3);
		}
		this->page3 = page3;
		page4 = (UnkFamily10L *)VirtualPool::AllocateMemory(0x50);
		if (page4 == (UnkFamily10L *)0x0) {
		page4 = (UnkFamily10L *)0x0;
		}
		else {
		page4 = UnkFamily10L::ConsfxRelated(page4);
		}
		this->page4 = page4;
		page5 = (UnkFamily10M *)VirtualPool::AllocateMemory(0x148);
		if (page5 == (UnkFamily10M *)0x0) {
		page5 = (UnkFamily10M *)0x0;
		}
		else {
		page5 = UnkFamily10M::ConsfxRelated(page5);
		}
		this->page5 = page5;
		page6 = (UnkFamily10N *)VirtualPool::AllocateMemory(0x50);
		if (page6 == (UnkFamily10N *)0x0) {
		page6 = (UnkFamily10N *)0x0;
		}
		else {
		page6 = UnkFamily10N::ConsfxRelated(page6,0);
		}
		this->page6 = page6;
		page7 = (UnkFamily10VA *)VirtualPool::AllocateMemory(0x50);
		if (page7 == (UnkFamily10VA *)0x0) {
		page7 = (UnkFamily10VA *)0x0;
		}
		else {
		page7 = UnkFamily10VA::ConsfxRelated(page7,0);
		}
		this->page7 = page7;
		page8 = (UnkFamily10P *)VirtualPool::AllocateMemory(0x50);
		if (page8 == (UnkFamily10P *)0x0) {
		page8 = (UnkFamily10P *)0x0;
		}
		else {
		page8 = UnkFamily10P::ConsfxRelated(page8,0);
		}
		this->page8 = page8;
		page8 = (UnkFamily10P *)VirtualPool::AllocateMemory(0x50);
		if (page8 == (UnkFamily10P *)0x0) {
		page8 = (UnkFamily10P *)0x0;
		}
		else {
		page8 = UnkFamily10P::ConsfxRelated(page8,0);
		}
		this->page9 = page8;
		page8 = (UnkFamily10P *)VirtualPool::AllocateMemory(0x50);
		if (page8 == (UnkFamily10P *)0x0) {
		page8 = (UnkFamily10P *)0x0;
		}
		else {
		page8 = UnkFamily10P::ConsfxRelated(page8,0);
		}
		this->page10 = page8;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::ConsfxRelated(page14,0,&this->option11);
		}
		this->page11 = page14;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::ConsfxRelated(page14,1,&this->option12);
		}
		this->page12 = page14;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::ConsfxRelated(page14,2,&this->option13);
		}
		this->page13 = page14;
		page14 = (UnkFamily10Q *)VirtualPool::AllocateMemory(0x78);
		if (page14 == (UnkFamily10Q *)0x0) {
		page14 = (UnkFamily10Q *)0x0;
		}
		else {
		page14 = UnkFamily10Q::ConsfxRelated(page14,3,&this->option14);
		}
		this->page14 = page14;
		page15 = (UnkFamily10R *)VirtualPool::AllocateMemory(0x144);
		if (page15 == (UnkFamily10R *)0x0) {
		page15 = (UnkFamily10R *)0x0;
		}
		else {
		page15 = UnkFamily10R::ConsfxRelated(page15,0);
		}
		this->page15 = page15;
		page16 = (UnkFamily10S *)VirtualPool::AllocateMemory(0x54);
		if (page16 == (UnkFamily10S *)0x0) {
		page16 = (UnkFamily10S *)0x0;
		}
		else {
		page16 = UnkFamily10S::ConsfxRelated(page16,mainMenu);
		}
		this->page16 = page16;
		page17 = (UnkFamily10ZA *)VirtualPool::AllocateMemory(0x60);
		if (page17 == (UnkFamily10ZA *)0x0) {
		page17 = (UnkFamily10ZA *)0x0;
		}
		else {
		page17 = UnkFamily10ZA::ConsfxRelated(page17,mainMenu,&this->option18);
		}
		this->page17 = page17;
		page18 = (UnkFamily10VL *)VirtualPool::AllocateMemory(0x50);
		if (page18 == (UnkFamily10VL *)0x0) {
		page18 = (UnkFamily10VL *)0x0;
		}
		else {
		page18 = UnkFamily10VL::ConsfxRelated(page18,0);
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
	Vector2 vec1;
	Vector2 vec2;

	vec1.x = 1.0;
	vec1.y = 1.0;
	vec2.x = 0.15;
	vec2.y = 0.8;
	this->label10.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &vec2, &vec1);
	vec2.x = 0.1;
	vec2.y = 0.1;
	vec1.x = 0.1;
	vec1.y = 0.9;
	this->uiIcon15.FUN_001a4010(Color(1.0f, 1.0f, 1.0f, 1.0f), &vec2, &vec1);
	vec2.x = 1.0;
	vec2.y = 1.0;
	vec1.x = 0.15;
	vec1.y = 0.9;
	this->label11.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &vec2, &vec1);
	vec2.x = 0.1;
	vec2.y = 0.1;
	vec1.x = 0.1;
	vec1.y = 0.9;
	this->uiIcon16.FUN_001a4010(Color(1.0f, 1.0f, 1.0f, 1.0f), &vec2, &vec1);
	(this->label10).next = &this->uiIcon15;
	(this->uiIcon15).next =&this->label11;
	(this->label11).next = &this->uiIcon16;
	return;
}

void Oleg::FUN_000b21c0() {
	Vector2 vec1;
	Vector2 vec2;

	vec1.x = 1.0;
	vec1.y = 1.0;
	vec2.x = 0.5;
	vec2.y = 0.1;
	this->option01.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &vec2, &vec1);
	vec2.x = 1.0;
	vec2.y = 1.0;
	vec1.x = 0.5;
	vec1.y = 0.1;
	this->bubble03.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &vec1, &vec2);
	vec2.x = 0.35;
	vec2.y = 0.05;
	FUN_000ad710(&vec2, &this->bubble03);
	(this->option01).next = &this->bubble03;
	return;
}

void Oleg::FUN_000ad710(Vector2* vec, OlegModuleMenuBubble* bubble)

{
	Global* GLOBAL = Global::Get();
	float fVar1;
	UIElementSimpleShapeA* pUVar2;
	UIElementSimpleShapeA* pUVar3;
	UIElementSimpleShapeA* pUVar4;
	UIElementSimpleShapeA* pUVar5;

	pUVar2 = bubble->FUN_001a0fd0(0, &GLOBAL->ENV_CLASS_94);
	pUVar3 = bubble->FUN_001a0fd0(1, &GLOBAL->ENV_CLASS_94);
	pUVar4 = bubble->FUN_001a0fd0(2, &GLOBAL->ENV_CLASS_94);
	pUVar5 = bubble->FUN_001a0fd0(3, &GLOBAL->ENV_CLASS_94);
	(pUVar2->field11_0x2c).x = vec->x;
	(pUVar2->field11_0x2c).y = vec->y;
	pUVar2->field1_0x1c = Color(0.0745f, 0.37254f,1.0f,1.0f);
	pUVar2->field16_0x38 = &GLOBAL->INT_0039e3f8;
	(pUVar3->field11_0x2c).y = vec->y + 0.003;
	(pUVar3->field11_0x2c).x = vec->x + 0.003;
	pUVar3->field2_0x20 = Color(1.0f, 1.0f, 1.0f, 0.0f);
	(pUVar4->field11_0x2c).y = vec->y + 0.01;
	(pUVar4->field11_0x2c).x = vec->x + 0.01;
	pUVar4->field2_0x20 = Color(1.0f, 1.0f, 1.0f, 0.0f);
	(pUVar5->field11_0x2c).y = vec->y + 0.013;
	(pUVar5->field11_0x2c).x = vec->x + 0.013;
	pUVar5->field2_0x20 = Color(1.0f, 1.0f, 1.0f, 0.0f);
	bubble->field13_0x2c = Color(0.0f,0.0f,0.0f,0.5f);
	bubble->field14_0x30.x = 0.01f;
	bubble->field14_0x30.y = 0.01f;
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
		if (((byte)(this->option11).flags & 0xf) < 2) {
		if (1 < ((byte)(this->option12).flags & 0xf)) {
		pOVar6 = &this->option12;
		goto LAB_000b71d5;
		}
		if (1 < ((byte)(this->option13).flags & 0xf)) {
		pOVar6 = &this->option13;
		goto LAB_000b71d5;
		}
		if (1 < ((byte)(this->option14).flags & 0xf)) {
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
		(this->label10).flags = (this->label10).flags & 0xfffffdff | num1;
		if ((bVar14) && (this->field67_0xb04 != 0)) {
		bVar14 = true;
		}
		else {
		bVar14 = false;
		}
		uVar10 = (this->uiIcon15).flags;
		(this->uiIcon15).flags = uVar10 ^ ((uint)!bVar14 << 9 ^ uVar10) & 0x200;
		(this->label11).flags = (this->label11).flags & 0xfffffdff | num1;
		(this->uiIcon16).flags = (this->uiIcon16).flags & 0xfffffdff | num1;
		if (!bVar13) {
		TwinString::Copy(&(this->wumpaCount).str,wumpaCountStr.value);
		}
		num1 = (this->module75).flags;
		(this->module75).flags = num1 ^ ((uint)!bVar13 << 9 ^ num1) & 0x200;
		num1 = (this->wumpaCount).flags;
		(this->wumpaCount).flags = num1 ^ ((uint)bVar13 << 9 ^ num1) & 0x200;
		if (bVar5) {
		fVar16 = thunk_FUN_00080590((int)local_70);
		(this->module76).field1_0x88 = fVar16 - FLOAT_00386ab4;
		(this->module76).image1 = this->iconsPsm2;
		(this->module76).image2 = &this->someIcon5;
		}
		num1 = (this->module76).flags;
		(this->module76).flags = num1 ^ ((uint)!bVar5 << 9 ^ num1) & 0x200;
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
		if (1 < ((byte)(this->uiIcon18).flags & 0xf)) {
		TwinString::Copy(&(this->label13).str,local_24.value);
		(this->uiIcon18).field1_0x88 = this->iconsPsm2 + (this->chunkDesc->flags >> 8 & 0xf);
		}
		if (1 < ((byte)(this->uiIcon11).flags & 0xf)) {
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
		LAB_000b7613:num1 = (this->uiIcon21).flags;
		(this->uiIcon21).flags = num1 ^ ((uint)!bVar14 << 9 ^ num1) & 0x200;
		if ((bVar15) || (bVar13)) {
		bVar13 = false;
		}
		else {
		bVar13 = true;
		}
		num1 = (this->label14).flags;
		(this->label14).flags = num1 ^ ((uint)!bVar13 << 9 ^ num1) & 0x200;
		if (1 < ((byte)(this->uiIcon14).flags & 0xf)) {
		num1 = (this->caption20).flags;
		if ((uint)this->field5_0x320 < 2) {
		(this->caption20).flags = num1 & 0xfffffdff;
		*(uint **)&(this->uiIcon14).field_0x28 = &ENV_FLAGS_95;
		}
		else {
		(this->caption20).flags = num1 | 0x200;
		*(undefined4 *)&(this->uiIcon14).field_0x28 = 0;
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
		(this->uiIcon09).field13_0x2c = FLOAT_0039e2f8;
		(this->uiIcon09).field14_0x30 = FLOAT_0039e2f0;
		(this->uiIcon09).field15_0x34 = FLOAT_0039e2f4;
		fVar12 = FLOAT_0038a830;
		(this->uiIcon09).flags = (this->uiIcon09).flags & 0xfffffdff;
		(this->uiIcon09).field7_0x94 = fVar12;
		(this->uiIcon09).field8_0x98 = FLOAT_0038bd20;
		}
		else {
		if ((*(byte *)&this->field3_0x318 & 1) == 0) {
		this->field3_0x318 = this->field3_0x318 ^ (uVar10 << 9 ^ this->field3_0x318) & 0x1fe00;
		thunk_FUN_000b4f10(this,1,'\0');
		}
		puVar1 = &(this->uiIcon09).flags;
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
	Global* GLOBAL = Global::Get();

	OlegModuleMenuBubble* this_00;
	Matrix4* pMVar1;
	UNV026* pUVar2;
	UNV027* pUVar3;
	UIElementSimpleShapeA* element0;
	UIElementSimpleShapeA* element1;
	UIElementSimpleShapeA* element2;
	UIElementSimpleShapeA* element3;
	UIElementSimpleShapeA* element4;
	UIElementSimpleShapeA* element5;
	UIElementSimpleShapeA* element6;
	UIElementSimpleShapeA* element7;
	float fVar10;
	uint local_40;
	Vector2 local_2c;

	element0 = this->bubble01.FUN_001a0fd0(0, &GLOBAL->ENV_CLASS_94);
	element1 = this->bubble01.FUN_001a0fd0(1, &GLOBAL->ENV_CLASS_94);
	element2 = this->bubble01.FUN_001a0fd0(2, &GLOBAL->ENV_CLASS_94);
	element3 = this->bubble01.FUN_001a0fd0(3, &GLOBAL->ENV_CLASS_94);
	element4 = this->bubble01.FUN_001a0fd0(4, &GLOBAL->ENV_CLASS_94);
	element5 = this->bubble01.FUN_001a0fd0(5, &GLOBAL->ENV_CLASS_94);
	element6 = this->bubble01.FUN_001a0fd0(6, &GLOBAL->ENV_CLASS_94);
	element7 = this->bubble01.FUN_001a0fd0(7, &GLOBAL->ENV_CLASS_94);

	for (int i = 0; i < 30; ++i) {
		float fVal = i;
		float a = (65536.0f / GLOBAL->PI_2) * fVal * 0.1047198f;
		float sinVal = Global::TwinSin(&a);
		float b = sinVal * 0.1f + 1.0f;
		GLOBAL->ENV_PTR_95_0X78->array[i] = b;
		if (i == 0) {
			GLOBAL->DAT_003e2dfc = b;
		}
	}

	if ((GLOBAL->ENV_FLAGS_95 & 0x8000) == 0) {
		GLOBAL->ENV_FLAGS_95 = GLOBAL->ENV_FLAGS_95 & 0xffff;
		GLOBAL->ENV_FLAGS_95 = GLOBAL->ENV_FLAGS_95 | 0x8000;
		GLOBAL->INT_003e2df0 = 0;
		GLOBAL->INT_003e2df4 = (GLOBAL->TICKS_PER_TIME * 0.5);
	}

	GLOBAL->ENV_PTR_97_0X40->m11 = 0.96;
	GLOBAL->ENV_PTR_97_0X40->m12 = 0.96;
	GLOBAL->ENV_PTR_97_0X40->m13 = 0.97;
	GLOBAL->ENV_PTR_97_0X40->m14 = 0.97;
	GLOBAL->ENV_PTR_97_0X40->m21 = 0.98;
	GLOBAL->ENV_PTR_97_0X40->m22 = 0.98;
	GLOBAL->ENV_PTR_97_0X40->m23 = 0.98;
	GLOBAL->ENV_PTR_97_0X40->m24 = 0.98;
	GLOBAL->ENV_PTR_97_0X40->m31 = 0.98;
	GLOBAL->ENV_PTR_97_0X40->m32 = 0.98;
	GLOBAL->ENV_PTR_97_0X40->m33 = 0.99;
	GLOBAL->ENV_PTR_97_0X40->m34 = 0.99;
	GLOBAL->ENV_PTR_97_0X40->m41 = 1.0;
	GLOBAL->ENV_PTR_97_0X40->m42 = 1.0;
	GLOBAL->ENV_PTR_97_0X40->m43 = 1.02;
	GLOBAL->ENV_PTR_97_0X40->m44 = 1.02;

	GLOBAL->ENV_PTR_96_0X40->m11 = 1.03;
	GLOBAL->ENV_PTR_96_0X40->m12 = 1.03;
	GLOBAL->ENV_PTR_96_0X40->m13 = 1.02;
	GLOBAL->ENV_PTR_96_0X40->m14 = 1.02;
	GLOBAL->ENV_PTR_96_0X40->m21 = 1.02;
	GLOBAL->ENV_PTR_96_0X40->m22 = 1.02;
	GLOBAL->ENV_PTR_96_0X40->m23 = 1.02;
	GLOBAL->ENV_PTR_96_0X40->m24 = 1.02;
	GLOBAL->ENV_PTR_96_0X40->m31 = 1.01;
	GLOBAL->ENV_PTR_96_0X40->m32 = 1.01;
	GLOBAL->ENV_PTR_96_0X40->m33 = 1.005;
	GLOBAL->ENV_PTR_96_0X40->m34 = 1.005;
	GLOBAL->ENV_PTR_96_0X40->m41 = 0.988;
	GLOBAL->ENV_PTR_96_0X40->m42 = 0.988;
	GLOBAL->ENV_PTR_96_0X40->m43 = 0.97;
	GLOBAL->ENV_PTR_96_0X40->m44 = 0.97;

	GLOBAL->ENV_PTR_98_0X100->mat[0].m11 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m12 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m13 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m14 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m21 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m22 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m23 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m24 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m31 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m32 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m33 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m34 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m41 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m42 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m43 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[0].m44 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m11 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m12 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m13 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m14 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m21 = 0.3;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m23 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m24 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m22 = 0.788;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m31 = 0.55;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m32 = 0.925;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m33 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m34 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m41 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m42 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m43 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[1].m44 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m11 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m12 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m13 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m14 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m21 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m22 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m23 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m24 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m31 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m32 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m33 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m34 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m41 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m42 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m43 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[2].m44 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m11 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m12 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m13 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m14 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m21 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m22 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m23 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m24 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m33 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m34 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m31 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m32 = 0.588;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m43 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m44 = 1.0;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m41 = 0.1;
	GLOBAL->ENV_PTR_98_0X100->mat[3].m42 = 0.588;

	GLOBAL->ENV_PTR_99_0X80->mat[0].m13 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m14 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m11 = 0.1;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m12 = 0.588;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m23 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m24 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m22 = 0.6;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m21 = 0.1;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m33 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m34 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m31 = 0.4;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m32 = 0.8;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m43 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m44 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m41 = 0.55;
	GLOBAL->ENV_PTR_99_0X80->mat[0].m42 = 0.925;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m13 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m14 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m12 = 0.68;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m11 = 0.1;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m23 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m24 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m21 = 0.1;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m22 = 0.4;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m33 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m34 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m31 = 0.1;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m32 = 0.35;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m43 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m44 = 1.0;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m41 = 0.1;
	GLOBAL->ENV_PTR_99_0X80->mat[1].m42 = 0.588;

	GLOBAL->ENV_PTR_97_0X40 = &GLOBAL->ENV_PTR_99_0X80->mat[0];

	Vector2 v1(0.9, 0.92);
	Vector2 v2(0.625, 0.625);
	this->caption01.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2);

	Vector2 v3(0.9, 0.92);
	Vector2 v4(0.625, 0.625);
	this->caption02.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v3, &v4);

	Vector2 v5(0.075, 0.92);
	Vector2 v6(0.625, 0.625);
	this->caption03.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v5, &v6);

	Vector2 v7(0.075, 0.87);
	Vector2 v8(0.75, 0.75);
	this->caption04.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v7, &v8);

	Vector2 v9(0.9, 0.87);
	Vector2 v10(0.75, 0.75);
	this->caption05.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v9, &v10);

	Vector2 v11(0.5, 0.414);
	Vector2 v12(1.0, 1.0);
	Vector2 v13(0.5, 0.414);
	this->bubble01.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v11, &v12, &v13);


	Vector2 v14(0.5, 0.764);
	Vector2 v15(1.0, 1.0);
	Vector2 v16(0.5, 0.764);
	this->bubble02.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v14, &v15, &v16);

	element0->field10_0x44 = Color(0.666666, 0.039215, 0.0, 0.0);
	element1->field10_0x44 = Color(0.666666, 0.039215, 0.0, 0.0);
	element2->field10_0x44 = Color(0.780392, 0.0666666, 0.0, 0.0);
	element3->field10_0x44 = Color(0.780392, 0.0666666, 0.0, 0.0);
	element4->field10_0x44 = Color(0.666666, 0.039215, 0.0, 0.0);
	element5->field10_0x44 = Color(0.666666, 0.039215, 0.0, 0.0);
	element6->field10_0x44 = Color(0.666666, 0.039215, 0.0, 0.0);
	element7->field10_0x44 = Color(0.666666, 0.039215, 0.0, 0.0);

	element0->field1_0x1c = Color(0.098039, 0.584313, 1.0, 1.0);
	element0->field2_0x20 = Color(0.098039, 0.584313, 1.0, 1.0);
	element1->field2_0x20 = Color(1.0, 1.0, 1.0, 1.0);
	element2->field2_0x20 = Color(1.0, 1.0, 1.0, 1.0);
	element3->field2_0x20 = Color(0.098039, 0.584313, 1.0, 1.0);
	element4->field7_0x38 = &GLOBAL->INT_0039e3f0;
	element5->field2_0x20 = Color(1.0, 1.0, 1.0, 1.0);
	element6->field2_0x20 = Color(1.0, 1.0, 1.0, 1.0);
	element7->field2_0x20 = Color(1.0, 1.0, 1.0, 0.0);

	(element0->field5_0x2c).x = 0.17;
	(element0->field5_0x2c).y = 0.15;
	(element1->field5_0x2c).x = 0.173;
	(element1->field5_0x2c).y = 0.153;
	(element2->field5_0x2c).x = 0.3;
	(element2->field5_0x2c).y = 0.25;
	(element3->field5_0x2c).x = 0.303;
	(element3->field5_0x2c).y = 0.253;
	(element4->field5_0x2c).x = 0.375;
	(element4->field5_0x2c).y = 0.35;
	(element5->field5_0x2c).x = 0.378;
	(element5->field5_0x2c).y = 0.353;
	(element6->field5_0x2c).x = 0.385;
	(element6->field5_0x2c).y = 0.36;
	(element7->field5_0x2c).x = 0.388;
	(element7->field5_0x2c).y = 0.363;
	(this->bubble01).flags = (this->bubble01).flags & 0xffff97ff | 0x1000;

	Vector2 v17(0.12, 0.16);
	FUN_000ad710(&v17, &this->bubble02);

	(this->uiIcon06).color2 = Color(0.749019, 0.0, 0.0, 0.0);
	(this->uiIcon06).color1 = Color(0.0, 0.0, 0.0, 0.0);
	(this->uiIcon06).flags = (this->uiIcon06).flags & 0xffff8fff | 0x800;
	return;
}

void Oleg::FUN_000b79f0() {
	(this->uiIcon01).color2 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon01).color1 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon01).array[3].x = 0.0f;
	(this->uiIcon01).array[3].y = 0.0f;
	(this->uiIcon01).array[2].x = 0.0f;
	(this->uiIcon01).array[2].y = -0.15f;
	(this->uiIcon01).array[7].x = 1.0f;
	(this->uiIcon01).array[7].y = 0.15f;
	(this->uiIcon01).array[6].x = 1.0f;
	(this->uiIcon01).array[6].y = 0.0f;
	(this->uiIcon01).flags = (this->uiIcon01).flags & 0xffff97ff | 0x1000;

	(this->uiIcon02).color2 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon02).color1 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon02).array[3].x = 0.0f;
	(this->uiIcon02).array[3].y = 0.85f;
	(this->uiIcon02).array[2].x = 0.0f;
	(this->uiIcon02).array[2].y = 1.0f;
	(this->uiIcon02).array[7].x = 1.0f;
	(this->uiIcon02).array[7].y = 1.0f;
	(this->uiIcon02).array[6].x = 1.0f;
	(this->uiIcon02).array[6].y = 1.15f;
	(this->uiIcon02).flags = (this->uiIcon02).flags & 0xffff97ff | 0x1000;

	(this->uiIcon03).color1 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon03).color2 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon03).flags = (this->uiIcon03).flags & 0xffff8fff | 0x800;

	(this->uiIcon04).field11_0xb0 = 7.0;
	(this->uiIcon04).field12_0xb4 = 1.5707964;
	(this->uiIcon04).field13_0xb8 = 1.5707964 * 0.1;
	(this->uiIcon04).field4_0x94 = 3.0;
	(this->uiIcon04).field5_0x98 = 0.1;
	(this->uiIcon04).flags = (this->uiIcon04).flags & 0xffffafff | 0x2800;
	Vector2 v1(0.195f, 0.84f);
	Vector2 v2(0.24f, 0.16f);
	this->uiIcon04.FUN_001a4010(Color(1.0f, 1.0f, 1.0f, 0.5f),&v1,&v2);
	(this->uiIcon04).flags = (this->uiIcon04).flags & 0xffffafff | 0x2800;

	(this->uiIcon05).color2 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon05).color1 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon05).array[3].x = 0.0f;
	(this->uiIcon05).array[3].y = 0.84f;
	(this->uiIcon05).array[2].x = 0.0f;
	(this->uiIcon05).array[2].y = 0.84f;
	(this->uiIcon05).array[7].x = 1.0f;
	(this->uiIcon05).array[7].y = 1.0f;
	(this->uiIcon05).array[6].x = 1.0f;
	(this->uiIcon05).array[6].y = 1.0f;
	(this->uiIcon05).flags = (this->uiIcon05).flags & 0xffff97ff | 0x1000;

	(this->label01).color2 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->label01).color1 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->label01).array[3].x = 0.5f;
	(this->label01).array[3].y = 0.88f;
	(this->label01).array[2].x = 0.5f;
	(this->label01).array[2].y = 0.88f;
	(this->label01).array[7].x = 0.5f;
	(this->label01).array[7].y = 0.5f;
	(this->label01).array[6].x = 0.5f;
	(this->label01).array[6].y = 0.5f;
	(this->uiIcon01).next = &this->uiIcon02;
	(this->uiIcon03).next = &this->uiIcon04;
}

void Oleg::FUN_000b33f0()
{
	Global* GLOBAL = Global::Get();
	ShaderProgramAbstract* shader = new ShaderProgramAbstract();
	shader->id = 0xe;
	UIElementAbstract* uielement;
	int iVar1;
	GLOBAL->ENV_CLASS_94.shaderType = 0x18;
	GLOBAL->ENV_CLASS_94.field6_0x18 = 2;
	GLOBAL->ENV_CLASS_94.field7_0x1c = 0;
	GLOBAL->ENV_CLASS_94.shaderProgramCnt = 1;
	GLOBAL->PTR_003e2d28 = shader;
	GLOBAL->ENV_CLASS_94.shaderPrograms[0] = shader;
	(shader->vec0).x = 1.0;
	(shader->vec0).y = 1.0;
	(shader->vec0).z = 1.0;
	(shader->vec0).w = 1.0;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags | 1;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags & 0xffffffe1;
	GLOBAL->PTR_003e2d28->states = GLOBAL->PTR_003e2d28->states | 0x8000000;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags & 0xffffffdf;
	GLOBAL->PTR_003e2d28->states = GLOBAL->PTR_003e2d28->states & 0xfeffffff;
	GLOBAL->PTR_003e2d28->states = GLOBAL->PTR_003e2d28->states & 0xfdffffff;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags & 0xfff7ffff;
	GLOBAL->PTR_003e2d28->states = GLOBAL->PTR_003e2d28->states & 0xfffffff8;
	GLOBAL->PTR_003e2d28->states = GLOBAL->PTR_003e2d28->states & 0xffffffc7;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags & 0xfc7fffff;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags | 0x4000000;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags & 0xdfffffff;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags & 0xbfffffff;
	GLOBAL->PTR_003e2d28->flags = GLOBAL->PTR_003e2d28->flags & 0xf7ffffff;
	GLOBAL->PTR_003e2d28->EmptyFunction();
	this->someIcon1.ReplaceShader(&GLOBAL->ENV_CLASS_94);
	this->crashTwinsanityLogo.ReplaceShader(&GLOBAL->ENV_CLASS_94);
	this->someIcon2.ReplaceShader(&GLOBAL->ENV_CLASS_94);
	this->someIcon3.ReplaceShader(&GLOBAL->ENV_CLASS_94);
	this->someIcon4.ReplaceShader(&GLOBAL->ENV_CLASS_94);
	this->someIcon5.ReplaceShader(&GLOBAL->ENV_CLASS_94);
	return;
}

void Oleg::FUN_000b22a0() {
	Global* GLOBAL = Global::Get();

	Vector2 v1(0.5f, 0.764f);
	Vector2 v2(1.0f, 1.0f);
	Vector2 v3(0.5f, 0.764f);
	this->option04.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2, &v3);

	Vector2 v4(0.5f, 0.764f);
	Vector2 v5(1.0f, 1.0f);
	Vector2 v6(0.5f, 0.764f);
	this->option05.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v4, &v5, &v6);

	Vector2 v7(0.5f, 0.764f);
	Vector2 v8(1.0f, 1.0f);
	Vector2 v9(0.5f, 0.764f);
	this->option06.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v7, &v8, &v9);

	Vector2 v10(0.5f, 0.3f);
	Vector2 v11(1.0f, 1.0f);
	Vector2 v12(0.5f, 0.25f);
	this->caption11.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v10, &v11, &v12);

	Vector2 v13(0.5f, 0.414);
	Vector2 v14(0.7f, 0.7f);
	Vector2 v15(0.5f, 0.414);
	this->caption07.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v13, &v14, &v15);

	Vector2 v16(0.5f, 0.764f);
	Vector2 v17(1.0f, 1.0f);
	Vector2 v18(0.5f, 0.764f);
	this->option07.next = &this->caption09;
	this->caption07.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v16, &v17, &v18);

	Vector2 v19(0.5f, 0.42f);
	Vector2 v20(0.7f, 0.7f);
	Vector2 v21(0.5f, 0.5f);
	this->caption09.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v19, &v20, &v21);

	Vector2 v22(0.5f, 0.42f);
	Vector2 v23(0.7f, 0.7f);
	Vector2 v24(0.5f, 0.5f);
	this->caption08.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v22, &v23, &v24);

	Vector2 v25(0.5f, 0.42f);
	Vector2 v26(0.7f, 0.7f);
	Vector2 v27(0.5f, 0.5f);
	this->caption10.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v25, &v26, &v27);

	Vector2 v28(0.5f, 0.4f);
	Vector2 v29(0.8f, 0.8f);
	Vector2 v30(0.5f, 0.5f);
	this->caption12.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v28, &v29, &v30);


	Vector2 v31(0.5f, 0.25f);
	Vector2 v32(0.85f, 0.85f);
	Vector2 v33(0.5f, 0.414f);
	this->caption13.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v31, &v32, &v33);

	Vector2 v34(0.5f, 0.4f);
	Vector2 v35(0.625f, 0.625f);
	Vector2 v36(0.5f, 0.414f);
	this->caption14.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v34, &v35, &v36);

	Vector2 v37(0.5f, 0.764f);
	Vector2 v38(1.0f, 1.0f);
	Vector2 v39(0.5f, 0.414f);
	this->option08.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v37, &v38, &v39);

	Vector2 v40(0.5f, 0.15f);
	Vector2 v41(0.75f, 0.75f);
	Vector2 v42(0.5f, 0.414f);
	this->caption15.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v40, &v41, &v42);

	Vector2 v43(0.5f, 0.4f);
	Vector2 v44(0.625f, 0.625f);
	Vector2 v45(0.5f, 0.414f);
	this->caption16.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v43, &v44, &v45);

	Vector2 v46(0.5f, 0.675f);
	Vector2 v47(0.1f, 0.075f);
	Vector2 v48(0.5f, 0.764f);
	this->uiIcon08.FUN_001a41b0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v46, &v47, &v48);

	Vector2 v49(0.5f, 0.764f);
	Vector2 v50(1.0f, 1.0f);
	Vector2 v51(0.5f, 0.764f);
	this->option09.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v49, &v50, &v51);

	Vector2 v52(0.5f, 0.4f);
	Vector2 v53(0.625f, 0.625f);
	Vector2 v54(0.5f, 0.414f);
	this->caption16.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v52, &v53, &v54);

	Vector2 v55(0.5f, 0.764f);
	Vector2 v56(1.0f, 1.0f);
	Vector2 v57(0.5f, 0.764f);
	this->option10.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v55, &v56, &v57);

	(this->caption11).next = &this->caption12;
	(this->caption14).next = &this->option08;
	(this->caption15).next = &this->uiIcon08;
	(this->uiIcon08).next = &this->caption16;
	(this->option05).next = &this->caption07;
	(this->caption16).next = &this->option09;
	(this->option06).next = &this->caption08;
	(this->caption13).next = &this->caption14;
	(this->caption17).next = &this->option10;
	UIElementSimpleShapeA* shapeA0 = this->bubble07.FUN_001a0fd0(0, &GLOBAL->ENV_CLASS_94);
	UIElementSimpleShapeA* shapeA1 = this->bubble07.FUN_001a0fd0(1, &GLOBAL->ENV_CLASS_94);
	UIElementSimpleShapeA* shapeB0 = this->bubble08.FUN_001a0fd0(0, &GLOBAL->ENV_CLASS_94);
	UIElementSimpleShapeA* shapeB1 = this->bubble08.FUN_001a0fd0(1, &GLOBAL->ENV_CLASS_94);
	UIElementSimpleShapeA* shapeB2 = this->bubble08.FUN_001a0fd0(2, &GLOBAL->ENV_CLASS_94);
	UIElementSimpleShapeA* shapeB3 = this->bubble08.FUN_001a0fd0(3, &GLOBAL->ENV_CLASS_94);

	shapeA0->field1_0x1c = Color(0.09803f, 0.58431f, 1.0f, 1.0f);
	shapeA0->field7_0x38 = &GLOBAL->INT_0039e3f0;
	(shapeA0->field5_0x2c).x = 0.075;
	(shapeA0->field5_0x2c).y = 0.1;

	shapeA1->field2_0x20 = Color(0.09803f, 0.58431f, 1.0f, 0.0f);
	(shapeA1->field5_0x2c).x = 0.077;
	(shapeA1->field5_0x2c).y = 0.102;
	shapeB0->field11_0x48 = Color(0.40392f, 0.90196f,1.0f,1.0f);
	shapeB0->field12_0x4c = Color(0.75686f, 0.33725f, 0.0f, 0.0f);
	shapeB0->field1_0x1c = Color(1.0f, 1.0f, 1.0f, 1.0f);
	shapeB0->field2_0x20 = Color(1.0f, 1.0f, 1.0f, 1.0f);
	shapeB0->field8_0x3c = &GLOBAL->INT_0039e3e0;
	shapeB0->field9_0x40 = &GLOBAL->INT_0039e3e8;
	shapeB0->field10_0x44 = Color(0.93333f, 0.054901f, 0.0f, 0.0f);
	shapeB0->field3_0x24.x = 0.33;
	shapeB0->field3_0x24.y = 0.308;
	(shapeB0->field5_0x2c).x = 0.42;
	(shapeB0->field5_0x2c).y = 0.392;
	shapeB1->field11_0x48 = Color(0.40392f, 0.90196f, 1.0f, 1.0f);
	shapeB1->field12_0x4c = Color(0.75686f, 0.33725f, 0.0f, 0.0f);
	shapeB1->field1_0x1c = Color(1.0f, 1.0f, 1.0f, 0.0f);
	shapeB1->field2_0x20 = Color(1.0f, 1.0f, 1.0f, 1.0f);
	shapeB1->field8_0x3c = &GLOBAL->INT_0039e3e0;
	shapeB1->field9_0x40 = &GLOBAL->INT_0039e3e0;
	shapeB1->field10_0x44 = Color(0.93333f, 0.054901f, 0.0f, 0.0f);
	shapeB1->field3_0x24.x = 0.325;
	shapeB1->field3_0x24.y = 0.303;
	(shapeB1->field5_0x2c).x = 0.33;
	(shapeB1->field5_0x2c).y = 0.308;
	shapeB2->field11_0x48 = Color(0.40392f, 0.90196f, 1.0f, 1.0f);
	shapeB2->field12_0x4c = Color(0.75686f, 0.33725f, 0.0f, 0.0f);
	shapeB2->field1_0x1c = Color(1.0f, 1.0f, 1.0f, 1.0f);
	shapeB2->field2_0x20 = Color(1.0f, 1.0f, 1.0f, 0.0f);
	shapeB2->field8_0x3c = &GLOBAL->INT_0039e3e8;
	shapeB2->field9_0x40 = &GLOBAL->INT_0039e3e8;
	shapeB2->field10_0x44 = Color(0.93333f, 0.054901f, 0.0f, 0.0f);
	shapeB2->field3_0x24.x = 0.42;
	shapeB2->field3_0x24.y = 0.392;
	(shapeB2->field5_0x2c).x = 0.425;
	(shapeB2->field5_0x2c).y = 0.397;
	shapeB3->field11_0x48 = Color(0.113725f, 0.90588f, 1.0f, 1.0f);
	shapeB3->field12_0x4c = Color(0.33333f, 0.33333f, 0.0f, 0.0f);
	shapeB3->field1_0x1c = Color(0.32156f, 1.0f, 0.89803f, 1.0f);
	shapeB3->field2_0x20 = Color(0.32156f, 1.0f, 0.89803f, 1.0f);
	shapeB3->field8_0x3c = &GLOBAL->INT_0039e3e0;
	shapeB3->field9_0x40 = &GLOBAL->INT_0039e3e8;
	shapeB3->field10_0x44 = Color(0.93333f, 0.054901f, 0.0f, 0.0f);
	shapeB3->field3_0x24.x = 0.338;
	shapeB3->field3_0x24.y = 0.315;
	(shapeB3->field5_0x2c).x = 0.413;
	(shapeB3->field5_0x2c).y = 0.385;

	(this->bubble08).cnt |= 0x1000000;
	Vector2 v57fuckme(0.066f, 0.088f);
	FUN_000ad710(&v57fuckme, &this->bubble04);

	Vector2 v58(0.066f, 0.088f);
	FUN_000ad710(&v58, &this->bubble05);

	Vector2 v59(0.066f, 0.088f);
	FUN_000ad710(&v59, &this->bubble06);


	Vector2 v60(0.71f, 0.564f);
	Vector2 v61(1.0f, 1.0f);
	Vector2 v62(0.5f, 0.5f);
	this->bubble07.UnkFun( Color(1.0f, 1.0f, 1.0f, 1.0f), &v60, &v61, &v62);

	Vector2 v63(0.71f, 0.564f);
	Vector2 v64(1.0f, 1.0f);
	Vector2 v65(0.5f, 0.5f);
	this->progressPercent.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v63, &v64, &v65);

	Vector2 v66(0.53f, 0.422f);
	Vector2 v67(1.0f, 1.0f);
	Vector2 v68(0.5f, 0.5f);
	this->bubble08.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v66, &v67, &v68);

	Vector2 v69(0.19f, 0.214f);
	Vector2 v70(1.0f, 1.0f);
	Vector2 v71(-0.5f, 0.0f);
	this->bubble04.UnkFun(Color(1.0f, 1.0f, 1.0f, 1.0f), &v69, &v70, &v71);

	Vector2 v72(0.175f, 0.214f);
	Vector2 v73(1.0f, 1.0f);
	Vector2 v74(-0.5f, 0.0f);
	this->label03.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v72, &v73, &v74);

	Vector2 v75(0.213f, 0.199f);
	Vector2 v76(0.1f, 0.13f);
	Vector2 v77(-0.5f, 0.0f);
	this->uiIcon10.FUN_001a40a0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v75, &v76, &v77);

	Vector2 v78(0.2f, 0.444f);
	Vector2 v79(1.0f, 1.0f);
	Vector2 v80(-0.5f, 0.0f);
	this->bubble05.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v78, &v79, &v80);

	Vector2 v81(0.168f, 0.454f);
	Vector2 v82(1.0f, 1.0f);
	Vector2 v83(-0.5f, 0.0f);
	this->label04.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v81, &v82, &v83);

	Vector2 v84(0.213f, 0.427f);
	Vector2 v85(0.13f, 0.13f);
	Vector2 v86(-0.5f, 0.0f);
	this->uiIcon11.FUN_001a40a0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v84, &v85, &v86);

	Vector2 v87(0.225f, 0.664f);
	Vector2 v88(1.0f, 1.0f);
	Vector2 v89(-0.5f, 0.0f);
	this->bubble06.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v87, &v88, &v89);

	Vector2 v90(0.2f, 0.665f);
	Vector2 v91(1.0f, 1.0f);
	Vector2 v92(-0.5f, 0.0f);
	this->label05.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v90, &v91, &v92);

	Vector2 v93(0.245f, 0.664f);
	Vector2 v94(0.125f, 0.28f);
	Vector2 v95(-0.5f, 0.0f);
	this->uiIcon12.FUN_001a40a0(Color(1.0f, 1.0f, 1.0f, 1.0f), &v93, &v94, &v95);

	(this->uiIcon10).field4_0x94 = 1.3;
	(this->uiIcon10).field5_0x98 = 0.1;
	(this->uiIcon11).field7_0xa0 = 0.37;
	(this->uiIcon11).field9_0xa8 = 0.0037;
	(this->uiIcon11).field11_0xb0 = 1.0;
	(this->uiIcon11).field13_0xb8 = 0.7853982 * 0.25;
	(this->uiIcon12).field7_0xa0 = 0.7;
	(this->uiIcon12).field9_0xa8 = 0.005;

	int idx = 0;
	for (int i = 1; i < 13; i += 2) {
		Vector2 out;
		OlegModuleIcon* ptr = this->iconArray[idx];
		float val = i * 0.08333334;
		this->bubble08.FUN_001a1020(val, &out);
		Vector2 vec1(0.5f, 0.0f);
		Vector2 vec2(0.1f, 0.1f);
		ptr->FUN_001a40a0(Color(1.0f, 1.0f, 1.0f, 1.0f), &out, &vec2, &vec1);
		++idx;
	}
	(this->bubble07).next = &this->progressPercent;
	(this->bubble05).next = &this->bubble06;
	(this->bubble06).next = &this->uiIcon10;
	(this->uiIcon10).next = &this->label03;
	(this->label03).next = &this->label04;
	(this->label04).next = &this->uiIcon11;
	(this->uiIcon11).next = &this->label05;
	(this->label05).next = &this->uiIcon12;
	(this->uiIcon12).next = this->iconArray[0];
	(this->progressPercent).next = &this->bubble08;
	(this->uiIcon09).next = &this->bubble04;
	(this->bubble04).next = &this->bubble05;
	(this->bubble08).next = &this->uiIcon09;
	this->iconArray[0]->next = this->iconArray[1];
	this->iconArray[1]->next = this->iconArray[2];
	this->iconArray[2]->next = this->iconArray[3];
	this->iconArray[3]->next = this->iconArray[4];
	this->iconArray[4]->next = this->iconArray[5];
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
		MemoryStream::ConsfxRelated(&local_14,memptr,length,0,0x40);
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
		pFVar3 = FileResourceDescG::ConsfxRelated(pFVar3,local_20.value,&reader->parent,0xd);
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
	//Letterboxes 
	this->uiPresetMask[0].high = 9;
	this->uiPresetMask[0].low = 0;
	//Logo at bottom left 
	this->uiPresetMask[1].high = 2;
	this->uiPresetMask[1].low = 0;
	//Dimmed stripe for text 
	this->uiPresetMask[2].high = 0xc;
	this->uiPresetMask[2].low = 0;
	//Dimmed screen 
	this->uiPresetMask[3].high = 0x10;
	this->uiPresetMask[3].low = 0;
	//B 
	this->uiPresetMask[4].high = 0x80;
	this->uiPresetMask[4].low = 0;
	//Y 
	this->uiPresetMask[5].high = 0x100;
	this->uiPresetMask[5].low = 0;
	//A 
	this->uiPresetMask[6].high = 0x200;
	this->uiPresetMask[6].low = 0;
	//L 
	this->uiPresetMask[7].high = 0x400;
	this->uiPresetMask[7].low = 0;
	//R 
	this->uiPresetMask[8].high = 0x800;
	this->uiPresetMask[8].low = 0;
	//Options 
	this->uiPresetMask[9].high = 0x12b0;
	this->uiPresetMask[9].low = 0;
	//Placeholder message 
	this->uiPresetMask[10].high = 0x22f0;
	this->uiPresetMask[10].low = 0;
	//Tile screen menu 
	this->uiPresetMask[0xb].high = 0xc2f0;
	this->uiPresetMask[0xb].low = 0;
	//In-game Main Menu 
	this->uiPresetMask[0xc].high = 0x90ef0;
	this->uiPresetMask[0xc].low = 0;
	//Disable autosave? 
	this->uiPresetMask[0xd].high = 0x20ef0;
	this->uiPresetMask[0xd].low = 0;
	//Are you sure you want to quit 
	this->uiPresetMask[0xe].high = 0x40ef0;
	this->uiPresetMask[0xe].low = 0;
	//Reconnect controller 
	this->uiPresetMask[0xf].high = 0x100030;
	this->uiPresetMask[0xf].low = 0;
	//Problem with the disk 
	this->uiPresetMask[0x10].high = 0x200030;
	this->uiPresetMask[0x10].low = 0;
	//Autosave disabled 
	this->uiPresetMask[0x11].high = 0x400270;
	this->uiPresetMask[0x11].low = 0;
	//Autosave enables 
	this->uiPresetMask[0x12].high = 0x800270;
	this->uiPresetMask[0x12].low = 0;
	//Autosave failed 
	this->uiPresetMask[0x13].high = 0x1000270;
	this->uiPresetMask[0x13].low = 0;
	//Earth hub gems 
	this->uiPresetMask[0x14].high = 0x22000cb0;
	this->uiPresetMask[0x14].low = 0;
	//Hub gems 
	this->uiPresetMask[0x15].high = 0x24000cb0;
	this->uiPresetMask[0x15].low = 0;
	//Hub gems 
	this->uiPresetMask[0x16].high = 0x28000cb0;
	this->uiPresetMask[0x16].low = 0;
	//Hub gems 
	this->uiPresetMask[0x17].high = 0x30000cb0;
	this->uiPresetMask[0x17].low = 0;
	//Extras screen 
	this->uiPresetMask[0x18].high = 0x40000eb0;
	this->uiPresetMask[0x18].low = 0;
	//Gallery 
	this->uiPresetMask[0x19].high = 0x80000080;
	this->uiPresetMask[0x19].low = 0x2000;
	//Game Over 
	this->uiPresetMask[0x1a].high = 0x200;
	this->uiPresetMask[0x1a].low = 0x3001;
	//Loading game 
	this->uiPresetMask[0x1b].high = 0x30;
	this->uiPresetMask[0x1b].low = 2;
	//Weird menu 
	this->uiPresetMask[0x1c].high = 0x270;
	this->uiPresetMask[0x1c].low = 4;
	//Select slot to save 
	this->uiPresetMask[0x1d].high = 0x270;
	this->uiPresetMask[0x1d].low = 8;
	//Autosave data 
	this->uiPresetMask[0x1e].high = 0;
	this->uiPresetMask[0x1e].low = 0x10;
	this->uiPresetMask[0x1f].high = 0;
	this->uiPresetMask[0x1f].low = 0x300;
	this->uiPresetMask[0x20].high = 0;
	this->uiPresetMask[0x20].low = 0x20;
	//Life counter 
	this->uiPresetMask[0x21].high = 0;
	this->uiPresetMask[0x21].low = 0x240;
	this->uiPresetMask[0x22].high = 0;
	this->uiPresetMask[0x22].low = 0x80;
	//Life counter 
	this->uiPresetMask[0x23].high = 0;
	this->uiPresetMask[0x23].low = 0x200;
	this->uiPresetMask[0x24].high = 0;
	this->uiPresetMask[0x24].low = 0x100;
	//Centered icon 
	this->uiPresetMask[0x25].high = 0;
	this->uiPresetMask[0x25].low = 0x400;
	this->uiPresetMask[0x26].high = 0;
	this->uiPresetMask[0x26].low = 0x800;
	this->uiPresetMask[0x27].high = 0;
	this->uiPresetMask[0x28].high = 0;
	this->uiPresetMask[0x29].high = 0;
	//Black screen 
	this->uiPresetMask[0x27].low = 0x1000;
	//PSM Screen without UI 
	this->uiPresetMask[0x28].low = 0x2000;
	//Loading screen 
	this->uiPresetMask[0x29].low = 0x6000;
	//Clear UI mask 
	this->uiPresetMask[0x2a].high = 0xfffffff8;
	this->uiPresetMask[0x2a].low = 0xffffffff;
	//Clear UI mask 
	this->uiPresetMask[0x2b].high = 0xfffeffff;
	this->uiPresetMask[0x2b].low = 0xffffffff;
	//You will lose all unsaved progress message 
	this->uiPresetMask[0x2c].high = 0x2f0;
	this->uiPresetMask[0x2c].low = 0x8000;
	return;
}

void Oleg::FUN_000b1d80() {
	Global* GLOBAL = Global::Get();

	(this->uiIcon23).field11_0xb0 = 7.0;
	(this->uiIcon23).field12_0xb4 = GLOBAL->PI_05;
	(this->uiIcon23).field5_0x98 = 0.1;
	(this->uiIcon23).flags = (this->uiIcon23).flags & 0xffffafff | 0x2800;
	(this->uiIcon23).field13_0xb8 = GLOBAL->PI_05 * 0.1;
	(this->uiIcon23).field4_0x94 = 3.0;
	
	(this->module86).color1 = Color(1.0f, 1.0f, 1.0f, 1.0f);
	(this->module86).color2 = Color(1.0f, 1.0f, 1.0f, 1.0f);
	(this->module86).flags = (this->module86).flags & 0xffffa7ff | 0x2000;

	(this->uiIcon22).color1 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon22).color2 = Color(0.0f, 0.0f, 0.0f, 0.0f);
	(this->uiIcon22).flags = (this->uiIcon22).flags & 0xffff8fff | 0x800;

	Vector2 v1(0.225f, 0.16f);
	Vector2 v2(0.3f, 0.2f);
	this->uiIcon23.FUN_001a4010(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2);

	Vector2 v3(0.5f, 0.9f);
	Vector2 v4(0.75f, 0.75f);
	(this->caption21).field_0x28 = &GLOBAL->ENV_FLAGS_95;
	this->caption21.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v3, &v4);
	(this->uiIcon23).next = &this->caption21;
	return;
}

void Oleg::SetInputHandles(InputStruct* inputHandle) {
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
}

void Oleg::FUN_000b1a40() {
	Vector2 v1(0.5f, 0.1f);
	Vector2 v2(1.0f, 1.0f);
	this->option15.FUN_001a2e30(Color(1.0f,1.0f,1.0f,1.0f), &v1, &v2);

	Vector2 v3(0.5f, 0.1f);
	Vector2 v4(1.0f, 1.0f);
	this->bubble10.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v3, &v4);

	Vector2 v5(0.1945f, 0.14f);
	Vector2 v6(0.24f, 0.16f);
	this->uiIcon13.FUN_001a4010(Color(1.0f, 1.0f, 1.0f, 1.0f), &v5, &v6);

	Vector2 v7(0.075f, 0.92f);
	Vector2 v8(0.625f, 0.625f);
	this->caption19.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v7, &v8);

	Vector2 v9(0.35f, 0.05f);
	FUN_000ad710(&v9, &this->bubble10);

	(this->uiIcon13).field11_0xb0 = 7.0;
	(this->uiIcon13).flags = (this->uiIcon13).flags & 0xffffafff;
	(this->uiIcon13).field12_0xb4 = 1.5707964;
	(this->uiIcon13).field13_0xb8 = 1.5707964 * 0.1;
	(this->uiIcon13).field4_0x94 = 3.0;
	(this->uiIcon13).field5_0x98 = 0.1;
	(this->uiIcon13).flags = (this->uiIcon13).flags | 0x2800;
	(this->uiIcon13).flags = (this->uiIcon13).flags | 0x2800;
	(this->option15).next = &this->bubble10;
	(this->uiIcon13).next = &this->caption19;
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
		MemoryStream::ConsfxRelatedFile(&stream,fname.value,'\0');
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
	if (((byte)(this->option02).flags & 0xf) == 3) {
		return &this->option02;
	}
	if (((byte)(this->option15).flags & 0xf) == 3) {
		return &this->option15;
	}
	if (((byte)(this->option03).flags & 0xf) == 3) {
		return &this->option03;
	}
	if (((byte)(this->option11).flags & 0xf) == 3) {
		return &this->option11;
	}
	if (((byte)(this->option12).flags & 0xf) == 3) {
		return &this->option12;
	}
	if (((byte)(this->option13).flags & 0xf) == 3) {
		return &this->option13;
	}
	if (((byte)(this->option14).flags & 0xf) == 3) {
		return &this->option14;
	}
	if (((byte)(this->option01).flags & 0xf) == 3) {
		return &this->option01;
	}
	if (((byte)(this->option04).flags & 0xf) == 3) {
		return &this->option04;
	}
	if (((byte)(this->option05).flags & 0xf) == 3) {
		return &this->option05;
	}
	if (((byte)(this->option06).flags & 0xf) == 3) {
		return &this->option06;
	}
	if (((byte)(this->option07).flags & 0xf) == 3) {
		return &this->option07;
	}
	if (((byte)(this->option09).flags & 0xf) == 3) {
		return &this->option09;
	}
	if (((byte)(this->option08).flags & 0xf) == 3) {
		return &this->option08;
	}
	if (((byte)(this->option10).flags & 0xf) == 3) {
		return &this->option10;
	}
	return null;
}

void Oleg::FUN_000b1f60() {
	Global* GLOBAL = Global::Get();
	Vector2 v1(0.5f, 0.05f); 
	Vector2 v2(1.0f, 1.0f);

	this->option11.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v1, &v2);

	Vector2 v3(0.5f, 0.05f);
	Vector2 v4(1.0f, 1.0f);
	this->option12.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v3, &v4);

	Vector2 v5(0.5f, 0.05f);
	Vector2 v6(1.0f, 1.0f);
	this->option13.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v5, &v6);

	Vector2 v7(0.5f, 0.05f);
	Vector2 v8(1.0f, 1.0f);
	this->option14.FUN_001a2e30(Color(1.0f, 1.0f, 1.0f, 1.0f), &v7, &v8);

	Vector2 v9(0.625f, 0.625f);
	Vector2 v10(0.5f, 0.75f);
	Vector2 v11(0.0f, 0.5f);
	this->caption18.field_0x28 = &GLOBAL->ENV_FLAGS_95;
	this->caption18.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v9, &v10, &v11);

	Vector2 v12(0.0f, 0.05f);
	Vector2 v13(1.0f, 1.0f);
	Vector2 v14(0.5f, 0.75f);
	this->bubble09.FUN_001a2e90(Color(1.0f, 1.0f, 1.0f, 1.0f), &v12, &v13, &v14);

	Vector2 v15(0.3f, 0.05f);
	FUN_000ad710(&v15,&this->bubble09);
	this->caption18.next = &this->bubble09;
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
		(*(this->iconsPsm2[param_1 + -3].vtable)->ReplaceShader)((UIElementAbstract *)(this->iconsPsm2 + param_1 + -3),&ENV_CLASS_94);
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
		(*((this->crashTwinsanityLogo).vtable)->Read)(&(this->crashTwinsanityLogo),stream);
		}
		else {
		if (index == 1) {
		(*((this->someIcon2).vtable)->Read)(&(this->someIcon2),stream);
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
		(*((this->spline3).vtable)->Reset)(&this_00->parent);
		(this->spline3).length = FLOAT_0038b3a4;
		(this->spline3).repeats = 7;
		pOVar4 = (this->uiIcon18).next;
		(this->uiIcon18).spline = (SplineA *)this_00;
		if (pOVar4 != (OlegModuleAbstract *)0x0) {
		OlegModuleAbstract::SetSplineToAll(pOVar4,this_00);
		}
		if (param_2 != '\0') {
		(this->lifeIcon).field1_0x88 = this->iconsPsm2 + (this->chunkDesc->flags >> 8 & 0xf);
		OlegModuleA::Show((OlegModuleA *)&this->lifeIcon,(int)(TicksPerTime * FLOAT_00386ab4),(int)TicksPerTime);
		this_01 = &this->spline1;
		(*((this->spline1).vtable)->Reset)(&this_01->parent);
		(this->spline1).length = FLOAT_0038a838;
		this_02 = &this->spline2;
		(this->spline1).repeats = (this->spline1).repeats + 1;
		(*((this_02->parent).vtable)->Reset)(&this_02->parent);
		(this->spline2).length = FLOAT_0038a838;
		piVar1 = &(this->spline2).repeats;
		*piVar1 = *piVar1 + 1;
		(this->spline1).next = &this_02->parent;
		(this->lifeIcon).spline = (SplineA *)this_01;
		pOVar4 = (this->lifeIcon).next;
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

void Oleg::AssignModuleToSlot(int index, OlegModuleAbstract* module) {
	this->modules[index] = module;
}

void Oleg::FUN_001a1be0(UnkSfxCollection* _sfxRelated) {
	for (int i = 0; i < 13; ++i) {
		sfxRelated.sfx[i] = null;
		sfxRelated.arr2[i] = 3;
		i = i + 1;
	} 
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
	(&this->screenFlags)[index] = (&this->screenFlags)[index] ^ (value << 9 ^ (&this->screenFlags)[index]) & 0x1fe00;
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
		ShaderProgramAbstract::ConsfxRelated(pSVar11);
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
		pSVar11 = GLOBAL->PTR_003e2d28;
		fVar5 = FLOAT_0038639c;
		(GLOBAL->PTR_003e2d28->vec0).x = FLOAT_0038639c;
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
		UnkFamily20Base::FUN_00113af0(&(this->spline4).unksfxRelated,notThis,0x80);
		fVar6 = FLOAT_0038cf68;
		fVar5 = FLOAT_0038639c;
		(this->spline4).unksfxRelated.vec.x = FLOAT_0038cf68;
		(this->spline4).unksfxRelated.vec.y = fVar6;
		fVar6 = FLOAT_00386ab4;
		(this->spline4).unksfxRelated.vec.z = FLOAT_00386ab4;
		(this->spline4).unksfxRelated.vec.w = fVar6;
		(this->spline4).unksfxRelated.field9_0x40 = &this->arr1length;
		(this->spline4).unksfxRelated.field11_0x48 = (uint)&this->arr4length;
		(this->spline4).unksfxRelated.field10_0x44 = &this->arr2length;
		(this->field65_0xaf0).x = 0.0;
		(this->field65_0xaf0).z = 0.0;
		fVar6 = FLOAT_0038b3cc;
		(this->field65_0xaf0).y = fVar5;
		(this->field65_0xaf0).w = fVar5;
		(this->spline4).length = fVar6;
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
		(*((this->spline3).vtable)->Reset)(&(this->spline3));
		(this->spline3).length = FLOAT_0038b3a4;
		(this->spline3).repeats = 7;
		FUN_001a2670(this,(this->parent).uiPresetMask[0x23].high,(this->parent).uiPresetMask[0x23].low,(SplineA *)&this->spline3);
		}
		else if (param_1 == 0x25) {
		spline = &this->spline4;
		(*((this->spline4).vtable)->Reset)(&spline->parent);
		piVar1 = &(this->spline4).repeats;
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
	OlegBase::Render(fontRenderer);
	screenMessage.DrawMessage(fontRenderer);
	Logging::LogUnimplemented(__FUNCSIG__);
}

