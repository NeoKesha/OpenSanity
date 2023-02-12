#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"
#include "headers/Known/Math/Line4.h"

class GameCameraLine : public GameCameraAbstract {
	public:
		Line4 line;

		virtual bool IsA(int** param_1);
		virtual void GetCameraPosition(float t, Vector4* posOut);
		virtual GameCameraAbstract* Set2(GameCameraLine* other);
		virtual float GetCameraProgress(Vector4* param_2, uint param_3, Vector4* posOut);
		void Dispose(byte param_1);
		virtual void Method5(int* param_1);
		virtual void Method8(int* param_1);
		virtual void Method7(Matrix4* mat);
		virtual GameCameraLine* SetInternal(GameCameraLine* other);
		static int GetBuilderIndex();
		void Construct();
		void Construct_11(Line4* line);
		void Construct_12(Vector4* start, Vector4* end);

};
