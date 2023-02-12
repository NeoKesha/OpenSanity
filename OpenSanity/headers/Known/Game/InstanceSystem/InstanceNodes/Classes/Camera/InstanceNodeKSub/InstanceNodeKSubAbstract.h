#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceNodeKSubAbstract {
	public:
		InstanceNodeKSubModuleAbstract * struct1ptr;
		InstanceNodeKSubModuleAbstract * struct2ptr;
		InstanceNodeKSubModule2Abstract * struct3ptr;
		InstanceNodeKSubModule3Abstract * struct4ptr;

		void Construct();
		virtual void CleanUp();
		virtual void FUN_001c6fd0(uint param_1);
		void Dispose(byte param_1);
		virtual void FUN_001c7040(float param_1);
		virtual uint FUN_001c7220(uint param_1, uint* param_2);
		void Construct_6(uint param_1, uint param_2);

};
