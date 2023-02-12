#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Memory/VirtualPool/VirtualPoolExt.h"

class VirtualPool {
	public:
		unkVirtualPoolStruct * elementPrt2;
		unkVirtualPoolStruct * elementPtr3;
		void * start;
		size_t size;
		unkVirtualPoolStruct * elementPtr1;
		VirtualPoolExt virtualPoolExt;
		void * end;

		static VirtualPool* GetPool();
		static void* AllocateMemory(size_t size);
		static void FreeMemory(void* ptr);
		void Construct();
		int FUN_001596d0(void* str);
		void InitPool(void* memptr, size_t size);
		virtual void FreeMemory_6(void* param_1);
		void FUN_0015a800();
		int* FUN_0015a890(int* param_1, uint param_2);
		virtual void* AllocateMemory_9(size_t size);
		virtual void* AllocateMemoryAligned(size_t amount, int alignment);

};
