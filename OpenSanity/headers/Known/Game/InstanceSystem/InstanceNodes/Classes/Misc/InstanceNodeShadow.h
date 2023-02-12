#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeShadow : public InstanceNodeAbstract {
	public:
		UNV005 * array[4];

		void Construct();
		virtual void ReplaceElement(int index, UNV005* element);
		virtual void CleanUp();
		virtual bool Step(byte* param_1);
		void Dispose(byte param_1);
		virtual void FUN_00170490(byte param_1);
		virtual void FUN_001704d0(byte param_1);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
