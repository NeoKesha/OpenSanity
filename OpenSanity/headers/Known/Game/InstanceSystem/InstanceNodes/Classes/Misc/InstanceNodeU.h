#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Math/Matrix4.h"

class InstanceNodeU : public InstanceNodeAbstract {
	public:
		uint flags;
		Matrix4 matrixPrev;
		Matrix4 matrixNow;

		void Construct();
		virtual void UpdateBothMatrixes();
		virtual bool Step(UnkTimePack* time);
		static byte GetIndex();
		static int GetBuilderIndex();
		void Dispose(byte param_1);

};
