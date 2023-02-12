#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityMaterialShader {
	public:
		ShaderProgramAbstract * shaderPrograms[4];
		uint shaderProgramCnt;
		uint shaderType;

		void Construct();
		virtual void DisposeShaderPrograms();
		virtual void Write(MemoryStream* stream);
		virtual void FUN_00105840();
		void ReadFromStream(MemoryStream* stream);

};
