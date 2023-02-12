#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/RigidModel/SectionRigidModel.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderRigidModel.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModel.h"
void SectionRigidModel::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRigidModel::DisposeData(SectionRigidModel *this){
		SectionDataRigidModel *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel;
		SectionDataRigidModel::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionRigidModel::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionRigidModel * __thiscall SectionRigidModel::Dispose(SectionRigidModel *this,byte param_1){
		SectionDataRigidModel *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel;
		SectionDataRigidModel::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

byte SectionRigidModel::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionRigidModel::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionRigidModel::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionRigidModel::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

int SectionRigidModel::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionRigidModel::GetElementCount(SectionRigidModel *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

SectionReaderRigidModel* SectionRigidModel::GetReader(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderRigidModel * __thiscall SectionRigidModel::GetReader(SectionRigidModel *this,undefined4 param_1,uint param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanityRigidModel *rigidModel;
		SectionReaderRigidModel *reader;
		SectionDataRigidModel *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,&param_2);
		if ((TwinsanityRigidModel *)CONCAT31(extraout_var,bVar1) != (TwinsanityRigidModel *)0x0) {
		SectionDataRigidModel::FUN_0011be00(this->data,(TwinsanityRigidModel *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderRigidModel *)0x0;
		}
		rigidModel = (TwinsanityRigidModel *)VirtualPool::AllocateMemory(0x24);
		if (rigidModel == (TwinsanityRigidModel *)0x0) {
		rigidModel = (TwinsanityRigidModel *)0x0;
		}
		else {
		*(undefined2 *)&rigidModel->field1_0x4 = 0;
		rigidModel->id = param_2;
		rigidModel->field1_0x4 = rigidModel->field1_0x4 & 0xfffcffff;
		rigidModel->vtable = &TwinsanityGraphics_VT_RigidModel;
		rigidModel->materials = (TwinsanityMaterial **)0x0;
		rigidModel->model = (TwinsanityModel *)0x0;
		rigidModel->field5_0x14 = 0;
		rigidModel->field6_0x18 = false;
		rigidModel->field_0x19 = 0;
		rigidModel->materialCnt = 0;
		}
		SectionDataRigidModel::FUN_0011be00(this->data,rigidModel);
		reader = (SectionReaderRigidModel *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderRigidModel *)0x0) {
		data = this->data;
		reader->rigidModel = rigidModel;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_RigidModel;
		return reader;
		}
		return (SectionReaderRigidModel *)0x0;
		}
		
	*/
	return null;
}

bool SectionRigidModel::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionRigidModel::Write(SectionRigidModel *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		TwinsanityRigidModel2 *pTVar1;
		if (*indexOut1 < (uint)(this->data->entries).cnt) {
		pTVar1 = (this->data->entries).elements[*indexOut1].modelPtr;
		(*(code *)pTVar1->vtable[2])(stream);
		*indexOut1 = *indexOut1 + 1;
		*indexOut1 = pTVar1->id;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionRigidModel::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRigidModel::DisposeResources(SectionRigidModel *this){
		SectionDataRigidModel2::CleanUp((SectionDataRigidModel2 *)this->data);
		return;
		}
		
	*/
	return;
}

void SectionRigidModel::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRigidModel::Construct(SectionRigidModel *this,SectionDataRigidModel *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel;
		this->data = data;
		return;
		}
		
	*/
	return;
}

