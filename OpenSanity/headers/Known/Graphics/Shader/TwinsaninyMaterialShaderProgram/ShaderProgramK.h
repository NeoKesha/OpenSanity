#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramK : public ShaderProgramAbstract {
	public:

		void Construct();
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		void Dispose(byte param_1);
		static void EmptyFunction();
		static uint IsD();
		virtual bool IsF(uint param_1);
		virtual bool IsNotE(uint param_1);
		virtual uint IsE(int param_1);
		virtual void InitId();
		static uint GetNum();
		static bool IsA();
		static bool IsC();
		virtual uint Method3();

};
