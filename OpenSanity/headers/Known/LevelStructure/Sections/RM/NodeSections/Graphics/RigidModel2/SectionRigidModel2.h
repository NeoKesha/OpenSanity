#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionRigidModel2 : public SectionAbstract {
	public:
		SectionDataRigidModel * data;

		void DisposeData();
		void Dispose(byte param_1);
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual int GetElementCount(int param_1);
		virtual SectionReaderRigidModel2* GetReader(uint id, int param_2);
		virtual bool Write(uint indexOut1, uint* indexOut2);
		virtual void DisposeResources();
		void Construct(uint data);

};
