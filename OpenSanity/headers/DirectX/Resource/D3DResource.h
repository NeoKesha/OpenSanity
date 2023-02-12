#pragma once

#include "headers/OpenSanityGlobal.h"

class D3DResource {
	public:
		int common;
		int data;
		int lock;

		virtual void Register(int base);

};
