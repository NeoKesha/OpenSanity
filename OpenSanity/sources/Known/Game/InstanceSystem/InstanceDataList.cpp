#include "headers/Known/Game/InstanceSystem/InstanceDataList.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
void InstanceDataList::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceDataList::Dispose(InstanceDataList *this){
		InstanceNodeAbstract *this_00;
		InstanceNodeAbstract **ppIVar1;
		int cnt;
		ppIVar1 = this->array;
		cnt = 0x18;
		do {
		this_00 = *ppIVar1;
		if (this_00 != (InstanceNodeAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		*ppIVar1 = (InstanceNodeAbstract *)0x0;
		ppIVar1 = ppIVar1 + 1;
		cnt = cnt + -1;
		}
		 while (cnt != 0);
		return;
		}
		
	*/
	return;
}

InstanceNodeAbstract* InstanceDataList::GetNode(ComponentId index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceDataList::GetNode(InstanceDataList *this,ComponentId index){
		return this->array[index];
		}
		
	*/
	return null;
}

