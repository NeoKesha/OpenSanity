#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionSfx : public SectionAbstract {
	public:
		SectionDataSfx * sfxData;
		int * ptr;

		virtual SectionReaderSfx* GetReader(uint param_1, int param_2);
		void Dispose(byte param_1);
		virtual int GetElementCount(int param_1);
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual void Stub1();
		virtual void DisposeResources();
		virtual void UnkMethod3();
		virtual bool UnkMethod4(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void Stub2();
		virtual void Stub3();
		void Construct(uint data, uint param_2);

};
