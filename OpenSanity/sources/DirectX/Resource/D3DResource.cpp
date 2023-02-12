#include "headers/DirectX/Resource/D3DResource.h"

void D3DResource::Register(int base) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void D3DResource::Register(D3DResource *this,int base){
		uint dataStart;
		dataStart = this->data + base;
		if ((this->common & 0x70000U) != 0x20000) {
		dataStart = dataStart & 0xfffffff;
		}
		this->data = dataStart;
		return;
		}
		
	*/
	return;
}

