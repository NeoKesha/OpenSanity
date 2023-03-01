#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/D3DVERTEXSHADERINPUT.h"

//Is D3DVERTEXATTRIBUTEFORMAT
//XBOX Extension
//TODO: See IDirect3DDevice8::SelectVertexShaderDirect, IDirect3DDevice8::SetVertexShaderInputDirect, and IDirect3DPushBuffer8::SetVertexShaderInputDirect
class D3DVERTEXATTRIBUTEFORMAT {
	public:
		D3DVERTEXSHADERINPUT inputs[16];

		D3DVERTEXATTRIBUTEFORMAT();

		virtual char FUN_001027a0(int param_1);
		virtual void FUN_00102850(uint* param_1);
};
