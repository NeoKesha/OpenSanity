#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceNodeOGISub {
	public:
		OGI * ogi;
		Matrix4Array * matrixArray2;
		GenericArray * genericArray;
		Matrix4Array * matrixArray;
		GenericArray * genericArray2;

		bool FUN_001f8a10(int index, Matrix4* param_2);
		uint FUN_001f9390(int cnt);
		void FUN_001f9450();
		void FUN_001f9570();
		void FUN_001f9630();
		uint FUN_001fabc0(int cnt);
		void CleanUp1();
		void CleanUp2();
		virtual void FUN_001fb6d0(uint param_1);
		void Dispose();
		void Init(OGI* ogi, int param_2, int param_3);
		virtual void FUN_001fd9c0();
		void Construct(OGI* ogi, int param_2, int param_3);
		virtual float GetAnimationProgress(byte param_1);
		uint FUN_001fb7d0(uint param_1, InstanceNodeKSubA* param_2);

};
