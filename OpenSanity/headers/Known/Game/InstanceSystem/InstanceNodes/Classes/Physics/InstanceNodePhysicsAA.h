#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodePhysicsAABody.h"

class InstanceNodePhysicsAA {
	public:
		InstanceNodePhysicsAABody body;

		void Construct();
		virtual uint FUN_001e1af0(int param_1);
		virtual uint FUN_001e1e30(int param_1);
		virtual bool FUN_001e21a0(int param_1);
		virtual uint PhysicsMethod1();
		virtual void PhysicsMethod2();
		void Dispose(byte param_1);
		virtual uint PhysicsMethod3(int* param_1);
		static bool IsB();
		static void PhysicsMethod5();

};
