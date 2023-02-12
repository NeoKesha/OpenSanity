#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionInstancePosition : public SectionAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionPositionWrapper * collectionPosition;
		int cnt;

		virtual int GetElementCount();
		static bool ReturnTrue();
		static bool IsOne();
		virtual void Stub1(int param_1);
		void Dispose(byte param_1);
		virtual SectionReaderInstancePosition* GetReader(uint param_1, uint param_2, int* param_3);
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void DisposeResources();
		void Construct(uint resources, CollectionPositionWrapper* collectionPosition);

};
