#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeF : public InstanceNodeAbstract {
	public:

		void Construct(NodeRelated2F* param_1);
		void Dispose(byte param_1);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
