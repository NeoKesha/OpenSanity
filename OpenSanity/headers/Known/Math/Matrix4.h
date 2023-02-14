#pragma once

#include "headers/OpenSanityGlobal.h"

class Matrix4 {
	public:
		float m11;
		float m12;
		float m13;
		float m14;
		float m21;
		float m22;
		float m23;
		float m24;
		float m31;
		float m32;
		float m33;
		float m34;
		float m41;
		float m42;
		float m43;
		float m44;

		Matrix4();
		Matrix4(float k);

		static void FUN_000d2a10(float* k, float* x, float* y);

		void Multiply4443(Matrix4* mat1, Matrix4* out);
		void FUN_00027120(Matrix4* param_1);
		virtual void FUN_000d4000(Vector4* param_1, Vector4* param_2);
		virtual void FUN_000d4180();
		virtual void FUN_000d42b0(Vector4* vec1, Vector4* vec2);
		void FUN_000d8470(Matrix4* param_1);
		virtual void FUN_000d9f80(Vector4* vec);
		void FUN_00136680(UnkFamily14Base* param_1, Matrix4* param_2);
		void FUN_001367f0(UnkFamily14Base* param_1, Matrix4* param_2);
		void FUN_00149f10(float* param_2, int param_3, Vector4* param_4, Vector4* param_5);
		void Set(Matrix4* param_1);
		void Set_13(Matrix4* param_1);

};
