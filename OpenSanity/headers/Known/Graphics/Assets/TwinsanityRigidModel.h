#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityRigidModel {
	public:
		uint id;
		TwinsanityMaterial * * materials;
		TwinsanityModel * model;
		uint materialCnt;
		uint modelId;

		void Dispose();
		virtual void Read(MemoryStream* stream);
		virtual void Render(byte param_1, long* shaderConstant);
		virtual void Write(MemoryStream* stream);
		void Construct(uint param_1);

};
