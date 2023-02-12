#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramS : public ShaderProgramAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		static void EmptyFunction();
		static uint IsD();
		virtual bool IsF(uint param_1);
		virtual bool IsNotE(uint param_1);
		virtual uint IsE(int param_1);
		virtual void Read(MemoryStream* param_1);
		virtual void Write(MemoryStream* param_1);
		virtual void InitId();
		static uint GetNum();
		virtual int Method3(char param_1);

};
