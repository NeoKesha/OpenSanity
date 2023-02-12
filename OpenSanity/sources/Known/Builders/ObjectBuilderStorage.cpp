#include "headers/Known/Builders/ObjectBuilderStorage.h"

#include "headers/Known/Builders/ObjectBuilder.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"
void* ObjectBuilderStorage::BuildObject(int objectIndex) {
	void* result = null;
	ObjectBuilder* builder;

	builder = this->lastBuilder;
	while (builder != null && result == null) {
		if (builder == (ObjectBuilder*)0x0) {
			return (void*)0x0;
		}
		
		result = builder->builder->BUILD(objectIndex);
		builder = builder->prevBuilder;
	}
	return result;
}

void ObjectBuilderStorage::AddBuilder(BaseBuilder* builder) {
	ObjectBuilder* newBuilder;
	newBuilder = new ObjectBuilder();
	newBuilder->builder = builder;
	newBuilder->prevBuilder = null;
	newBuilder->nextBuilder = null;
	if (this->amount == 0) {
		this->firstBuilder = newBuilder;
		this->lastBuilder = newBuilder;
		newBuilder->nextBuilder = null;
		newBuilder->prevBuilder = null;
		this->amount = this->amount + 1;
		this->capacity = this->capacity + 1;
		return;
	}
	newBuilder->nextBuilder = this->lastBuilder;
	this->lastBuilder->prevBuilder = newBuilder;
	this->lastBuilder = newBuilder;
	newBuilder->prevBuilder = null;
	this->amount = this->amount + 1;
	this->capacity = this->capacity + 1;
}

void ObjectBuilderStorage::BuildObject(int id, void** outObject) {
	*outObject = BuildObject(id);
}