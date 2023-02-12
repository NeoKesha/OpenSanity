#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeOGI : public InstanceNodeAbstract {
	public:
		OGI * ogi;

		void Construct();
		static void SetInfoFromOGI(InstanceNodeOGI* param_1);
		virtual void Init(OGI* ogi, int param_2, int param_3);
		virtual void UpdateTime();
		virtual void SetCtx(int param_1);
		virtual bool Step(byte* param_1);
		static void Dispose(InstanceNodeOGI* param_1);
		void Dispose_7(byte param_1);
		static void GetIndex();
		static int GetBuilderIndex();
		static InstanceNodeOGI* FromFile(char* fname);

};
