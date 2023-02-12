#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionTexture : public SectionAbstract {
	public:
		SectionDataTexture * data;

		void DisposeData();
		void Dispose(byte param_1);
		virtual SectionReaderTexture* GetReader(uint id, int param_2);
		virtual int GetElementCount(int param_1);
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual void DisposeResources();
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		void Construct(uint data);

};
