#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodePhysicsBody.h"

class InstanceNodePhysics {
	public:
		InstanceNodePhysicsBody body;

		void FUN_001de910();
		virtual void FUN_001df330();
		virtual void FUN_001dfbd0(Vector4* param_1);
		virtual void InitStuff(float param_1, float k3, float k1, float k2);
		void Construct();
		void Dispose(byte param_1);
		static bool Step();
		static byte GetIndex();
		static uint GetBuilderIndex();
		static byte IsA();
		void Dispose_10();

};
