#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/BoundingBox.h"

class OGI {
	public:
		uint unk1;
		int index;
		Vector4 unkVec;
		uint unk2;
		uint unk3;
		BoundingBox bb;
		byte header[16];
		uint unk4;
		uint unk5;
		uint unk6;
		byte * rigidModelRelatedList;
		Matrix4 * matrixArray;
		uint * rigidBodyIds;
		uint unk7;
		uint unk8;
		OGIType1 * * type1List;
		OGIType2 * * type2list;
		uint unk9;
		uint unk10;
		uint * rigidModelReferences;
		uint unk11;
		uint unk12;
		uint unk13;

		void Construct();
		void CleanUp();
		bool FromFile(char* fname);
		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);
		void Construct_5(MemoryStream* stream);
		void Construct_6(char* param_1);

};
