#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Game/GameContext/StringCollection.h"

class FileResourceSupport {
	public:
		StringCollection stringCollection;
		TwinString str;

		virtual int FUN_002104e0(char* fname);
		void Dispose();
		virtual void WriteRequestedFiles();
		static FileResourceSupport* Get();

};
