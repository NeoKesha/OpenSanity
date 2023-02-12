#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeChiChi : public InstanceNodeAbstract {
	public:

		void Construct(NodeRelated2B* param_1);
		void Dispose(byte param_1);
		static void GetIndex();
		static uint GetBuilderIndex();

};
