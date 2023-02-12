#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Collections/CollectionInstanceTemplate.h"

class GameResourceManagerBase {
	public:
		GameResources * gameResources;
		CollectionInstanceTemplate collectionInstanceTemplate;
		int field1_0x4;
		int field2_0x8;
		int field4_0x10;
		int field3_0xc;

		virtual InstanceContext* UnkMethod7(ChunkMeta* chunkMeta, GameObject* gameObject, Instance* instance, InstanceContext* instanceContext);
		GameResourceManagerBase();
		GameResourceManagerBase(GameResources* gameResources);
		~GameResourceManagerBase();
		virtual InstanceNodeTrigger* GetTriggerNode(int param_2);
		virtual InstanceNodeCameraTrigger* GetCameraNode(int param_2);
		virtual InstanceNodeOGI* GetOgiNodeFromInstance(ChunkMeta* chunkMeta, Instance* instance);
		virtual void SetInstanceIntParam(ChunkMeta* chunkMeta, BlackboardAbstract* blackboard);
		static bool IsA();
		static InstanceNodeInstance* CreateNewInstanceNodeFromObject(GameResourceManagerBase* param_1, uint param_2, uint param_3);
		static uint CreateNewInstanceNode();

};
