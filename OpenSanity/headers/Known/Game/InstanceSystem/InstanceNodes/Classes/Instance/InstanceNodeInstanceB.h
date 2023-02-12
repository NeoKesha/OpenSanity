#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeInstanceBBody.h"

class InstanceNodeInstanceB {
	public:
		InstanceNodeInstanceBBody body;

		void FUN_0004c5a0(UnkTimePack* time, uint param_2);
		void Construct();
		void FUN_0003e9f0(UnkTimePack* time, int param_2, float* param_3);
		static void FUN_0004bd70(InstanceNodeInstanceB* param_1);
		void FUN_0003ed80(UnkTimePack* time);
		virtual void UpdateTime(int param_1);
		virtual void InstanceMethod12(uint* param_1);
		virtual void InstanceMethod13();
		virtual void FUN_0004bca0();
		void Dispose(byte param_1);
		virtual void InstanceMethod0();
		virtual void InstanceMethod1(int param_1);
		virtual void InstanceMethod15(Vector4* param_1);
		static void EmptyFunction();
		virtual void IsA(uint param_1, InstanceNodeKSubA* param_2);
		virtual void DisposeSomething(int* param_1);
		virtual bool Step(UnkTimePack* time);
		static void InstanceMethod31();
		static bool IsB();
		static bool IsC();
		static void EmptyFunction_20();
		static uint GetIndex2();
		virtual uint InstanceMethod14();
		static uint Passthrough(uint param_1);

};
