#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Abstract.h"

class UnkFamily27A : public UnkFamily27Abstract {
	public:
		void * array0;
		int cnt0;
		void * array1;
		int cnt1;
		UnkFamily21A * * array2;
		int cnt2;
		void * array3;
		int cnt3;

		virtual bool FUN_000f3360(AiPosition* aiPos, uint param_2, uint param_3);
		virtual bool FUN_000f33b0(uint param_1, uint param_2, uint param_3);
		bool FUN_001bb370(uint param_1, uint param_2, uint param_3);
		bool FUN_001bb410(uint param_1, uint param_2, uint param_3);
		bool FUN_001bb4b0(uint param_1, uint param_2, uint param_3);
		bool FUN_001bb550(uint param_1, uint param_2, uint param_3);
		virtual bool FUN_001bb5f0(int* param_1, uint param_2, uint param_3);
		virtual bool FUN_001bb660(int* param_1, uint param_2, uint param_3);
		bool FUN_001bb6c0(Trigger* param_1, uint param_2, uint param_3);
		bool FUN_001bb730(Trigger* param_1, uint param_2, uint param_3);
		bool FUN_001bb790(int* param_1, uint param_2, uint param_3);
		bool FUN_001bb800(int* param_1, uint param_2, uint param_3);
		bool FUN_001bb860(uint param_1, uint param_2, uint param_3);
		bool FUN_001bb900(uint param_1, uint param_2, uint param_3);
		bool FUN_001bb950(uint param_1, uint param_2, uint param_3);
		bool FUN_001c09b0(uint param_1, uint param_2, uint param_3);
		bool FUN_001c0c30(uint param_1, uint param_2, uint param_3);
		virtual bool FUN_0020c0a0();
		static void Dispose(UnkFamily27A* param_1);
		bool FUN_0020e560(uint param_1);
		void Construct();
		virtual int* FUN_00156700(byte param_1);
		virtual uint FUN_0020cc10(uint param_1, uint param_2);
		virtual uint FUN_0020cc90();
		virtual uint FUN_0020cd00(void** param_1);
		virtual bool FUN_0020cdc0(uint param_1, void* param_2, uint param_3);
		virtual uint FUN_0020e640(uint param_1, uint param_2);
		virtual void FUN_0020e6b0();
		virtual uint FUN_0020f6d0(uint param_1, int param_2);
		virtual uint FUN_0020f7d0();
		virtual uint FUN_00210050(uint param_1, int param_2);
		virtual void FUN_00210180();
		virtual uint FUN_00210ff0(uint param_1, uint param_2);
		virtual uint FUN_00211060(uint param_1, uint param_2);
		virtual uint FUN_002110d0(uint param_1, uint param_2);
		virtual uint FUN_00211140(uint param_1, uint param_2);
		virtual uint FUN_002111b0(uint param_1, uint param_2);
		static void FUN_001566f0();
		static uint* FUN_00156720();
		virtual uint FUN_0020bbe0(void** param_1, size_t* param_2);
		virtual uint FUN_0020bc40(void** param_1, int* param_2);
		virtual uint FUN_0020bca0(void** param_1, int* param_2);
		virtual uint FUN_0020bd00(void** param_1, int* param_2);
		virtual uint FUN_0020bdb0(void** param_1, int* param_2);
		virtual void FUN_0020ca40();
		virtual void FUN_0020ccc0(uint param_1);
		virtual uint FUN_0020cd80(int param_1);
		virtual uint FUN_0020ce10(uint param_1, uint param_2);
		virtual uint FUN_0020ce50(uint param_1, int param_2);
		virtual uint FUN_0020ce90(uint param_1, int param_2);
		virtual uint FUN_0020cee0(uint param_1, int param_2);
		virtual uint FUN_0020cf30(uint param_1, int param_2);
		virtual uint FUN_0020cf80(uint param_1, uint* param_2);
		virtual uint FUN_0020cfd0(uint param_1, int* param_2);
		virtual uint FUN_0020d020(uint param_1, int* param_2);
		virtual uint FUN_0020d070(uint param_1, int* param_2);
		virtual uint FUN_0020d100(uint param_1, int* param_2);
		virtual void FUN_0020d170();
		virtual void FUN_0020d190();
		virtual void FUN_0020d1b0();
		virtual uint FUN_0020e5d0(uint param_1);
		virtual bool FUN_0020e740(uint param_1);
		virtual void FUN_0020e8c0(uint param_1, uint param_2);
		virtual void FUN_0020f8e0(uint param_1, byte param_2);
		virtual void FUN_0020f900(uint param_1, byte param_2);
		virtual void FUN_0020f920(uint param_1, byte param_2);
		virtual void FUN_0020f940(uint param_1, byte param_2);
		virtual void FUN_0020f960(uint param_1, byte param_2);
		virtual void FUN_0020f980(uint param_1, byte param_2);

};
