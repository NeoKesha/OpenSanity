#pragma once

#include "headers/OpenSanityGlobal.h"

class ResourceListCodeModel {
	public:
		ushort capacity;
		short count;
		CodeModel * codeMolelArray[767];

		bool DisposeCodeModel();

};
