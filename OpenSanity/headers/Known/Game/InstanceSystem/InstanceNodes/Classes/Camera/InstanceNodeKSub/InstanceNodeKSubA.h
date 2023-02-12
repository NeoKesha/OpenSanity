#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubBase.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModuleA.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3A.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2A.h"

class InstanceNodeKSubA : public InstanceNodeKSubBase {
	public:
		Vector4 vec1;
		Vector4 vec2;
		InstanceNodeKSubModuleA struct1;
		InstanceNodeKSubModuleA struct2;
		InstanceNodeKSubModule2A struct3;
		InstanceNodeKSubModule3A struct4;

		virtual void FUN_00139480(float* param_1);
		virtual void FUN_00139500(Matrix4* param_1, char param_2);
		virtual void FUN_00139650(Vector4* param_1, bool param_2);
		void Construct();
		virtual void CleanUp();
		void Dispose();
		void Dispose_6(byte param_1);
		virtual void FUN_001cafd0();
		static void EmptyFunction();
		virtual void FUN_001cb030();
		void Dispose_10();

};
