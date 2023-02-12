#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"

class GameCameraUnk3 : public GameCameraAbstract {
	public:

		virtual void CleanUp();
		virtual bool IsA(int** param_1);
		void Dispose(byte param_1);
		void Construct();
		static float GetCameraProgress();
		static void EmptyFunction();
		static void EmptyFunction_6();
		static void EmptyFunction_7();
		static void EmptyFunction_8();
		virtual uint Set2();
		static uint GetBuilderIndex();

};
