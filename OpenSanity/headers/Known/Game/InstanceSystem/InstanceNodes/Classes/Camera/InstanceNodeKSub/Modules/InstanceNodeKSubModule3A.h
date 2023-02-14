#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3Abstract.h"

class InstanceNodeKSubModule3A : public InstanceNodeKSubModule3Abstract {
	public:
		uint field13_0x50;
		Vector4 field23_0x60;
		Vector4 field24_0x70;
		Vector4 field_0x80;
		int field14_0x54;
		int field49_0x98;

		InstanceNodeKSubModule3A();
		~InstanceNodeKSubModule3A();

		virtual void Init();
		virtual void UnkMethod3(int param_1, Matrix4* mat);
		static void EmptyFunction();

};
