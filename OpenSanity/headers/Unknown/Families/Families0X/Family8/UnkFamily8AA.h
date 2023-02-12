#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8A.h"

class UnkFamily8AA : public UnkFamily8A {
	public:
		int * array;
		uint cnt;

		void Construct(uint param_1, uint param_2, int param_3, byte param_4, uint param_5, uint param_6);
		void Dispose();
		void Dispose_2(byte param_1);
		void Dispose_3(byte param_1);
		virtual bool PrintValue(int param_1, int param_2);
		void Construct_5(uint param_1, uint param_2, int strCnt, byte param_4, uint param_5, byte param_6);

};
