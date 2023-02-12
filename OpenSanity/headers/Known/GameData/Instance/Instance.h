#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Instance/InstanceIdList.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Rotation.h"

class Instance {
	public:
		Vector4 position;
		Rotation rotation;
		InstanceIdList instances;
		InstanceIdList positions;
		InstanceIdList paths;
		ParameterTable * parameters;
		short objectId;
		short refListIndex;
		short onSpawnScriptId;
		char parametersInited;

		void FUN_00065d80(InstanceContext* ctx);
		void Construct();
		void FUN_001aa8e0(ChunkMeta* chunkMeta, InstanceContext* ctx, char param_3);
		void FUN_001aa9a0(ChunkMeta* chunkMeta, InstanceContext* ctx);
		void Read(MemoryStream* stream);
		void Construct_5(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);

};
