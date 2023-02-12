#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/SectionGraphics.h"

class SectionSM : public SectionAbstract {
	public:
		TwinString chunkName;
		bool flag;
		LevelHolderSM * levelHolder;
		SectionGraphics graphicsSection;

		void GetFnameByIndex(int index, TwinString* fname);
		void Read();
		void ReadSubSections(int index, bool read);
		void Write();
		virtual void FUN_00154ae0();
		void Dispose(byte param_1);
		virtual void Write_6(uint param_1, MemoryStream* stream);
		void Construct(LevelHolderSM* levelHolder);
		virtual void Read_8(bool read, bool unpacked, bool param_3);
		static uint GetElementCount();
		static uint GetNum();
		static bool IsA(int param_1);
		virtual uint* GetReader(uint param_1, uint* param_2, int* param_3);
		virtual bool Write_13(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void DisposeResources();

};
