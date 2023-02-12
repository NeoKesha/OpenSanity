#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3Abstract.h"

class InstanceNodeKSubModule3A : public InstanceNodeKSubModule3Abstract {
	public:

		virtual void Init();
		virtual void UnkMethod3(int param_1, Matrix4* mat);
		void Dispose(byte param_1);
		void Construct();
		static void EmptyFunction();

};
