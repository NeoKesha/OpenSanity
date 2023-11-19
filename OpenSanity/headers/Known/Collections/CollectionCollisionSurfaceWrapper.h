#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionCollisionSurfaceWrapper {
	public:
		CollectionCollisionSurface * collectionPtr;

		void CreateCollection(int cnt);
		void Add(CollisionSurface* element);

};
