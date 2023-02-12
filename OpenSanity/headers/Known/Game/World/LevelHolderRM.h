#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/World/LevelHolderAbstract.h"

class LevelHolderRM : public LevelHolderAbstract {
	public:
		SectionRM * section;
		AutoClass16 * ptr;

		void Construct(WorldChunk* param_1);
		void Dispose();
		virtual bool DisposeSection();
		virtual bool DoChunkStuff();
		void Dispose_4(byte param_1);
		virtual bool Read(int param_1);
		static bool Method4();
		virtual bool SameChunkData(InstanceContext* ctx);

};
