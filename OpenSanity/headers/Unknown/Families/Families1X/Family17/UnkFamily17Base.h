#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily17Base {
	public:
		void * ptrArray[128];
		ushort cnt;
		uint * unkPtr;

		virtual void Unroll();
		virtual void FUN_0015d400(uint param_1, int param_2, ushort param_3, ushort param_4);
		void Construct();
		virtual uint FUN_00160f20(UnkFamily17Data* param_1);
		void Dispose(byte param_1);
		virtual float GetDistance1(Vector4* vec1, Vector4* vec2);
		static float GetDistance2(Vector4* vec1, Vector4* vec2);

};
