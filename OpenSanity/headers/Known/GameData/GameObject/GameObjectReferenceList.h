#pragma once

#include "headers/OpenSanityGlobal.h"

class GameObjectReferenceList {
	public:
		GameObjectReferenceList * next;
		ushort idArray[16];

		void Dispose(byte param_1);
		void Add(ushort index);
		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);

};
