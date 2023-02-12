#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityRigidModel2 {
	public:
		uint id;
		TwinsanityMaterial * * materialIds;
		TwinsanityModel * model;
		uint cnt;

		void Dispose();
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		virtual void Render(byte param_1, char* param_2);
		void Construct(uint id);

};
