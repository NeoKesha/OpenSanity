#pragma once
#include "headers/OpenSanityGlobal.h"

class ShaderWrapper {
public:
	HANDLE shaderHandle;
	uint pDeclaration[64];
	uint pFunction[256];
	int unkInt3;
	uint shaderSize;
	uint unkField;

	void CompileShader(const char* shaderCode);
};
