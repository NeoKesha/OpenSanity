#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"

class GameCameraSpline : public GameCameraAbstract {
	public:

		virtual void CleanUp();
		virtual float FUN_001d6030(float* param_1, uint param_2, float* param_3);
		virtual uint FUN_001d7f00(int** param_1);
		void Dispose(byte param_1);
		virtual GameCameraSpline* FUN_001d4850(int param_1);
		void Construct();
		virtual void FUN_001c9c70(int* param_1);
		virtual void FUN_001c9d30(int* param_1);
		virtual void FUN_001d1660(float* param_1);
		virtual void FUN_001d47b0(float param_1, float* param_2);
		virtual GameCameraSpline* FUN_001d60f0(int param_1);
		static uint FUN_001d9c40();

};
