#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family18/UnkFamily18Abstract.h"

class UnkFamily18A : public UnkFamily18Abstract {
	public:

		static bool IsA(WorldChunk* obj);
		static bool IsB(WorldChunk* obj);
		static bool IsC(WorldChunk* obj);
		void Dispose(byte param_1);
		void Construct();

};
