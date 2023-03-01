#pragma once
#include "headers/OpenSanityGlobal.h"

class D3DVERTEXSHADERINPUT {
public:
	int streamIndex;
	int offset;
	int format;
	byte tessType;
	byte tessSource;
};