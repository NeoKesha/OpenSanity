#include "headers/Known/GameData/OGI/OGI.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/GameData/OGI/OGIType1.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/OGI/OGIType2.h"
void OGI::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	sizeof(OGI);
	/*
	OGI * __fastcall OGI::Construct(OGI *this){
		*(undefined2 *)&this->field0_0x0 = 0;
		this->field0_0x0 = this->field0_0x0 & 0xfffcffff;
		this->index = -1;
		this->field13_0x50 = 0;
		this->field14_0x54 = 0;
		this->field15_0x58 = 0;
		this->rigidModelRelatedList = (byte *)0x0;
		this->matrixArray = (Matrix4 *)0x0;
		this->rigidBodyIds = (uint *)0x0;
		this->type1List = (OGIType1 **)0x0;
		this->type2list = (OGIType2 **)0x0;
		*(undefined4 *)&this->field_0x78 = 0;
		*(undefined4 *)&this->field_0x7c = 0;
		this->rigidModelReferences = (uint *)0x0;
		*(undefined4 *)&this->field_0x84 = 0;
		*(undefined4 *)&this->field_0x88 = 0;
		*(undefined4 *)this->header = 0;
		*(undefined4 *)(this->header + 4) = 0;
		*(undefined4 *)(this->header + 8) = 0;
		*(undefined4 *)(this->header + 0xc) = 0;
		return this;
		}
		
	*/
	return;
}

void OGI::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OGI::CleanUp(OGI *this){
		int iVar1;
		int iVar2;
		uint uVar3;
		AutoClass40 *ac40;
		if (this->type1List != (OGIType1 **)0x0) {
		VirtualPool::FreeMemory(this->type1List + -4);
		}
		if (this->type2list != (OGIType2 **)0x0) {
		VirtualPool::FreeMemory(this->type2list + -4);
		}
		uVar3 = 0;
		if (this->header[5] != 0) {
		do {
		FUN_00114d00((undefined4 *)this->rigidModelReferences[uVar3]);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < this->header[5]);
		}
		if (*(undefined4 **)&this->field_0x78 != (undefined4 *)0x0) {
		FUN_00113e70(*(undefined4 **)&this->field_0x78);
		}
		if (*(undefined4 **)&this->field_0x7c != (undefined4 *)0x0) {
		FUN_00113ea0(*(undefined4 **)&this->field_0x7c);
		}
		VirtualPool::FreeMemory(this->rigidModelReferences);
		VirtualPool::FreeMemory(this->rigidModelRelatedList);
		iVar1 = *(int *)&this->field_0x84;
		if (iVar1 != 0) {
		iVar2 = *(int *)(iVar1 + -4);
		ac40 = (AutoClass40 *)(iVar2 * 0x20 + iVar1);
		if (-1 < iVar2 + -1) {
		do {
		ac40 = ac40 + -1;
		AutoClass40::Dispose(ac40);
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar1 + -4));
		}
		VirtualPool::FreeMemory(*(void **)&this->field_0x88);
		VirtualPool::FreeMemory(this->rigidBodyIds);
		VirtualPool::FreeMemory(this->matrixArray);
		TwinString::Dispose((TwinString *)&this->field13_0x50);
		return;
		}
		
	*/
	return;
}

bool OGI::FromFile(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall OGI::FromFile(OGI *this,char *fname){
		GameReaderStorage *this_00;
		SectionGraphics *pSVar1;
		SectionReaderUnknownJ *puVar2;
		FileResourceDescB *pFVar2;
		this_00 = GAME_READER_STORAGE[0];
		pSVar1 = (SectionGraphics *)VirtualPool::AllocateMemory(0x34);
		if (pSVar1 == (SectionGraphics *)0x0) {
		pSVar1 = (SectionGraphics *)0x0;
		}
		else {
		pSVar1 = SectionGraphics::Read(pSVar1,fname,(SectionAbstract *)this);
		}
		puVar2 = (SectionReaderUnknownJ *)VirtualPool::AllocateMemory(8);
		if (puVar2 == (SectionReaderUnknownJ *)0x0) {
		puVar2 = (SectionReaderUnknownJ *)0x0;
		}
		else {
		puVar2->section = pSVar1;
		(puVar2->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_J;
		}
		pFVar2 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar2 != (FileResourceDescB *)0x0) {
		pFVar2 = FileResourceDescB::Construct(pFVar2,&puVar2->parent,0,0);
		GameReaderStorage::AddFileDesc(this_00,&pFVar2->parent,0);
		return true;
		}
		GameReaderStorage::AddFileDesc(this_00,(FileResourceDescAbstract *)0x0,0);
		return true;
		}
		
	*/
	return false;
}

