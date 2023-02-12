#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Camera/GameCameraAbstract.h"

class GameCameraPoint2 : public GameCameraAbstract {
	public:
		Vector4 pos;

		virtual int* Set2(uint param_1);
		virtual float GetCameraProgress(float* param_1, uint param_2, float* param_3);
		void Construct();
		virtual void GetCameraPosition(uint param_1, uint* param_2);
		virtual int* FUN_001ca570(int param_1);
		virtual void Method5(int* param_1);
		virtual void Method8(int* param_1);
		virtual bool IsA(int** param_1);
		static uint GetBuilderIndex();
		void Dispose(byte param_1);

};
