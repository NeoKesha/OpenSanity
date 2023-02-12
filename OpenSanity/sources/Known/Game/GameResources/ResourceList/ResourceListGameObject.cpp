#include "headers/Known/Game/GameResources/ResourceList/ResourceListGameObject.h"

bool ResourceListGameObject::DisposeScript() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall ResourceListGameObject::DisposeScript(ResourceListScript *this){
		ScriptAbstract *this_00;
		if (this->count != 0) {
		this_00 = this->scriptArray[this->capacity];
		if (this_00 != (ScriptAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
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

bool ResourceListGameObject::DisposeGameObject() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall ResourceListGameObject::DisposeGameObject(ResourceListGameObject *this){
		GameObject *gameObject;
		if (this->count != 0) {
		gameObject = this->gameObjectArray[this->capacity];
		if (gameObject != (GameObject *)0x0) {
		GameObject::Dispose(gameObject);
		VirtualPool::FreeMemory(gameObject);
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

