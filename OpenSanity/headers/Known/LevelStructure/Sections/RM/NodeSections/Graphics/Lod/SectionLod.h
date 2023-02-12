#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionLod : public SectionAbstract {
	public:
		SectionDataLod * data;

		void DisposeData();
		void Dispose(byte param_1);
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual int GetElementCount(int param_1);
		virtual SectionReaderLod* GetReader(uint id, uint param_2);
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void DisposeResources();
		void Construct(uint data);

};
