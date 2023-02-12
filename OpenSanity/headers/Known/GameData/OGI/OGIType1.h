#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class OGIType1 {
	public:
		Vector4 unkVec[5];
		byte unkByte1;
		byte unkByte2;
		byte unkByte3;

		void Read(MemoryStream* stream);

};
