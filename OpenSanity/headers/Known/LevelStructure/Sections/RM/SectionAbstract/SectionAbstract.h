#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionAbstract {
	public:

		void Write(MemoryStream* stream);
		virtual void Write_1(MemoryStream* stream);
		void Unroll();
		void Unroll_3();
		void Unroll_4();
		void Unroll_5();
		void Unroll_6();
		void Unroll_7();
		void Unroll_8();
		void Unroll_9();
		void Unroll_10();
		void Unroll_11();
		void Unroll_12();
		void Unroll_13();
		void Unroll_14();
		void Unroll_15();
		void Unroll_16();
		void Unroll_17();
		void Unroll_18();
		virtual void AddToReader(char* levelName, bool flag);
		virtual void AddToReadQueue(int size);

};
