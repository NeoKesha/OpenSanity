#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodePayGate : public InstanceNodeAbstract {
	public:

		void Construct(NodeRelated2H* param_1);
		void Dispose(byte param_1);
		virtual void SetCtx(uint ctx);
		virtual void UpdateTime(int param_1, uint param_2);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
