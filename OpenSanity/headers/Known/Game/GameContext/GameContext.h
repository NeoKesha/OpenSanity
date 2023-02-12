#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/UnkBuilder8/CameraFactory.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Builders/UnkBuilder2/UnkBuilder2.h"
#include "headers/Known/Game/GameContext/GameContextAbstract.h"
#include "headers/Known/Builders/UnkBuilder5/UnkBuilder5.h"
#include "headers/Known/Builders/UnkBuilder7/SceneryFactory.h"
#include "headers/Known/Builders/UnkBuilder1/UnkBuilder1.h"
#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionFactory.h"
#include "headers/Known/Game/GameContext/StringCollection.h"
#include "headers/Known/AgentLab/PerceptFactory/PerceptFactory.h"
#include "headers/Known/Builders/UnkBuilder10/UnkBuilder10.h"
#include "headers/Known/Game/GameResourceManager/GameResourceManager.h"
#include "headers/Known/Builders/UnkBuilder6/UnkBuilder6.h"
#include "headers/Known/Builders/UnkBuilder9/UnkBuilder9.h"

class GameContext : public GameContextAbstract {
	public:
		uint flags;
		TwinString startupLevel;
		StringCollection stringCollection;
		int unkField8;
		TwinString batch;
		GameResources gameResources;
		UnkBuilder1 builder1;
		UnkBuilder2 builder2;
		ActionFactory actionFactory;
		PerceptFactory perceptFactory;
		UnkBuilder5 builder5;
		UnkBuilder6 builder6;
		SceneryFactory sceneryFactory;
		GameResourceManager resourceManager;
		CameraFactory cameraFactory;
		UnkBuilder9 builder9;
		UnkBuilder10 builder10;
		int time;
		InputStruct * inputHandle1;
		InputStruct * inputHandle2;
		UnkFamily16A * defaultRm;
		GameController * gameController;
		uint ai;
		uint render;

		GameContext();

		void DoSoundsStuff(bool isGameState3, SomeState* someState);
		void DoMemoryTasks(bool isEndFrameUpdate);
		void TickFrameNumber();
		void FUN_00021ce0();
		void FUN_0017fd60();
		void FUN_000374a0();
		void FUN_00123250();
		void CreateWaterAndSkyShaders();
		void CreateStaticGeometryShader();
		void CreateSkinnedGeometryShader();
		void CreateBlendSkinShader();
		uint ParseVideoParameters(TwinString* arg);
		virtual void InitializeSystems();
		void InitMatrixes();
		void InitScriptPack1Array();
		void InitScriptPack2Array();
		void InitSomeArray1();
		void FUN_000f7810(int idx1, int idx2);
		void FUN_000f7870(int idx1, int idx2);
		void SetLanguage(int langId);
		int ProcessCredits(byte videoPlayerIsUp);
		void SetupScreenAndCopyright();
		void UpdateGameState();
		void ProcessGameLogic();
		void UpdateTime();
		void DoUpdate();
		void EndFrameUpdate(bool param_1);
		static void INIT_LANGUAGE();
		virtual void ProgressUI();
		virtual void DoGameControllerStuff(int flags);
		void CheckCopyright();
		virtual void DrawVideoPlayerText(byte videoPlayerIsUp);
		virtual void ProgressUI2();
		void ParseLaunchArguments(uint argc, char** argv);

		const uint STREAM_MASK = ~0xffffe1ff;
		const uint STREAM_OFF = 0x100;
		const uint STREAM_EDITOR = 0x300;
		const uint STREAM_BLOCK = 0x500;
		const uint STREAM_ALL = 0x700;
		const uint STREAM_DEMAND = 0x900;
		const uint STREAM_FULL = 0xb00;

		const uint FLAGS_TIME = 0x01;
		const uint FLAGS_VERSION = 0x02;
		const uint FLAGS_CYCLE = 0x04;
		const uint FLAGS_FOG = 0x08;
		const uint FLAGS_OSD = 0x10;
		const uint FLAGS_RB = 0x40;
		const uint FLAGS_WB = 0x80;
};
