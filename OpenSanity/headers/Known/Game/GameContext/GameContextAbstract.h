#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Graphics/Color.h"

class GameContextAbstract {
	public:
		bool profile;
		float unkField0;
		Color color;
		TwinString restrictValue;

		GameContextAbstract();
		virtual void DoStuff(int flags);
		static void BuildCosTable();
};
