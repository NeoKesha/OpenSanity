#include "headers/Known/LevelStructure/Readers/Known/SectionReaderScript.h"

#include "headers/Known/LevelStructure/Data/CodeSectionData/Script/SectionDataScriptBase.h"
void SectionReaderScript::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderScript * __thiscall SectionReaderScript::Dispose(SectionReaderScript *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderScript::Read(void* param_1, size_t param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderScript::Read(SectionReaderScript *this,void *param_1,size_t param_2){
		ushort uVar1;
		ScriptHeader *element;
		MemoryStream stream;
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		uVar1 = *(ushort *)&this->cnt;
		if ((uVar1 & 1) == 0) {
		element = (ScriptHeader *)VirtualPool::AllocateMemory(0x3c);
		if (element != (ScriptHeader *)0x0) {
		ScriptAbstract::Construct((ScriptAbstract *)element);
		(element->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Header;
		ScriptHeader::Read(element,&stream);
		goto LAB_001bf985;
		}
		}
		else {
		element = (ScriptHeader *)VirtualPool::AllocateMemory(0x20);
		if (element != (ScriptHeader *)0x0) {
		ScriptAbstract::Construct((ScriptAbstract *)element);
		(element->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Main;
		ScriptMain::Read((ScriptMain *)element,&stream);
		goto LAB_001bf985;
		}
		}
		element = (ScriptHeader *)0x0;
		LAB_001bf985:(element->parent).index = this->cnt;
		SectionDataScriptBase::Add(this->data,(int)this->field2_0x8,(uint)this->indexList & 0xffff0000 | (uint)uVar1,&element->parent,this->indexList);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

