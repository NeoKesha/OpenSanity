#pragma once

#include "headers/OpenSanityGlobal.h"

class Vector4 {
	public:
		float x;
		float y;
		float z;
		float w;

		Vector4();
		Vector4(float x, float y, float z, float w);

		void Scale(Vector4* a, float k);
		float FUN_00021500(Vector4* a, Vector4* b);
		virtual void FUN_00020b50(Vector4* vec, Matrix4* mat);
		float GetLength();
		static float Distance(Vector4* param_1, Vector4* param_2);
		float Length();
		void Subtract(Vector4* a, Vector4* b);
		float GetLength_7();
		virtual void FUN_00020a80(Vector4* vec, Matrix4* mat);
		virtual void FUN_000db0d0(Matrix4* matrix);
		virtual void FromRotation(int x, int y, int z);
		static int AddVectorToDict(Vector4* vector);
		void FUN_00029b20(Vector4* param_1);
		float DotProduct(Vector4* other);
		void FUN_00027600(Vector4* param_1);
		float Distance_15(Vector4* param_1);
		void Invert();
		float GetLength_17();
		void FUN_00027150();
		float Length_19();

};
