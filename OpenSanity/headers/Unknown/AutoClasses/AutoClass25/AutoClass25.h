#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"

class AutoClass25 {
	public:
		Matrix4 matrix1;
		Matrix4 matrix2;
		Matrix4 matrix3;
		Matrix4 matrix4;
		Matrix4 matrix5;
		Vector4 vec1;
		Vector4 vec2;
		InstanceContextRefCounter * ctxPtr;
		float unkFloat;

		AutoClass25();

		void FUN_000c5310(InstanceContext* ctx);
		void FUN_001c6d10(ScreenInfoExt* info);
		void FUN_001cb0b0(float aspectRatio);

};
