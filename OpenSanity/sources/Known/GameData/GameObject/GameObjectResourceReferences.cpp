#include "headers/Known/GameData/GameObject/GameObjectResourceReferences.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/GameObject/GameObjectReferenceList.h"
void GameObjectResourceReferences::LoadDependencies(uint gameObjectIndex, GameResources* gameResources) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectResourceReferences::LoadDependencies(GameObjectResourceReferences *this,uint gameObjectIndex,GameResources *gameResources){
		SectionDataSfx **ppSVar1;
		ushort *puVar2;
		OGI *ogi;
		OGI *_ogi;
		Animation *animation;
		Animation *_animation;
		CodeModel *codeModel;
		Sfx *voice;
		Sfx *_sound;
		GameObject *pGVar3;
		Sfx **ppSVar4;
		uint _index;
		SectionDataSfx *voices;
		ReferenceHelper refHelper;
		SectionDataAnimationBase *animations;
		SectionDataCodeModelBase *codeModels;
		SectionDataGameObjectBase *gameObjects;
		GameObjectReferenceList *nexRefs;
		SectionDataOGIBase *ogis;
		SectionDataScriptBase *scripts;
		SectionDataSfx *sounds;
		gameObjects = (gameResources->parent).gameObjects;
		codeModels = (gameResources->parent).codeModels;
		scripts = (gameResources->parent).scripts;
		animations = (gameResources->parent).animations;
		sounds = (gameResources->parent).sounds;
		ogis = (gameResources->parent).ogis;
		ppSVar1 = (gameResources->parent).voices;
		if ((ppSVar1 == (SectionDataSfx **)0x0) || ((gameResources->parent).languages <= (uint)LNG_INDEX)){
		voices = (SectionDataSfx *)0x0;
		}
		else {
		voices = ppSVar1[LNG_INDEX];
		}
		refHelper.parent.references = this->refObjects;
		if (((refHelper.parent.references != (GameObjectReferenceList *)0x0) &&(gameObjects != (SectionDataGameObjectBase *)0x0)) &&((refHelper.parent.references)->next != (GameObjectReferenceList *)0x0)) {
		refHelper.parent.index = 0;
		do {
		puVar2 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		if (*puVar2 != (ushort)gameObjectIndex) {
		SectionDataGameObjectBase::InitGameObject(gameObjects,*puVar2);
		}
		refHelper.parent.index = refHelper.parent.index + 1;
		nexRefs = (refHelper.parent.references)->next;
		if (nexRefs < (GameObjectReferenceList *)0x11) {
		if (nexRefs <= refHelper.parent.index) break;
		}
		else if ((GameObjectReferenceList *)0xf < refHelper.parent.index) {
		refHelper.parent.index = 0;
		refHelper.parent.references = nexRefs;
		}
		}
		 while (refHelper.parent.references != (GameObjectReferenceList *)0x0);
		}
		refHelper.parent.references = this->refOgis;
		if (((refHelper.parent.references != (GameObjectReferenceList *)0x0) &&(ogis != (SectionDataOGIBase *)0x0)) &&((refHelper.parent.references)->next != (GameObjectReferenceList *)0x0)) {
		refHelper.parent.index = 0;
		do {
		puVar2 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		if (*puVar2 != 0xffff) {
		_index = *puVar2 & 0x7fff;
		_ogi = ogis->elements[_index];
		if (_ogi == (OGI *)0x0) {
		ogi = (OGI *)VirtualPool::AllocateMemory(0x90);
		if (ogi == (OGI *)0x0) {
		_ogi = (OGI *)0x0;
		}
		else {
		_ogi = OGI::Construct(ogi);
		}
		_ogi->index = _index;
		}
		_ogi->field0_0x0 = _ogi->field0_0x0 & 0xfffdffff;
		*(short *)&_ogi->field0_0x0 = *(short *)&_ogi->field0_0x0 + 1;
		ogis->elements[_index] = _ogi;
		}
		refHelper.parent.index = refHelper.parent.index + 1;
		nexRefs = (refHelper.parent.references)->next;
		if (nexRefs < (GameObjectReferenceList *)0x11) {
		if (nexRefs <= refHelper.parent.index) break;
		}
		else if ((GameObjectReferenceList *)0xf < refHelper.parent.index) {
		refHelper.parent.index = 0;
		refHelper.parent.references = nexRefs;
		}
		}
		 while (refHelper.parent.references != (GameObjectReferenceList *)0x0);
		}
		refHelper.parent.references = this->refAnimations;
		if (((refHelper.parent.references != (GameObjectReferenceList *)0x0) &&(animations != (SectionDataAnimationBase *)0x0)) &&((refHelper.parent.references)->next != (GameObjectReferenceList *)0x0)) {
		refHelper.parent.index = 0;
		do {
		puVar2 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		if (*puVar2 != 0xffff) {
		_index = *puVar2 & 0x7fff;
		_animation = animations->elements[_index];
		if (_animation == (Animation *)0x0) {
		animation = (Animation *)VirtualPool::AllocateMemory(0x24);
		if (animation == (Animation *)0x0) {
		_animation = (Animation *)0x0;
		}
		else {
		_animation = Animation::Construct(animation);
		}
		_animation->index = _index;
		}
		_animation->field0_0x0 = _animation->field0_0x0 & 0xfffdffff;
		*(short *)&_animation->field0_0x0 = *(short *)&_animation->field0_0x0 + 1;
		animations->elements[_index] = _animation;
		}
		refHelper.parent.index = refHelper.parent.index + 1;
		nexRefs = (refHelper.parent.references)->next;
		if (nexRefs < (GameObjectReferenceList *)0x11) {
		if (nexRefs <= refHelper.parent.index) break;
		}
		else if ((GameObjectReferenceList *)0xf < refHelper.parent.index) {
		refHelper.parent.index = 0;
		refHelper.parent.references = nexRefs;
		}
		}
		 while (refHelper.parent.references != (GameObjectReferenceList *)0x0);
		}
		refHelper.parent.references = this->refCodeModels;
		if (((refHelper.parent.references != (GameObjectReferenceList *)0x0) &&(codeModels != (SectionDataCodeModelBase *)0x0)) &&((refHelper.parent.references)->next != (GameObjectReferenceList *)0x0)) {
		refHelper.parent.index = 0;
		do {
		puVar2 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		if (*puVar2 != 0xffff) {
		_index = *puVar2 & 0x7fff;
		codeModel = codeModels->elements[_index];
		if (codeModel == (CodeModel *)0x0) {
		codeModel = (CodeModel *)VirtualPool::AllocateMemory(0x18);
		if (codeModel == (CodeModel *)0x0) {
		codeModel = (CodeModel *)0x0;
		}
		else {
		*(undefined2 *)&codeModel->field0_0x0 = 0;
		codeModel->field0_0x0 = codeModel->field0_0x0 & 0xfffcffff;
		codeModel->index = 0xffffffff;
		codeModel->scriptPackArray = (GameObjectScriptPack *)0x0;
		codeModel->firstAction = (ActionAbstract *)0x0;
		codeModel->packIds = (short *)0x0;
		codeModel->header = 0xffff;
		}
		codeModel->index = _index;
		}
		codeModel->field0_0x0 = codeModel->field0_0x0 & 0xfffdffff;
		*(short *)&codeModel->field0_0x0 = *(short *)&codeModel->field0_0x0 + 1;
		codeModels->elements[_index] = codeModel;
		}
		refHelper.parent.index = refHelper.parent.index + 1;
		nexRefs = (refHelper.parent.references)->next;
		if (nexRefs < (GameObjectReferenceList *)0x11) {
		if (nexRefs <= refHelper.parent.index) break;
		}
		else if ((GameObjectReferenceList *)0xf < refHelper.parent.index) {
		refHelper.parent.index = 0;
		refHelper.parent.references = nexRefs;
		}
		}
		 while (refHelper.parent.references != (GameObjectReferenceList *)0x0);
		}
		refHelper.parent.references = this->refScripts;
		if (((refHelper.parent.references != (GameObjectReferenceList *)0x0) &&(scripts != (SectionDataScriptBase *)0x0)) &&((refHelper.parent.references)->next != (GameObjectReferenceList *)0x0)) {
		refHelper.parent.index = 0;
		do {
		puVar2 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		SectionDataScriptBase::InitScript(scripts,*puVar2);
		refHelper.parent.index = refHelper.parent.index + 1;
		nexRefs = (refHelper.parent.references)->next;
		if (nexRefs < (GameObjectReferenceList *)0x11) {
		if (nexRefs <= refHelper.parent.index) break;
		}
		else if ((GameObjectReferenceList *)0xf < refHelper.parent.index) {
		refHelper.parent.index = 0;
		refHelper.parent.references = nexRefs;
		}
		}
		 while (refHelper.parent.references != (GameObjectReferenceList *)0x0);
		}
		refHelper.parent.references = this->refSounds;
		if (((refHelper.parent.references != (GameObjectReferenceList *)0x0) &&(sounds != (SectionDataSfx *)0x0)) &&((refHelper.parent.references)->next != (GameObjectReferenceList *)0x0)) {
		refHelper.parent.index = 0;
		do {
		puVar2 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		if (*puVar2 != 0xffff) {
		_index = *puVar2 & 0x7fff;
		_sound = (sounds->parent).elements[_index];
		if (_sound == (Sfx *)0x0) {
		_sound = (voices->parent).elements[_index];
		if (_sound == (Sfx *)0x0) {
		_sound = (Sfx *)VirtualPool::AllocateMemory(100);
		if (_sound == (Sfx *)0x0) {
		_sound = (Sfx *)0x0;
		}
		else {
		_sound = Sfx::Construct(_sound);
		}
		_sound->index = _index;
		}
		_sound->flags = _sound->flags & 0xfffdffff;
		*(short *)&_sound->flags = *(short *)&_sound->flags + 1;
		ppSVar4 = (voices->parent).elements;
		}
		else {
		if (_sound == (Sfx *)0x0) {
		voice = (Sfx *)VirtualPool::AllocateMemory(100);
		if (voice == (Sfx *)0x0) {
		_sound = (Sfx *)0x0;
		}
		else {
		_sound = Sfx::Construct(voice);
		}
		_sound->index = _index;
		}
		_sound->flags = _sound->flags & 0xfffdffff;
		*(short *)&_sound->flags = *(short *)&_sound->flags + 1;
		ppSVar4 = (sounds->parent).elements;
		}
		ppSVar4[_index] = _sound;
		}
		refHelper.parent.index = refHelper.parent.index + 1;
		nexRefs = (refHelper.parent.references)->next;
		if (nexRefs < (GameObjectReferenceList *)0x11) {
		if (nexRefs <= refHelper.parent.index) break;
		}
		else if ((GameObjectReferenceList *)0xf < refHelper.parent.index) {
		refHelper.parent.index = 0;
		refHelper.parent.references = nexRefs;
		}
		}
		 while (refHelper.parent.references != (GameObjectReferenceList *)0x0);
		}
		if ((ushort)gameObjectIndex != 0xffff) {
		_index = gameObjectIndex & 0x7fff;
		pGVar3 = gameObjects->elements[_index];
		if (pGVar3 == (GameObject *)0x0) {
		pGVar3 = (GameObject *)VirtualPool::AllocateMemory(0x60);
		if (pGVar3 == (GameObject *)0x0) {
		pGVar3 = (GameObject *)0x0;
		}
		else {
		pGVar3 = (GameObject *)GameObject::Construct(pGVar3);
		}
		pGVar3->index = _index;
		}
		pGVar3->field0_0x0 = (int *)((uint)pGVar3->field0_0x0 & 0xfffdffff);
		*(short *)&pGVar3->field0_0x0 = *(short *)&pGVar3->field0_0x0 + 1;
		gameObjects->elements[_index] = pGVar3;
		}
		return;
		}
		
	*/
	return;
}

