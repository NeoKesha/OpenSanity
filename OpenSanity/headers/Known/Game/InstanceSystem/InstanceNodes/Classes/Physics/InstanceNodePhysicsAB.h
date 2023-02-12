#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodePhysicsABBody.h"

class InstanceNodePhysicsAB {
	public:
		InstanceNodePhysicsABBody body;

		virtual void PhysicsMethod0(float param_1);
		static bool PhysicsMethod1(InstanceNodePhysicsAB* param_1);
		void Construct();
		void Construct_3();
		static void Dispose(InstanceNodePhysicsAB* param_1);
		virtual void PhysicsMethod2();
		void Dispose_6(byte param_1);
		virtual void PhysicsMethod5(float* param_1);
		virtual void PhysicsMethod6(Vector4* param_1);
		virtual bool PhysicsMethod3(int* param_1);
		static bool IsB();

};
