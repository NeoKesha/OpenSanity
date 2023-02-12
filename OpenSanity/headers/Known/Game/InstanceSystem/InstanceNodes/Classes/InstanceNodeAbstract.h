#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceNodeAbstract {
	public:
		InstanceContext * ctx;
		uint time;

		virtual void UnkMethod1();
		virtual InstanceNodeAbstract* Contruct();
		virtual void UnrollVtable();
		virtual void SetCtx(InstanceContext* ctx);
		virtual bool Step(UnkTimePack* time);
		virtual void FUN_0015dab0(InstanceContext* param_1);
		virtual void FUN_0015dc10(float param_1);
		virtual void FUN_0015eb60(float* param_1, float* param_2);
		virtual void FUN_00172f90(float param_1);
		void FUN_00175d40(int param_1, int param_2, InstanceContext* param_3);
		void FUN_0017ad40(int param_1, int param_2, InstanceContext* param_3);
		virtual void FUN_0017ca40();
		virtual void FUN_00163080();
		virtual void FUN_00168860();
		void FUN_0016eb3f(UnkFamily2Base* param_1);
		virtual void FUN_0016ec40();
		virtual void FUN_001750f0();
		virtual uint FUN_00175fa0(uint param_1, float param_2);
		uint FUN_00177d20(uint* param_1);
		void FUN_0017c840(int param_1, int param_2);
		virtual void FUN_0016ebf0(byte param_1, byte param_2, uint param_3);
		void FUN_0016ffc0(char param_1);
		virtual void FUN_0016ec70();
		virtual void DisposeSomething();
		static bool IsA();
		static void EmptyFunction();
		virtual void UpdateTime(UnkTimePack* time);
		static void EmptyFunction_27();
		void Dispose(byte param_1);
		static void UnrollVtable_29(InstanceNodeAbstract* param_1);

};
