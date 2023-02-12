#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"

class GameCameraUnk1 : public GameCameraAbstract {
	public:

		virtual float GetCameraProgress(float* param_1, uint param_2, uint param_3);
		virtual void GetCameraPosition(float param_1, float* param_2);
		virtual bool IsA(int** param_1);
		void Dispose(byte param_1);
		void Construct();
		static void EmptyFunction();
		static uint GetBuilderIndex();

};
