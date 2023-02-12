#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/UnkBuilder1/Items/UnkBuilder1ItemAbstract.h"

class UnkBuilder1Item0x1B0A : public UnkBuilder1ItemAbstract {
	public:

		virtual uint FUN_001c5020(int** param_1);
		void Dispose(byte param_1);
		static uint GetBuilderIndex();
		void Construct(TwinString* param_1, Vector4* param_2, Vector4* param_3, TwinString* param_4, Vector4* param_5, Vector4* param_6, Vector4* param_7);
		void Construct_4(UnkBuilder1Item0x1B0A* param_1);

};
