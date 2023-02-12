#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeCharacter : public InstanceNodeAbstract {
	public:

		void Construct(NodeRelated2C* param_1);
		void GetPosition(Vector4* out);
		void Dispose(byte param_1);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
