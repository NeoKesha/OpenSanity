#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeA : public InstanceNodeAbstract {
	public:

		void Dispose();
		void Construct(NodeRelated2AA* param_1);
		void Dispose_2();
		static void Dispose_3(InstanceNodeA* param_1);
		void Dispose_4();
		static void Dispose_5(InstanceNodeA* param_1);
		static void Dispose_6(InstanceNodeA* param_1);
		static void Dispose_7(InstanceNodeA* param_1);
		virtual bool Step(UnkTimePack* time);
		void Dispose_9(byte param_1);
		virtual void SetCtx(uint ctx);
		virtual void UpdateTime(UnkTimePack* time, int flags);
		virtual void IsA();
		virtual void DisposeSomething(int* param_1);
		static uint GetBuilderIndex();

};