void OGI::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall OGI::Read(OGI *this,MemoryStream *stream){
		OGIType1List *type1List;
		OGIType1 **ppOVar1;
		OGIType2List *puVar1;
		OGIType2 *type2list;
		byte *rigidModelRelatedList;
		uint *rigidBodyIds;
		Matrix4 *matrixArray;
		void *pvVar2;
		AutoClass40 *pAVar3;
		undefined *puVar6;
		uint type1cnt;
		OGIType2 *type2element;
		AutoClass40 *pAVar9;
		uint type1Amount;
		uint type2Amount;
		uint type3Amount;
		uint hasBlendSkin;
		uint hasSkin;
		uint bStack352;
		uint rigidModelsAmount;
		BoundingBox boundingBox;
		float uStack312;
		float fStack308;
		char cStack296;
		char cStack295;
		char cStack294;
		char cStack293;
		undefined2 aiStack292;
		int aiStack280 [65];
		int local_14;
		byte type2cnt;
		 A lot of broken code   Must be restored in C++ project later local_14 = SECURITY_COOKIE;
		if (COMPRESS_OGI_HEADER == false) {
		(*stream->vtable->ReadUInt)(stream,&type1Amount);
		(*stream->vtable->ReadUInt)(stream,&type2Amount);
		(*stream->vtable->ReadUInt)(stream,(uint *)&boundingBox);
		(*stream->vtable->ReadUInt)(stream,(uint *)&boundingBox.v1.y);
		(*stream->vtable->ReadUInt)(stream,&bStack352);
		(*stream->vtable->ReadUInt)(stream,&rigidModelsAmount);
		(*stream->vtable->ReadUInt)(stream,&hasSkin);
		(*stream->vtable->ReadUInt)(stream,&hasBlendSkin);
		(*stream->vtable->ReadUInt)(stream,&type3Amount);
		this->header[0] = (byte)type1Amount;
		this->header[1] = (byte)type2Amount;
		this->header[2] = boundingBox.v1.x._0_1_;
		this->header[4] = (byte)bStack352;
		this->header[5] = (byte)rigidModelsAmount;
		this->header[3] = boundingBox.v1.y._0_1_;
		this->header[6] = (byte)hasSkin;
		this->header[7] = (byte)hasBlendSkin;
		this->header[8] = (byte)type3Amount;
		}
		else {
		(*stream->vtable->Read)(stream,(int *)this->header,0x10,1);
		}
		 Just read Bounding Box   For some reason, Ghidra fucked up stack (*stream->vtable->Read)(stream,(int *)&boundingBox.v1.z,0x10,1);
		(*stream->vtable->Read)(stream,(int *)&boundingBox.v2.z,0x10,1);
		(this->field11_0x20).v1.x = boundingBox.v1.z;
		(this->field11_0x20).v1.y = boundingBox.v1.w;
		(this->field11_0x20).v1.z = boundingBox.v2.x;
		(this->field11_0x20).v1.w = boundingBox.v2.y;
		(this->field11_0x20).v2.x = boundingBox.v2.z;
		(this->field11_0x20).v2.y = boundingBox.v2.w;
		(this->field11_0x20).v2.z = uStack312;
		(this->field11_0x20).v2.w = fStack308;
		if (COMPRESS_OGI_HEADER == false) {
		(*stream->vtable->Read)(stream,(int *)&this->unkVec,0x10,1);
		}
		type1cnt = *(uint *)this->header & 0xff;
		if (type1cnt == 0) {
		this->type1List = (OGIType1 **)0x0;
		}
		else {
		type1List = (OGIType1List *)VirtualPool::AllocateMemory(type1cnt * 0x60 + 0x10);
		if (type1List == (OGIType1List *)0x0) {
		ppOVar1 = (OGIType1 **)0x0;
		}
		else {
		type1List->cnt = type1cnt;
		type3Amount = (uint)&type1List->first;
		ForEach((void *)type3Amount,0x60,type1cnt,::Passthrough);
		ppOVar1 = (OGIType1 **)type3Amount;
		}
		this->type1List = ppOVar1;
		type1cnt = 0;
		if ((*(uint *)this->header & 0xff) != 0) {
		type2Amount = 0;
		do {
		OGIType1::Read((OGIType1 *)((int)this->type1List + type2Amount),stream);
		type2Amount = type2Amount + 0x60;
		type1cnt = type1cnt + 1;
		}
		 while (type1cnt < (*(uint *)this->header & 0xff));
		}
		}
		type2cnt = this->header[1];
		if (type2cnt == 0) {
		this->type2list = (OGIType2 **)0x0;
		}
		else {
		puVar1 = (OGIType2List *)VirtualPool::AllocateMemory((uint)type2cnt * 0x50 + 0x10);
		if (puVar1 == (OGIType2List *)0x0) {
		type2list = (OGIType2 *)0x0;
		}
		else {
		puVar1->cnt = (uint)type2cnt;
		type2list = &puVar1->first;
		}
		this->type2list = (OGIType2 **)type2list;
		type2Amount = 0;
		if (this->header[1] != 0) {
		type1Amount = 0;
		do {
		type2element = (OGIType2 *)((int)this->type2list + type1Amount);
		(*stream->vtable->ReadUInt)(stream,&type3Amount);
		(*stream->vtable->ReadUInt)(stream,&hasBlendSkin);
		(*stream->vtable->Read)(stream,(int *)type2element,0x40,1);
		type2element->unkField1 = (byte)type3Amount;
		type1Amount = type1Amount + 0x50;
		type2element->unkField2 = (byte)hasBlendSkin;
		type2Amount = type2Amount + 1;
		}
		 while (type2Amount < this->header[1]);
		}
		}
		if (this->header[5] == 0) {
		this->rigidModelRelatedList = (byte *)0x0;
		this->rigidBodyIds = (uint *)0x0;
		this->rigidModelReferences = (uint *)0x0;
		}
		else {
		rigidModelRelatedList = (byte *)VirtualPool::AllocateMemory((uint)this->header[5]);
		type2cnt = this->header[5];
		this->rigidModelRelatedList = rigidModelRelatedList;
		rigidBodyIds = (uint *)VirtualPool::AllocateMemory((uint)type2cnt << 2);
		type2cnt = this->header[5];
		this->rigidBodyIds = rigidBodyIds;
		rigidBodyIds = (uint *)VirtualPool::AllocateMemory((uint)type2cnt << 2);
		type2cnt = this->header[5];
		this->rigidModelReferences = rigidBodyIds;
		(*stream->vtable->Read)(stream,(int *)this->rigidModelRelatedList,(uint)type2cnt,1);
		type2Amount = 0;
		if (this->header[5] != 0) {
		do {
		if (COMPRESS_OGI_HEADER == false) {
		(*stream->vtable->ReadUInt)(stream,&type3Amount);
		(*stream->vtable->Read)(stream,aiStack280,type3Amount,1);
		}
		type1cnt = type2Amount;
		(*stream->vtable->ReadUInt)(stream,this->rigidBodyIds + type2Amount);
		puVar6 = (*(ENV_CLASS_181_SECTION_RMODELS.parent)->Create)(&ENV_CLASS_181_SECTION_RMODELS.parent,(undefined *)(this->rigidBodyIds + type1cnt),0);
		this->rigidModelReferences[type1cnt] = (uint)puVar6;
		type2Amount = type2Amount + 1;
		}
		 while (type2Amount < this->header[5]);
		}
		}
		matrixArray = (Matrix4 *)VirtualPool::AllocateMemory((*(uint *)this->header & 0xff) << 6);
		this->matrixArray = matrixArray;
		type1cnt = 0;
		if ((*(uint *)this->header & 0xff) != 0) {
		type1Amount = 0;
		do {
		(*stream->vtable->Read)(stream,(int *)((int)&this->matrixArray->m11 + type1Amount),0x40,1);
		type1Amount = type1Amount + 0x40;
		type1cnt = type1cnt + 1;
		}
		 while (type1cnt < (*(uint *)this->header & 0xff));
		}
		(*stream->vtable->ReadUInt)(stream,&this->field19_0x68);
		if (this->header[6] == 0) {
		*(undefined4 *)&this->field_0x78 = 0;
		}
		else {
		puVar6 = (*(ENV_CLASS_179_SECTION_SKINS.parent)->Create)(&ENV_CLASS_179_SECTION_SKINS.parent,(undefined *)&this->field19_0x68,0);
		*(undefined **)&this->field_0x78 = puVar6;
		}
		(*stream->vtable->ReadUInt)(stream,&this->field20_0x6c);
		if (this->header[7] == 0) {
		*(undefined4 *)&this->field_0x7c = 0;
		}
		else {
		puVar6 = (*(ENV_CLASS_180_SECTION_BSKINS.parent)->Create)(&ENV_CLASS_180_SECTION_BSKINS.parent,(undefined *)&this->field20_0x6c,0);
		*(undefined **)&this->field_0x7c = puVar6;
		}
		type1cnt = *(uint *)(this->header + 8) & 0xff;
		if (type1cnt == 0) {
		this->header[8] = 1;
		type1cnt = *(uint *)(this->header + 8) & 0xff;
		rigidBodyIds = (uint *)VirtualPool::AllocateMemory(type1cnt * 0x20 + 4);
		if (rigidBodyIds == (uint *)0x0) {
		pAVar3 = (AutoClass40 *)0x0;
		}
		else {
		*rigidBodyIds = type1cnt;
		pAVar9 = (AutoClass40 *)(rigidBodyIds + 1);
		pAVar3 = pAVar9;
		type3Amount = (uint)pAVar9;
		if (-1 < (int)(type1cnt - 1)) {
		do {
		AutoClass40::Construct(pAVar9);
		pAVar9 = pAVar9 + 1;
		type1cnt = type1cnt - 1;
		pAVar3 = (AutoClass40 *)type3Amount;
		}
		 while (type1cnt != 0);
		}
		}
		type1cnt = *(uint *)(this->header + 8);
		*(AutoClass40 **)&this->field_0x84 = pAVar3;
		puVar6 = (undefined *)VirtualPool::AllocateMemory(type1cnt & 0xff);
		*(undefined **)&this->field_0x88 = puVar6;
		*puVar6 = 0xff;
		AutoClass40::Set(*(AutoClass40 **)&this->field_0x84,(Vector4 *)&boundingBox.v1.z,(Vector4 *)&boundingBox.v2.z);
		}
		else {
		rigidBodyIds = (uint *)VirtualPool::AllocateMemory(type1cnt * 0x20 + 4);
		if (rigidBodyIds == (uint *)0x0) {
		rigidBodyIds = (uint *)0x0;
		}
		else {
		*rigidBodyIds = type1cnt;
		type1Amount = (uint)(rigidBodyIds + 1);
		rigidBodyIds = (uint *)type1Amount;
		type3Amount = type1Amount;
		if (-1 < (int)(type1cnt - 1)) {
		do {
		AutoClass40::Construct((AutoClass40 *)type1Amount);
		type1Amount = type1Amount + 0x20;
		type1cnt = type1cnt - 1;
		rigidBodyIds = (uint *)type3Amount;
		}
		 while (type1cnt != 0);
		}
		}
		type1cnt = *(uint *)(this->header + 8);
		*(uint **)&this->field_0x84 = rigidBodyIds;
		pvVar2 = VirtualPool::AllocateMemory(type1cnt & 0xff);
		*(void **)&this->field_0x88 = pvVar2;
		type1cnt = 0;
		if ((*(uint *)(this->header + 8) & 0xff) != 0) {
		type1Amount = 0;
		do {
		AutoClass40::FUN_0014b370((AutoClass40 *)(*(int *)&this->field_0x84 + type1Amount),stream);
		type1Amount = type1Amount + 0x20;
		type1cnt = type1cnt + 1;
		}
		 while (type1cnt < (*(uint *)(this->header + 8) & 0xff));
		}
		(*stream->vtable->Read)(stream,*(int **)&this->field_0x88,*(uint *)(this->header + 8) & 0xff,1);
		if ((COMPRESS_OGI_HEADER == false) && (type1cnt = 0, (*(uint *)(this->header + 8) & 0xff) != 0)){
		type1Amount = 0;
		do {
		(*stream->vtable->Read)(stream,(int *)&cStack296,0x10,1);
		if ((((cStack296 == 'S') && (cStack295 == 'u')) && (cStack294 == 'r')) && (cStack293 == 'f')) {
		*(undefined2 *)(type1Amount + 0x16 + *(int *)&this->field_0x84) = aiStack292;
		}
		type1Amount = type1Amount + 0x20;
		type1cnt = type1cnt + 1;
		}
		 while (type1cnt < (*(uint *)(this->header + 8) & 0xff));
		@__security_check_cookie@4(local_14);
		return;
		}
		}
		@__security_check_cookie@4(local_14);
		return;
		}
		
	*/
	return;
}

