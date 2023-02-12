#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeInstanceBody.h"

class InstanceNodeInstance {
	public:
		InstanceNodeInstanceBody body;

		virtual uint FUN_0016be20(uint* param_1);
		void Dispose();
		void SetAC52Fields(AutoClass52* other);
		void Dispose_3();
		void Construct();
		void FUN_00177380(float param_1);
		void Construct_6(int param_1);
		void Construct_7(ChunkData* chunkData);
		void Dispose_8(byte param_1);
		virtual void InstanceMethod1(void* param_1);
		static uint GetBuilderIndex();
		static byte GetIndex();
		static bool InstanceMethod7();
		static void EmptyFunction();
		static void EmptyFunction_14();
		static void EmptyFunction_15();
		static void EmptyFunction_16();
		static void EmptyFunction_17();
		static bool InstanceMethod16();
		static bool InstanceMethod18();
		static bool InstanceMethod19();
		static bool InstanceMethod20();
		static void EmptyFunction_22();
		static void EmptyFunction_23();
		static void EmptyFunction_24();
		static void EmptyFunction_25();
		static bool InstanceMethod25();
		static bool InstanceMethod26();
		static bool InstanceMethod27();
		static bool InstanceMethod28();
		static bool IsF();
		static bool IsD();
		static bool IsE();
		virtual void InstanceMethod21();
		virtual void Method5(uint param_1);
		virtual void DisposeSomething(int** param_1);
		static void EmptyFunction_36();
		static byte InstanceMethod12();
		static void EmptyFunction_38();
		static byte InstanceMethod14();
		static void EmptyFunction_40();

};
