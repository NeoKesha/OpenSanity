#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeSectionDataAbstract.h"

class SectionDataOGIBase : public CodeSectionDataAbstract {
	public:
		uint flags;
		OGI * * elements;
		short * indexes;
		ResourceListOGI * ogiList;

		void Construct(uint cnt, byte param_2);
		virtual void CleanUp();
		void Dispose();
		void Dispose_3(byte param_1);
		void Dispose_4();
		virtual uint AddElement(OGI* element);
		static void EmptyFunction();
		static void EmptyFunction_7();
		static void EmptyFunction_8();
		static void EmptyFunction_9();

};
