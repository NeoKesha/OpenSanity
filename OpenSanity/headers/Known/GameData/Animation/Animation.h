#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Animation/AnimationBlob.h"

class Animation {
	public:
		uint unk;
		uint index;
		int flags;
		AnimationBlob blob1;
		AnimationBlob blob2;

		void Construct();
		void DisposeBlobs();
		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);
		void Construct_4(MemoryStream* stream);

};
