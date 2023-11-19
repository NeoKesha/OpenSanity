#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceContextSmartPtr {
	public:
		InstanceContextRefCounter * refCounter;

		void FreeCtx(InstanceContext* ctx);
		InstanceContextSmartPtr* SetCtx(InstanceContext* ctx);
		void CreateRef(InstanceContext* ctx, byte flag);
		void FUN_00059e80(int* param_1);
		void Release();

};
