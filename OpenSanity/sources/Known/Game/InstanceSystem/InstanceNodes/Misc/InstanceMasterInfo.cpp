#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/InstanceMasterInfo.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/GameData/Instance/Instance.h"
#include "headers/Known/GameData/GameObject/GameObject.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void InstanceMasterInfo::Construct(Instance* instance, GameResources* resources, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceMasterInfo::Construct(InstanceMasterInfo *this,Instance *instance,GameResources *resources,InstanceContext *ctx){
		short *psVar1;
		this->instance = instance;
		this->ctx = ctx;
		psVar1 = &instance->objectId;
		instance = (Instance *)(uint)(ushort)*psVar1;
		if (*psVar1 != 0xffff) {
		this->gameObject = ((resources->parent).gameObjects)->elements[(uint)instance & 0x7fff];
		return;
		}
		this->gameObject = (GameObject *)0x0;
		return;
		}
		
	*/
	return;
}

