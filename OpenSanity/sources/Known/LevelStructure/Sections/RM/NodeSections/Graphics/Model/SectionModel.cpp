#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Model/SectionModel.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderModel.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/SectionDataModel.h"
void SectionModel::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionModel::DisposeData(SectionModel *this){
		SectionDataModel *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Model;
		SectionDataModel::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionModel::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionModel * __thiscall SectionModel::Dispose(SectionModel *this,byte param_1){
		SectionDataModel *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Model;
		SectionDataModel::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

byte SectionModel::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionModel::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionModel::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionModel::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

int SectionModel::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionModel::GetElementCount(SectionModel *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

SectionReaderModel* SectionModel::GetReader(uint id, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderModel * __thiscall SectionModel::GetReader(SectionModel *this,undefined4 id,uint param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanityModel *model;
		SectionReaderModel *reader;
		SectionDataModel *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,&param_2);
		if ((TwinsanityModel *)CONCAT31(extraout_var,bVar1) != (TwinsanityModel *)0x0) {
		SectionDataModel::FUN_0011bcb0(this->data,(TwinsanityModel *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderModel *)0x0;
		}
		model = (TwinsanityModel *)VirtualPool::AllocateMemory(0x28);
		if (model == (TwinsanityModel *)0x0) {
		model = (TwinsanityModel *)0x0;
		}
		else {
		*(undefined2 *)&model->field0_0x0 = 0;
		model->field0_0x0 = model->field0_0x0 & 0xfffcffff;
		model->id = param_2;
		model->submodels = 0;
		model->someCnt2 = (uint *)0x0;
		model->dataArray1 = (int **)0x0;
		model->field9_0x24 = (int *)0x0;
		}
		SectionDataModel::FUN_0011bcb0(this->data,model);
		reader = (SectionReaderModel *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderModel *)0x0) {
		data = this->data;
		reader->model = model;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Model;
		return reader;
		}
		return (SectionReaderModel *)0x0;
		}
		
	*/
	return null;
}

bool SectionModel::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionModel::Write(SectionModel *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		TwinsanityModel *this_00;
		if (*indexOut1 < (uint)(this->data->entries).cnt) {
		this_00 = (this->data->entries).elements[*indexOut1].modelPtr;
		FUN_000fecb0((int)this_00,(int *)stream);
		*indexOut1 = *indexOut1 + 1;
		*indexOut2 = this_00->id;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionModel::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionModel::DisposeResources(SectionModel *this){
		SectionDataModel::CleanUp(this->data);
		return;
		}
		
	*/
	return;
}

void SectionModel::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionModel::Construct(SectionModel *this,SectionDataModel *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Model;
		this->data = data;
		return;
		}
		
	*/
	return;
}

