#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8Abstract.h"

class UnkFamily8A : public UnkFamily8Abstract {
	public:
		int cnt;

		void FUN_001a11b0(uint param_1, int strCnt, byte param_3, uint param_4);
		void Construct(uint param_1, uint param_2, uint param_3, uint param_4, byte param_5, uint param_6, uint param_7);
		void Dispose();
		virtual bool FUN_001a1140(int param_1);
		virtual int FUN_001a1190(int param_1);
		static uint FUN_001a11f0();
		virtual bool PrintValue(int param_1, char* param_2);
		virtual bool SetValue3(int param_1, uint param_2);
		virtual bool GetValue3(int param_1, uint* param_2);
		virtual bool SetValue2(int param_1, uint param_2);
		virtual bool GetValue2(int param_1, uint* param_2);
		virtual bool SetValue1(int index, float value);
		virtual bool GetValue1(int param_1, float* out);
		virtual int FUN_001a5580(int param_1, uint param_2, int param_3, int param_4);
		void Construct_14(uint param_1, uint param_2, uint param_3, uint strCnt, byte param_5, uint param_6, byte param_7);

};
