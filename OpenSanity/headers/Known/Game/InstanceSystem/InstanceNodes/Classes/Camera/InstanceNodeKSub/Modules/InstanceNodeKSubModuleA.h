#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModuleAbstract.h"
#include "headers/Known/Math/Vector4.h"

class InstanceNodeKSubModuleA : public InstanceNodeKSubModuleAbstract {
	public:
		uint functionType;
		float field11_0x20;
		float field12_0x24;
		Vector4 field10_0x10;

		InstanceNodeKSubModuleA();
		~InstanceNodeKSubModuleA();

		virtual float F(float x);
		virtual void SetVec1(uint param_1, Vector4* vec);
		virtual void UnkMethod3();
		virtual void UnkMethod4(byte* param_1, uint param_2, Vector4* vec);
		virtual void UnkMethod5(Vector4* vec);
		virtual void UnkMethod6(float val);
		virtual void UnkMethod7(byte param_1);
		virtual bool UnkMethod8(uint param_1, InstanceNodeKSubA* param_2);

};
