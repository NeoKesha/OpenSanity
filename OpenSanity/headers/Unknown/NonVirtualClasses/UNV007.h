#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/BoundingBox.h"

class UNV007 {
	public:
		BoundingBox bb;

		void Construct(uint param_1, uint param_2);
		void FUN_001e2c60();
		virtual bool FUN_001e2d20(BoundingBox* bb);

};
