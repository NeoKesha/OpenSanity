#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeInput : public InstanceNodeAbstract {
	public:
		InputStruct * input;

		void FUN_000aea70(uint param_1);
		void Construct();
		static void Dispose(InstanceNodeInput* param_1);
		virtual void UpdateTime();
		virtual bool Step(byte* param_1);
		void Dispose_5(byte param_1);
		static uint GetBuilderIndex();

};
