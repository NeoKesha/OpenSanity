#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Spline/SplineD.h"
#include "headers/Known/TwinString.h"
#include "headers/Unknown/AutoClasses/InputWrapper.h"
#include "headers/Known/Oleg/OlegBase.h"
#include "headers/Known/Math/Spline/SplineB.h"
#include "headers/Known/Oleg/Modules/OlegModuleLabelGeneric.h"
#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20Base.h"
#include "headers/Known/Oleg/Modules/OlegModuleIcon.h"
#include "headers/Known/Math/Spline/SplineE.h"
#include "headers/Unknown/AutoClasses/ColorMatrix.h"
#include "headers/SortLater/InputObserver.h"
#include "headers/Known/Oleg/Modules/OlegModuleLabelSelectable.h"
#include "headers/Known/Oleg/Modules/OlegModuleMenuBubble.h"
#include "headers/Known/Oleg/Modules/OlegModuleLabelPulsating.h"
#include "headers/Known/Math/Spline/SplineA.h"
#include "headers/Known/Oleg/Modules/OlegModuleAH.h"
#include "headers/Known/Math/Spline/SplineC.h"
#include "headers/Known/Oleg/Modules/OlegModuleAC.h"
#include "headers/Unknown/AutoClasses/AutoClass11.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"
#include "headers/Unknown/UnkSfxCollection.h"
#include "headers/Known/Oleg/Modules/OlegModuleAF.h"
#include "headers/Known/Oleg/UIElement/UIElementImage.h"

class Oleg : public OlegBase {
	public:
		uint screenFlags;
		int deltaTime;
		SplineA spline0;
		SplineD spline1;
		SplineE spline2;
		SplineC spline3;
		ChunkDesc * chunkDesc;
		Font * font;
		TwinString psmPath;
		InputWrapper inputWrapper;
		InputObserver inputObserver;
		ColorMatrix colorMatrix[9];
		UnkSfxCollection sfxRelated;
		UnkFamily10VM * page1;
		UnkFamily10B * page2;
		UnkFamily10I * page3;
		UnkFamily10L * page4;
		UnkFamily10M * page5;
		UnkFamily10N * page6;
		UnkFamily10VA * page7;
		UnkFamily10P * page8;
		UnkFamily10P * page9;
		UnkFamily10P * page10;
		UnkFamily10Q * page11;
		UnkFamily10Q * page12;
		UnkFamily10Q * page13;
		UnkFamily10Q * page14;
		UnkFamily10R * page15;
		UnkFamily10S * page16;
		UnkFamily10ZA * page17;
		UnkFamily10VL * page18;
		TwinsanityMaterialShader material;
		ShaderProgramAbstract * unkClass;
		UIElementImage materialRelated;
		uint arr1length;
		Vector4 * arr1;
		uint arr2length;
		Vector2 * arr2;
		uint arr3length;
		float * arr3;
		uint arr4length;
		float * arr4;
		UnkFamily20Base unkStruct12array[8];
		SplineB spline4;
		UIElementImage someIcon1;
		UIElementImage crashTwinsanityLogo;
		UIElementImage someIcon2;
		UIElementImage someIcon3;
		UIElementImage someIcon4;
		UIElementImage someIcon5;
		UIElementImage iconsPsm2[40];
		UIElementImage iconsPsm3[8];
		AutoClass11 screenMessage;
		OlegModuleIcon uiIcon01;
		OlegModuleIcon uiIcon02;
		OlegModuleIcon uiIcon03;
		OlegModuleIcon uiIcon04;
		OlegModuleIcon uiIcon05;
		OlegModuleLabelGeneric label01;
		OlegModuleIcon uiIcon06;
		OlegModuleMenuBubble bubble01;
		OlegModuleMenuBubble bubble02;
		OlegModuleLabelPulsating caption01;
		OlegModuleLabelPulsating caption02;
		OlegModuleLabelPulsating caption03;
		OlegModuleLabelPulsating caption04;
		OlegModuleLabelPulsating caption05;
		OlegModuleLabelSelectable option01;
		OlegModuleMenuBubble bubble03;
		OlegModuleLabelSelectable option02;
		OlegModuleLabelPulsating caption06;
		OlegModuleLabelSelectable option03;
		OlegModuleIcon uiIcon07;
		OlegModuleLabelSelectable option04;
		OlegModuleLabelSelectable option05;
		OlegModuleLabelPulsating caption07;
		OlegModuleLabelSelectable option06;
		OlegModuleLabelPulsating caption08;
		OlegModuleLabelSelectable option07;
		OlegModuleLabelPulsating caption09;
		OlegModuleLabelPulsating caption10;
		OlegModuleLabelPulsating caption11;
		OlegModuleLabelPulsating caption12;
		OlegModuleLabelPulsating caption13;
		OlegModuleLabelPulsating caption14;
		OlegModuleLabelSelectable option08;
		OlegModuleLabelPulsating caption15;
		OlegModuleLabelPulsating caption16;
		OlegModuleIcon uiIcon08;
		OlegModuleLabelSelectable option09;
		OlegModuleLabelPulsating caption17;
		OlegModuleLabelSelectable option10;
		OlegModuleMenuBubble bubble04;
		OlegModuleMenuBubble bubble05;
		OlegModuleMenuBubble bubble06;
		OlegModuleMenuBubble bubble07;
		OlegModuleMenuBubble bubble08;
		OlegModuleIcon uiIcon09;
		OlegModuleLabelGeneric progressPercent;
		OlegModuleLabelGeneric label03;
		OlegModuleIcon uiIcon10;
		OlegModuleLabelGeneric label04;
		OlegModuleIcon uiIcon11;
		OlegModuleLabelGeneric label05;
		OlegModuleIcon uiIcon12;
		OlegModuleIcon * iconArray[6];
		OlegModuleLabelSelectable option11;
		OlegModuleLabelSelectable option12;
		OlegModuleLabelSelectable option13;
		OlegModuleLabelSelectable option14;
		OlegModuleLabelPulsating caption18;
		OlegModuleMenuBubble bubble09;
		OlegModuleLabelSelectable option15;
		OlegModuleMenuBubble bubble10;
		OlegModuleIcon uiIcon13;
		OlegModuleLabelPulsating caption19;
		OlegModuleLabelSelectable option16;
		OlegModuleLabelGeneric label07;
		OlegModuleLabelGeneric label08;
		OlegModuleLabelSelectable option17;
		OlegModuleLabelGeneric label09;
		OlegModuleMenuBubble bubble11;
		OlegModuleLabelSelectable option18;
		OlegModuleLabelPulsating caption20;
		OlegModuleIcon uiIcon14;
		OlegModuleLabelGeneric label10;
		OlegModuleIcon uiIcon15;
		OlegModuleLabelGeneric label11;
		OlegModuleIcon uiIcon16;
		OlegModuleAH module75;
		OlegModuleAF module76;
		OlegModuleLabelGeneric wumpaCount;
		OlegModuleIcon uiIcon17;
		OlegModuleLabelGeneric label13;
		OlegModuleIcon uiIcon18;
		OlegModuleIcon lifeIcon;
		OlegModuleIcon uiIcon20;
		OlegModuleLabelGeneric label14;
		OlegModuleIcon uiIcon21;
		OlegModuleIcon uiIcon22;
		OlegModuleAC module86;
		OlegModuleIcon uiIcon23;
		OlegModuleLabelPulsating caption21;
		int field5_0x320;
		int field1_0x310;
		int field3_0x318;
		int field4_0x31c;
		int field66_0xb00;
		int field67_0xb04;
		int field68_0xb08;