void GameObjectResourceReferences::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectResourceReferences::Read(GameObjectResourceReferences *this,MemoryStream *stream){
		GameObjectReferenceList *refList;
		GameObjectReferenceList *refList2;
		(*stream->vtable->ReadUInt)(stream,&this->flags);
		if ((*(byte *)&this->flags & 1) == 0) {
		LAB_001aaff1:refList = (GameObjectReferenceList *)0x0;
		}
		else {
		refList = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (refList == (GameObjectReferenceList *)0x0) goto LAB_001aaff1;
		*(undefined4 *)refList->idArray = 0xffffffff;
		*(undefined4 *)(refList->idArray + 2) = 0xffffffff;
		*(undefined4 *)(refList->idArray + 4) = 0xffffffff;
		*(undefined4 *)(refList->idArray + 6) = 0xffffffff;
		*(undefined4 *)(refList->idArray + 8) = 0xffffffff;
		*(undefined4 *)(refList->idArray + 10) = 0xffffffff;
		*(undefined4 *)(refList->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(refList->idArray + 0xe) = 0xffffffff;
		refList->next = (GameObjectReferenceList *)0x0;
		GameObjectReferenceList::Read(refList,stream);
		}
		this->refObjects = refList;
		if ((*(byte *)&this->flags & 2) == 0) {
		LAB_001ab036:refList2 = (GameObjectReferenceList *)0x0;
		}
		else {
		refList2 = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (refList2 == (GameObjectReferenceList *)0x0) goto LAB_001ab036;
		*(undefined4 *)refList2->idArray = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 2) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 4) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 6) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 8) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 10) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xe) = 0xffffffff;
		refList2->next = (GameObjectReferenceList *)0x0;
		GameObjectReferenceList::Read(refList2,stream);
		}
		this->refOgis = refList2;
		if ((*(byte *)&this->flags & 4) == 0) {
		LAB_001ab07b:refList2 = (GameObjectReferenceList *)0x0;
		}
		else {
		refList2 = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (refList2 == (GameObjectReferenceList *)0x0) goto LAB_001ab07b;
		*(undefined4 *)refList2->idArray = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 2) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 4) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 6) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 8) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 10) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xe) = 0xffffffff;
		refList2->next = (GameObjectReferenceList *)0x0;
		GameObjectReferenceList::Read(refList2,stream);
		}
		this->refAnimations = refList2;
		if ((*(byte *)&this->flags & 8) == 0) {
		LAB_001ab0c0:refList2 = (GameObjectReferenceList *)0x0;
		}
		else {
		refList2 = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (refList2 == (GameObjectReferenceList *)0x0) goto LAB_001ab0c0;
		*(undefined4 *)refList2->idArray = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 2) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 4) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 6) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 8) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 10) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xe) = 0xffffffff;
		refList2->next = (GameObjectReferenceList *)0x0;
		GameObjectReferenceList::Read(refList2,stream);
		}
		this->refCodeModels = refList2;
		if ((*(byte *)&this->flags & 0x10) == 0) {
		LAB_001ab105:refList2 = (GameObjectReferenceList *)0x0;
		}
		else {
		refList2 = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (refList2 == (GameObjectReferenceList *)0x0) goto LAB_001ab105;
		*(undefined4 *)refList2->idArray = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 2) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 4) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 6) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 8) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 10) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xe) = 0xffffffff;
		refList2->next = (GameObjectReferenceList *)0x0;
		GameObjectReferenceList::Read(refList2,stream);
		}
		this->refScripts = refList2;
		if ((*(byte *)&this->flags & 0x20) != 0) {
		refList2 = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (refList2 != (GameObjectReferenceList *)0x0) {
		*(undefined4 *)refList2->idArray = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 2) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 4) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 6) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 8) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 10) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xe) = 0xffffffff;
		refList2->next = (GameObjectReferenceList *)0x0;
		GameObjectReferenceList::Read(refList2,stream);
		goto LAB_001ab14c;
		}
		}
		refList2 = (GameObjectReferenceList *)0x0;
		LAB_001ab14c:this->refUnknown = refList2;
		if ((*(byte *)&this->flags & 0x40) != 0) {
		refList2 = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (refList2 != (GameObjectReferenceList *)0x0) {
		*(undefined4 *)refList2->idArray = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 2) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 4) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 6) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 8) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 10) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(refList2->idArray + 0xe) = 0xffffffff;
		refList2->next = (GameObjectReferenceList *)0x0;
		GameObjectReferenceList::Read(refList2,stream);
		this->refSounds = refList2;
		return;
		}
		}
		this->refSounds = (GameObjectReferenceList *)0x0;
		return;
		}
		
	*/
	return;
}

