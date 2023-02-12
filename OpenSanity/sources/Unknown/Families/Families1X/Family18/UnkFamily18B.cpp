#include "headers/Unknown/Families/Families1X/Family18/UnkFamily18B.h"

#include "headers/Known/Game/World/WorldChunk.h"
bool UnkFamily18B::IsA(WorldChunk* obj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily18B::IsA(WorldChunk *obj){
		return (obj->flags & 0xf0) < 0x20;
		}
		
	*/
	return false;
}

bool UnkFamily18B::IsB(WorldChunk* obj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily18B::IsB(WorldChunk *obj){
		return (bool)('\x01' - ((obj->flags & 0xf0) < 0x20));
		}
		
	*/
	return false;
}

bool UnkFamily18B::IsC(WorldChunk* obj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily18B::IsC(WorldChunk *obj){
		return (bool)('\x01' - (((byte)obj->flags & 0xf0) != 0x20));
		}
		
	*/
	return false;
}

void UnkFamily18B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily18B * __thiscall UnkFamily18B::Dispose(UnkFamily18B *this,byte param_1){
		(this->parent).vtable = (UnkFamily18Abstract_VTable *)&UnkFamily18_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily18B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily18B::Construct(UnkFamily18B *this){
		(this->parent).vtable = (UnkFamily18Abstract_VTable *)&UnkFamily18_VT_B;
		return;
		}
		
	*/
	return;
}

