#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkRMRelated {
	public:
		int field7_0x14;
		short cnt;
		short num12;
		short occupiedCnt;
		short lastIndexId;
		short * indexes;
		UnkRMRelated * * elements;

		UnkRMRelated();
		UnkRMRelated(int elementCount);
		~UnkRMRelated();

		void AddCollection(UnkRMRelated** collection);
		void Expand();
		void TestSpace();
		void AddSection(UnkRMRelated** section);
		
};