		Oleg(Font* font, ChunkDesc* chunkDesc);
		~Oleg();

		bool FUN_000c2230(int index);
		void FUN_000b1c50();
		void ProcessUI(SomeState* state, InputStruct* input, NodeRelated2C* nodeData);
		void FUN_000b3210();
		void InitMenuPages(InputStruct* inputHandle, Font* font1, Font* font2, SectionDataSfx* sfxData);
		void FUN_000b18e0();
		void FUN_000b21c0();
		void CalculateStatsHUD(NodeRelated2C* data);
		void FUN_000b7db0();
		void FUN_000b79f0();
		void FUN_000b33f0();
		
		void FUN_000b22a0();
		void FUN_000b4f10(int i, char param_2);
		void InitModuleMask();
		void FUN_000b1d80();
		void SetInputHandles(InputStruct* inputHandle);
		void FUN_000b1a40();
		void LoadIconsPsm();
		bool FUN_000c2290(UIPresetIndex index);
		OlegModuleLabelSelectable* GetSelectedLabel();
		void FUN_000b1f60();
		void ShowUI(UIPresetIndex index, int appearTime, int disappearTime);
		void ChoseRandomLoadingPicture(int uiIndex, int startIndex, int picAmount);
		void FUN_000b5270(int param_1, InstanceContext* param_2);
		void ReadUI(int index, MemoryStream* stream);
		void GrandALife(int param_1, char param_2);
		void AssignModuleToSlot(int index, OlegModuleAbstract* module);
		void FUN_001a1be0(UnkSfxCollection* _struct);
		void FUN_001a2670(uint param_1, uint param_2, SplineA* spline);
		virtual void ShowUI_30(uint flags1, uint flags2, int appearTime, int disappearTime);
		virtual void ClearUI(uint maskLow, uint maskHigh, int appearTime, int disappearTime);
		void SetScreenFlag(int index, int value);
		void InitValues();
		void ClearUI_34(UIPresetIndex index, int appearTime, int disappearTime);
		void StartGemCrystalAnimation(int param_1);
		virtual void ResetScreenMessage();
		virtual void RenderUI(FontRenderer* fontRenderer);

};
