#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"

class GameCameraUnk2 : public GameCameraAbstract {
	public:

		virtual void Unroll();
		void Construct();
		void Dispose(byte param_1);
		virtual void Method7(float* param_1);
		virtual int* Set2(uint param_1);
		virtual float GetCameraProgress(uint param_1, int param_2, float* param_3);
		virtual bool IsA(int** param_1);
		static uint GetBuilderIndex();
		static void EmptyFunction();
		virtual void Method5(int* param_1);
		virtual void Method8(int* param_1);
		virtual int* SetInternal(int param_1);
		void Construct_12(Vector4* param_1);

};
