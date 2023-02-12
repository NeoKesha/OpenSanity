#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16Sub.h"

class UnkFamily16Base {
	public:
		int flags;
		AutoClass16 * recordArray[1];
		ushort index;
		uint unk;
		SectionRM * rmSection;
		IndexToIdList * indexToIdList;
		GameResources * gameResources;
		UnkFamily16Sub unkStruct;
		UnkFamily17Base* field2046_0x814;

		UnkFamily16Base();
		UnkFamily16Base(GameResources* gameResources, byte isRB, byte isWB);
		~UnkFamily16Base();

		virtual AutoClass16* FindRecord(char* str);
		virtual void CleanUp();
		virtual void FUN_001b9260(MemoryStream* stream);
		virtual AutoClass16* AddNewRecord(char* name, ChunkData* param_2);
		virtual bool CleanUpElement();

};
