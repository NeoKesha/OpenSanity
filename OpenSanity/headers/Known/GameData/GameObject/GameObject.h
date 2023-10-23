#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/GameData/GameObject/GameObjectScriptPack.h"
#include "headers/Known/GameData/GameObject/GameObjectIdListShort.h"

class GameObject {
	public:
		int index;
		char db[12];
		TwinString gameObjectName;
		ParameterTable * parameters;
		GameObjectResourceReferences * references;
		GameObjectScriptPack scriptPack;
		GameObjectIdListShort triggerScripts;
		GameObjectIdListShort ogiSlots;
		GameObjectIdListShort animationSlots;
		GameObjectIdListShort scriptSlots;
		GameObjectIdListShort objectSlots;
		GameObjectIdListShort soundSlots;

		virtual uint FUN_0015c960(uint param_1, uint* param_2, uint param_3);
		virtual void GetOGIId(ushort* outId, int index);
		void Dispose();
		void Read(MemoryStream* stream);
		virtual InstanceNodeOGI* GetInstanceNode();
		void Construct(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		void Construct_7();

};
