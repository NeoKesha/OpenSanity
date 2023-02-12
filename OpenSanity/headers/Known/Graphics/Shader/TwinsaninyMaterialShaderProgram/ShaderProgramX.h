#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramX : public ShaderProgramAbstract {
	public:

		void Construct();
		virtual void Write(MemoryStream* stream);
		virtual void Read(MemoryStream* stream);
		void Dispose(byte param_1);
		static void EmptyFunction();
		static uint IsD();
		virtual bool IsF(uint param_1);
		virtual bool IsNotE(uint param_1);
		virtual bool IsE(int param_1);
		virtual void InitId();
		static uint GetNum();
		static bool IsA();
		static bool IsC();
		virtual int Method3(char param_1);

};
