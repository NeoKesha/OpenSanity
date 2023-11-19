#pragma once

#include "headers/OpenSanityGlobal.h"

class LevelHolderAbstract {
	public:
		WorldChunk * worldChunk;
		UnkFamily18Abstract* ptr;
		int unk1;
		int unk2;
		int someNum;

		void Construct(uint param_1);
		virtual void Unroll();
		virtual bool SometimesDoesRead(uint param_1);
		virtual bool IsA();
		virtual bool IsB();
		void Dispose(byte param_1);

};
