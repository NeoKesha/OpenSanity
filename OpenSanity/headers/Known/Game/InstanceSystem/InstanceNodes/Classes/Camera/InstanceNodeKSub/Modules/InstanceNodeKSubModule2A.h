#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2Abstract.h"
#include "headers/Known/Math/Vector4.h"

class InstanceNodeKSubModule2A : public InstanceNodeKSubModule2Abstract {
	public:

		InstanceNodeKSubModule2A();
		~InstanceNodeKSubModule2A();
		uint field15_0x80;
		Vector4 field28_0x90;
		Vector4 field29_0xa0;
		int field38_0xb8;

		virtual float FUN_001c92e0(int param_1);

		virtual void UnkMethod3(int param_1);
		static float UnkMethod4();

};
