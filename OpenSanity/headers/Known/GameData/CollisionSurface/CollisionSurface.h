#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/BoundingBox.h"

class CollisionSurface {
	public:
		int flags;
		float floatParam6;
		float floatParam7;
		float floatParam8;
		float unkFloat1;
		float unkFloat2;
		float floatParam9;
		float floatParam10;
		int unkVector;
		BoundingBox boundingBox;
		short surfaceId;
		short landSoundId1;
		short unkSoundId2;
		short unkSoundId;
		short stepSoundId1;
		short stepSoundId2;
		short landSoundId2;
		short particleId1;
		short particleId2;
		short particleId3;
		float floatParam1;
		float floatParam2;
		float floatParam3;
		float floatParam4;
		float floatParam5;

		void Construct();
		void Read(MemoryStream* stream);
		uint FUN_001eb1b0(UnkFamily27Wrapper* param_1);
		void Construct_3(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);

};
