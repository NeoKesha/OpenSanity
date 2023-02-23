#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleAbstract.h"
#include "headers/Known/Math/Vector2.h"

class OlegModuleB : public OlegModuleAbstract { //Use module A
	public:
		Vector2 array[10];

		OlegModuleB();
		OlegModuleB(float x);
		virtual void FUN_001a3e80();
		virtual void FUN_001a3f60();
		virtual void FUN_001a3dc0();
		virtual void FUN_001a3de0();
		virtual void FUN_001a3e00();
		virtual void FUN_001a3e30();
		virtual void FUN_001a3e50();
		virtual void FUN_001a3f30();

};
