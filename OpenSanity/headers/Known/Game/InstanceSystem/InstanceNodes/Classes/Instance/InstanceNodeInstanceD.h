#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeInstanceDBody.h"

class InstanceNodeInstanceD {
	public:
		InstanceNodeInstanceDBody body;

		void Init(char param_1);
		virtual void FUN_00175120();
		virtual void FUN_001751e0();
		virtual void CleanUp();
		static void FUN_00179910(InstanceNodeInstanceD* param_1);
		virtual void FUN_00179e00(int param_1, int* param_2);
		virtual void InstanceMethod15(uint* param_1, float param_2);
		virtual void UpdateTime(uint param_1, uint param_2);
		virtual void InstanceMethod33();
		virtual void InstanceMethod12(uint* param_1);
		virtual void InstanceMethod13();
		void Construct(char param_1);
		virtual bool InstanceMethod18(float param_1, float* param_2, float* param_3);
		virtual void InstanceMethod11();
		virtual void InstanceMethod17(int** param_1, float param_2);
		virtual void InstanceMethod24();
		virtual void InstanceMethod2();
		void Dispose(byte param_1);
		virtual void InstanceMethod0();
		virtual void Method8();
		virtual void SetCtx(int param_1);
		static void EmptyFunction();
		static void EmptyFunction_22();
		virtual bool IsA(uint param_2, uint* param_3);
		virtual void InstanceMethod31(uint* param_1);
		virtual void InstanceMethod23(uint param_1);
		virtual int InstanceMethod25(uint param_1);
		virtual bool InstanceMethod26(int param_1, uint* param_2);
		virtual bool InstanceMethod27(int param_1, float* param_2);
		virtual bool InstanceMethod19(int param_1, uint* param_2, float* param_3);
		virtual bool InstanceMethod20(int param_1, uint* param_2, float* param_3);
		virtual bool InstanceMethod28(uint param_1, uint* param_2);
		virtual void InstanceMethod16(int** param_1, float* param_2, float* param_3);
		virtual bool Step(UnkTimePack* time);
		static bool IsB();
		static bool IsC();
		static bool IsG();
		virtual bool IsF();

};
