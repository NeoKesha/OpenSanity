#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeAbstractBody.h"
#include "headers/Unknown/AutoClasses/AutoClass52.h"

class InstanceNodeInstanceBody : public InstanceNodeAbstractBody {
	public:
		uint unk1[10];
		AutoClass52 unk2;
		AutoClass52* ptr1;
		AutoClass52* ptr2;
		int unk3;
		short unk4;
		short unk5;
		int unk6;
		short* unk7;
		uint unk8;
		char unk9;
		char unk10;
		short unk11;
		uint unk12;
		uint unk13;
		uint unk14;
		uint unk15;
		Vector4 vec1;
		Vector4 position;
		Vector4 vec3;

		void foo() {
			sizeof(*this);
		}
};
