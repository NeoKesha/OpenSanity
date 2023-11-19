#pragma once

#include "headers/SortLater/AutoClass2.h"
#include "headers/OpenSanityGlobal.h"

class InstanceContextBase {
	public:
		InstanceContext * ctx;
		int unk1;
		int unk2;
		int unk3;
		int flags;
		InstanceTransform * transform;
		InstanceContext* ptr1;
		AutoClass2 ac2;
		int unk4;
		int unk5;
		int unk6;
		ChunkData * chunkData;

		void Construct();
		void Construct_1(InstanceTransform* transform);
		void Dispose();
		void Dispose_3(byte param_1);
		virtual bool ResetFlag();
		virtual bool SetFlag();
		virtual uint SetFlag2();
		virtual void ResetFlag2();
		void Construct_8(InstanceTransform* transform, int param_2);
		void Construct_9(int param_1);

};
