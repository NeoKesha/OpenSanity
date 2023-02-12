#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Instance/InstanceIdList.h"
#include "headers/Known/Math/Vector4.h"

class TriggerAbstract {
	public:
		int header;
		int objectActivatorMask;
		float unkFloat;
		Vector4 Rotation;
		Vector4 Position;
		Vector4 Scale;
		InstanceIdList idList;

		void Construct();
		void Dispose();
		virtual uint FUN_001c5ae0(int** param_1);
		virtual void MatrixRelated(Matrix4* param_1);
		void Dispose_4(byte param_1);
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		virtual TriggerAbstract* Copy(TriggerAbstract* other);

};
