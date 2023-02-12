#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramZ : public ShaderProgramAbstract {
	public:

		virtual void Write(int* param_1);
		virtual void Read(int* param_1);
		void Construct();
		void Dispose(byte param_1);
		static void EmptyFunction();
		static uint IsD();
		virtual bool IsNotE(uint param_1);
		virtual uint IsE(int param_1);
		virtual void InitId();
		static uint GetNum();
		static void IsA();
		virtual int Method3(char param_1);

};