void GameObjectResourceReferences::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectResourceReferences::Write(GameObjectResourceReferences *this,MemoryStream *stream){
		(*stream->vtable->WriteInt3)(stream,this->flags);
		if ((*(byte *)&this->flags & 1) != 0) {
		GameObjectReferenceList::Write(this->refObjects,stream);
		}
		if ((*(byte *)&this->flags & 2) != 0) {
		GameObjectReferenceList::Write(this->refOgis,stream);
		}
		if ((*(byte *)&this->flags & 4) != 0) {
		GameObjectReferenceList::Write(this->refAnimations,stream);
		}
		if ((*(byte *)&this->flags & 8) != 0) {
		GameObjectReferenceList::Write(this->refCodeModels,stream);
		}
		if ((*(byte *)&this->flags & 0x10) != 0) {
		GameObjectReferenceList::Write(this->refScripts,stream);
		}
		if ((*(byte *)&this->flags & 0x20) != 0) {
		GameObjectReferenceList::Write(this->refUnknown,stream);
		}
		if ((*(byte *)&this->flags & 0x40) != 0) {
		GameObjectReferenceList::Write(this->refSounds,stream);
		}
		return;
		}
		
	*/
	return;
}

void GameObjectResourceReferences::Dispose(ushort param_1, GameResources* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectResourceReferences::Dispose(GameObjectResourceReferences *this,ushort param_1,GameResources *param_2){
		ushort uVar1;
		SectionDataGameObjectBase *this_00;
		SectionDataAnimationBase *this_01;
		SectionDataCodeModelBase *this_02;
		SectionDataScriptBase *this_03;
		SectionDataOGIBase *this_04;
		SectionDataSfx **ppSVar2;
		SectionDataSfx *pSVar3;
		GameObjectReferenceList *pGVar4;
		ushort *puVar5;
		uint extraout_ECX;
		uint uVar6;
		SectionDataSfx *this_05;
		uint extraout_ECX_00;
		uint extraout_ECX_01;
		uint extraout_ECX_02;
		uint extraout_ECX_03;
		uint extraout_ECX_04;
		SectionDataSfx *pSVar7;
		GameObjectReferenceList *local_8;
		GameObjectReferenceList *local_4;
		this_00 = (param_2->parent).gameObjects;
		this_01 = (param_2->parent).animations;
		this_02 = (param_2->parent).codeModels;
		this_03 = (param_2->parent).scripts;
		this_04 = (param_2->parent).ogis;
		ppSVar2 = (param_2->parent).voices;
		pSVar3 = (param_2->parent).sounds;
		if ((ppSVar2 == (SectionDataSfx **)0x0) || ((param_2->parent).languages <= (uint)LNG_INDEX)) {
		pSVar7 = (SectionDataSfx *)0x0;
		}
		else {
		pSVar7 = ppSVar2[LNG_INDEX];
		}
		local_8 = this->refSounds;
		if (((local_8 != (GameObjectReferenceList *)0x0) && (pSVar3 != (SectionDataSfx *)0x0)) &&(local_8->next != (GameObjectReferenceList *)0x0)) {
		local_4 = (GameObjectReferenceList *)0x0;
		do {
		puVar5 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		uVar1 = *puVar5;
		uVar6 = extraout_ECX;
		if ((uVar1 == 0xffff) ||(uVar6 = uVar1 & 0x7fff, (pSVar3->parent).elements[uVar6] == (Sfx *)0x0)) {
		uVar6 = uVar6 & 0xffff0000 | (uint)uVar1;
		this_05 = pSVar7;
		}
		else {
		uVar6 = (uint)uVar1;
		this_05 = pSVar3;
		}
		FUN_001aea80((int)this_05,uVar6);
		local_4 = (GameObjectReferenceList *)((int)&local_4->next + 1);
		pGVar4 = local_8->next;
		if (pGVar4 < (GameObjectReferenceList *)0x11) {
		if (pGVar4 <= local_4) break;
		}
		else if ((GameObjectReferenceList *)0xf < local_4) {
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = pGVar4;
		}
		}
		 while (local_8 != (GameObjectReferenceList *)0x0);
		}
		local_8 = this->refScripts;
		if (((local_8 != (GameObjectReferenceList *)0x0) && (this_03 != (SectionDataScriptBase *)0x0)) &&(local_8->next != (GameObjectReferenceList *)0x0)) {
		local_4 = (GameObjectReferenceList *)0x0;
		do {
		puVar5 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		FUN_001ae790((int)this_03,extraout_ECX_00 & 0xffff0000 | (uint)*puVar5);
		local_4 = (GameObjectReferenceList *)((int)&local_4->next + 1);
		pGVar4 = local_8->next;
		if (pGVar4 < (GameObjectReferenceList *)0x11) {
		if (pGVar4 <= local_4) break;
		}
		else if ((GameObjectReferenceList *)0xf < local_4) {
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = pGVar4;
		}
		}
		 while (local_8 != (GameObjectReferenceList *)0x0);
		}
		local_8 = this->refCodeModels;
		if (((local_8 != (GameObjectReferenceList *)0x0) && (this_02 != (SectionDataCodeModelBase *)0x0))&& (local_8->next != (GameObjectReferenceList *)0x0)) {
		local_4 = (GameObjectReferenceList *)0x0;
		do {
		puVar5 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		FUN_001afa70((int)this_02,extraout_ECX_01 & 0xffff0000 | (uint)*puVar5);
		local_4 = (GameObjectReferenceList *)((int)&local_4->next + 1);
		pGVar4 = local_8->next;
		if (pGVar4 < (GameObjectReferenceList *)0x11) {
		if (pGVar4 <= local_4) break;
		}
		else if ((GameObjectReferenceList *)0xf < local_4) {
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = pGVar4;
		}
		}
		 while (local_8 != (GameObjectReferenceList *)0x0);
		}
		local_8 = this->refAnimations;
		if (((local_8 != (GameObjectReferenceList *)0x0) && (this_01 != (SectionDataAnimationBase *)0x0))&& (local_8->next != (GameObjectReferenceList *)0x0)) {
		local_4 = (GameObjectReferenceList *)0x0;
		do {
		puVar5 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		FUN_001ae860((int)this_01,extraout_ECX_02 & 0xffff0000 | (uint)*puVar5);
		local_4 = (GameObjectReferenceList *)((int)&local_4->next + 1);
		pGVar4 = local_8->next;
		if (pGVar4 < (GameObjectReferenceList *)0x11) {
		if (pGVar4 <= local_4) break;
		}
		else if ((GameObjectReferenceList *)0xf < local_4) {
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = pGVar4;
		}
		}
		 while (local_8 != (GameObjectReferenceList *)0x0);
		}
		local_8 = this->refOgis;
		if (((local_8 != (GameObjectReferenceList *)0x0) && (this_04 != (SectionDataOGIBase *)0x0)) &&(local_8->next != (GameObjectReferenceList *)0x0)) {
		local_4 = (GameObjectReferenceList *)0x0;
		do {
		puVar5 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		FUN_001ae940((int)this_04,extraout_ECX_03 & 0xffff0000 | (uint)*puVar5);
		local_4 = (GameObjectReferenceList *)((int)&local_4->next + 1);
		pGVar4 = local_8->next;
		if (pGVar4 < (GameObjectReferenceList *)0x11) {
		if (pGVar4 <= local_4) break;
		}
		else if ((GameObjectReferenceList *)0xf < local_4) {
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = pGVar4;
		}
		}
		 while (local_8 != (GameObjectReferenceList *)0x0);
		}
		local_8 = this->refObjects;
		if (((local_8 != (GameObjectReferenceList *)0x0) && (this_00 != (SectionDataGameObjectBase *)0x0))&& (local_8->next != (GameObjectReferenceList *)0x0)) {
		local_4 = (GameObjectReferenceList *)0x0;
		do {
		puVar5 = (ushort *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		if (*puVar5 != param_1) {
		FUN_001b0970((int)this_00,extraout_ECX_04 & 0xffff0000 | (uint)*puVar5);
		}
		this = (GameObjectResourceReferences *)((int)&local_4->next + 1);
		pGVar4 = local_8->next;
		local_4 = (GameObjectReferenceList *)this;
		if (pGVar4 < (GameObjectReferenceList *)0x11) {
		if (pGVar4 <= this) break;
		}
		else if ((GameObjectReferenceList *)0xf < this) {
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = pGVar4;
		}
		}
		 while (local_8 != (GameObjectReferenceList *)0x0);
		}
		FUN_001b0970((int)this_00,(uint)this & 0xffff0000 | (uint)param_1);
		return;
		}
		
	*/
	return;
}

