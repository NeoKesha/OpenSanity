#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramA : public ShaderProgramAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		static void EmptyFunction();
		static bool IsD();
		virtual bool IsF(uint param_1);
		virtual bool IsNotE(uint param_1);
		virtual bool IsE(int param_1);
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		virtual void InitId();
		static int GetNum();
		virtual int Method3(bool param_1);

};
