#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeO : public InstanceNodeAbstract {
	public:

		void FUN_00150670(uint* param_1);
		virtual uint FUN_001518a0(float param_1);
		void Construct();
		static void Dispose(InstanceNodeO* param_1);
		void Dispose_4(byte param_1);
		virtual void SetCtx(InstanceContext* ctx);
		virtual bool Step(byte* param_1);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
