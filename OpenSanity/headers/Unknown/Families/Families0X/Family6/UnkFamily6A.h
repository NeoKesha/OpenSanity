#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6Abstract.h"

class UnkFamily6A : public UnkFamily6Abstract {
	public:

		virtual void Init();
		void Construct(int param_1);
		void Dispose();
		virtual void FUN_0007fa50(Vector4* param_1, InstanceContext* ctx);
		virtual void FUN_000888b0(float param_1);
		void Dispose_5(byte param_1);
		virtual void FUN_0007f9b0();
		static void EmptyFunction();
		virtual bool FUN_00088900(uint param_1, InstanceNodeKSubA* param_2);
		static void EmptyFunction_9();
		static uint FUN_000a5720();
		static void FUN_000a5730(Vector4* param_1, Vector4* param_2);
		virtual bool FUN_000a5790(Vector4* outVector);
		static void EmptyFunction_13();
		static void FUN_000a57e0();

};
