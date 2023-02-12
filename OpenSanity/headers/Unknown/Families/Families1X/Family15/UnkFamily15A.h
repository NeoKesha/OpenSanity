#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family15/UnkFamily15Abstract.h"

class UnkFamily15A : public UnkFamily15Abstract {
	public:
		int array[8];

		virtual void SetResetBit(uint index, bool set);
		virtual bool FUN_001b1fc0(uint param_1);
		void Construct();
		void Dispose(byte param_1);
		virtual int* UnkMethod1();
		virtual int* UnkMethod2();
		static int UnkMethod3();
		static int UnkMethod4();
		virtual void UnkMethod6(MemoryStream* stream);
		virtual void UnkMethod7(int* param_1);
		virtual int* GetArray();
		virtual int* GetArray_11();
		static int GetArrayLength();
		static int GetSomething();

};
