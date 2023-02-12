#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramG : public ShaderProgramAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		static void EmptyFunction();
		static uint IsD();
		static void InitId(ShaderProgramG* param_1);
		static uint GetNum();
		static bool IsA();
		static bool IsC();
		virtual int Method3(char param_1);

};
