#pragma once

#include "headers/OpenSanityGlobal.h"

class PathBase {
	public:
		int pointCnt;
		Vector4 * points;

		virtual void Method1(Matrix4* mat);
		virtual void Write(MemoryStream* param_1);
		void Dispose(byte param_1);
		virtual bool Method5(void** param_1);
		virtual void Read(MemoryStream* param_1);
		static uint GetBuilderIndex();
		void Construct(int cnt, int param_2);
		void Construct_7(PathBase* other);
		void Construct_8();

};
