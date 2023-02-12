#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class NodeRelated2Abstract {
	public:
		InstanceContext * ctx;
		ushort instanceIndex;
		ushort objectId;
		GameObject * gameObject;
		BlackboardAbstract * blackboard;
		NodeRelated1Abstract * related;
		Vector4 vec1;

		static void EmptyFunction();
		void InitOGINode(GameResources* resoruces);
		void Construct(InstanceMasterInfo* info, BlackboardAbstract* blackboard, NodeRelated1Abstract* related);
		virtual void CleanUp();
		void FUN_001ac8a0(ushort param_1, uint param_2, byte param_3, byte param_4);
		virtual bool FUN_001ac940(uint index, InstanceContextRefCounter* param_2, bool param_3, bool param_4);
		void FUN_001accf0();
		void UpdateTime(GameResources* gameResources, UnkTimePack* time, int flags);
		void Dispose(byte param_1);
		static void Method6();
		static void EmptyFunction_10();
		static void EmptyFunction_11();

};
