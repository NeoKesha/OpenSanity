#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramY : public ShaderProgramAbstract {
	public:

		void Dispose(byte param_1);
		static uint GetNum();
		static uint UpdateClock();
		virtual int Method3(char param_2);
		static void EmptyFunction();
		static uint IsD();
		virtual void InitId();
		virtual bool IsE(int param_1);
		virtual bool IsNotE(uint param_1);
		void Construct();

};
