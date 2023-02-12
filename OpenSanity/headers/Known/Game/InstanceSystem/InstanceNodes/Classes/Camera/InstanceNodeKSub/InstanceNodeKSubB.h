#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3B.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubBase.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModuleA.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2B.h"

class InstanceNodeKSubB : public InstanceNodeKSubBase {
	public:
		float inputVal1;
		float inputVal2;
		float inputVal3;
		float inputVal4;
		float inputVal5;
		float inputVal6;
		float inputVal7;
		float inputVal8;
		InstanceNodeKSubModuleA struct1;
		InstanceNodeKSubModuleA struct2;
		InstanceNodeKSubModule2B struct3;
		InstanceNodeKSubModule3B struct4;
		InstanceContext * ctx;

		void Construct();
		void FUN_0007cc40();
		void FUN_0007c930(uint param_1);
		void FUN_0007cb80();
		void FUN_0007cd50();
		void InitInput();
		void FUN_000835f0(void* param_1);
		void FUN_0008f8a0(void* param_1);
		void FUN_00083380(float param_1, int param_2);
		void FUN_000834c0();
		void FUN_0007cde0();
		void FUN_0007c8b0(void* param_1);
		virtual void FUN_000990d0(uint param_1, uint param_2, int** param_3);
		void Dispose(byte param_1);
		void FUN_00095350(int param_1);
		virtual void UpdatePointers();
		virtual void ResetInputValues();
		virtual void FetchInput(InputStruct* input);
		virtual void GetInputValues(float* outVal1, float* outVal2);
		virtual void FUN_00083240(int param_1);
		virtual void FUN_00097e40(uint param_1, void* param_2);

};