void OGI::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OGI::Write(OGI *this,MemoryStream *stream){
		byte *data;
		byte bVar1;
		byte bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		MemoryStream *this_00;
		uint uVar7;
		byte *data_00;
		uint uVar8;
		int iVar9;
		uint local_30;
		byte bStack20;
		undefined uStack19;
		undefined uStack18;
		undefined uStack17;
		undefined2 uStack16;
		int local_4;
		this_00 = stream;
		local_4 = SECURITY_COOKIE;
		data = this->header;
		if (COMPRESS_OGI_HEADER == false) {
		bVar6 = this->header[3];
		bVar1 = this->header[1];
		bVar2 = this->header[2];
		uVar7 = *(uint *)(this->header + 4);
		bVar3 = this->header[7];
		uVar8 = *(uint *)(this->header + 8);
		bVar4 = this->header[5];
		bVar5 = this->header[6];
		(*stream->vtable->WriteInt3)(stream,*(uint *)data & 0xff);
		(*stream->vtable->WriteInt3)(stream,(uint)bVar1);
		(*stream->vtable->WriteInt3)(stream,(uint)bVar2);
		(*stream->vtable->WriteInt3)(stream,(uint)bVar6);
		(*stream->vtable->WriteInt3)(stream,uVar7 & 0xff);
		(*stream->vtable->WriteInt3)(stream,(uint)bVar4);
		(*stream->vtable->WriteInt3)(stream,(uint)bVar5);
		(*stream->vtable->WriteInt3)(stream,(uint)bVar3);
		(*stream->vtable->WriteInt3)(stream,uVar8 & 0xff);
		}
		else {
		(*stream->vtable->Write)(stream,data,0x10);
		}
		(*stream->vtable->Write)(stream,(byte *)&this->field11_0x20,0x10);
		(*stream->vtable->Write)(stream,(byte *)&(this->field11_0x20).v2,0x10);
		if (COMPRESS_OGI_HEADER == false) {
		(*stream->vtable->Write)(stream,(byte *)&this->unkVec,0x10);
		}
		uVar7 = 0;
		if ((*(uint *)data & 0xff) != 0) {
		stream = (MemoryStream *)0x0;
		do {
		FUN_001faa40((int)this->type1List + (int)stream,(int *)this_00);
		stream = (MemoryStream *)&stream[4].length;
		uVar7 = uVar7 + 1;
		}
		 while (uVar7 < (*(uint *)data & 0xff));
		}
		local_30 = 0;
		if (this->header[1] != 0) {
		stream = (MemoryStream *)0x0;
		do {
		bVar6 = *(byte *)((int)this->type2list + (int)((int)&stream[3].flags + 1));
		data_00 = (byte *)((int)this->type2list + (int)stream);
		(*this_00->vtable->WriteInt3)(this_00,*(uint *)(data_00 + 0x40) & 0xff);
		(*this_00->vtable->WriteInt3)(this_00,(uint)bVar6);
		(*this_00->vtable->Write)(this_00,data_00,0x40);
		local_30 = local_30 + 1;
		stream = stream + 4;
		}
		 while (local_30 < this->header[1]);
		}
		if (this->header[5] != 0) {
		(*this_00->vtable->Write)(this_00,this->rigidModelRelatedList,(uint)this->header[5]);
		uVar7 = 0;
		if (this->header[5] != 0) {
		do {
		(*this_00->vtable->WriteInt3)(this_00,this->rigidBodyIds[uVar7]);
		uVar7 = uVar7 + 1;
		}
		 while (uVar7 < this->header[5]);
		}
		}
		if ((*(uint *)data & 0xff) != 0) {
		stream = (MemoryStream *)0x0;
		uVar7 = 0;
		do {
		(*this_00->vtable->Write)(this_00,(byte *)((int)&stream->vtable + (int)&this->matrixArray->m11),0x40);
		stream = (MemoryStream *)&stream[3].flags;
		uVar7 = uVar7 + 1;
		}
		 while (uVar7 < (*(uint *)data & 0xff));
		}
		(*this_00->vtable->WriteInt3)(this_00,this->field19_0x68);
		(*this_00->vtable->WriteInt3)(this_00,this->field20_0x6c);
		uVar7 = *(uint *)(this->header + 8) & 0xff;
		if (uVar7 != 0) {
		uVar8 = 0;
		if (uVar7 != 0) {
		iVar9 = 0;
		do {
		FUN_0014b3e0(*(int *)&this->field_0x84 + iVar9,(int *)this_00);
		uVar8 = uVar8 + 1;
		iVar9 = iVar9 + 0x20;
		}
		 while (uVar8 < (*(uint *)(this->header + 8) & 0xff));
		}
		(*this_00->vtable->Write)(this_00,*(byte **)&this->field_0x88,*(uint *)(this->header + 8) & 0xff);
		if (COMPRESS_OGI_HEADER == false) {
		uVar7 = 0;
		bStack20 = 0x53;
		uStack19 = 0x75;
		uStack18 = 0x72;
		uStack17 = 0x66;
		if ((*(uint *)(this->header + 8) & 0xff) != 0) {
		iVar9 = 0;
		do {
		uStack16 = *(undefined2 *)(*(int *)&this->field_0x84 + 0x16 + iVar9);
		(*this_00->vtable->Write)(this_00,&bStack20,0x10);
		uVar7 = uVar7 + 1;
		iVar9 = iVar9 + 0x20;
		}
		 while (uVar7 < (*(uint *)(this->header + 8) & 0xff));
		}
		}
		}
		@__security_check_cookie@4(local_4);
		return;
		}
		
	*/
	return;
}

