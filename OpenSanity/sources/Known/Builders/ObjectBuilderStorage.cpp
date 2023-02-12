#include "headers/Known/Builders/ObjectBuilderStorage.h"

#include "headers/Known/Builders/ObjectBuilder.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"
void* ObjectBuilderStorage::BuildObject(int objectIndex) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int objectIndex){
		ObjectBuilder *pOVar2;
		BaseBuilder **builder;
		void *pvVar3;
		int local_c [3];
		ObjectBuilder *pOVar1;
		pOVar2 = this->lastBuilder;
		while( true ) {
		if (pOVar2 == (ObjectBuilder *)0x0) {
		return (void *)0x0;
		}
		builder = (BaseBuilder **)(*(code *)PTR_Get_003968f8)();
		pvVar3 = (*(*builder)->vtable->BUILD)(*builder,objectIndex);
		if (pvVar3 != (void *)0x0) break;
		 actually ObjectBuilder->prevBuilder pOVar2 = pOVar2->nextBuilder;
		}
		return pvVar3;
		}
		
	*/
	return null;
}

void ObjectBuilderStorage::AddBuilder(BaseBuilder* builder) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::AddBuilder(ObjectBuilderStorage *this,BaseBuilder *builder){
		ObjectBuilder *newBuilder;
		newBuilder = (ObjectBuilder *)VirtualPool::AllocateMemory(0xc);
		if (newBuilder == (ObjectBuilder *)0x0) {
		newBuilder = (ObjectBuilder *)0x0;
		}
		else {
		newBuilder->builder = (ObjectBuilder *)builder;
		newBuilder->prevBuilder = (ObjectBuilder *)0x0;
		newBuilder->nextBuilder = (ObjectBuilder *)0x0;
		}
		if (this->amount == 0) {
		this->firstBuilder = newBuilder;
		this->lastBuilder = newBuilder;
		newBuilder->nextBuilder = (ObjectBuilder *)0x0;
		newBuilder->prevBuilder = (ObjectBuilder *)0x0;
		this->amount = this->amount + 1;
		this->capacity = this->capacity + 1;
		return;
		}
		newBuilder->nextBuilder = this->lastBuilder;
		this->lastBuilder->prevBuilder = newBuilder;
		this->lastBuilder = newBuilder;
		newBuilder->prevBuilder = (ObjectBuilder *)0x0;
		this->amount = this->amount + 1;
		this->capacity = this->capacity + 1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_2(int id, void** outObject) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObject){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObject = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_3(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_4(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_5(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_6(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_7(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_8(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_9(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_10(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_11(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_12(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_13(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_14(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_15(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_16(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

void ObjectBuilderStorage::BuildObject_17(int id, void** outObj) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ObjectBuilderStorage::BuildObject(ObjectBuilderStorage *this,int id,void **outObj){
		void *pvVar1;
		pvVar1 = BuildObject(this,id);
		*outObj = pvVar1;
		return;
		}
		
	*/
	return;
}

