#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2Abstract.h"

class InstanceNodeKSubModule2B : public InstanceNodeKSubModule2Abstract {
	public:

		void FUN_00059f30(InstanceContext* ctx);
		virtual void FUN_001c8ce0(InstanceTransform* transform, Vector4* vec);
		void FUN_001c9000(Vector4* vec1, Vector4* vec2);
		virtual void Init();
		void Construct();
		void Dispose();
		virtual uint FUN_001c8ef0(uint param_1, InstanceNodeKSubA* param_2);
		virtual void FUN_001cf9c0(int param_1);
		virtual InstanceNodeKSubModule2B* SetInternal(byte param_1);
		virtual float FUN_001d0140(int param_1);

};
