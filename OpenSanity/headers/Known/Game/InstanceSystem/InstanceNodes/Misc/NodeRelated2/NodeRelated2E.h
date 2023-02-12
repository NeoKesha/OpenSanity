#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2Abstract.h"

class NodeRelated2E : public NodeRelated2Abstract {
	public:

		static void FUN_0006b190(NodeRelated2E* param_1);
		virtual void Update(int param_1);
		virtual bool Method6(uint param_1, uint param_2, Vector4* param_3);
		void Dispose(byte param_1);
		static void FUN_000672a0(NodeRelated2E* param_1);
		static void FUN_000672c0(NodeRelated2E* param_1);
		static void FUN_000672d0(NodeRelated2E* param_1);
		virtual bool IsB(uint param_2, InstanceNodeKSubA* param_3);
		virtual void Method8(Vector4* param_1, uint param_2, char param_3);
		static void EmptyFunction();
		static void IsC();
		void Construct(int* param_1, uint param_2, uint param_3);

};
