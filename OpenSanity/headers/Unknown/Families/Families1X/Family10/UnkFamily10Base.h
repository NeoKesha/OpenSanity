#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily10Base {
	public:
		char * name;
		byte * buffer1;
		size_t buffer1length;
		byte * buffer2;
		size_t buffer2length;

		virtual void Init();
		void Construct(char* name, size_t length);
		void Construct_2(uint param_1, uint length);
		virtual void CleanUp();
		bool Add(UnkFamily8Abstract* element);
		int FUN_001a5670(uint param_1);
		int FUN_001a56e0(uint param_1);
		void FUN_001a57c0(uint param_1);
		virtual uint* FUN_000abef0(byte param_1);
		virtual uint* FUN_000abfb0(byte param_1);
		virtual uint* FUN_000ac0a0(byte param_1);
		void Dispose(byte param_1);
		virtual uint* FUN_002036a0(byte param_1);
		static void EmptyFunction();
		static void EmptyFunction_14();
		static void EmptyFunction_15();
		static void EmptyFunction_16();
		static void EmptyFunction_17();
		static void FUN_000ab4c0();
		static void EmptyFunction_19();
		static void EmptyFunction_20();
		static void EmptyFunction_21();

};
