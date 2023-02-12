#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3Abstract.h"

class UnkFamily3F : public UnkFamily3Abstract {
	public:

		void Construct(uint param_1);
		virtual void FUN_00170250(int param_1);
		virtual void FUN_001702a0(int param_1);
		virtual bool FUN_00175c70(void* param_1, Matrix4* param_2);
		void Dispose(byte param_1);

};
