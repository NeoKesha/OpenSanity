#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3Abstract.h"

class UnkFamily3D : public UnkFamily3Abstract {
	public:

		NodeRelated2C* FUN_00091ee0();
		void CleanUp();
		void Construct(NodeRelated2C* param_1, NodeRelated2C* param_2, byte param_3);
		virtual uint FUN_00098550(void* param_1, Matrix4* param_2);
		void Dispose(byte param_1);
		virtual void FUN_0007ed40(int param_1);
		virtual void FUN_0007edc0(int param_1);

};
