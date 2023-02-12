#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownR.h"

#include "headers/Known/LevelStructure/Sections/RM/SectionSM.h"
void SectionReaderUnknownR::Construct(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownR * __thiscall SectionReaderUnknownR::Construct(SectionReaderUnknownR *this,int param_1,SectionSM *param_2){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_R;
		this->index = param_1;
		this->field2_0x8 = -1;
		this->field3_0xc = 0;
		this->section = param_2;
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownR::Construct_1(uint param_1, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownR * __thiscall SectionReaderUnknownR::Construct(SectionReaderUnknownR *this,int param_1,int param_2,int param_3,SectionSM *param_4){
		this->index = param_1;
		this->field2_0x8 = param_3;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_R;
		this->field3_0xc = param_2;
		this->section = param_4;
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownR::Read(void* param_1, size_t param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps  WARNING: Exceeded maximum restarts with more pending void __thiscall SectionReaderUnknownR::Read(SectionReaderUnknownR *this,void *param_1,size_t param_2,int *param_3){
		int *piVar1;
		LevelHolderSM *pLVar2;
		WorldChunk *this_00;
		uint *puVar3;
		uint uVar4;
		uint uVar5;
		TwinString *pTVar6;
		uint *puVar7;
		int this_01;
		undefined *puVar8;
		SectionReaderUnknownR *pSVar9;
		FileResourceDescB *pFVar10;
		int iVar11;
		undefined4 *this_02;
		int unaff_EBX;
		int unaff_ESI;
		ChunkData *pCVar12;
		int *piVar13;
		MemoryStream stream;
		UnkFamily27Wrapper wrapper;
		uint local_340;
		uint local_33c;
		uint local_338;
		SectionReaderUnknownR *local_334;
		int local_330;
		uint uStack812;
		uint local_328;
		uint local_324;
		int *local_320;
		TwinString local_31c;
		UnkFamily27A *pUStack784;
		int iStack780;
		uint uStack776;
		undefined4 uStack768;
		undefined4 uStack764;
		undefined4 uStack760;
		undefined4 uStack756;
		undefined4 uStack752;
		undefined4 uStack748;
		undefined4 uStack744;
		undefined4 uStack740;
		undefined auStack736 [4];
		TwinString local_2dc;
		int aiStack720 [16];
		int aiStack656 [18];
		UnkFamily27A uf27a;
		int aiStack52 [8];
		int local_14;
		local_14 = SECURITY_COOKIE;
		pLVar2 = this->section->levelHolder;
		if (pLVar2->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		pCVar12 = (ChunkData *)0x0;
		}
		else {
		pCVar12 = pLVar2->chunkDataRef->chunk;
		}
		this_00 = (pLVar2->parent).worldChunk;
		local_334 = this;
		switch(this->index) {
		case 0:UnkFamily27A::Construct(&uf27a);
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		wrapper.ptr = &uf27a;
		wrapper.field2_0x8 = wrapper.field2_0x8 & 0xff0000ff;
		UnkFamily27Wrapper::FUN_0020e930(&wrapper,(int)&stream,(int *)0x0);
		FUN_001401b0((int)pCVar12,(int **)&wrapper);
		break;
		case 1:if (pLVar2->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		pCVar12 = (ChunkData *)0x0;
		}
		else {
		pCVar12 = pLVar2->chunkDataRef->chunk;
		}
		TwinString::Set(&local_31c,".SkyLite");
		if (local_31c.strLength == 0) {
		iVar11 = 0;
		}
		else {
		iVar11 = TwinString::FindSubstringEndPos(&pCVar12->str1,0,local_31c.value);
		}
		TwinString::Dispose(&local_31c);
		if (iVar11 == -1) {
		pCVar12->sceneryFlags = pCVar12->sceneryFlags & 0xfffeffff;
		pCVar12->skydomeID = 0;
		pCVar12->skydome = (void *)0x0;
		@__security_check_cookie@4(local_14);
		return;
		}
		puVar3 = (uint *)pCVar12->skydomeID;
		wrapper.ptr = (UnkFamily27A *)0x0;
		wrapper.field1_0x4 = 0;
		wrapper.field2_0x8 = 0;
		TwinString::ReplaceByStrBeforeC(&local_334->section->chunkName,(TwinString *)&wrapper,'\\');
		pTVar6 = TwinString::Concatenate((TwinString *)&wrapper,&local_2dc,"\\SkyDomes");
		TwinString::Copy((TwinString *)&DAT_00402b98,pTVar6->value);
		TwinString::Dispose(&local_2dc);
		puVar7 = FUN_00156780((int)&ENV_CLASS_203_SECTION_SKYDOMES,&(pCVar12->str1).value,puVar3);
		FUN_00156060((int)pCVar12,puVar3,(int)puVar7);
		TwinString::Dispose((TwinString *)&wrapper);
		@__security_check_cookie@4(local_14);
		return;
		case 2:piVar13 = (int *)pCVar12->sceneryRoot;
		local_320 = piVar13;
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		piVar1 = &this->field2_0x8;
		stream.currentPtr = stream.startPtr + this->field3_0xc;
		if (this->field2_0x8 == -1) {
		local_338 = 0;
		(*(stream.vtable)->ReadUInt)(&stream,&local_338);
		(*(stream.vtable)->ReadInt2)(piVar1);
		}
		local_340 = 0;
		local_33c = 0;
		local_328 = 0;
		local_324 = 0;
		local_330 = 0;
		if (0 < *piVar1) {
		do {
		if (local_330 != 0) break;
		MemoryStream::Read(&stream,aiStack52,0x20,1);
		(*(stream.vtable)->ReadShort2)(&stream,(short *)&local_340);
		(*(stream.vtable)->ReadShort2)(&local_33c);
		(**(code **)(unaff_EBX + 0x58))(&uStack812);
		(**(code **)(unaff_ESI + 0x58))(&uStack812);
		this_01 = (**(code **)(*piVar13 + 0x7c))(&uf27a.cnt3,1);
		FUN_0013c730(this_01,local_340 & 0xffff,local_33c & 0xffff);
		iVar11 = 0;
		uVar5 = (local_324 & 0xffff) + (local_328 & 0xffff) + (local_33c & 0xffff) +(local_340 & 0xffff);
		uVar4 = local_338;
		this = local_334;
		piVar13 = local_320;
		while (local_338 = uVar5, local_334 = this, local_320 = piVar13, local_338 != 0) {
		(*(stream.vtable)->ReadUInt)(&stream,&uStack812);
		puVar8 = auStack736;
		(*(stream.vtable)->ReadFloat)();
		(**(code **)(unaff_EBX + 4))(&stream.length,0x10,1);
		(**(code **)(puVar8 + 4))(&uStack768,0x10,1);
		pUStack784 = wrapper.ptr;
		iStack780 = wrapper.field1_0x4;
		uStack776 = wrapper.field2_0x8;
		uStack768 = uStack752;
		uStack764 = uStack748;
		uStack760 = uStack744;
		uStack756 = uStack740;
		if ((short)local_340 == 0) {
		if ((short)local_33c != 0) {
		(*(stream.vtable)->Read)(&stream,aiStack656,0x40,1);
		puVar8 = (*(ENV_CLASS_177_SECTION_LODS.parent)->Create)(&ENV_CLASS_177_SECTION_LODS.parent,(undefined *)&uStack812,0);
		UNV015::Set(*(UNV015 **)(this_01 + 0x3c),puVar8,iVar11);
		UNV015::FUN_00136df0(*(UNV015 **)(this_01 + 0x3c),&pUStack784,iVar11,0);
		FUN_00138720(*(int *)(this_01 + 0x3c),aiStack656,iVar11);
		FUN_00138670(*(int *)(this_01 + 0x3c),iVar11);
		iVar11 = iVar11 + 1;
		local_33c = local_33c + 0xffff;
		}
		}
		else {
		(*(stream.vtable)->Read)(&stream,aiStack720,0x40,1);
		puVar8 = (*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Create)(&ENV_CLASS_178_SECTION_RMODELS2.parent,(undefined *)&uStack812,0);
		FUN_00136db0(*(int *)(this_01 + 0x3c),puVar8,iVar11);
		UNV015::FUN_00136df0(*(UNV015 **)(this_01 + 0x3c),&pUStack784,iVar11,0);
		FUN_00138720(*(int *)(this_01 + 0x3c),aiStack720,iVar11);
		FUN_00138670(*(int *)(this_01 + 0x3c),iVar11);
		iVar11 = iVar11 + 1;
		local_340 = local_340 + 0xffff;
		}
		uVar4 = local_338 - 1;
		this = local_334;
		piVar13 = local_320;
		uVar5 = uVar4;
		}
		iVar11 = *piVar1;
		local_330 = local_330 + 1;
		*piVar1 = iVar11 + -1;
		local_338 = uVar4;
		}
		 while (0 < iVar11 + -1);
		if (0 < *piVar1) {
		iVar11 = (int)stream.currentPtr - (int)stream.startPtr;
		pSVar9 = (SectionReaderUnknownR *)VirtualPool::AllocateMemory(0x14);
		if (pSVar9 == (SectionReaderUnknownR *)0x0) {
		pSVar9 = (SectionReaderUnknownR *)0x0;
		}
		else {
		pSVar9 = Construct(pSVar9,this->index,iVar11,*piVar1,this->section);
		}
		pFVar10 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar10 == (FileResourceDescB *)0x0) {
		pFVar10 = (FileResourceDescB *)0x0;
		}
		else {
		pFVar10 = FileResourceDescB::Construct(pFVar10,&pSVar9->parent,param_1,param_2);
		}
		*(FileResourceDescB **)(*param_3 + (uint)*(ushort *)((int)param_3 + 6) * 4) = pFVar10;
		*(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
		goto LAB_00154e84;
		}
		}
		VirtualPool::FreeMemory(param_1);
		LAB_00154e84:MemoryStream::Dispose(&stream);
		@__security_check_cookie@4(local_14);
		return;
		case 3:UnkFamily27Abstract::Construct(&uf27a.parent);
		uf27a.parent.vtable = (UnkFamily27Abstract_VTable *)&UnkFamily27_VT_B;
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		wrapper.ptr = &uf27a;
		wrapper.field2_0x8 = wrapper.field2_0x8 & 0xff0000ff;
		UnkFamily27Wrapper::FUN_0020e930(&wrapper,(int)&stream,(int *)0x0);
		iVar11 = ChunkData::CreateLightController(pCVar12);
		FUN_0010df80(iVar11,(int **)&wrapper);
		FUN_0020d1c0((int **)&wrapper);
		MemoryStream::Dispose(&stream);
		uf27a.parent.vtable = (UnkFamily27Abstract_VTable *)&UnkFamily27_VT_B;
		UnkFamily27B::CleanUp((UnkFamily27B *)&uf27a);
		UnkFamily27Abstract::Dispose(&uf27a.parent);
		@__security_check_cookie@4(local_14);
		return;
		case 4:MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		this_02 = FUN_00138150((int)pCVar12);
		FUN_00151b30(this_02,(int *)&stream);
		MemoryStream::Dispose(&stream);
		@__security_check_cookie@4(local_14);
		return;
		case 5:UnkFamily27A::Construct(&uf27a);
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		wrapper.ptr = &uf27a;
		wrapper.field2_0x8 = wrapper.field2_0x8 & 0xff0000ff;
		UnkFamily27Wrapper::FUN_0020e930(&wrapper,(int)&stream,(int *)0x0);
		WorldChunk::FUN_00207550(this_00,&wrapper);
		break;
		default:goto switchD_00154c93_caseD_6;
		}
		FUN_0020d1c0((int **)&wrapper);
		MemoryStream::Dispose(&stream);
		UnkFamily27A::Dispose(&uf27a);
		switchD_00154c93_caseD_6:@__security_check_cookie@4(local_14);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownR::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownR * __thiscall SectionReaderUnknownR::Dispose(SectionReaderUnknownR *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

