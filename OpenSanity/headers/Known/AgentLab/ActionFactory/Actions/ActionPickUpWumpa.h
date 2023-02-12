#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionPickUpWumpa : public ActionAbstract {
	public:
		int wumpaAmount;

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);
		static int GetSize();
		virtual void Execute(InstanceContext* ctx);
		virtual void UnkMethod(int* param_1);
		ActionPickUpWumpa* Contrust();

};
