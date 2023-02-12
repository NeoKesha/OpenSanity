#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeSectionDataAbstract.h"

class SectionDataScriptBase : public CodeSectionDataAbstract {
	public:
		uint flags;
		ScriptAbstract * * elements;
		short * indexes;
		ResourceListScript * scriptList;

		ScriptAbstract* InitScript(ushort index);
		void Construct(uint param_1, byte param_2);
		virtual void CleanUp();
		void Dispose();
		void Dispose_4(byte param_1);
		void Dispose_5();
		virtual bool AddElement(ScriptAbstract* element);
		static void EmptyFunction();
		virtual void UnkMethod1(uint param_1);
		static void EmptyFunction_9();
		static void EmptyFunction_10();
		static void EmptyFunction_11();
		virtual void Add(int param_1, uint param_2, ScriptAbstract* element, int* param_4);

};
