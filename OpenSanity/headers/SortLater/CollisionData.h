#pragma once

#include "headers/OpenSanityGlobal.h"

class CollisionData {
	public:
		void * * buffer;
		int triggerCnt;
		int groupCnt;
		int polysCnt;
		int vertexCnt;
		int triggersIndex;
		int groupsIndex;
		int polysIndex;
		int vertexesIndex;

		void Construct();
		void ReadCollisionData(int sectionOffset);

};
