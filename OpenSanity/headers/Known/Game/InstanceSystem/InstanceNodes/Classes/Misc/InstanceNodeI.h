#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeI : public InstanceNodeAbstract {
	public:

		void Construct(NodeRelated2I* param_1);
		void Dispose(byte param_1);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
