#pragma once
#include "headers/OpenSanityGlobal.h"

class ShaderWrapper {
public:
	DWORD shaderHandle;
	DWORD pDeclaration[64];
	DWORD pFunction[256];
	int declarationSize;
	uint shaderSize;
	uint unkField;

	void CompileShader(const char* shaderCode);
};
