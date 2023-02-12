#pragma once

#include "headers/OpenSanityGlobal.h"

class ObjectBuilderStorage {
	public:
		ObjectBuilder * lastBuilder;
		ObjectBuilder * firstBuilder;
		int amount;
		int capacity;

		void* BuildObject(int objectIndex);
		void AddBuilder(BaseBuilder* builder);
		void BuildObject_2(int id, void** outObject);
		void BuildObject_3(int id, void** outObj);
		void BuildObject_4(int id, void** outObj);
		void BuildObject_5(int id, void** outObj);
		void BuildObject_6(int id, void** outObj);
		void BuildObject_7(int id, void** outObj);
		void BuildObject_8(int id, void** outObj);
		void BuildObject_9(int id, void** outObj);
		void BuildObject_10(int id, void** outObj);
		void BuildObject_11(int id, void** outObj);
		void BuildObject_12(int id, void** outObj);
		void BuildObject_13(int id, void** outObj);
		void BuildObject_14(int id, void** outObj);
		void BuildObject_15(int id, void** outObj);
		void BuildObject_16(int id, void** outObj);
		void BuildObject_17(int id, void** outObj);

};
