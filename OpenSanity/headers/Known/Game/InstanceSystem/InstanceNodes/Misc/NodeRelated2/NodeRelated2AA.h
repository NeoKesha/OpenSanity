#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2Abstract.h"

class NodeRelated2AA : public NodeRelated2Abstract {
	public:

		virtual void Update(uint param_1);
		void CleanUp();
		void FUN_000676d0(int param_1);
		void Dispose(byte param_1);
		virtual void Update_4(int flags);
		static void EmptyFunction();
		static void EmptyFunction_6();
		static void EmptyFunction_7();
		static void IsC();
		void Construct(int* param_1, uint param_2, uint param_3);

};
