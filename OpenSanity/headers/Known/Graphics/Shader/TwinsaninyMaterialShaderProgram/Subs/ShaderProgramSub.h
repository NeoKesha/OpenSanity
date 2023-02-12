#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Animation/AnimationBlob.h"

class ShaderProgramSub {
	public:
		AnimationBlob blob;
		AnimationBlob * animArray[5];
		long time;

		void Construct();
		virtual void Write(MemoryStream* stream);
		virtual void Read(MemoryStream* stream);

};
