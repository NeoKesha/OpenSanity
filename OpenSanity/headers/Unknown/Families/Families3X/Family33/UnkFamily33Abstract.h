#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily33Abstract {
	public:
		void * list1;
		void * list2;

		virtual void FUN_0013c340(int* param_1);
		virtual void FUN_0013c430(int* param_1);
		virtual uint FUN_0013c4d0(int** param_1);
		virtual void CleanUp();
		void Construct(Vector4* param_1, Vector4* param_2, uint param_3);
		void Construct_5(Vector4* param_1, float param_2, uint param_3);
		void Dispose(byte param_1);
		virtual uint FUN_0013c5e0(int* param_1, int param_2);
		virtual uint FUN_0013c650(int* param_1, int param_2);
		virtual void FUN_0013c6c0(char param_1);
		virtual int FUN_0013f470(float* param_1, int param_2);
		virtual void FUN_00139080(uint* param_1);
		virtual void FUN_001390d0(uint* param_1);
		virtual void FUN_00139170(char param_1, char param_2);
		virtual bool FUN_00136310();
		virtual uint FUN_00136b90(int param_1, int* param_2, uint param_3);
		virtual uint Passthrough();
		virtual int FUN_00139000(int* param_1);
		virtual void FUN_00139050(uint param_1, int param_2, int param_3, uint param_4, int param_5);
		virtual void FUN_00139120();
		virtual void FUN_0013c7a0(int* param_1, int param_2);
		virtual uint FUN_0013dc00(uint param_1, int param_2);
		virtual void FUN_0013f3d0(int param_1);
		virtual void FUN_0013f400(int* param_1, int* param_2, uint param_3, int* param_4);
		virtual uint Passthrough_24();
		static void FUN_00142e00();
		static uint FUN_00142e10();
		static uint FUN_00142e20();
		static float FUN_00142e30();
		static uint FUN_00142e40();
		static uint FUN_00142e50();
		virtual uint FUN_00142e60();
		static void EmptyFunction();
		virtual void FUN_00142e80(uint param_1);
		void Construct_34();
		void Construct_35(int* param_1);

};
