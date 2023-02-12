#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileAbstract.h"

class SaveFileB : public SaveFileAbstract {
	public:

		void Dispose(byte param_1);
		static void EmptyFunction();
		static void EmptyFunction_2();
		static void EmptyFunction_3();
		static bool Reinitstream();
		static bool Read();
		static bool Write();
		static bool DisposeStream();
		void Construct(char* param_1, char* param_2);

};
