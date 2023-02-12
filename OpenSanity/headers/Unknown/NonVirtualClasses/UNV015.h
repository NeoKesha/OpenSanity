#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/BoundingBox.h"

class UNV015 {
	public:
		uint * array;
		BoundingBox bb;

		UNV015* ParentConstruct(ushort param_1, ushort param_2);
		virtual void Set(uint value, int index);
		virtual void FUN_00136df0(uint* param_1, int param_2, uint param_3);
		void Construct(int param_1, int param_2);

};
