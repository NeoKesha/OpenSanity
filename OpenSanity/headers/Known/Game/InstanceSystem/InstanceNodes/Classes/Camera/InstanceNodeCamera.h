#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSubWrapper.h"

class InstanceNodeCamera {
	public:
		InstanceContext * ctx;
		ChunkMeta * chunkMeta;
		InstanceContextRefCounter * ctxPtr;
		InstanceNodeKSubWrapper _struct;

		void Construct(ChunkMeta* chunkMeta);
		InstanceContext* FUN_000bc120(ChunkData* chunkData);
		static void CleanUp(InstanceNodeCamera* param_1);
		virtual bool Step(byte* param_1);
		virtual void SetCtx(uint ctx);
		void Dispose(byte param_1);
		void FUN_000bc190(ChunkData* chunkData);
		virtual uint IsA(uint param_1, uint* param_2);
		static void FUN_000bc2f0(InstanceNodeCamera* param_1);
		virtual void UpdateTime(int param_1);
		static uint GetBuilderIndex();

};
