#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class InstanceNodeKSubModule3Abstract {
	public:
		float fov;
		Vector4 vec1;
		Vector4 vec2;

		float FUN_001d0470(float param_1);
		float FUN_001d0510(float val);
		virtual float UnkMethod3_(int param_1);
		virtual bool UnkMethod5(uint param_1, InstanceNodeKSubA* param_2);
		static bool ReturnFalse();
		void Dispose(byte param_1);
		void Unroll();
		void Construct();
		void Construct_8();
		static void Unroll_9(uint* param_1);
		static void Unroll_10(uint* param_1);

};
