#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Math/Matrix4.h"

class ChunkData {
	public:
		ChunkDataRefCounter * chunkRef;
		int unk1;
		int unk2;
		int* unk3;
		Matrix4 m1;
		Matrix4 m2;
		Matrix4 m3;
		Matrix4 m4;
		int unk4;
		int unk5;
		float unk6;
		float unk7;
		uint sceneryFlags;
		int unk8;
		int unk9;
		TwinString chunkName;
		TwinString chunkName2;
		void * sceneryRoot;
		ChunkData * next;
		ChunkData * previous;
		void * chunkLinksMatrices;
		UnkTimePack * timers;
		uint unk10;
		AutoClass4 * nodes;
		void * * array769[769];
		ushort* unk11;
		byte reserved[84];
		CollisionData * collisionData;
		LightController * chunkLightController;
		TwinString str1;
		uint skydomeID;
		void * skydome;
		void* ptr1;
		AutoClass5* unk12;
		int unk13;
		void * dynamicScenery;
		int unk14;
		int unk15;

		ChunkDataRefCounter* CreateRefCounter(ChunkData* other, byte param_2);
		static uint FUN_00023d20(ChunkData* param_1);
		void FUN_00111d50(AutoClass25* param_1);
		void FUN_00123380(char param_1);
		void FUN_00137f90(void* param_1);
		void DisposeLight();
		void FreeMemory();
		void FUN_0013b700(uint* param_1);
		void FUN_0013b790(UnkFamily14Base* param_1, Matrix4* param_2, int param_3, float param_4);
		void RenderWorld(Matrix4* matrix, AutoClass25* param_2);
		void FUN_0013b930(int param_1, Matrix4* param_2, Matrix4* param_3);
		void FUN_0013ba00(Matrix4* param_1, Matrix4* param_2);
		void DisconnectChunkLinks(ChunkData* other);
		int FUN_0013bba0(InstanceContext* ctx);
		uint FillCtxList(uint param_1, AutoClass14* param_2);
		uint FUN_0013d510(InstanceContext* ctx);
		bool FUN_0013d550(InstanceContext* ctx);
		void FUN_0013e240(char param_1, InstanceContext* ctx);
		uint FUN_0013e2c0(uint* param_1, uint param_2, void* param_3);
		uint FUN_0013e3d0(InstanceContext* ctx);
		bool FUN_0013e400(InstanceContext* ctx);
		bool FUN_0013e4c0(InstanceContext* ctx);
		void FUN_00140380(uint param_1);
		void FUN_00140540(byte param_1);
		bool FUN_00140680(bool param_1, Clock* param_2);
		bool FUN_001407f0(bool param_1, bool param_2, byte param_3);
		void RemoveFromChunkList(ChunkList* param_2, int index1, int index2);
		InstanceContext* FUN_001a22f0(InstanceTransform* transform);
		uint CreateLightController();
		static void FreePtr(ChunkData* param_1);
		uint CreateSomething();
		AutoClass5* FUN_00138280(int num);
		uint CreateCollisionData();
		void DisposeCollision();

};
