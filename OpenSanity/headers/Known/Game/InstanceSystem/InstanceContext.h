#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextSmartPtr.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceDataList.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextBase.h"

class InstanceContext : public InstanceContextBase {
	public:
		InstanceContextSmartPtr smartPtr;
		Vector4 vec;
		InstanceDataList nodes;
		void * findMe;
		InstanceContextSub * subPtr;
		InstanceContext * prev;
		InstanceContext * next;

		void FUN_000a81e0(float* param_2, uint param_3);
		void FUN_00026f70(Vector4* vec);
		bool GetFocusRelated(InstanceContext** outCtx, Vector4* outPos);
		void FUN_0005a4c0(Vector4* param_1, Vector4* param_2);
		void FUN_00026e90(Vector4* vec);
		uint FUN_00054ce0(int* param_1);
		static InstanceNodeCharacter* GetCharacterNode(InstanceContext* ctx);
		virtual uint* FUN_000f7220();
		static bool DoTasks();
		static bool DoTasks_9();
		static void AddCtxToList(InstanceContext* ctx);
		virtual byte SetNode(bool flag, InstanceNodeAbstract* instanceNode);
		virtual uint FUN_000f85a0(char param_1, int* param_2);
		void Construct();
		InstanceContextSub* InitSubStruct(ChunkData* chunkData);
		static void DoUpdate(InstanceContext* ctx);
		virtual void RegisterCtxPtrToList();
		virtual void FUN_000fa200(byte param_1);
		void FUN_000fa2e0();
		virtual void CleanUp();
		void SomeHackySet(InstanceContextRefCounter* param_2, int fieldIndex1, int fieldIndex2);
		void LazyChangePlayerContext();
		static int FUN_00136970(InstanceContext* ctx);
		virtual void FUN_0016dda0(uint* param_1);
		virtual void FUN_001703a0(InstanceNodeAbstract* param_1);
		virtual void FUN_0017afa0(int param_1, int param_2);
		void FUN_0017c160(byte param_1);
		virtual uint FUN_0018f1e0(ushort index);
		void FUN_0018f270(ushort param_2, char param_3);
		virtual InstanceTransform* FUN_001961b0(uint param_2);
		bool FUN_001dbbf0(uint* param_2, uint* param_3, float* param_4);
		virtual bool Method1();
		virtual bool Method2();
		virtual bool Method3();
		virtual void Method4();
		void Dispose(byte param_1);
		virtual void FUN_00186510();
		virtual void FUN_0017c2b0(byte param_1);
		virtual void FUN_001864a0();
		void Construct_39(InstanceTransform* transform);
		void Construct_40(InstanceTransform* parameters, int param_2);
		void Construct_41(int param_1);
		void FUN_00064900(int param_1);
		uint GetNode(ComponentId componentId);
		InstanceNodeU* GetNodeU();
		InstanceNodePhysics* FUN_001dbbd0();
		InstanceNodePhysics* GetPhysics();
		InstanceNodePhysics* GetPhysics_47();
		void FUN_001f2e50();

};
