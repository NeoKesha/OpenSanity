#include "headers/Known/GameData/GameObject/GameObject.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/GameObject/GameObjectResourceReferences.h"
#include "headers/Unknown/ParameterTable.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/OGI/InstanceNodeOGI.h"
uint GameObject::FUN_0015c960(uint param_1, uint* param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameObject::FUN_0015c960(GameObject *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3){
		uint uVar1;
		if (this->index == 0) {
		uVar1 = (**(code **)(*this->field0_0x0 + 0x90))(param_3,param_2,param_1);
		return uVar1;
		}
		uVar1 = this->index - 1;
		if (uVar1 != 0) {
		return uVar1 & 0xffffff00;
		}
		uVar1 = (**(code **)(*this->field0_0x0 + 0x40))(param_3,*param_2,param_1);
		return uVar1;
		}
		
	*/
	return 0;
}

void GameObject::GetOGIId(ushort* outId, int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObject::GetOGIId(GameObject *this,ushort *outId,int index){
		*outId = (this->ogiSlots).idList[index];
		return;
		}
		
	*/
	return;
}

void GameObject::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameObject::Dispose(GameObject *this){
		GameObjectResourceReferences *this_00;
		short *psVar1;
		if (((*(uint *)this->field2_0x8 & 0x10000000) != 0) && (this->parameters != (ParameterTable *)0x0)) {
		(*(code *)*this->parameters->vtable)(1);
		}
		this_00 = this->references;
		if (this_00 != (GameObjectResourceReferences *)0x0) {
		FUN_001a9d40(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		psVar1 = (this->soundSlots).idList;
		if (psVar1 != (short *)0x0) {
		VirtualPool::FreeMemory(psVar1 + -2);
		}
		psVar1 = (this->objectSlots).idList;
		if (psVar1 != (short *)0x0) {
		VirtualPool::FreeMemory(psVar1 + -2);
		}
		psVar1 = (this->scriptSlots).idList;
		if (psVar1 != (short *)0x0) {
		VirtualPool::FreeMemory(psVar1 + -2);
		}
		psVar1 = (this->animationSlots).idList;
		if (psVar1 != (short *)0x0) {
		VirtualPool::FreeMemory(psVar1 + -2);
		}
		psVar1 = (this->ogiSlots).idList;
		if (psVar1 != (short *)0x0) {
		VirtualPool::FreeMemory(psVar1 + -2);
		}
		psVar1 = (this->triggerScripts).idList;
		if (psVar1 != (short *)0x0) {
		VirtualPool::FreeMemory(psVar1 + -2);
		}
		FUN_0015cf30((int)&this->scriptPack);
		TwinString::Dispose(&this->gameObjectName);
		return;
		}
		
	*/
	return;
}

void GameObject::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObject::Read(GameObject *this,MemoryStream *stream){
		byte *outArray;
		ParameterTable *pPVar1;
		GameObjectResourceReferences *this_00;
		outArray = this->field2_0x8;
		(*stream->vtable->Read)(stream,(int *)outArray,0xc,1);
		TwinString::ReadFromFile(&this->gameObjectName,stream);
		GameObjectIdListUInt::Read((GameObjectIdListUInt *)&this->triggerScripts,stream);
		GameObjectIdListShort::Read(&this->ogiSlots,stream);
		GameObjectIdListShort::Read(&this->animationSlots,stream);
		GameObjectIdListShort::Read(&this->scriptSlots,stream);
		GameObjectIdListShort::Read(&this->objectSlots,stream);
		GameObjectIdListShort::Read(&this->soundSlots,stream);
		if (((*(uint *)outArray & 0x10000000) != 0) && (this->parameters != (ParameterTable *)0x0)) {
		(*(code *)*this->parameters->vtable)(1);
		}
		if ((*(uint *)outArray & 0x20000000) == 0) {
		LAB_001aba4d:pPVar1 = (ParameterTable *)0x0;
		}
		else {
		pPVar1 = (ParameterTable *)VirtualPool::AllocateMemory(0x24);
		if (pPVar1 == (ParameterTable *)0x0) goto LAB_001aba4d;
		pPVar1 = ParameterTable::Construct(pPVar1,stream);
		}
		this->parameters = pPVar1;
		if ((*(uint *)outArray & 0x40000000) != 0) {
		this_00 = (GameObjectResourceReferences *)VirtualPool::AllocateMemory(0x20);
		if (this_00 != (GameObjectResourceReferences *)0x0) {
		GameObjectResourceReferences::Read(this_00,stream);
		goto LAB_001aba78;
		}
		}
		this_00 = (GameObjectResourceReferences *)0x0;
		LAB_001aba78:this->references = this_00;
		*(uint *)outArray =*(uint *)outArray ^((uint)(this->parameters != (ParameterTable *)0x0) << 0x1c ^ *(uint *)outArray) & 0x10000000;
		GameObjectScriptPack::Read(&this->scriptPack,stream);
		return;
		}
		
	*/
	return;
}

