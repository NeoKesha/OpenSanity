#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Unknown/AutoClasses/AutoClass52.h"

class AutoClass53 {
	public:
		uint flags;
		TwinString str;
		short index;
		AutoClass52 unkStruct1;
		AutoClass52 unkStruct2;

		AutoClass53();
		~AutoClass53();

		bool FUN_000b9fe0(int type, ChunkDesc* desc, UnkFamily16A* defaultRm);
		void FUN_000ae330(uint param_1, uint param_2, UnkFamily16A* defaultRm);
		bool FUN_000b58f0(uint param_1, UnkFamily16A* defaultRm, InstanceContext* ctx1, InstanceContext* ctx2, InstanceContext* ctx3);

};
