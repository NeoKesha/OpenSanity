#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family14/UnkFamily14Base.h"

class UnkFamily14A : public UnkFamily14Base {
	public:

		virtual void Unroll();
		void Construct(Matrix4* param_1);
		void Dispose(byte param_1);
		virtual int FUN_00154320(float* param_1);
		virtual void FUN_001544f0(float* param_1, Matrix4* param_2);
		virtual void FUN_00154530(float* param_1);
		virtual uint FUN_00154690(float* param_1);
		static void FUN_00140c40();
		virtual void FUN_001544d0(float* param_1);
		void Dispose_9();

};
