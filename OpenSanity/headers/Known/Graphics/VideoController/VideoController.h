#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/AutoClasses/UnkStruct2.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Graphics/VideoController/UnkStruct3.h"

class VideoController {
	public:
		GameResourceManager * resourceManager;
		uint flags;
		int state;
		int prevState;
		Matrix4 unkMatrix;
		TwinString hintStr;
		TwinString errorStr;
		ushort cnt;
		UnkStruct2 matrixArray[4];
		UnkStruct3 someStructArray[4];
		UnkStruct3 dataArray3[4];
		int someCnt;
		SoundControllerUnkClass * unkStruct;

		VideoController();
		VideoController(GameResourceManager* resourceManager, byte param_2);

		virtual uint FUN_001f2b40(int param_1);
		void FUN_001f2bf0();
		void FUN_001f2c40();
		void FUN_001f2c80(uint param_1, uint param_2, uint param_3);
		int FUN_001f2dc0(short param_1);
		void FUN_001f2f30(short param_1, uint param_2);
		void DisplayHint();
		void DisplayError();
		void FUN_001f3800();
		void FUN_001f46f0();
		
		virtual uint FUN_001f5000(int param_1);
		void FUN_001f51c0();
		virtual void FUN_001f5be0();
		void FUN_001f6520();
		void FUN_001f6680();
		void FUN_001f66f0();
		void FUN_001f6770();
		void Pause();
		virtual uint FUN_001f2a70(uint param_1, uint param_2, byte param_3);
		void FUN_001f5690();
		virtual void FUN_001f5c10();
		void FUN_001f67f0();
		void PauseState();
		void UnpauseState();
		void SoundRelated();
		virtual void FUN_001f68b0();
		virtual uint FUN_001f4f00(uint param_1, int param_2, uint param_3);

};
