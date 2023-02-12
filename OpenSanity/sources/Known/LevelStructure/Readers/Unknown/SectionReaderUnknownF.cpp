#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownF.h"

void SectionReaderUnknownF::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownF::Dispose(SectionReaderUnknownF *this){
		void *pvVar1;
		PhysicalPool *pool;
		void **ptr;
		pvVar1 = this->buffer;
		ptr = &this->buffer;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_F;
		if (-1 < (int)pvVar1) {
		pool = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pool,ptr);
		}
		if ((undefined4 *)this->field1_0x4 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field1_0x4)(1);
		}
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownF::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall SectionReaderUnknownF::Dispose(SectionReaderUnknownF *this,byte param_1){
		void *pvVar1;
		PhysicalPool *this_00;
		void **ptr;
		pvVar1 = this->buffer;
		ptr = &this->buffer;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_F;
		if (-1 < (int)pvVar1) {
		this_00 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(this_00,ptr);
		}
		if ((undefined4 *)this->field1_0x4 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field1_0x4)(1);
		}
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void SectionReaderUnknownF::Construct(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownF * __thiscall SectionReaderUnknownF::Construct(SectionReaderUnknownF *this,undefined4 *param_1,undefined4 *param_2){
		undefined4 *length;
		PhysicalPool *pool;
		MemoryStream *stream;
		uint uVar1;
		undefined4 *puVar2;
		undefined4 **bufferOut;
		bool bVar3;
		bool bVar4;
		void **length_00;
		length = param_2;
		bVar4 = false;
		bVar3 = true;
		bufferOut = &param_2;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_F;
		length_00 = &this->buffer;
		*length_00 = (void *)0xffffffff;
		puVar2 = param_2;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,(int *)bufferOut,(uint)puVar2,bVar3,bVar4);
		*length_00 = pool->alignedStart;
		pool = PhysicalPool::GetPool();
		param_2 = (undefined4 *)PhysicalPool::Allocate(pool,(uint *)length_00);
		puVar2 = param_2;
		for (uVar1 = (uint)length >> 2;
		 uVar1 != 0;
		 uVar1 = uVar1 - 1) {
		*puVar2 = *param_1;
		param_1 = param_1 + 1;
		puVar2 = puVar2 + 1;
		}
		for (uVar1 = (uint)length & 3;
		 uVar1 != 0;
		 uVar1 = uVar1 - 1) {
		*(undefined *)puVar2 = *(undefined *)param_1;
		param_1 = (undefined4 *)((int)param_1 + 1);
		puVar2 = (undefined4 *)((int)puVar2 + 1);
		}
		stream = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream != (MemoryStream *)0x0) {
		stream = MemoryStream::Construct(stream,param_2,(size_t)length,0,0x40);
		this->field1_0x4 = (int)stream;
		return this;
		}
		this->field1_0x4 = 0;
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownF::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionReaderUnknownF::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownF::EmptyFunction_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionReaderUnknownF::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

