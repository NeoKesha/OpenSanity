#pragma once

#include "headers/OpenSanityGlobal.h"

class PhysicalPool {
	public:
		void * alignedStart;
		size_t alignedSize;
		PhysicalPoolElement * listTail;
		void * alignedEnd;
		PhysicalPoolElement * memoryArena[2048];

		static PhysicalPool* GetPool();
		void Construct();
		void FUN_001599b0(PhysicalPoolElement* element);
		virtual void InitPool(void* baseAddress, size_t size);
		virtual void* Allocate(uint* length);
		virtual int* GetBufferPointerByIndex(int* bufferIndex);
		void FUN_0015ad70(PhysicalPoolElement* element);
		PhysicalPoolElement* FUN_0015ae10(uint len);
		virtual void CreateBuffer(int* bufferOut, uint length, bool param_3, bool param_4);
		virtual void FUN_0015b050();
		virtual void FreeBufferByIndex(void* ptr);
		bool FUN_0015c290(bool flag);
		virtual void UnkMethod2();

};
