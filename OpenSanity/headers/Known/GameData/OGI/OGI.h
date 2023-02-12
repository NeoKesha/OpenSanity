#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class OGI {
	public:
		int index;
		Vector4 unkVec;
		byte header[16];
		byte * rigidModelRelatedList;
		Matrix4 * matrixArray;
		uint * rigidBodyIds;
		OGIType1 * * type1List;
		OGIType2 * * type2list;
		uint * rigidModelReferences;

		void Construct();
		virtual void CleanUp();
		bool FromFile(char* fname);
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		void Construct_5(MemoryStream* stream);
		void Construct_6(char* param_1);

};
