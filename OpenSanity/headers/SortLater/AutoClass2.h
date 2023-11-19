#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Matrix4.h"

class AutoClass2 {
	public:
		InstanceContext * ctx;
		AutoClass40* ac40;
		int unk1;
		int unk2;
		InstanceContext* ctx2;
		int unk3;
		int unk4;
		Matrix4 * matrix1;
		byte unk5[16];
		Matrix4 matrix2;
		int unk6;
		Matrix4 * matrixArray;
		int unk7;
		int unk8;
		void* ptr;

		void FUN_001372d0();
		void FUN_00137310(InstanceContextBase* ctx);
		void Dispose();
		uint FUN_001373f0();
		void FUN_0013a200();
		void FUN_0013a2e0(int param_1, int matrixIndex, Matrix4* param_3);
		void FUN_0013a3b0();
		void FUN_0013a580();
		void FUN_0013a600(Matrix4* param_1, int param_2, int* param_3, Matrix4* param_4);
		void SetFromOGI(OGI* ogi);
		void FUN_0013cda0(Matrix4* matrix1, BoundingBox* matrix2);
		bool FUN_0013ce90(InstanceContext* ctx);
		void FUN_0013dff0(Matrix4* mtx);
		bool FUN_0013e050(int* param_1, void** array769[769], InstanceContext* ctx);
		void FUN_00064890(Matrix4* param_1);
		int* FUN_0013e950(InstanceContextBase* ctx, void* param_2);

};
