#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2Abstract.h"

class NodeRelated2D : public NodeRelated2Abstract {
	public:

		virtual bool Method6(byte param_1, uint param_2, Vector4* vec);
		void Dispose(byte param_1);
		virtual void Method3();
		virtual void Method4();
		virtual void FUN_000671a0(int param_1);
		virtual void FUN_0006ad60(int param_1);
		virtual void FUN_0006b990(uint param_1, uint param_2);
		virtual void Update(int param_1);
		static bool IsA();
		static void EmptyFunction();
		static bool IsC();
		void Construct(int* param_1, uint param_2, uint param_3);

};
