#pragma once

#include "headers/OpenSanityGlobal.h"

class AutoClass40 {
	public:
		ushort vectorCnt;
		ushort offset1;
		ushort offset2;
		ushort offset3;
		ushort offset4;
		ushort offset5;
		ushort offset6;
		size_t memoryLength;
		Vector4 * vectorArray[8];

		void Construct();
		void Dispose();
		virtual void Set(Vector4* vec1, Vector4* vec2);
		void FUN_0014b370(MemoryStream* stream);
		void FUN_00150ee0(Matrix4* matrix);

};
