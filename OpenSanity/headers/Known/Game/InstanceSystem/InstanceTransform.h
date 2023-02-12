#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"

class InstanceTransform {
	public:
		Matrix4 matrix;
		Vector4 position;
		Vector4 rotation;

		bool SetupRotation(Rotation* rotation);
		bool FUN_000269f0(Vector4* param_1);
		bool SetupPosition(Vector4* vec);
		void FUN_000266b0(Vector4* out);
		uint FUN_00026880(Vector4* param_1);
		void FUN_00026600(Vector4* out);
		bool FUN_00026aa0(InstanceTransform* other);
		bool FUN_00064660(int param_1);
		bool FUN_000267c0(InstanceTransform* other);
		void FUN_000269a0(Vector4* param_1);
		void FUN_000a6690(void* param_2, float* param_3, float* param_4);
		void FUN_000265d0(Vector4* out);
		InstanceTransform* Copy(InstanceTransform* other);
		virtual void FUN_000d3ed0(Vector4* param_1);
		void Construct();
		virtual bool FUN_000e16f0(Matrix4* param_1);
		static void FillMatrix(InstanceTransform* transform);
		bool Init();
		virtual InstanceTransform* FillMatrix_18();
		virtual void FUN_00026640(Vector4* out);
		void FUN_00026670();

};
