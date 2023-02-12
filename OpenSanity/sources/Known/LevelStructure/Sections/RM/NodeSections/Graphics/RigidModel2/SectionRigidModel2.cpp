#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/RigidModel2/SectionRigidModel2.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderRigidModel2.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModel.h"
void SectionRigidModel2::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionRigidModel2::DisposeData(SectionRigidModel2 *this){
		SectionDataRigidModel *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel2;
		SectionDataRigidModel::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionRigidModel2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionRigidModel2 * __thiscall SectionRigidModel2::Dispose(SectionRigidModel2 *this,byte param_1){
		SectionDataRigidModel *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel2;
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

byte SectionRigidModel2::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionRigidModel2::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionRigidModel2::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionRigidModel2::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

int SectionRigidModel2::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionRigidModel2::GetElementCount(SectionRigidModel2 *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

SectionReaderRigidModel2* SectionRigidModel2::GetReader(uint id, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderRigidModel2 * __thiscall SectionRigidModel2::GetReader(SectionRigidModel2 *this,undefined4 id,int param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanityRigidModel2 *rigidModel;
		SectionReaderRigidModel2 *reader;
		SectionDataRigidModel *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,(uint *)&param_2);
		if ((TwinsanityRigidModel2 *)CONCAT31(extraout_var,bVar1) != (TwinsanityRigidModel2 *)0x0) {
		SectionDataRigidModel::FUN_0011c300(this->data,(TwinsanityRigidModel2 *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderRigidModel2 *)0x0;
		}
		rigidModel = (TwinsanityRigidModel2 *)VirtualPool::AllocateMemory(0x24);
		if (rigidModel == (TwinsanityRigidModel2 *)0x0) {
		rigidModel = (TwinsanityRigidModel2 *)0x0;
		}
		else {
		*(undefined2 *)&rigidModel->field1_0x4 = 0;
		rigidModel->id = param_2;
		rigidModel->field1_0x4 = rigidModel->field1_0x4 & 0xfffcffff;
		rigidModel->vtable = &TwinsanityGraphics_VT_RigidModel2;
		rigidModel->materialIds = (TwinsanityMaterial **)0x0;
		rigidModel->model = (TwinsanityModel *)0x0;
		*(undefined4 *)&rigidModel->field_0x14 = 0;
		rigidModel->field_0x18 = 0;
		rigidModel->field_0x19 = 0;
		rigidModel->cnt = 0;
		}
		SectionDataRigidModel::FUN_0011c300(this->data,rigidModel);
		reader = (SectionReaderRigidModel2 *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderRigidModel2 *)0x0) {
		data = this->data;
		reader->unkPointer = rigidModel;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_RigidModel2;
		return reader;
		}
		return (SectionReaderRigidModel2 *)0x0;
		}
		
	*/
	return null;
}

bool SectionRigidModel2::Write(uint indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionRigidModel2::Write(SectionRigidModel2 *this,undefined4 indexOut1,uint *indexOut2){
		TwinsanityRigidModel2 *pTVar1;
		if (*indexOut2 < (uint)(this->data->entries).cnt) {
		pTVar1 = (this->data->entries).elements[*indexOut2].modelPtr;
		(*(code *)pTVar1->vtable[2])(indexOut1);
		*indexOut2 = *indexOut2 + 1;
		*indexOut2 = pTVar1->id;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionRigidModel2::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRigidModel2::DisposeResources(SectionRigidModel2 *this){
		SectionDataRigidModel::CleanUp(this->data);
		return;
		}
		
	*/
	return;
}

void SectionRigidModel2::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionRigidModel2::Construct(SectionRigidModel2 *this,SectionDataRigidModel *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel2;
		this->data = data;
		return;
		}
		
	*/
	return;
}

