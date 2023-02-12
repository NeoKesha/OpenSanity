#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionRigidModel : public SectionAbstract {
	public:
		SectionDataRigidModel * data;

		void DisposeData();
		void Dispose(byte param_1);
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual int GetElementCount(int param_1);
		virtual SectionReaderRigidModel* GetReader(uint param_1, uint param_2);
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void DisposeResources();
		void Construct(uint data);

};
