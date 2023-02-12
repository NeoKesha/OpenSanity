#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Camera/GameCameraAbstract.h"

class GameCameraBoss : public GameCameraAbstract {
	public:
		Matrix4 matrix1;
		Matrix4 matrix2;

		virtual void Method3(uint* param_1);
		virtual float GetCameraProgress(uint* param_1, int param_2, byte* param_3[16]);
		virtual bool IsA(int** param_1);
		void Construct();
		static void EmptyFunction();
		virtual void Method7(Matrix4* param_1);
		virtual int* SetInternal(GameCameraBoss* param_1);
		virtual void Method5(int* param_1);
		virtual void Method8(int* param_1);
		static int GetBuilderIndex();
		void Dispose(byte param_1);

};
