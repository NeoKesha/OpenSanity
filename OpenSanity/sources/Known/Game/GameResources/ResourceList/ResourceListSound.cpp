#include "headers/Known/Game/GameResources/ResourceList/ResourceListSound.h"

bool ResourceListSound::DisposeSound() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall ResourceListSound::DisposeSound(ResourceListSound *this){
		Sfx *sfx;
		if (this->count != 0) {
		sfx = this->sfxArray[this->capacity];
		if (sfx != (Sfx *)0x0) {
		Sfx::Dispose(sfx);
		VirtualPool::FreeMemory(sfx);
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

