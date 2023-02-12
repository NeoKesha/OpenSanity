#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class InstanceNodeObjectLink {
	public:
		void * * parent_;
		Vector4 vec;

		virtual uint FUN_000f6c20(int param_1);
		virtual bool FUN_000f6cd0(int param_1, char param_2);
		virtual void FUN_000f6d60(int param_1);
		static InstanceNodeObjectLink* Build(int param_1);
		virtual bool FUN_000f9df0(uint param_1, uint param_2);
		void FUN_000fb110();
		virtual void CleanUp();
		bool FUN_000fbcc0(int param_1);
		uint FUN_000fbd70(int* param_1, int** param_2, byte param_3, byte param_4, uint* param_5, char param_6);
		bool FUN_000fbee0(int* param_1, int** param_2, byte param_3, uint* param_4);
		virtual uint FUN_000fc0b0(uint* param_1, uint param_2, char param_3, char param_4);
		uint* FUN_000fc4d0(int param_1);
		void FUN_000fc600(byte param_1);
		void Dispose(byte param_1);
		virtual bool IsA(uint param_1, uint* param_2);
		virtual bool Step(byte* param_1);
		static void UpdateTime(InstanceNodeObjectLink* param_1);
		static byte GetIndex();
		static uint GetBuilderIndex();
		void Construct();

};
