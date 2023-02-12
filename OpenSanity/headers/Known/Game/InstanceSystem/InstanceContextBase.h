#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceContextBase {
	public:
		InstanceContext * ctx;
		int flags;
		InstanceTransform * transform;
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
