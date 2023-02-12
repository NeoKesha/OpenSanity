#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionCollisionSurfaceWrapper {
	public:
		CollectionCollisionSurface * collectionPtr;

		void CreateCollection(int cnt);
		virtual void Add(CollisionSurface* element);

};
