#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionCollisionSurface {
	public:
		CollisionSurface * * list;
		int cnt;
		int capacity;
		int expansion;

		void* Add(CollisionSurface* element);

};
