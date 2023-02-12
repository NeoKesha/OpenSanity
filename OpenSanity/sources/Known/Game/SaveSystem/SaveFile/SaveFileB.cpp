#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileB.h"

void SaveFileB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileAbstract * __thiscall SaveFileB::Dispose(SaveFileB *this,byte param_1){
		SaveFileAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void SaveFileB::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SaveFileB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SaveFileB::EmptyFunction_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SaveFileB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SaveFileB::EmptyFunction_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SaveFileB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool SaveFileB::Reinitstream() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SaveFileB::Reinitstream(void){
		return false;
		}
		
	*/
	return false;
}

bool SaveFileB::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SaveFileB::Read(void){
		return false;
		}
		
	*/
	return false;
}

bool SaveFileB::Write() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SaveFileB::Write(void){
		return true;
		}
		
	*/
	return false;
}

bool SaveFileB::DisposeStream() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SaveFileB::DisposeStream(void){
		return true;
		}
		
	*/
	return false;
}

void SaveFileB::Construct(char* param_1, char* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileB * __thiscall SaveFileB::Construct(SaveFileB *this,char *param_1,char *param_2){
		MemoryStream *stream;
		size_t sVar1;
		undefined4 uVar2;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		TwinString::Set(&(this->parent).name,param_2);
		(this->parent).saveTime.dwHighDateTime = 0;
		(this->parent).saveTime.dwLowDateTime = 0;
		(this->parent).field3_0x18 = 0;
		(this->parent).saveHash = 0;
		(this->parent).stream = (MemoryStream *)0x0;
		(this->parent).streamLength = 0;
		(this->parent).streamStartPtr = (byte *)0x0;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_B;
		stream = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream != (MemoryStream *)0x0) {
		stream = MemoryStream::ConstructFile(stream,param_1,'\0');
		(this->parent).stream = stream;
		sVar1 = (*stream->vtable->GetLength)(stream);
		(this->parent).streamLength = sVar1;
		return this;
		}
		(this->parent).stream = (MemoryStream *)0x0;
		uVar2 = (**(code **)(iRam00000000 + 0x18))();
		(this->parent).streamLength = uVar2;
		return this;
		}
		
	*/
	return;
}

