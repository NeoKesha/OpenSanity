#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodePhysicsABody.h"

class InstanceNodePhysicsA {
	public:
		InstanceNodePhysicsABody body;

		virtual void FUN_001db180(float* param_1);
		void Construct();
		void Dispose();
		virtual void PhysicsMethod6(Vector4* param_1);
		virtual uint IsA(uint param_1, InstanceNodeKSubA* param_2);
		void Dispose_5(byte param_1);
		static void EmptyFunction();
		virtual void SetCtx(uint param_1);

};
