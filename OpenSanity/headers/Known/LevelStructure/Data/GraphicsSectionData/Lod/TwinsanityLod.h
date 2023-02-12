#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityLod {
	public:
		uint id;
		TwinsanityRigidModel * * rigidModelArray;
		uint cnt;

		virtual void Read(MemoryStream* stream);
		void Dispose();

};
