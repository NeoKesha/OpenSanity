#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family17/UnkFamily17A.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16Base.h"

class UnkFamily16A : public UnkFamily16Base {
	public:
		int intArray[1000];
		UnkFamily17A unkStruct2;

		UnkFamily16A();
		UnkFamily16A(GameResourceManager* resourceManager, byte isRB, byte isWB);
		~UnkFamily16A();
		static void LoadShadows(bool unpacked);
		virtual Chunk* FUN_001b1e00(short param_1);
		virtual void FUN_001b1e80(int param_1, uint param_2);
		virtual void FUN_001b1ea0(int param_1, int param_2);
		virtual uint FUN_001b1ee0(int param_1);
		void FUN_001b3100(int param_1, char param_2);
		virtual int FUN_001b3ac0(InstanceContext* param_1);
		virtual void Write(MemoryStream* stream);
		void LoadDefault(char* fname);
		Chunk* CreateNewRecord(char* str, ChunkData* param_2, uint param_3, UnkFamily15A* param_4);
		virtual Chunk* AddNewRecord(char* str, ChunkData* param_2);

};
