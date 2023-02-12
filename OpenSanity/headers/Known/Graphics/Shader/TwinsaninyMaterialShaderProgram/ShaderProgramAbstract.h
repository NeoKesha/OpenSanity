#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class ShaderProgramAbstract {
	public:
		uint flags;
		uint states;
		TwinsanityTexture * texture;
		Vector4 vec0;
		int id;
		ShaderProgramSub * unkSubStruct;

		void Construct();
		void FUN_000ff9d0(uint* param_1);
		virtual void FUN_00104d60();
		virtual void CleanUp();
		virtual void Write(MemoryStream* stream);
		virtual void Read(MemoryStream* stream);
		virtual void FUN_0010cd30();
		void Dispose(byte param_1);
		virtual int UpdateClock(float arg);
		void Dispose_9();
		void Dispose_10();
		void Dispose_11();
		void Dispose_12(byte param_1);
		virtual bool IsF(int param_1);
		static int GetUnkInt();
		virtual int GetUnkInt2(char param_1);
		static void EmptyFunction();
		static bool ReturnFalse();
		virtual int GetUnkInt_18();
		static bool IsA();
		static bool IsB();
		static bool IsC();
		virtual bool IsNotF(int param_1);
		virtual void RaiseFlag();
		virtual bool CallHell(int param_1);
		virtual bool UnkMethod5(uint param_1);

};
