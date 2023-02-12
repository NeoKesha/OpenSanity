#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/World/LevelHolderAbstract.h"

class LevelHolderSM : public LevelHolderAbstract {
	public:
		SectionSM * section;
		ChunkDataRefCounter * chunkDataRef;

		void FUN_00154770(int param_1);
		void FUN_001547d0(void* param_1);
		void Construct(uint param_1);
		virtual bool DisposeSection();
		void Dispose();
		virtual bool Method4();
		void Dispose_6(byte param_1);
		virtual bool SometimesDoesRead(uint param_1);
		static void DoChunkStuff(LevelHolderSM* param_1);
		virtual bool SameChunkData(InstanceContext* ctx);
		virtual bool Read(int param_1, bool read);

};
