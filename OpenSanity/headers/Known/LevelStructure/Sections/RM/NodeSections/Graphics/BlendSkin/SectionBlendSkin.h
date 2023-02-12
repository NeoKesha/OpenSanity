#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionBlendSkin : public SectionAbstract {
	public:
		SectionDataBlendSkin * data;

		void DisposeData();
		void Dispose(byte param_1);
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual int GetElementCount(int param_1);
		virtual SectionReaderBlendSkin* GetReader(uint param_1, uint param_2);
		virtual bool Write(MemoryStream* stream, uint* indexOut);
		virtual void DisposeResources();
		void Construct(uint data);

};
