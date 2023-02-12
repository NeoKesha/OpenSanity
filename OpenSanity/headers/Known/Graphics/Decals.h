#pragma once

#include "headers/OpenSanityGlobal.h"

class Decals {
	public:
		byte header[64];
		int unkStruct;

		void FUN_000fe0e0();
		void FUN_000fe1c0();
		virtual void LoadDclFile(FileStream* stream);
		void Read(char* fname);
		void FUN_00115820(MemoryStream* stream);
		void FUN_0010a5d0(float time);
		void DrawPlane();
		void Construct();

};
