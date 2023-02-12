#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/AutoClasses/AutoClass56.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Oleg/Oleg.h"
#include "headers/Known/Game/Chunks/ChunkDesc.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxData/SectionDataSfx.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubC.h"
#include "headers/Known/Graphics/Font/Font.h"
#include "headers/Unknown/AutoClasses/AutoClass25/AutoClass25.h"

class GameController {
	public:
		int state;
		uint flags;
		uint flags2;
		int waitTime;
		uint progressCounter;
		uint progressGoal;
		int timeFromStart;
		int timeRelated;
		FontRenderer * fontRenderer;
		UnkFamily16A * defaultRm;
		GameResourceManager * resourceManager;
		GameResources * gameResources;
		InputStruct * inputHandle1;
		InputStruct * inputHandle2;
		SectionDataSfx sfxData;
		float fmvTimeRelated;
		FMVIndex fmvIndex;
		TwinString galleryName;
		Font font;
		InstanceNodeKSubA unkStruct3;
		InstanceNodeKSubC field42_0x4a0;
		ChunkDesc chunkDescriptor;
		AutoClass56 unkStruct;
		ChunkDesc * chunkDesc;
		Oleg oleg;
		Credits * credits;
		AutoClass25 field32_0xb0;
		int field13_0x1c;

		GameController(InputStruct* inputHandle, InputStruct* inputHandle2, FontRenderer* fontRenderer, UnkFamily16A* defaultRm, GameResourceManager* resourceManager, GameResources* gameResources);

		void ResetCurrentPlayerNodes(bool param_1);
		void FUN_000ba6c0(int param_1, uint* param_2, char param_3, byte param_4);
		uint FUN_000af8f0(SomeState* timeState, char param_2);
		void MenuUI();
		bool HandleUIScreenChanges(SomeState* param_1);
		bool FUN_000bc6a0(int index, bool param_2, bool param_3);
		void LoadLocalizedCodeAndAgentLabFiles();
		uint FUN_000af730();
		void ResetLevelStuff(int flags);
		bool SetResetSomeFlags();
		bool ResetCharacterNodes(int index, uint param_2, bool param_3);
		uint* FUN_000bc490(int param_1, char param_2);
		bool PlayRandomFMV(uint param_1, int startIndex, int endIndex);
		bool FUN_000bc950();
		bool SetOverlay(UIPresetIndex index);
		bool PlayFMV(SomeState* param_1, float time, FMVIndex videoIndex, char param_4, SomeState* feedbackInt);
		bool LoadFrontendAssets();
		uint FUN_001c7570(FontRenderer* param_1, bool param_2);
		bool InitCtxAndWriteRmToPool(bool param_1);
		int LoadOtherLevel();
		uint PlayIntroCutscene();
		bool FUN_000afe90();
		uint TileScreen(SomeState* timeState);
		int PlayFMVVIvendi(SomeState* param_1);
		int Game(SomeState* timeState);
		uint GameOver();
		int State12(uint param_1);
		uint State20();
		uint PlayFMVCustom(SomeState* feedbackInt);
		int TitleScreenMenu(SomeState* param_1);
		uint State16(SomeState* param_1);
		int WaitConfirmation();
		bool UpdateFlags(bool param_1);
		int LoadBaseResources();
		int State21();
		int IngameMenu(SomeState* param_1);
		bool ResetFlag1();
		uint PlayTTIdent(SomeState* param_1);
		int RollCredits(SomeState* someState);
		int LoadStartUpChunk();
		uint State19();
		int State10();
		int ShowGallery();
		uint BottomTextShow(float param_1);
		uint WhackawormStart(uint param_1, uint param_2, ushort param_3);
		uint FUN_000bb500(float param_1);
		uint FUN_000bb700(float param_1);
		bool ActionFsm(int flags);
		void DrawText(byte videoPlayerIsUp);
		void UpdateAspectRatio(byte videoPlayerIsUp);
		uint BottomTextHide(float param_1);
		uint PlayMovie(uint param_1, uint param_2);
		uint ResetGame();
		uint PlayCredits();
		uint ForceGameOver();
		uint BossModeEnd();
		uint WhackawormEnd();
		bool FUN_000af380(int param_1);
		bool FUN_000afed0();
		void ProgressUI2();
		void ProgressUI();
		uint BossModeEnable(uint param_1, ushort param_2, uint param_3);
		void FUN_000674c0();
		void InitSomeShaders();

};
