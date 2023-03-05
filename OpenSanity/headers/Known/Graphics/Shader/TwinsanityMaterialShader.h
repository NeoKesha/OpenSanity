#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityMaterialShader {
	public:
		ShaderProgramAbstract * shaderPrograms[4];
		uint shaderProgramCnt;
		uint shaderType;
		int field9_0x24;
		int field6_0x18;
		int field7_0x1c;

		TwinsanityMaterialShader();

		virtual void DisposeShaderPrograms();
		virtual void Write(MemoryStream* stream);
		virtual void FUN_00105840();
		void ReadFromStream(MemoryStream* stream);

};