void OGI::Construct_5(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OGI * __thiscall OGI::Construct(OGI *this,MemoryStream *stream){
		*(undefined2 *)&this->field0_0x0 = 0;
		this->field0_0x0 = this->field0_0x0 & 0xfffcffff;
		this->index = -1;
		this->field13_0x50 = 0;
		this->field14_0x54 = 0;
		this->field15_0x58 = 0;
		Read(this,stream);
		return this;
		}
		
	*/
	return;
}

void OGI::Construct_6(char* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OGI * __thiscall OGI::Construct(OGI *this,char *param_1){
		*(undefined2 *)&this->field0_0x0 = 0;
		this->field0_0x0 = this->field0_0x0 & 0xfffcffff;
		this->index = -1;
		this->field13_0x50 = 0;
		this->field14_0x54 = 0;
		this->field15_0x58 = 0;
		this->rigidModelRelatedList = (byte *)0x0;
		this->matrixArray = (Matrix4 *)0x0;
		this->rigidBodyIds = (uint *)0x0;
		this->type1List = (OGIType1 **)0x0;
		this->type2list = (OGIType2 **)0x0;
		*(undefined4 *)&this->field_0x78 = 0;
		*(undefined4 *)&this->field_0x7c = 0;
		this->rigidModelReferences = (uint *)0x0;
		*(undefined4 *)&this->field_0x84 = 0;
		*(undefined4 *)&this->field_0x88 = 0;
		*(undefined4 *)this->header = 0;
		*(undefined4 *)(this->header + 4) = 0;
		*(undefined4 *)(this->header + 8) = 0;
		*(undefined4 *)(this->header + 0xc) = 0;
		FromFile(this,param_1);
		return this;
		}
		
	*/
	return;
}

