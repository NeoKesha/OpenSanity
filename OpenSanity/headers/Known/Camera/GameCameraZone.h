#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Camera/GameCameraAbstract.h"
#include "headers/Known/Camera/Zone.h"

class GameCameraZone : public GameCameraAbstract {
	public:
		Zone zone1;
		Zone zone2;

		virtual float GetCameraProgress(uint param_1, int param_2, float* param_3);
		virtual GameCameraAbstract* Set2(GameCameraZone* other);
		virtual bool IsA(int** param_1);
		static void EmptyFunction();
		virtual void Method7(float* param_1);
		virtual GameCameraZone* SetInternal(GameCameraZone* param_1);
		virtual void Method5(int* param_1);
		virtual void Method8(int* param_1);
		static int GetBuilderIndex();
		void Dispose(byte param_1);
		void Construct(float* param_1, uint param_2);
		void Construct_11();

};
