#pragma once

#include "headers/OpenSanityGlobal.h"

class ResourceListGameObject {
	public:
		ushort capacity;
		short count;
		GameObject * gameObjectArray[767];

		bool DisposeScript();
		bool DisposeGameObject();

};
