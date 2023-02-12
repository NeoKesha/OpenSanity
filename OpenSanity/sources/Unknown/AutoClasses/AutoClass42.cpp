#include "headers/Unknown/AutoClasses/AutoClass42.h"

void AutoClass42::LoadMwb(char* fname, int errno) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall AutoClass42::LoadMwb(AutoClass42 *this,char *fname,int errno){
		uint *puVar1;
		TwinString *fnameStr;
		int fileHandle;
		int *xwbHeader;
		int *piVar2;
		void *pvVar3;
		uint uVar4;
		uint size;
		TwinString fullPathString;
		TwinString tmpStr2;
		TwinString tmpStr3;
		int *xwbHeader2;
		char *extension;
		TwinString *filePathFull;
		if (XBoxMusicHeader == (byte *)0x0) {
		ReadMusicHeader(fname);
		}
		this->field_0x24 = (undefined)errno;
		TwinString::Set(&fullPathString,"d:\\");
		extension = ".xwb";
		filePathFull = &tmpStr2;
		fnameStr = TwinString::Set(&tmpStr3,fname);
		filePathFull = TwinString::Concatenate(fnameStr,filePathFull,extension);
		if (filePathFull->strLength != 0) {
		TwinString::Append(&fullPathString,filePathFull->value);
		}
		TwinString::Dispose(&tmpStr2);
		TwinString::Dispose(&tmpStr3);
		fileHandle = _CreateFileA@28(fullPathString.value,0x80000000,1,0,3,0x60000000);
		this->fileHandle = fileHandle;
		xwbHeader = (int *)VirtualPool::AllocateMemory(0x800);
		this->xwbHeader = xwbHeader;
		if (xwbHeader == (int *)0x0) {
		errno = -0x7ff8fff2;
		}
		else {
		errno = LoadHeader(this->fileHandle,xwbHeader,0x800,0,(int *)0x0);
		if (-1 < errno) {
		xwbHeader2 = this->xwbHeader;
		puVar1 = (uint *)(xwbHeader2[2] + (int)xwbHeader2);
		this->field4_0x10 = puVar1;
		if ((((*xwbHeader2 == 0x444e4257) && (xwbHeader2[1] == 3)) && (puVar1[1] != 0)) &&(((*puVar1 & 1) != 0 && ((*puVar1 & 0x20000) == 0)))) {
		size = puVar1[8];
		size = ((xwbHeader2[7] + xwbHeader2[6] + -1 + size) / size) * size;
		if (0x800 < size) {
		VirtualPool::FreeMemory(xwbHeader2);
		piVar2 = (int *)VirtualPool::AllocateMemory(size);
		this->xwbHeader = piVar2;
		if (piVar2 == (int *)0x0) {
		errno = -0x7ff8fff2;
		}
		else {
		errno = LoadHeader(this->fileHandle,piVar2,size,0,(int *)0x0);
		this->field4_0x10 = (uint *)(this->xwbHeader[2] + (int)this->xwbHeader);
		}
		}
		piVar2 = this->xwbHeader;
		this->field6_0x18 = (char *)(piVar2[6] + (int)piVar2);
		this->field5_0x14 = piVar2[4] + (int)piVar2;
		}
		else {
		errno = -0x7fffbffb;
		}
		}
		}
		size = this->field4_0x10[1];
		this->subStruct = size;
		pvVar3 = _XPhysicalAlloc@16(size * 4,-1,0,4);
		this->field8_0x20 = pvVar3;
		this->field0_0x0 = 0;
		if ((-1 < errno) && (size = 0, this->subStruct != 0)) {
		do {
		fileHandle = (size % this->field4_0x10[1]) * this->field4_0x10[6];
		uVar4 = *(uint *)(fileHandle + 4 + this->field5_0x14);
		fileHandle = fileHandle + this->field5_0x14;
		if ((uVar4 & 3) == 0) {
		CreatePcmFormat((ushort)(uVar4 >> 2) & 7,uVar4 >> 5 & 0x3ffffff,(-(ushort)((uVar4 & 0x80000000) != 0) & 8) + 8,(undefined2 *)&tmpStr3);
		}
		else {
		CreateXboxAdpcmFormat((ushort)(uVar4 >> 2) & 7,uVar4 >> 5 & 0x3ffffff,(undefined2 *)&tmpStr3);
		}
		uVar4 = 0x800;
		if (tmpStr3.value._2_2_ == 6) {
		uVar4 = 0x1800;
		}
		else if ((short)tmpStr3.value == 0x69) {
		uVar4 = 0x4800;
		}
		uVar4 = ((((tmpStr3.strSize * 500) / 1000 - 1) + uVar4) / uVar4) * uVar4;
		if (this->field0_0x0 <= uVar4 && uVar4 - this->field0_0x0 != 0) {
		this->field0_0x0 = uVar4;
		}
		pvVar3 = _XPhysicalAlloc@16(uVar4,-1,0,0x204);
		*(void **)((int)this->field8_0x20 + size * 4) = pvVar3;
		if (*(int *)((int)this->field8_0x20 + size * 4) == 0) {
		errno = -0x7ff8fff2;
		LAB_00205ccf:fileHandle = *(int *)((int)this->field8_0x20 + size * 4);
		if (fileHandle != 0) {
		MmFreeContiguousMemory(fileHandle);
		*(undefined4 *)((int)this->field8_0x20 + size * 4) = 0;
		}
		}
		else {
		if (errno < 0) goto LAB_00205ccf;
		if (*(int *)(fileHandle + 0x14) == 0) {
		*(undefined4 *)(fileHandle + 0x14) = *(undefined4 *)(fileHandle + 0xc);
		}
		errno = LoadHeader(this->fileHandle,*(int **)((int)this->field8_0x20 + size * 4),uVar4,((uint)(*(int *)(fileHandle + 0x10) + *(int *)(fileHandle + 8) +this->xwbHeader[8]) / this->field4_0x10[8]) * this->field4_0x10[8],(int *)0x0);
		if (errno < 0) goto LAB_00205ccf;
		}
		size = size + 1;
		}
		 while (size < this->subStruct);
		}
		fileHandle = FUN_002044a0((int)this,*(int *)XBoxMusicHeader + -1);
		this->field13_0x28 = fileHandle;
		TwinString::Dispose(&fullPathString);
		return;
		}
		
	*/
	return;
}

