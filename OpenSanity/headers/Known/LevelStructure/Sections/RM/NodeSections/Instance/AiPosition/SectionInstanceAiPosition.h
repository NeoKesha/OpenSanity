#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionInstanceAiPosition : public SectionAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionAiPositionWrapper * aiPositions;
		int cnt;

		virtual int GetElementCount();
		static bool ReturnTrue();
		static bool IsOne();
		void Dispose(byte param_1);
		virtual SectionReaderInstanceAiPosition* GetReader(uint param_1, uint param_2, int* param_3);
		virtual void Stub1(int param_1);
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void DisposeResources();
		void Construct(uint resources, CollectionAiPositionWrapper* aiPositions);

};
