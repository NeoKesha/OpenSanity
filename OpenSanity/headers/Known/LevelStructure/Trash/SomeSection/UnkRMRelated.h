#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkRMRelated {
	public:
		int field7_0x14;
		short capacity;
		short expansion;
		short count;
		short lastIndexId;
		short * indexes;
		FileReaderHelper* * readers;

		UnkRMRelated();
		UnkRMRelated(int elementCount);
		~UnkRMRelated();

		void Populate(FileReaderHelper** collection);
		void Expand();
		void AddReader(FileReaderHelper** reader);
		
};
