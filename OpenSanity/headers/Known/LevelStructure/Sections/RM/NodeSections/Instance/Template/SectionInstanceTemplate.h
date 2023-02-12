#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionInstanceTemplate : public SectionAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionInstanceTemplateWrapper * instanceTemplates;
		int cnt;

		static void EmptyFunction();
		virtual int GetElementCount();
		static bool ReturnTrue();
		static bool IsOne();
		void Dispose(byte param_1);
		virtual SectionReaderInstanceTemplate* GetReader(uint param_1, uint param_2, int* param_3);
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void Stub1(int param_1);
		virtual void DisposeResources();
		void Construct(uint resources, CollectionInstanceTemplateWrapper* instanceTemplates);

};
