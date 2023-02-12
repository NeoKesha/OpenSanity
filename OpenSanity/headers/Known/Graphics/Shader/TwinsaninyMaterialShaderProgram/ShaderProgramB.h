#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramB : public ShaderProgramAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		static void EmptyFunction();
		virtual void InitId();
		static int GetNum();
		virtual int Method3(char param_1);
		static uint IsD();
		virtual bool IsNotE(uint param_1);
		virtual bool IsE(int param_1);

};
