#include "headers/Unknown/Families/Families1X/Family18/UnkFamily18A.h"

#include "headers/Known/Game/World/WorldChunk.h"
bool UnkFamily18A::IsA(WorldChunk* obj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily18A::IsA(WorldChunk *obj){
		return ((byte)obj->flags & 0xf) < 2;
		}
		
	*/
	return false;
}

bool UnkFamily18A::IsB(WorldChunk* obj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily18A::IsB(WorldChunk *obj){
		return (bool)('\x01' - (((byte)obj->flags & 0xf) < 2));
		}
		
	*/
	return false;
}

bool UnkFamily18A::IsC(WorldChunk* obj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily18A::IsC(WorldChunk *obj){
		return (bool)('\x01' - (((byte)obj->flags & 0xf) != 2));
		}
		
	*/
	return false;
}

void UnkFamily18A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily18A * __thiscall UnkFamily18A::Dispose(UnkFamily18A *this,byte param_1){
		(this->parent).vtable = (UnkFamily18Abstract_VTable *)&UnkFamily18_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily18A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily18A::Construct(UnkFamily18A *this){
		(this->parent).vtable = (UnkFamily18Abstract_VTable *)&UnkFamily18_VT_A;
		return;
		}
		
	*/
	return;
}

