#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionMaterial : public SectionAbstract {
	public:
		SectionDataMaterial * data;

		void DisposeData();
		void Dispose(byte param_1);
		virtual int GetElementCount();
		static byte ReturnNum();
		static bool IsA(int param_1);
		virtual SectionReaderMaterial* GetReader(uint param_1, int param_2);
		virtual void DisposeResources();
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		void Construct(uint data);

};
