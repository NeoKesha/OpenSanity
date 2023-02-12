#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"
#include "headers/Known/Math/Line4.h"

class GameCameraLine2 : public GameCameraAbstract {
	public:
		Line4 line;

		virtual float GetCameraProgress(uint param_1, int param_2, float* param_3);
		virtual int* Set2(uint param_1);
		virtual bool IsA(int** param_1);
		virtual void GetCameraPosition(float param_1, float* param_2);
		virtual void Method5(int* param_1);
		virtual void Method8(int* param_1);
		virtual int* FUN_001ca960(int param_1);
		static uint GetBuilderIndex();
		void Dispose(byte param_1);
		void Construct();

};
