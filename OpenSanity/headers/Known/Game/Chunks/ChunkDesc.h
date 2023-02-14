#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class ChunkDesc {
	public:
		uint flags2;
		uint flags;
		int ticks;
		int someTime;
		TwinString chunkName;
		TwinString unkString1;
		TwinString unkString2;
		uint uintArray[16];
		uint unkReserved1;
		uint unkField10;
		int someDTime;
		InstanceContextRefCounter * playerInstanceContexts[6];
		AutoClass53 * slot1;
		AutoClass53 * slot2;
		AutoClass53 * slot3;

		ChunkDesc();
		~ChunkDesc();

		void ResetStrings();
		bool ReloadLevel(UnkFamily16A* _default);
		void Construct();
		int CountSomething2();
		bool CheckReady(int index, bool flag);
		int CountSomething1();
		AutoClass53* InitPlayerContexts(int type, UnkFamily16A* defaultRm);
		void FUN_0007c020(int param_1, InstanceContext* param_2);
		int* FUN_000bb7c0(int param_1, TwinString* str, short* param_3, ChunkDesc* param_4, UnkFamily16A* defaultRm);
		uint BossModeDamage(int param_1);
		uint WhackawormProgress(int param_1);

};
