#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileAbstract.h"

class SaveFileD : public SaveFileAbstract {
	public:
		TwinString str;

		void Construct(char* str);
		static void EmptyFunction();
		static void EmptyFunction_2();
		static void EmptyFunction_3();

};
