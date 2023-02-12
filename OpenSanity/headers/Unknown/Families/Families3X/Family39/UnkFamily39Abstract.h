#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class UnkFamily39Abstract {
	public:
		TwinString strArray[9];
		byte cnt;

		void Dispose();
		virtual void ShiftStrArray(char param_1);
		void Dispose_2(byte param_1);
		virtual int AddStr(char* param_1);
		virtual void ClearStrArray();
		void Construct();

};
