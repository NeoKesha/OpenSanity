#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanitySkydome {
	public:
		uint id;
		uint cnt;
		TwinsanityRigidModel2 * * rigidModels;

		virtual void Read(MemoryStream* stream);
		void Construct(uint* param_1);
		void Dispose();

};
