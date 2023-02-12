#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeInstanceCBody.h"

class InstanceNodeInstanceC {
	public:
		InstanceNodeInstanceCBody body;

		void Dispose();
		void Dispose_1(byte param_1);
		virtual bool InstanceMethod7(uint param_1, uint param_2, char param_3, byte param_4);
		virtual void InstanceMethod10(char param_1);
		virtual void InstanceMethod8(ushort param_1);
		static uint IsG();
		void Construct();
		void Construct_7(int param_1);
		void Construct_8(void* param_1);

};
