#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"
#include "headers/Known/GameData/Path/Path.h"

class GameCameraPath : public GameCameraAbstract {
	public:
		Path path;

		void Dispose();
		virtual float GetCameraProgress(Vector4* param_1, uint param_2, Vector4* posOut);
		void Dispose_2(byte param_1);
		void Construct();
		virtual void GetCameraPosition(float t, Vector4* posOut);
		virtual void Method5(int* param_1);
		virtual void Method7();
		virtual void Method8(int* param_1);
		virtual bool IsA(int** param_1);
		static int GetBuilderIndex();
		void Construct_10(Path* otherPath);

};
