#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Camera/GameCameraAbstract.h"

class GameCameraPoint : public GameCameraAbstract {
	public:
		Vector4 pos;

		virtual void Method7(Matrix4* param_1);
		virtual GameCameraAbstract* Set2(GameCameraPoint* other);
		virtual bool IsA(int** param_1);
		virtual float GetCameraProgress(uint param_1, uint param_2, Vector4* posOut);
		virtual void GetCameraPosition(uint param_1, Vector4* posOut);
		virtual int* SetInternal(GameCameraPoint* other);
		virtual void Method5(int* param_1);
		virtual void Method8(int* param_1);
		static int GetBuilderIndex();
		void Dispose(byte param_1);
		void Construct();
		void Construct_11(Vector4* pos);

};
