#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class InstanceNodeKSubModule2Abstract {
	public:

		int field13_0x10;
		byte field31_0x70;
		byte field32_0x71;
		Vector4 field26_0x20;
		Vector4 field27_0x30;

		InstanceNodeKSubModule2Abstract();
		~InstanceNodeKSubModule2Abstract();

		virtual bool UnkMethod5(uint param_1, InstanceNodeKSubA* param_2);
};
