#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3Abstract.h"

class InstanceNodeKSubModule3B : public InstanceNodeKSubModule3Abstract {
	public:
		float fov;
		Vector4 fovVector;

		void FUN_001c8350(byte param_1);
		void FUN_001c8990();
		void Dispose();
		virtual void FUN_001d2e10();
		void Construct(float k, uint num);
		virtual uint FUN_001c81d0(uint param_1, InstanceNodeKSubA* param_2);
		virtual void FUN_001cdf60(uint param_1, float* param_2);
		virtual void FUN_001d3320(int param_1, uint param_2);
		void Dispose_8(byte param_1);
		virtual void FUN_001d3260(uint param_1, uint param_2);
		virtual void FUN_001d70b0(int param_1, int param_2, float param_3);
		virtual uint FUN_001d96c0();

};
