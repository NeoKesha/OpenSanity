#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeSectionDataAbstract.h"

class SectionDataCodeModelBase : public CodeSectionDataAbstract {
	public:
		uint flags;
		CodeModel * * elements;
		short * indexes;
		uint reserved;
		ResourceListCodeModel * codeModelList;

		void Construct(uint cnt, byte param_2);
		static void CleanUp(SectionDataCodeModelBase* param_1);
		void Dispose();
		void Dispose_3(byte param_1);
		void Dispose_4();
		virtual uint UnkMethod(int** param_1);
		static void EmptyFunction();
		static void EmptyFunction_7();
		static void EmptyFunction_8();
		static void EmptyFunction_9();
		virtual void Add(int param_1, uint param_2, CodeModel* element, int* param_4);

};
