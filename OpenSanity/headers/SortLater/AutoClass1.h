#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Math/Matrix4.h"

class AutoClass1 {
	public:
		Matrix4 matrix;
		ChunkList * chunkList;
		TwinString str1;
		TwinString str2;

		void Construct(ChunkList* chunkList, char* str);

};
