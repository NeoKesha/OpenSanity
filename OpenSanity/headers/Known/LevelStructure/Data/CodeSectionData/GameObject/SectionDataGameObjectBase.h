#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeSectionDataAbstract.h"

class SectionDataGameObjectBase : public CodeSectionDataAbstract {
	public:
		uint elementsCount;
		GameObject * * elements;
		short * indexes;
		uint reserved;
		ResourceListGameObject * gameObjectList;

		GameObject* InitGameObject(ushort index);
		void Construct(uint elementCount, byte param_2);
		virtual void CleanUp();
		void Dispose();
		void Dispose_4(byte param_1);
		void Dispose_5();
		virtual uint AddElement(GameObject* element);
		static void EmptyFunction();
		static void EmptyFunction_8();
		static void EmptyFunction_9();
		static void EmptyFunction_10();
		virtual void Add(int id, uint index, GameObject* element, IndexToIdList* unk404);

};
