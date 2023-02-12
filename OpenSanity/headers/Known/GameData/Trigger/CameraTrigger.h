#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Trigger/TriggerAbstract.h"

class CameraTrigger : public TriggerAbstract {
	public:
		Camera * camera;

		void Construct();
		virtual void CleanUp();
		void Dispose(byte param_1);
		void Construct_3(int param_1);
		virtual CameraTrigger* FUN_001d7020(int param_1);
		virtual void Read(MemoryStream* stream);
		static int GetBuilderIndex();
		virtual void MatrixRelated(Matrix4* param_1);
		virtual void Write(MemoryStream* stream);
		virtual bool Check(int** param_1);

};
