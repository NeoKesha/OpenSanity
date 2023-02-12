#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeInstanceABody.h"

class InstanceNodeInstanceA {
	public:
		InstanceNodeInstanceABody body;

		void Init();
		virtual void InstanceMethod15(float* param_1, float param_2);
		virtual void UpdateTime();
		virtual void InstanceMethod12(uint* param_1);
		void Construct();
		virtual bool IsE();
		virtual void InstanceMethod2();
		virtual void InstanceMethod13();
		void Dispose();
		void Dispose_9(byte param_1);
		InstanceNodeInstanceA* Cosntruct(int param_1);
		virtual void InstanceMethod1(int param_1);
		virtual bool IsD();
		virtual void SetCtx(InstanceContext* ctx);
		virtual void InstanceMethod0();
		virtual bool Step(UnkTimePack* time);
		virtual void DisposeSomething(int* param_1);
		static bool InstanceMethod31();
		static bool IsB();
		static bool IsC();
		static void EmptyFunction();
		virtual uint InstanceMethod14();
		static uint GetIndex2();
		void Construct_23(void* param_1);

};
