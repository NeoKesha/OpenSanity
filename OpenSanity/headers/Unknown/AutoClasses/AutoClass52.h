#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Math/Vector4.h"

class AutoClass52 {
	public:
		Vector4 vec1;
		Vector4 vec2;
		int field2_0x20;
		TwinString chunkName;

		AutoClass52(ChunkData* param_1);
		AutoClass52(AutoClass52* other);
		~AutoClass52();

		AutoClass52* Copy(AutoClass52* other);
		void FUN_000f6ab0(InstanceContext* ctx, byte param_2);
		void FUN_000f6b70(InstanceContext* ctx, ChunkData* chunkData, byte param_3);
		void FUN_000fb0b0(InstanceContext* ctx);

};
