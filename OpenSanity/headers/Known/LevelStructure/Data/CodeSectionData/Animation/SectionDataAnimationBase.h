#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeSectionDataAbstract.h"

class SectionDataAnimationBase : public CodeSectionDataAbstract {
	public:
		uint flags;
		Animation * * elements;
		short * indexes;
		uint reserved;
		ResourceListAnimation * animationList;

		void Construct(uint param_1, byte param_2);
		virtual void CleanUp();
		void Dispose();
		void Dispose_3(byte param_1);
		void Dispose_4();
		virtual uint UnkMethod(int** param_1);
		static void EmptyFunction();
		static void EmptyFunction_7();
		static void EmptyFunction_8();
		static void EmptyFunction_9();
		virtual int AddAnimation(int param_1, uint param_2, int param_3, SectionAnimation* param_4);

};
