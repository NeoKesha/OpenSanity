#include "headers/Known/LevelStructure/Data/DataEntry/SectionDataEntriesAbstract.h"

#include "headers/Known/LevelStructure/Data/DataEntry/EntryDescriptorAbstract.h"
int SectionDataEntriesAbstract::FindIndexMaterial(uint* obj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionDataEntriesAbstract::FindIndexMaterial(SectionDataEntriesAbstract *this,uint *obj){
		uint uVar1;
		uint uVar2;
		uint i;
		uint uVar3;
		uint uVar4;
		bool condition;
		uint local_4;
		uVar4 = (uint)this->cnt;
		uVar3 = 0;
		local_4 = 0xffffffff;
		do {
		i = (int)(uVar4 - uVar3) / 2 + uVar3;
		uVar1 = this->elements[i].id;
		if (uVar1 == *obj) {
		return i;
		}
		uVar2 = i;
		if (*obj <= uVar1) {
		uVar3 = i;
		uVar2 = uVar4;
		}
		uVar4 = uVar2;
		condition = local_4 != i;
		local_4 = i;
		}
		 while (condition);
		return i;
		}
		
	*/
	return 0;
}

