#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class Camera {
	public:
		byte mainCamera1;
		byte mainCamera2;
		float unkFloat1;
		Vector4 unkVector1;
		Vector4 unkVector2;
		float unkFloat2;
		float unkFloat3;
		int unkInt1;
		int unkInt2;
		int unkInt3;
		int unkInt4;
		int unkInt5;
		int unkInt6;
		float unkFloat4;
		float unkFloat5;
		float unkFloat6;
		float unkFloat7;
		int unkInt7;
		int unkInt8;
		int unkInt9;
		float unkFloat8;

		virtual void Write(MemoryStream* stream);
		void Construct(MemoryStream* stream);

};
