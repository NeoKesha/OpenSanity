#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20BaseSub.h"
#include "headers/Known/Math/Vector4.h"

class UnkFamily20Base {
	//TODO: What if this is a spline
	public:
		UnkFamily20BaseSub subStruct;
		Vector4 vec;
		int field5_0x30;
		float field6_0x34;
		float field7_0x38;
		int field8_0x3c;
		int field9_0x40;
		int field10_0x44;
		float field3_0x28;
		float field4_0x2c;

		UnkFamily20Base();
		~UnkFamily20Base();

		virtual int FUN_00109e40(float step, uint param_2);
		virtual void FUN_00113af0(uint param_1, uint param_2);
		virtual void FUN_0010f280(Matrix4* param_1);
		virtual void FUN_00113b30(Vector2* vec1, Vector2* vec2);
		virtual void FUN_00113c30(float* param_1, float* param_2);
		virtual void FUN_0010f1c0(float param_1);

};
