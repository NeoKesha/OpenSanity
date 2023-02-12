#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/SectionInstance.h"

#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstance.h"
void SectionInstance::Construct(InstanceSectionResources* instanceSectionResources) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstance * __thiscall SectionInstance::Construct(SectionInstance *this,InstanceSectionResources *instanceSectionResources){
		CollectionCollisionSurface *pCVar1;
		CollectionInstanceTemplate *pCVar2;
		CollectionInstance *pCVar3;
		CollectionAiPosition *pCVar4;
		CollectionAiPath *pCVar5;
		CollectionPosition *pCVar6;
		CollectionPath *pCVar7;
		CollectionTrigger *pCVar8;
		CollectionCameraTrigger *pCVar9;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance;
		this->instanceResources = instanceSectionResources;
		(this->instanceTemplateSection).parent.vtable =(SectionAbstract_VTable *)&Section_VT_Instance_Template;
		(this->instanceTemplateSection).instanceResources = instanceSectionResources;
		(this->instanceTemplateSection).instanceTemplates = &instanceSectionResources->instanceTemplates;
		pCVar2 = (instanceSectionResources->instanceTemplates).collectionPtr;
		if (pCVar2 != (CollectionInstanceTemplate *)0x0) {
		pCVar2 = (CollectionInstanceTemplate *)pCVar2->cnt;
		}
		(this->instanceTemplateSection).cnt = (int)pCVar2;
		(this->instanceSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Instance;
		(this->instanceSection).instanceResources = instanceSectionResources;
		(this->instanceSection).instances = &instanceSectionResources->instances;
		pCVar3 = (instanceSectionResources->instances).collectionPtr;
		if (pCVar3 != (CollectionInstance *)0x0) {
		pCVar3 = (CollectionInstance *)pCVar3->cnt;
		}
		(this->instanceSection).cnt = (int)pCVar3;
		(this->aiPositionSection).parent.vtable =(SectionAbstract_VTable *)&Section_VT_Instance_AiPosition;
		(this->aiPositionSection).instanceResources = instanceSectionResources;
		(this->aiPositionSection).aiPositions = &instanceSectionResources->aiPositions;
		pCVar4 = (instanceSectionResources->aiPositions).collectionPtr;
		if (pCVar4 != (CollectionAiPosition *)0x0) {
		pCVar4 = (CollectionAiPosition *)pCVar4->cnt;
		}
		(this->aiPositionSection).cnt = (int)pCVar4;
		(this->aiPathSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Instance_AiPath;
		(this->aiPathSection).instanceResources = instanceSectionResources;
		(this->aiPathSection).aiPaths = &instanceSectionResources->aiPaths;
		pCVar5 = (instanceSectionResources->aiPaths).collectionPtr;
		if (pCVar5 != (CollectionAiPath *)0x0) {
		pCVar5 = (CollectionAiPath *)pCVar5->cnt;
		}
		(this->aiPathSection).cnt = (int)pCVar5;
		(this->positionSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Position;
		(this->positionSection).instanceResources = instanceSectionResources;
		(this->positionSection).collectionPosition = &instanceSectionResources->positions;
		pCVar6 = (instanceSectionResources->positions).collectionPtr;
		if (pCVar6 != (CollectionPosition *)0x0) {
		pCVar6 = (CollectionPosition *)pCVar6->cnt;
		}
		(this->positionSection).cnt = (int)pCVar6;
		(this->pathSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Path;
		(this->pathSection).instanceResources = instanceSectionResources;
		(this->pathSection).collectionPath = &instanceSectionResources->paths;
		pCVar7 = (instanceSectionResources->paths).collectionPtr;
		if (pCVar7 != (CollectionPath *)0x0) {
		pCVar7 = (CollectionPath *)pCVar7->cnt;
		}
		(this->pathSection).cnt = (int)pCVar7;
		(this->triggerSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Trigger;
		(this->triggerSection).instanceResources = instanceSectionResources;
		(this->triggerSection).collectionTrigger = &instanceSectionResources->triggers;
		pCVar8 = (instanceSectionResources->triggers).collectionPtr;
		if (pCVar8 != (CollectionTrigger *)0x0) {
		pCVar8 = (CollectionTrigger *)pCVar8->cnt;
		}
		(this->triggerSection).cnt = (int)pCVar8;
		(this->cameraSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Camera;
		(this->cameraSection).instanceResources = instanceSectionResources;
		(this->cameraSection).colectionCameraTrigger = &instanceSectionResources->cameras;
		pCVar9 = (instanceSectionResources->cameras).collectionPtr;
		if (pCVar9 != (CollectionCameraTrigger *)0x0) {
		pCVar9 = (CollectionCameraTrigger *)pCVar9->cnt;
		}
		(this->cameraSection).cnt = (int)pCVar9;
		(this->collisionSurfaceSection).instanceResources = instanceSectionResources;
		(this->collisionSurfaceSection).parent.vtable =(SectionAbstract_VTable *)&Section_VT_Instance_CollisionSurface;
		(this->collisionSurfaceSection).collectionCollisionSurface =&instanceSectionResources->collisionSurfaces;
		pCVar1 = (instanceSectionResources->collisionSurfaces).collectionPtr;
		if (pCVar1 == (CollectionCollisionSurface *)0x0) {
		(this->collisionSurfaceSection).cnt = 0;
		return this;
		}
		(this->collisionSurfaceSection).cnt = pCVar1->cnt;
		return this;
		}
		
	*/
	return;
}

void SectionInstance::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionInstance::CleanUp(SectionInstance *this){
		(this->collisionSurfaceSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->cameraSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->triggerSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->pathSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->positionSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->aiPathSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->aiPositionSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->instanceSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->instanceTemplateSection).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionInstance::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstance * __thiscall SectionInstance::Dispose(SectionInstance *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionInstance::Write(int index, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstance::Write(SectionInstance *this,int index,MemoryStream *stream){
		switch(index) {
		case 0:SectionAbstract::Write(&(this->instanceTemplateSection).parent,stream);
		return;
		case 1:SectionAbstract::Write(&(this->aiPositionSection).parent,stream);
		return;
		case 2:SectionAbstract::Write(&(this->aiPathSection).parent,stream);
		return;
		case 3:SectionAbstract::Write(&(this->positionSection).parent,stream);
		return;
		case 4:SectionAbstract::Write(&(this->pathSection).parent,stream);
		return;
		case 5:SectionAbstract::Write(&(this->collisionSurfaceSection).parent,stream);
		break;
		case 6:SectionAbstract::Write(&(this->instanceSection).parent,stream);
		return;
		case 7:SectionAbstract::Write(&(this->triggerSection).parent,stream);
		return;
		case 8:SectionAbstract::Write(&(this->cameraSection).parent,stream);
		return;
		}
		return;
		}
		
	*/
	return;
}

int SectionInstance::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstance::GetElementCount(SectionInstance *this){
		return 9;
		}
		
	*/
	return 0;
}

byte SectionInstance::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionInstance::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionInstance::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionInstance::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

SectionReaderInstance* SectionInstance::GetReader(uint param_1, uint* param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Switch with 1 destination removed at 0x001b2d62 : 9 cases all go to same destination SectionReaderInstance * __thiscall SectionInstance::GetReader(SectionInstance *this,undefined4 param_1,undefined4 *param_2,int *param_3){
		uint uVar1;
		int iVar2;
		SectionReaderInstance *pSVar3;
		if (*param_3 == 0) {
		return (SectionReaderInstance *)0x0;
		}
		uVar1 = param_2[2];
		iVar2 = *param_2;
		if (uVar1 < 9) {
		*param_3 = 0xc;
		}
		pSVar3 = (SectionReaderInstance *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 == (SectionReaderInstance *)0x0) {
		return (SectionReaderInstance *)0x0;
		}
		pSVar3->sectionOffset = iVar2;
		pSVar3->sectionId = uVar1;
		pSVar3->data = this;
		(pSVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance;
		return pSVar3;
		}
		
	*/
	return null;
}

bool SectionInstance::Write_8(MemoryStream* stream, uint* param_2, uint* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstance::Write(SectionInstance *this,MemoryStream *stream,uint *param_2,uint *param_3){
		if (*param_2 < 9) {
		Write(this,*param_2,stream);
		*param_3 = *param_2;
		*param_2 = *param_2 + 1;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionInstance::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionInstance::EmptyFunction_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionInstance::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstance::UnkMethod3(SectionInstance *this){
		InstanceSectionResources::FUN_001b7410(this->instanceResources);
		return;
		}
		
	*/
	return;
}

void SectionInstance::ReadInternal(uint index, int sectionOffset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstance::ReadInternal(SectionInstance *this,undefined4 index,int sectionOffset){
		switch(index) {
		case 0:SectionAbstract::AddToReadQueue(&(this->instanceTemplateSection).parent,sectionOffset);
		return;
		case 1:SectionAbstract::AddToReadQueue(&(this->aiPositionSection).parent,sectionOffset);
		return;
		case 2:SectionAbstract::AddToReadQueue(&(this->aiPathSection).parent,sectionOffset);
		return;
		case 3:SectionAbstract::AddToReadQueue(&(this->positionSection).parent,sectionOffset);
		return;
		case 4:SectionAbstract::AddToReadQueue(&(this->pathSection).parent,sectionOffset);
		return;
		case 5:SectionAbstract::AddToReadQueue(&(this->collisionSurfaceSection).parent,sectionOffset);
		break;
		case 6:SectionAbstract::AddToReadQueue(&(this->instanceSection).parent,sectionOffset);
		return;
		case 7:SectionAbstract::AddToReadQueue(&(this->triggerSection).parent,sectionOffset);
		return;
		case 8:SectionAbstract::AddToReadQueue(&(this->cameraSection).parent,sectionOffset);
		return;
		}
		return;
		}
		
	*/
	return;
}

