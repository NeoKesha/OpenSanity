#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator20/IteratorB20Abstract.h"

class IteratorB20 : public IteratorB20Abstract {
	public:
		int index;

		virtual uint End();
		virtual AiPath** Get();
		virtual void Rewind();
		void Dispose(byte param_1);
		void Dispose_4(byte param_1);
		virtual void Iterate();
		static void Unroll(uint* param_1);
		static void Unroll_7(uint* param_1);
		static void Unroll_8(uint* param_1);
		void Construct(uint param_1);
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual int Get2();
		static void Unroll_14(uint* param_1);
		void Dispose_15(byte param_1);

};
