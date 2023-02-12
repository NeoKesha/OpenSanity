#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3Abstract.h"

class UnkFamily3EAbstract : public UnkFamily3Abstract {
	public:

		virtual bool CleanUp();
		void Construct(uint param_1, int param_2);
		virtual void Unroll();
		void Dispose(byte param_1);

};
