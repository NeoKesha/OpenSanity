#pragma once

#include "headers/OpenSanityGlobal.h"

class GameCameraAbstract {
	public:

		void Construct();
		virtual bool IsA(int** param_1);
		static void EmptyFunction();
		virtual void Method5(int* param_1);
		void Dispose(byte param_1);
		virtual void Method8(int* param_1);
		virtual void Set1(GameCameraAbstract* other);
		virtual void Set2(GameCameraAbstract* other);
		static void Unroll(GameCameraAbstract* param_1);
		static void Unroll_9(GameCameraAbstract* param_1);

};
