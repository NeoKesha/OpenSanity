#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/GameResourceManager/GameResourceManagerBase.h"

class GameResourceManager : public GameResourceManagerBase {
	public:

		GameResourceManager();
		GameResourceManager(GameResources* gameResources);
		~GameResourceManager();

		void FUN_001a7980();
		virtual void FUN_001a79c0();
		virtual void FUN_001a79d0();
		virtual void FUN_001a79f0();
		InstanceNodeInstance* CreateNodeInstance(uint param_1, Instance* param_2, InstanceContext* param_3);
		InstanceNodeAbstract* FUN_001a83b0(ChunkMeta* chunkMeta, Instance* instance, InstanceContext* ctx, InstanceNodeInstance* node);
		InstanceContext* AddInstance(ChunkMeta* chunkMeta, Instance* element);
		InstanceNodeI* CreateNodeI(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		InstanceNodePayGate* CreateNodePayGate(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		InstanceNodeCrate* CreateNodeCrate(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		InstanceNodeCreature* CreateNodeCreature(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		InstanceNodeFurniture* CreateNodeFurniture(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		InstanceNodeF* CreateNodeF(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		virtual InstanceContext* UnkMethod7(ChunkMeta* chunkMeta, GameObject* gameObject, Instance* instance, InstanceContext* ctx);
		InstanceNodeCharacter* CreateNodeCharacter(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		InstanceNodeChiChi* CreateNodeChiChiGrass(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		InstanceNodeAA* CreateNodeAA(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx);
		
		virtual InstanceNodeAbstract* CreateNewInstanceNode(ChunkMeta* chunkMeta, Instance* instance, InstanceContext* ctx, InstanceNodeAbstract* node);
		virtual InstanceNodeInstance* CreateNewInstanceNodeFromObject(int param_2);
		virtual void GetTriggerNode(int param_2, int param_3);
		virtual void GetCameraNode(int param_2, int param_3);
		

};
