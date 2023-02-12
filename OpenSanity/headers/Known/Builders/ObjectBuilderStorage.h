#pragma once

#include "headers/OpenSanityGlobal.h"

class ObjectBuilderStorage {
	public:
		ObjectBuilder * lastBuilder;
		ObjectBuilder * firstBuilder;
		int amount;
		int capacity;

		void* BuildObject(int objectIndex);
		void BuildObject(int id, void** outObject);
		void AddBuilder(BaseBuilder* builder);
};
