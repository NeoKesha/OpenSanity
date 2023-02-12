#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModuleAbstract.h"

class InstanceNodeKSubModuleA : public InstanceNodeKSubModuleAbstract {
	public:
		uint functionType;

		void Construct();
		virtual float F(float x);
		void Dispose(byte param_1);
		virtual void SetVec1(uint param_1, Vector4* vec);
		virtual void UnkMethod3();
		virtual void UnkMethod4(byte* param_1, uint param_2, Vector4* vec);
		virtual void UnkMethod5(Vector4* vec);
		virtual void UnkMethod6(float val);
		virtual void UnkMethod7(byte param_1);
		virtual bool UnkMethod8(uint param_1, InstanceNodeKSubA* param_2);

};