InstanceNodeOGI* GameObject::GetInstanceNode() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeOGI * __cdecl GameObject::GetInstanceNode(GameObject *this){
		InstanceNodeOGI *node;
		int uVar1;
		OGI *ogi;
		int uVar2;
		GameObject *gameObject;
		gameObject = this;
		GetOGIId(this,(ushort *)&this,0);
		if ((short)this == -1) {
		ogi = (OGI *)0x0;
		}
		else {
		ogi = ((GameResources->parent).ogis)->elements[(uint)this & 0x7fff];
		}
		uVar2 = *(uint *)gameObject->field2_0x8 >> 6 & 0x3f;
		uVar1 = gameObject->field2_0x8[0] & 0x3f;
		node = (InstanceNodeOGI *)VirtualPool::AllocateMemory(0x30);
		if (node != (InstanceNodeOGI *)0x0) {
		node = InstanceNodeOGI::Construct(node);
		InstanceNodeOGI::Init(node,ogi,uVar2,uVar1);
		return node;
		}
		InstanceNodeOGI::Init((InstanceNodeOGI *)0x0,ogi,uVar2,uVar1);
		return (InstanceNodeOGI *)0x0;
		}
		
	*/
	return null;
}

void GameObject::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameObject * __thiscall GameObject::Construct(GameObject *this,MemoryStream *stream){
		*(undefined2 *)&this->field0_0x0 = 0;
		this->field0_0x0 = (int *)((uint)this->field0_0x0 & 0xfffcffff);
		this->index = -1;
		(this->gameObjectName).value = (char *)0x0;
		(this->gameObjectName).strLength = 0;
		(this->gameObjectName).strSize = 0;
		this->parameters = (ParameterTable *)0x0;
		this->references = (GameObjectResourceReferences *)0x0;
		GameObjectScriptPack::Construct(&this->scriptPack);
		(this->triggerScripts).count = 0;
		(this->triggerScripts).idList = (short *)0x0;
		(this->ogiSlots).count = 0;
		(this->ogiSlots).idList = (short *)0x0;
		(this->animationSlots).count = 0;
		(this->animationSlots).idList = (short *)0x0;
		(this->scriptSlots).count = 0;
		(this->scriptSlots).idList = (short *)0x0;
		(this->objectSlots).count = 0;
		(this->objectSlots).idList = (short *)0x0;
		(this->soundSlots).count = 0;
		(this->soundSlots).idList = (short *)0x0;
		*(undefined4 *)this->field2_0x8 = 0;
		*(undefined4 *)(this->field2_0x8 + 4) = 0;
		*(undefined4 *)(this->field2_0x8 + 8) = 0;
		Read(this,stream);
		return this;
		}
		
	*/
	return;
}

void GameObject::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObject::Write(GameObject *this,MemoryStream *stream){
		byte *data;
		ParameterTable *pPVar1;
		data = this->field2_0x8;
		(*stream->vtable->Write)(stream,data,0xc);
		TwinString::Write(&this->gameObjectName,stream);
		GameObjectIdListShort::Write(&this->triggerScripts,stream);
		GameObjectIdListShort::Write(&this->ogiSlots,stream);
		GameObjectIdListShort::Write(&this->animationSlots,stream);
		GameObjectIdListShort::Write(&this->scriptSlots,stream);
		GameObjectIdListShort::Write(&this->objectSlots,stream);
		GameObjectIdListShort::Write(&this->soundSlots,stream);
		if ((*(uint *)data & 0x20000000) != 0) {
		pPVar1 = this->parameters;
		(*stream->vtable->WriteInt3)(stream,pPVar1->instancePropsHeader);
		(*stream->vtable->WriteInt3)(stream,pPVar1->unkInt);
		CollectionFractions::Write(&pPVar1->fractions,stream);
		CollectionFloats::Write(&pPVar1->floats,stream);
		CollectionInts::Write(&pPVar1->ints,stream);
		}
		if ((*(uint *)data & 0x40000000) != 0) {
		GameObjectResourceReferences::Write(this->references,stream);
		}
		GameObjectScriptPack::Write(&this->scriptPack,stream);
		return;
		}
		
	*/
	return;
}

void GameObject::Construct_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __fastcall GameObject::Construct(GameObject *this){
		byte *pbVar1;
		*(undefined2 *)&this->field0_0x0 = 0;
		this->field0_0x0 = (int *)((uint)this->field0_0x0 & 0xfffcffff);
		this->index = -1;
		(this->gameObjectName).value = (char *)0x0;
		(this->gameObjectName).strLength = 0;
		(this->gameObjectName).strSize = 0;
		this->parameters = (ParameterTable *)0x0;
		this->references = (GameObjectResourceReferences *)0x0;
		GameObjectScriptPack::Construct(&this->scriptPack);
		(this->triggerScripts).count = 0;
		(this->triggerScripts).idList = (short *)0x0;
		(this->ogiSlots).count = 0;
		(this->ogiSlots).idList = (short *)0x0;
		(this->animationSlots).count = 0;
		(this->animationSlots).idList = (short *)0x0;
		(this->scriptSlots).count = 0;
		(this->scriptSlots).idList = (short *)0x0;
		(this->objectSlots).count = 0;
		(this->objectSlots).idList = (short *)0x0;
		pbVar1 = this->field2_0x8;
		(this->soundSlots).count = 0;
		(this->soundSlots).idList = (short *)0x0;
		*(undefined4 *)pbVar1 = 0;
		*(undefined4 *)(this->field2_0x8 + 4) = 0;
		*(undefined4 *)(this->field2_0x8 + 8) = 0;
		*(uint *)pbVar1 = *(uint *)pbVar1 | 0xffff000;
		return (uint *)this;
		}
		
	*/
	return;
}

