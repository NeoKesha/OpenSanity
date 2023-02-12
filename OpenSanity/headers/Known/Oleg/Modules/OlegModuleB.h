#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleAbstract.h"
#include "headers/Known/Math/Vector2.h"

class OlegModuleB : public OlegModuleAbstract {
	public:
		Vector2 array[10];

		static void Construct(OlegModuleB* param_1);
		void Construct_1(float param_1);
		virtual void FUN_001a3e80();
		virtual void FUN_001a3f60();
		virtual void FUN_001a3dc0();
		virtual void FUN_001a3de0();
		virtual void FUN_001a3e00();
		virtual void FUN_001a3e30();
		virtual void FUN_001a3e50();
		virtual void FUN_001a3f30();
		void Dispose(byte param_1);

};
