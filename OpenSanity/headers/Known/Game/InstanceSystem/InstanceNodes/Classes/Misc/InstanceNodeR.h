#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeR : public InstanceNodeAbstract {
	public:
		float _fov;
		float _near;
		float _far;

		virtual void CleanUp();
		void Construct();
		virtual void UpdateTime(int param_1);
		virtual bool Step(byte* param_1);
		void Dispose(byte param_1);
		virtual uint IsA(uint param_1, uint* param_2);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
