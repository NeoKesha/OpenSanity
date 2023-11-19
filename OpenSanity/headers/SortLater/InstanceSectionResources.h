#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Collections/CollectionAiPathWrapper.h"
#include "headers/Known/Collections/CollectionPositionWrapper.h"
#include "headers/Known/Collections/CollectionTriggerWrapper.h"
#include "headers/Known/Collections/CollectionCameraTriggerWrapper.h"
#include "headers/Known/Collections/CollectionCollisionSurfaceWrapper.h"
#include "headers/Known/Collections/CollectionInstanceTemplateWrapper.h"
#include "headers/Known/Collections/CollectionPathWrapper.h"
#include "headers/Known/Collections/CollectionInstanceWrapper.h"
#include "headers/Known/Collections/CollectionAiPositionWrapper.h"

class InstanceSectionResources {
	public:
		uint flags;
		GameResources * gameResources;
		ChunkMeta * chunkMeta;
		CollectionInstanceTemplateWrapper instanceTemplates;
		CollectionInstanceWrapper instances;
		CollectionAiPositionWrapper aiPositions;
		CollectionAiPathWrapper aiPaths;
		CollectionPositionWrapper positions;
		CollectionPathWrapper paths;
		CollectionTriggerWrapper triggers;
		CollectionCameraTriggerWrapper cameras;
		CollectionCollisionSurfaceWrapper collisionSurfaces;
		InstanceContextList * ctxList;
		int unk1;
		CollectionPosition * collectionPosition;
		CollectionPath * collectionPath;

		void Add(ushort param_1, ushort param_2, AiPosition* element);
		void AddAiPath(CollectionAiPath* collection, ushort param_2, AiPath* element);
		bool AddInstance(CollectionInstance* collection, int ctxCnt, Instance* element);
		byte FUN_001b4e20(UnkFamily27Wrapper* param_1, int param_2);
		byte FUN_001b4f80(UnkFamily27Wrapper* param_1, int param_2);
		byte FUN_001b50e0(UnkFamily27Wrapper* param_1, int param_2);
		byte FUN_001b5240(UnkFamily27Wrapper* param_1, int param_2);
		uint FUN_001b53b0(UnkFamily27Wrapper* param_1, int param_2);
		uint FUN_001b54c0(UnkFamily27Wrapper* param_1, int param_2);
		uint FUN_001b55c0(UnkFamily27Wrapper* param_1, int param_2);
		byte FUN_001b56c0(UnkFamily27Wrapper* param_1, UnkFamily27Wrapper* param_2);
		bool DoInstances(UnkFamily27Wrapper* param_1);
		bool DoTemplates(UnkFamily27Wrapper* param_1);
		bool DoAiPositions(UnkFamily27Wrapper* wrapper);
		bool DoAiPaths(UnkFamily27Wrapper* param_1);
		bool DoPaths(UnkFamily27Wrapper* param_1);
		uint DoTriggers(UnkFamily27Wrapper* param_1);
		uint DoCameras(UnkFamily27Wrapper* param_1);
		bool DoSurfaces(UnkFamily27Wrapper* param_1);
		void AddTriggger(CollectionTrigger* collection, uint param_2, Trigger* element);
		void AddCameraTrigger(uint param_1, uint param_2, CameraTrigger* element);
		void FUN_001b7410();
		bool FUN_001b7ff0(UnkFamily27Wrapper* param_1, int cnt);
		bool DoPositions(UnkFamily27Wrapper* param_1);
		bool FUN_001b8170(UnkFamily27Wrapper* param_1);
		void Construct(byte param_1, byte param_2, uint param_3, uint param_4);

};
