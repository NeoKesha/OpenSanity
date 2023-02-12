#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceCollisionSurface.h"

#include "headers/Known/Collections/CollectionCollisionSurfaceWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
void SectionReaderInstanceCollisionSurface::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceCollisionSurface * __thiscall SectionReaderInstanceCollisionSurface::Dispose(SectionReaderInstanceCollisionSurface *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderInstanceCollisionSurface::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstanceCollisionSurface::Read(SectionReaderInstanceCollisionSurface *this,void *buffer,size_t size,size_t offset){
		CollisionSurface *pCVar1;
		CollisionSurface *element;
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		pCVar1 = (CollisionSurface *)VirtualPool::AllocateMemory(0x90);
		if (pCVar1 == (CollisionSurface *)0x0) {
		element = (CollisionSurface *)0x0;
		}
		else {
		element = CollisionSurface::Construct(pCVar1,&stream);
		}
		FUN_001e6e60((int)&DAT_0049d820,(int)element);
		CollectionCollisionSurfaceWrapper::Add(this->collection,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

