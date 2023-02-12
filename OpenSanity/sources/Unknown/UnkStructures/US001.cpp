#include "headers/Unknown/UnkStructures/US001.h"

bool US001::AddAmmo(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall US001::AddAmmo(US001 *this,int cnt){
		uint ammoCnt;
		ammoCnt = this->flags;
		if (99 < (ammoCnt >> 0xd & 0x7f) + cnt) {
		this->flags = ammoCnt & 0xfffc7fff | 0xc6000;
		return false;
		}
		this->flags = ((ammoCnt & 0xffffe000) + cnt * 0x2000 ^ ammoCnt) & 0xfe000 ^ ammoCnt;
		return true;
		}
		
	*/
	return false;
}

