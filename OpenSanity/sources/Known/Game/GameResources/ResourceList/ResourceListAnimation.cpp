#include "headers/Known/Game/GameResources/ResourceList/ResourceListAnimation.h"

bool ResourceListAnimation::DisposeAnimation() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall ResourceListAnimation::DisposeAnimation(ResourceListAnimation *this){
		Animation *this_00;
		if (this->count != 0) {
		this_00 = this->animationArray[this->capacity];
		if (this_00 != (Animation *)0x0) {
		Animation::DisposeBlobs(this_00);
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

