#include "headers/Known/Game/GameResources/ResourceList/ResourceListOGI.h"

bool ResourceListOGI::DisposeOGI() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall ResourceListOGI::DisposeOGI(ResourceListOGI *this){
		OGI *this_00;
		if (this->count != 0) {
		this_00 = this->ogiArray[this->capacity];
		if (this_00 != (OGI *)0x0) {
		OGI::CleanUp(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		this->capacity = this->capacity + 1;
		this->count = this->count + -1;
		if (0x2fe < this->capacity) {
		this->capacity = this->capacity - 0x2ff;
		}
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

