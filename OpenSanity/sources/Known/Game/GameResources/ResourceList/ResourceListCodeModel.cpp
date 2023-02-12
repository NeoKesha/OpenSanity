#include "headers/Known/Game/GameResources/ResourceList/ResourceListCodeModel.h"

bool ResourceListCodeModel::DisposeCodeModel() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall ResourceListCodeModel::DisposeCodeModel(ResourceListCodeModel *this){
		CodeModel *this_00;
		if (this->count != 0) {
		this_00 = this->codeMolelArray[this->capacity];
		if (this_00 != (CodeModel *)0x0) {
		CodeModel::CleanUp(this_00);
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

