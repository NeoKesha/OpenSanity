#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class InstanceNodeKSubModule3Abstract {
	public:
		float fov;
		Vector4 vec1;
		Vector4 vec2;
		byte field13_0x10;
		byte field25_0x40;

		InstanceNodeKSubModule3Abstract();
		~InstanceNodeKSubModule3Abstract();

		float FUN_001d0470(float param_1);
		float FUN_001d0510(float val);
		virtual float UnkMethod3_(int param_1);
		virtual bool UnkMethod5(uint param_1, InstanceNodeKSubA* param_2);
		static bool ReturnFalse();
};
