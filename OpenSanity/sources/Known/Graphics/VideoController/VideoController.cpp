#include "headers/Known/Graphics/VideoController/VideoController.h"

#include "headers/Known/Game/GameResourceManager/GameResourceManager.h"
#include "headers/Known/Graphics/VideoController/SoundControllerUnkClass.h"
VideoController::VideoController()
{
}
VideoController::VideoController(GameResourceManager* resourceManager, byte param_2)
{
	/*
VideoController * __thiscall VideoController::Construct(VideoController *this,GameResourceManager *resourceManager,undefined param_2){
	float fVar1;
	float fVar2;
	UnkStruct2 *pUVar1;
	UnkStruct3 *pUVar2;
	UnkStruct3 *puVar1;
	int index;
	fVar2 = FLOAT_0038639c;
	this->resourceManager = resourceManager;
	this->flags = this->flags & 0xffffff82 | 2;
	this->field5_0x14 = 0;
	this->field12_0x60 = 0;
	(this->hintStr).value = (char *)0x0;
	(this->hintStr).strLength = 0;
	(this->hintStr).strSize = 0;
	(this->errorStr).value = (char *)0x0;
	(this->errorStr).strLength = 0;
	(this->errorStr).strSize = 0;
	this->field126_0xf8 = 0;
	this->field119_0xe8 = 0;
	this->field120_0xec = (undefined *)0x0;
	this->field121_0xf0 = (undefined *)0x0;
	this->field_0xfc = 0;
	this->field_0xfd = 0;
	pUVar1 = this->matrixArray;
	index = 4;
	do {
	pUVar1->array[0].m12 = 0.0;
	pUVar1->array[0].m13 = 0.0;
	pUVar1->array[0].m11 = 0.0;
	pUVar1->array[0].m14 = 0.0;
	pUVar1->array[0].m21 = (float)((uint)pUVar1->array[0].m21 & 0xfffffffe);
	pUVar1->array[0].m33 = 0.0;
	pUVar1->array[0].m32 = 0.0;
	pUVar1->array[0].m31 = 0.0;
	pUVar1->array[0].m34 = fVar2;
	pUVar1->array[0].m41 = Vector4_0039ef70.x;
	pUVar1->array[0].m42 = Vector4_0039ef70.y;
	pUVar1->array[0].m43 = Vector4_0039ef70.z;
	fVar1 = pUVar1->array[1].m21;
	pUVar1->array[1].m12 = 0.0;
	pUVar1->array[1].m13 = 0.0;
	pUVar1->array[1].m11 = 0.0;
	pUVar1->array[1].m14 = 0.0;
	pUVar1->array[1].m21 = (float)((uint)fVar1 & 0xfffffffe);
	pUVar1->array[1].m33 = 0.0;
	pUVar1->array[1].m32 = 0.0;
	pUVar1->array[1].m31 = 0.0;
	pUVar1->array[1].m34 = fVar2;
	pUVar1->array[1].m41 = Vector4_0039ef70.x;
	pUVar1->array[1].m42 = Vector4_0039ef70.y;
	pUVar1->array[1].m43 = Vector4_0039ef70.z;
	fVar1 = pUVar1->array[2].m21;
	pUVar1->array[2].m12 = 0.0;
	pUVar1->array[2].m13 = 0.0;
	pUVar1->array[2].m11 = 0.0;
	pUVar1->array[2].m14 = 0.0;
	pUVar1->array[2].m21 = (float)((uint)fVar1 & 0xfffffffe);
	pUVar1->array[2].m33 = 0.0;
	pUVar1->array[2].m32 = 0.0;
	pUVar1->array[2].m31 = 0.0;
	pUVar1->array[2].m34 = fVar2;
	pUVar1->array[2].m41 = Vector4_0039ef70.x;
	pUVar1->array[2].m42 = Vector4_0039ef70.y;
	pUVar1->array[2].m43 = Vector4_0039ef70.z;
	fVar1 = pUVar1->array[3].m21;
	pUVar1->array[3].m12 = 0.0;
	pUVar1->array[3].m13 = 0.0;
	pUVar1->array[3].m11 = 0.0;
	pUVar1->array[3].m14 = 0.0;
	pUVar1->array[3].m21 = (float)((uint)fVar1 & 0xfffffffe);
	pUVar1->array[3].m33 = 0.0;
	pUVar1->array[3].m32 = 0.0;
	pUVar1->array[3].m31 = 0.0;
	pUVar1->array[3].m34 = fVar2;
	pUVar1->array[3].m41 = Vector4_0039ef70.x;
	pUVar1->array[3].m42 = Vector4_0039ef70.y;
	pUVar1->array[3].m43 = Vector4_0039ef70.z;
	fVar1 = pUVar1->array[4].m21;
	pUVar1->array[4].m12 = 0.0;
	pUVar1->array[4].m13 = 0.0;
	pUVar1->array[4].m11 = 0.0;
	pUVar1->array[4].m14 = 0.0;
	pUVar1->array[4].m21 = (float)((uint)fVar1 & 0xfffffffe);
	pUVar1->array[4].m33 = 0.0;
	pUVar1->array[4].m32 = 0.0;
	pUVar1->array[4].m31 = 0.0;
	pUVar1->array[4].m34 = fVar2;
	pUVar1->array[4].m41 = Vector4_0039ef70.x;
	pUVar1->array[4].m42 = Vector4_0039ef70.y;
	pUVar1->array[4].m43 = Vector4_0039ef70.z;
	fVar1 = pUVar1->array[5].m21;
	pUVar1->array[5].m12 = 0.0;
	pUVar1->array[5].m13 = 0.0;
	pUVar1->array[5].m11 = 0.0;
	pUVar1->array[5].m14 = 0.0;
	pUVar1->array[5].m21 = (float)((uint)fVar1 & 0xfffffffe);
	pUVar1->array[5].m33 = 0.0;
	pUVar1->array[5].m32 = 0.0;
	pUVar1->array[5].m31 = 0.0;
	pUVar1->array[5].m34 = fVar2;
	pUVar1->array[5].m41 = Vector4_0039ef70.x;
	pUVar1->array[5].m42 = Vector4_0039ef70.y;
	pUVar1->array[5].m43 = Vector4_0039ef70.z;
	fVar1 = pUVar1->array[6].m21;
	pUVar1->array[6].m12 = 0.0;
	pUVar1->array[6].m13 = 0.0;
	pUVar1->array[6].m11 = 0.0;
	pUVar1->array[6].m14 = 0.0;
	pUVar1->array[6].m21 = (float)((uint)fVar1 & 0xfffffffe);
	pUVar1->array[6].m33 = 0.0;
	pUVar1->array[6].m32 = 0.0;
	pUVar1->array[6].m31 = 0.0;
	pUVar1->array[6].m34 = fVar2;
	pUVar1->array[6].m41 = Vector4_0039ef70.x;
	pUVar1->array[6].m42 = Vector4_0039ef70.y;
	pUVar1->array[6].m43 = Vector4_0039ef70.z;
	fVar1 = pUVar1->array[7].m21;
	pUVar1->array[7].m12 = 0.0;
	pUVar1->array[7].m13 = 0.0;
	pUVar1->array[7].m11 = 0.0;
	pUVar1->array[7].m14 = 0.0;
	pUVar1->array[7].m21 = (float)((uint)fVar1 & 0xfffffffe);
	pUVar1->array[7].m33 = 0.0;
	pUVar1->array[7].m32 = 0.0;
	pUVar1->array[7].m31 = 0.0;
	pUVar1->array[7].m34 = fVar2;
	pUVar1->array[7].m41 = Vector4_0039ef70.x;
	pUVar1->array[7].m42 = Vector4_0039ef70.y;
	pUVar1->array[7].m43 = Vector4_0039ef70.z;
	pUVar1 = pUVar1 + 1;
	index = index + -1;
	}
	 while (index != 0);
	pUVar2 = this->someStructArray;
	index = 4;
	do {
	pUVar2->array[0].someNum = -1;
	pUVar2->array[0].field1_0x4 = 0;
	pUVar2->array[0].field2_0x8 = 0;
	pUVar2->array[0].field3_0xc = 0;
	pUVar2->array[0].field4_0x10 = 0;
	pUVar2->array[0].field5_0x14 = 0;
	pUVar2->array[0].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[0].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[0].field10_0x28 = (int)Vector4_0039ef70.z;
	pUVar2->array[1].someNum = -1;
	pUVar2->array[1].field1_0x4 = 0;
	pUVar2->array[1].field2_0x8 = 0;
	pUVar2->array[1].field3_0xc = 0;
	pUVar2->array[1].field4_0x10 = 0;
	pUVar2->array[1].field5_0x14 = 0;
	pUVar2->array[1].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[1].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[1].field10_0x28 = (int)Vector4_0039ef70.z;
	pUVar2->array[2].someNum = -1;
	pUVar2->array[2].field1_0x4 = 0;
	pUVar2->array[2].field2_0x8 = 0;
	pUVar2->array[2].field3_0xc = 0;
	pUVar2->array[2].field4_0x10 = 0;
	pUVar2->array[2].field5_0x14 = 0;
	pUVar2->array[2].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[2].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[2].field10_0x28 = (int)Vector4_0039ef70.z;
	pUVar2->array[3].someNum = -1;
	pUVar2->array[3].field1_0x4 = 0;
	pUVar2->array[3].field2_0x8 = 0;
	pUVar2->array[3].field3_0xc = 0;
	pUVar2->array[3].field4_0x10 = 0;
	pUVar2->array[3].field5_0x14 = 0;
	pUVar2->array[3].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[3].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[3].field10_0x28 = (int)Vector4_0039ef70.z;
	pUVar2->array[4].someNum = -1;
	pUVar2->array[4].field1_0x4 = 0;
	pUVar2->array[4].field2_0x8 = 0;
	pUVar2->array[4].field3_0xc = 0;
	pUVar2->array[4].field4_0x10 = 0;
	pUVar2->array[4].field5_0x14 = 0;
	pUVar2->array[4].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[4].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[4].field10_0x28 = (int)Vector4_0039ef70.z;
	pUVar2->array[5].someNum = -1;
	pUVar2->array[5].field1_0x4 = 0;
	pUVar2->array[5].field2_0x8 = 0;
	pUVar2->array[5].field3_0xc = 0;
	pUVar2->array[5].field4_0x10 = 0;
	pUVar2->array[5].field5_0x14 = 0;
	pUVar2->array[5].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[5].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[5].field10_0x28 = (int)Vector4_0039ef70.z;
	pUVar2->array[6].someNum = -1;
	pUVar2->array[6].field1_0x4 = 0;
	pUVar2->array[6].field2_0x8 = 0;
	pUVar2->array[6].field3_0xc = 0;
	pUVar2->array[6].field4_0x10 = 0;
	pUVar2->array[6].field5_0x14 = 0;
	pUVar2->array[6].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[6].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[6].field10_0x28 = (int)Vector4_0039ef70.z;
	pUVar2->array[7].someNum = -1;
	pUVar2->array[7].field1_0x4 = 0;
	pUVar2->array[7].field2_0x8 = 0;
	pUVar2->array[7].field3_0xc = 0;
	pUVar2->array[7].field4_0x10 = 0;
	pUVar2->array[7].field5_0x14 = 0;
	pUVar2->array[7].field8_0x20 = (int)Vector4_0039ef70.x;
	pUVar2->array[7].field9_0x24 = (int)Vector4_0039ef70.y;
	pUVar2->array[7].field10_0x28 = (int)Vector4_0039ef70.z;
	fVar2 = FLOAT_003869d8;
	pUVar2 = pUVar2 + 1;
	index = index + -1;
	}
	 while (index != 0);
	puVar1 = this->dataArray3;
	index = 4;
	do {
	puVar1->array[0].someNum = -1;
	puVar1->array[0].field1_0x4 = 0;
	puVar1->array[0].field2_0x8 = 0;
	puVar1->array[0].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[0].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[0].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[0].field8_0x20 = (int)fVar2;
	puVar1->array[1].someNum = -1;
	puVar1->array[1].field1_0x4 = 0;
	puVar1->array[1].field2_0x8 = 0;
	puVar1->array[1].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[1].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[1].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[1].field8_0x20 = (int)fVar2;
	puVar1->array[2].someNum = -1;
	puVar1->array[2].field1_0x4 = 0;
	puVar1->array[2].field2_0x8 = 0;
	puVar1->array[2].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[2].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[2].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[2].field8_0x20 = (int)fVar2;
	puVar1->array[3].someNum = -1;
	puVar1->array[3].field1_0x4 = 0;
	puVar1->array[3].field2_0x8 = 0;
	puVar1->array[3].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[3].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[3].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[3].field8_0x20 = (int)fVar2;
	puVar1->array[4].someNum = -1;
	puVar1->array[4].field1_0x4 = 0;
	puVar1->array[4].field2_0x8 = 0;
	puVar1->array[4].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[4].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[4].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[4].field8_0x20 = (int)fVar2;
	puVar1->array[5].someNum = -1;
	puVar1->array[5].field1_0x4 = 0;
	puVar1->array[5].field2_0x8 = 0;
	puVar1->array[5].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[5].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[5].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[5].field8_0x20 = (int)fVar2;
	puVar1->array[6].someNum = -1;
	puVar1->array[6].field1_0x4 = 0;
	puVar1->array[6].field2_0x8 = 0;
	puVar1->array[6].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[6].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[6].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[6].field8_0x20 = (int)fVar2;
	puVar1->array[7].someNum = -1;
	puVar1->array[7].field1_0x4 = 0;
	puVar1->array[7].field2_0x8 = 0;
	puVar1->array[7].field4_0x10 = (int)Vector4_0039ef70.x;
	puVar1->array[7].field5_0x14 = (int)Vector4_0039ef70.y;
	puVar1->array[7].field6_0x18 = (int)Vector4_0039ef70.z;
	puVar1->array[7].field8_0x20 = (int)fVar2;
	puVar1 = puVar1 + 1;
	index = index + -1;
	}
	 while (index != 0);
	this->someCnt = 0;
	this->field137_0x150c = 0.0;
	this->unkStruct = (SoundControllerUnkClass *)0x0;
	this->field139_0x1514 = 0.0;
	this->field140_0x1518 = (float)(int)(TicksPerTime * 0.0);
	this->field141_0x151c = (float)(int)(TicksPerTime * 0.0);
	this->field142_0x1520 = 0;
	this->field143_0x1522 = 0;
	this->field144_0x1524 = 0;
	this->field147_0x1528 = 0.0;
	this->state = 0;
	Matrix4::Construct1(&this->unkMatrix);
	this->flags = this->flags & 0xffffc07f;
	this->field13_0x64 = 0;
	this->field4_0x10 = 0;
	this->cnt = 0;
	this->field_0xe2 = param_2;
	return this;
	}

*/
}
uint VideoController::FUN_001f2b40(int param_1) {
	/*
	uint __thiscall VideoController::FUN_001f2b40(VideoController *this,int param_1){
		bool bVar1;
		uint uVar2;
		uVar2 = this->flags;
		if ((uVar2 & 0x2000) != 0) {
		bVar1 = FUN_0012deb0(1);
		if (bVar1 != false) {
		this->flags = this->flags & 0xfffffdff;
		this->field13_0x64 = param_1;
		this->field140_0x1518 = *(float *)(param_1 + 4);
		this->field141_0x151c = *(float *)(this->field13_0x64 + 4);
		this->field144_0x1524 = 0;
		this->field143_0x1522 = 0;
		this->field147_0x1528 = 0.0;
		this->field142_0x1520 = 0;
		FUN_00130790(1,1.0,1.0,0.0);
		uVar2 = this->flags & 0xffffdfff;
		this->flags = uVar2;
		this->state = 3;
		return CONCAT31((int3)(uVar2 >> 8),1);
		}
		uVar2 = this->field4_0x10 + 1;
		this->flags = this->flags | 0x200;
		this->field4_0x10 = uVar2;
		}
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

void VideoController::FUN_001f2bf0() {
	/*
	void __fastcall VideoController::FUN_001f2bf0(VideoController *this){
		InstanceNodeInstance *pIVar1;
		AutoClass16 *pAVar1;
		pIVar1 = (InstanceNodeInstance *)InstanceDataList::GetNode(&this->field6_0x18->nodes,Instance);
		pAVar1 = UnkFamily16A::FUN_001b1e00((UnkFamily16A *)RM,(pIVar1->body).field49_0x80[0x12]);
		UnkFamily15A::FUN_001b1fc0(pAVar1->field7_0x1c,(uint)(pIVar1->body).field49_0x80[0x13]);
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f2c40() {
	/*
	void __fastcall VideoController::FUN_001f2c40(VideoController *this){
		InstanceNodeInstance *pIVar1;
		AutoClass16 *pAVar1;
		pIVar1 = (InstanceNodeInstance *)InstanceDataList::GetNode(&this->field6_0x18->nodes,Instance);
		pAVar1 = UnkFamily16A::FUN_001b1e00((UnkFamily16A *)RM,(pIVar1->body).field49_0x80[0x12]);
		UnkFamily15A::SetResetBit(pAVar1->field7_0x1c,(uint)(pIVar1->body).field49_0x80[0x13],true);
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f2c80(uint param_1, uint param_2, uint param_3) {
	/*
	void __thiscall VideoController::FUN_001f2c80(VideoController *this,undefined *param_1,int param_2,int param_3){
		GameReaderStorage *this_00;
		SectionReaderUnknownK *reader;
		FileResourceDescG *pFVar1;
		TwinString local_c;
		local_c.value = (char *)0x0;
		local_c.strLength = 0;
		local_c.strSize = 0;
		FUN_001f29d0(param_2,param_3,&local_c);
		this_00 = GAME_READER_STORAGE[0];
		reader = (SectionReaderUnknownK *)VirtualPool::AllocateMemory(0x14);
		if (reader == (SectionReaderUnknownK *)0x0) {
		reader = (SectionReaderUnknownK *)0x0;
		}
		else {
		reader->field1_0x4 = (undefined *)this;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_K;
		reader->field2_0x8 = param_2;
		reader->field3_0xc = param_3;
		reader->field4_0x10 = param_1;
		}
		pFVar1 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar1 == (FileResourceDescG *)0x0) {
		pFVar1 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar1 = FileResourceDescG::Construct(pFVar1,local_c.value,&reader->parent,0xc);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar1->parent,0);
		TwinString::Dispose(&local_c);
		return;
		}
		
	*/
	return;
}

int VideoController::FUN_001f2dc0(short param_1) {
	/*
	int __thiscall VideoController::FUN_001f2dc0(VideoController *this,short param_1){
		ushort i;
		i = 0;
		if (this->cnt != 0) {
		do {
		if (*(short *)((int)(this->matrixArray[0].array + -2) + (uint)i * 2) == param_1) {
		return *(int *)((int)this->matrixArray[0].array + (uint)i * 4 + -0x60);
		}
		i = i + 1;
		}
		 while (i < this->cnt);
		}
		return 0;
		}
		
	*/
	return 0;
}

void VideoController::FUN_001f2f30(short param_1, uint param_2) {
	/*
	void __thiscall VideoController::FUN_001f2f30(VideoController *this,short param_1,undefined4 param_2){
		bool bVar1;
		ushort uVar2;
		uVar2 = 0;
		bVar1 = false;
		if (this->cnt != 0) {
		do {
		if (*(short *)((int)(this->matrixArray[0].array + -2) + (uint)uVar2 * 2) == param_1) {
		*(undefined4 *)((int)this->matrixArray[0].array + (uint)uVar2 * 4 + -0x60) = param_2;
		bVar1 = true;
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < this->cnt);
		if (bVar1) {
		return;
		}
		}
		if (this->cnt < 0xf) {
		*(short *)((int)(this->matrixArray[0].array + -2) + (uint)this->cnt * 2) = param_1;
		*(undefined4 *)((int)this->matrixArray[0].array + (uint)this->cnt * 4 + -0x60) = param_2;
		this->cnt = this->cnt + 1;
		}
		return;
		}
		
	*/
	return;
}

void VideoController::DisplayHint() {
	/*
	void __fastcall VideoController::DisplayHint(VideoController *this){
		float fVar1;
		FontRenderer *fontRenderer;
		fontRenderer = FontRenderer;
		fVar1 = FLOAT_00386ab4;
		FontRenderer->originX = FLOAT_00386ab4;
		fontRenderer->originY = fVar1;
		fontRenderer->color = Color_0039f228;
		FontRenderer::DrawText(fontRenderer,0.83,0.12,(this->hintStr).value);
		return;
		}
		
	*/
	return;
}

void VideoController::DisplayError() {
	/*
	void __fastcall VideoController::DisplayError(VideoController *this){
		float fVar1;
		FontRenderer *fontRenderer;
		fontRenderer = FontRenderer;
		fVar1 = FLOAT_00386ab4;
		FontRenderer->originX = FLOAT_00386ab4;
		fontRenderer->originY = fVar1;
		fontRenderer->color = Color_0039f230;
		FontRenderer::DrawText(fontRenderer,0.85,0.12,(this->errorStr).value);
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f3800() {
	/*
	void __fastcall VideoController::FUN_001f3800(VideoController *this){
		ushort uVar1;
		float fVar2;
		int iVar3;
		InstanceContext *ctx;
		undefined4 *puVar4;
		byte bVar5;
		int this_00;
		uint uVar6;
		Matrix4 *this_01;
		iVar3 = this->someCnt;
		if ((iVar3 != 0) && (bVar5 = 0, *(char *)(iVar3 + 10) != '\0')) {
		do {
		uVar6 = (uint)bVar5;
		uVar1 = *(ushort *)(uVar6 * 0x4c + *(int *)(iVar3 + 0x5c));
		if (uVar1 != 0xffff) {
		ctx = (InstanceContext *)FUN_001f2dc0(this,uVar1);
		if (ctx == (InstanceContext *)0x0) {
		puVar4 = FUN_001a4ce0(this->field12_0x60,(uint)uVar1,(float *)0x0);
		*(undefined *)((int)puVar4 + 0x163) = this->field_0xe2;
		this_01 = this->matrixArray[0].array + uVar6;
		this_01->m11 = (float)puVar4;
		this_01->m21 = (float)((uint)this_01->m21 & 0xfffffffe);
		}
		else {
		fVar2 = this->matrixArray[0].array[uVar6].m21;
		this_01 = this->matrixArray[0].array + uVar6;
		this_01->m11 = (float)ctx;
		this_01->m21 = (float)((uint)fVar2 | 1);
		FUN_001f31f0(this_00,ctx);
		}
		FUN_001f2fd0(this_01,*(int *)(this->someCnt + 0x5c) + uVar6 * 0x4c);
		}
		iVar3 = this->someCnt;
		bVar5 = bVar5 + 1;
		}
		 while (bVar5 < *(byte *)(iVar3 + 10));
		}
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f46f0() {
	/*
	void __fastcall VideoController::FUN_001f46f0(VideoController *this){
		ushort uVar1;
		SoundControllerUnkClass *pSVar2;
		uint uVar3;
		if (0x95 < *(ushort *)(this->someCnt + 2)) {
		this->flags = this->flags & 0xffffff7f;
		pSVar2 = (SoundControllerUnkClass *)VirtualPool::AllocateMemory(0x68);
		if (pSVar2 == (SoundControllerUnkClass *)0x0) {
		pSVar2 = (SoundControllerUnkClass *)0x0;
		}
		else {
		pSVar2 = SoundControllerUnkClass::Construct(pSVar2);
		}
		this->unkStruct = pSVar2;
		uVar1 = *(ushort *)(this->someCnt + 4);
		uVar3 = *(ushort *)(this->someCnt + 6) + 1;
		this->field135_0x1504 = uVar3;
		FUN_001f2c80(this,pSVar2,(uint)uVar1,uVar3);
		}
		return;
		}
		
	*/
	return;
}

uint VideoController::FUN_001f5000(int param_1) {
	/*
	uint __thiscall VideoController::FUN_001f5000(VideoController *this,int param_1){
		bool bVar1;
		uint uVar2;
		uVar2 = this->state;
		if (uVar2 != 2) {
		if (uVar2 == 1) {
		this->flags = this->flags | 0x200;
		}
		this->field4_0x10 = this->field4_0x10 + 1;
		return uVar2 & 0xffffff00;
		}
		bVar1 = FUN_0012deb0(1);
		if (bVar1 != false) {
		this->field13_0x64 = param_1;
		this->flags = this->flags & 0xfffffdff;
		this->field140_0x1518 = *(float *)(param_1 + 4);
		this->field141_0x151c = *(float *)(this->field13_0x64 + 4);
		this->field144_0x1524 = 0;
		this->field143_0x1522 = 0;
		this->field147_0x1528 = 0.0;
		this->field142_0x1520 = 0;
		FUN_001f3800(this);
		uVar2 = FUN_00130790(1,1.0,1.0,0.0);
		this->state = 3;
		FUN_001f46f0(this);
		FUN_001f2bf0(this);
		uVar2 = ((uVar2 & 0xff) << 0xb ^ this->flags) & 0x800;
		this->field4_0x10 = 0;
		this->flags = this->flags ^ uVar2;
		return CONCAT31((int3)(uVar2 >> 8),1);
		}
		uVar2 = this->field4_0x10 + 1;
		this->field4_0x10 = uVar2;
		this->flags = this->flags | 0x200;
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

void VideoController::FUN_001f51c0() {
	/*
	void __fastcall VideoController::FUN_001f51c0(VideoController *this){
		Animation *this_00;
		void *pvVar1;
		int iVar2;
		SoundControllerUnkClass *ptr;
		PhysicalPool *pPVar3;
		byte bVar4;
		uint i;
		Matrix4 *pVVar7;
		int iVar5;
		int *piVar6;
		int *piVar7;
		int iVar8;
		int *piVar9;
		int someNum;
		if (this->someCnt != 0) {
		i = 0;
		if (*(char *)(this->someCnt + 0xc) != '\0') {
		do {
		someNum = this->someStructArray[0].array[i].someNum;
		if (someNum != -1) {
		FUN_0018e650(someNum);
		}
		this->someStructArray[0].array[i].someNum = -1;
		bVar4 = (char)i + 1;
		i = (uint)bVar4;
		}
		 while (bVar4 < *(byte *)(this->someCnt + 0xc));
		}
		i = 0;
		if (*(char *)(this->someCnt + 10) != '\0') {
		do {
		pVVar7 = this->matrixArray[0].array + i;
		this_00 = (Animation *)pVVar7->m14;
		if (this_00 != (Animation *)0x0) {
		Animation::DisposeBlobs(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		if (((int *)pVVar7->m11 != (int *)0x0) && ((*(byte *)&pVVar7->m21 & 1) == 0)) {
		(**(code **)(*(int *)pVVar7->m11 + 0xc))();
		}
		pVVar7->m12 = 0.0;
		pVVar7->m13 = 0.0;
		pVVar7->m11 = 0.0;
		pVVar7->m14 = 0.0;
		pVVar7->m21 = (float)((uint)pVVar7->m21 & 0xfffffffe);
		pVVar7->m33 = 0.0;
		pVVar7->m32 = 0.0;
		pVVar7->m31 = 0.0;
		pVVar7->m34 = FLOAT_0038639c;
		pVVar7->m41 = Vector4_0039ef70.x;
		pVVar7->m42 = Vector4_0039ef70.y;
		pVVar7->m43 = Vector4_0039ef70.z;
		bVar4 = (char)i + 1;
		i = (uint)bVar4;
		}
		 while (bVar4 < *(byte *)(this->someCnt + 10));
		}
		}
		if (this->field120_0xec != (undefined *)0x0) {
		VirtualPool::FreeMemory(this->field120_0xec);
		}
		if (this->field121_0xf0 != (undefined *)0x0) {
		VirtualPool::FreeMemory(this->field121_0xf0);
		}
		this->field119_0xe8 = 0;
		this->field120_0xec = (undefined *)0x0;
		this->field121_0xf0 = (undefined *)0x0;
		this->field_0xfc = 0;
		this->field_0xfd = 0;
		if ((undefined4 *)this->field139_0x1514 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field139_0x1514)(1);
		}
		pvVar1 = (void *)this->someCnt;
		if (pvVar1 != (void *)0x0) {
		iVar2 = *(int *)((int)pvVar1 + 0x5c);
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		iVar5 = iVar8 * 0x4c + iVar2;
		if (-1 < iVar8 + -1) {
		do {
		iVar5 = iVar5 + -0x4c;
		FUN_001f6f80(iVar5);
		iVar8 = iVar8 + -1;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		iVar2 = *(int *)((int)pvVar1 + 0x60);
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		if (-1 < iVar8 + -1) {
		piVar7 = (int *)(iVar8 * 0x1c + iVar2 + 0xc);
		do {
		piVar6 = piVar7 + -7;
		piVar9 = piVar7 + -4;
		if (-1 < piVar7[-4]) {
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar9);
		}
		if (-1 < *piVar6) {
		piVar7 = piVar6;
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar7);
		}
		iVar8 = iVar8 + -1;
		piVar7 = piVar6;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		iVar2 = *(int *)((int)pvVar1 + 100);
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		if (-1 < iVar8 + -1) {
		piVar7 = (int *)(iVar8 * 0x1c + iVar2 + 0xc);
		do {
		piVar6 = piVar7 + -7;
		piVar9 = piVar7 + -4;
		if (-1 < piVar7[-4]) {
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar9);
		}
		if (-1 < *piVar6) {
		piVar7 = piVar6;
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar7);
		}
		iVar8 = iVar8 + -1;
		piVar7 = piVar6;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		FUN_001f3980((int)pvVar1 + 0x20);
		VirtualPool::FreeMemory(pvVar1);
		this->someCnt = 0;
		}
		ptr = this->unkStruct;
		if (ptr != (SoundControllerUnkClass *)0x0) {
		iVar2 = ptr->field59_0x5c;
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		iVar5 = iVar8 * 0x4c + iVar2;
		if (-1 < iVar8 + -1) {
		do {
		iVar5 = iVar5 + -0x4c;
		FUN_001f6f80(iVar5);
		iVar8 = iVar8 + -1;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		iVar2 = ptr->field60_0x60;
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		if (-1 < iVar8 + -1) {
		piVar7 = (int *)(iVar8 * 0x1c + iVar2 + 0xc);
		do {
		piVar6 = piVar7 + -7;
		piVar9 = piVar7 + -4;
		if (-1 < piVar7[-4]) {
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar9);
		}
		if (-1 < *piVar6) {
		piVar7 = piVar6;
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar7);
		}
		iVar8 = iVar8 + -1;
		piVar7 = piVar6;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		iVar2 = ptr->field61_0x64;
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		if (-1 < iVar8 + -1) {
		piVar7 = (int *)(iVar8 * 0x1c + iVar2 + 0xc);
		do {
		piVar6 = piVar7 + -7;
		piVar9 = piVar7 + -4;
		if (-1 < piVar7[-4]) {
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar9);
		}
		if (-1 < *piVar6) {
		piVar7 = piVar6;
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar7);
		}
		iVar8 = iVar8 + -1;
		piVar7 = piVar6;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		FUN_001f3980((int)&ptr->field_0x20);
		VirtualPool::FreeMemory(ptr);
		this->unkStruct = (SoundControllerUnkClass *)0x0;
		}
		pvVar1 = (void *)this->field137_0x150c;
		if (pvVar1 != (void *)0x0) {
		iVar2 = *(int *)((int)pvVar1 + 0x5c);
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		iVar5 = iVar8 * 0x4c + iVar2;
		if (-1 < iVar8 + -1) {
		do {
		iVar5 = iVar5 + -0x4c;
		FUN_001f6f80(iVar5);
		iVar8 = iVar8 + -1;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		iVar2 = *(int *)((int)pvVar1 + 0x60);
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		if (-1 < iVar8 + -1) {
		piVar7 = (int *)(iVar8 * 0x1c + iVar2 + 0xc);
		do {
		piVar6 = piVar7 + -7;
		piVar9 = piVar7 + -4;
		if (-1 < piVar7[-4]) {
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar9);
		}
		if (-1 < *piVar6) {
		piVar7 = piVar6;
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar7);
		}
		iVar8 = iVar8 + -1;
		piVar7 = piVar6;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		iVar2 = *(int *)((int)pvVar1 + 100);
		if (iVar2 != 0) {
		iVar8 = *(int *)(iVar2 + -4);
		if (-1 < iVar8 + -1) {
		piVar7 = (int *)(iVar8 * 0x1c + iVar2 + 0xc);
		do {
		piVar6 = piVar7 + -7;
		piVar9 = piVar7 + -4;
		if (-1 < piVar7[-4]) {
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar9);
		}
		if (-1 < *piVar6) {
		piVar7 = piVar6;
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar7);
		}
		iVar8 = iVar8 + -1;
		piVar7 = piVar6;
		}
		 while (iVar8 != 0);
		}
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		FUN_001f3980((int)pvVar1 + 0x20);
		VirtualPool::FreeMemory(pvVar1);
		this->field137_0x150c = 0.0;
		}
		FUN_001307f0(1,0.0);
		this->field13_0x64 = 0;
		this->field4_0x10 = 0;
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f5be0() {
	/*
	void __fastcall VideoController::FUN_001f5be0(VideoController *this){
		FUN_001f51c0(this);
		this->state = 0;
		this->prevState = 0;
		this->field135_0x1504 = 0;
		this->field134_0x1500 = 0xffffffff;
		this->flags = this->flags & 0xffffefff;
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f6520() {
	/*
	void __fastcall VideoController::FUN_001f6520(VideoController *this){
		byte bVar1;
		uint uVar2;
		Matrix4 *pMVar3;
		if ((((this->flags & 0x800) != 0) && (this->someCnt != 0)) && (this->state == 3)) {
		if ((this->flags & 2) == 0) {
		pMVar3 = (Matrix4 *)0x0;
		}
		else {
		pMVar3 = &this->unkMatrix;
		}
		uVar2 = 0;
		if (*(char *)(this->someCnt + 10) != '\0') {
		do {
		FUN_001f5d70(this->matrixArray[0].array + uVar2,uVar2 * 0x4c + *(int *)(this->someCnt + 0x5c),0xffff,0.0,pMVar3);
		bVar1 = (char)uVar2 + 1;
		uVar2 = (uint)bVar1;
		}
		 while (bVar1 < *(byte *)(this->someCnt + 10));
		}
		uVar2 = 0;
		if (*(char *)(this->someCnt + 0xc) != '\0') {
		do {
		FUN_001f6120(this->someStructArray[0].array + uVar2,uVar2 * 0x1c + *(int *)(this->someCnt + 100),0xffff,0.0,pMVar3);
		bVar1 = (char)uVar2 + 1;
		uVar2 = (uint)bVar1;
		}
		 while (bVar1 < *(byte *)(this->someCnt + 0xc));
		}
		uVar2 = 0;
		if (*(char *)(this->someCnt + 0xb) != '\0') {
		do {
		FUN_001f6380((int)(this->dataArray3[0].array + uVar2),uVar2 * 0x1c + *(int *)(this->someCnt + 0x60),0xffff,0.0,&pMVar3->m11);
		bVar1 = (char)uVar2 + 1;
		uVar2 = (uint)bVar1;
		}
		 while (bVar1 < *(byte *)(this->someCnt + 0xb));
		}
		FUN_001f5780((int)&this->field_0xe4,this->someCnt + 0x20,0xffff,0.0,pMVar3);
		FUN_001f32c0((int)this);
		FUN_001f51c0(this);
		this->state = 5;
		}
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f6680() {
	/*
	void __fastcall VideoController::FUN_001f6680(VideoController *this){
		int iVar1;
		Matrix4 *pMVar2;
		byte bVar3;
		uint uVar4;
		iVar1 = this->someCnt;
		if ((iVar1 != 0) && (uVar4 = 0, *(char *)(iVar1 + 10) != '\0')) {
		do {
		if ((*(byte *)&this->flags & 2) == 0) {
		pMVar2 = (Matrix4 *)0x0;
		}
		else {
		pMVar2 = &this->unkMatrix;
		}
		FUN_001f5d70(this->matrixArray[0].array + uVar4,uVar4 * 0x4c + *(int *)(iVar1 + 0x5c),this->field144_0x1524,this->field147_0x1528,pMVar2);
		iVar1 = this->someCnt;
		bVar3 = (char)uVar4 + 1;
		uVar4 = (uint)bVar3;
		}
		 while (bVar3 < *(byte *)(iVar1 + 10));
		}
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f66f0() {
	/*
	void __fastcall VideoController::FUN_001f66f0(VideoController *this){
		int iVar1;
		Matrix4 *pMVar2;
		byte bVar3;
		uint uVar4;
		iVar1 = this->someCnt;
		if ((iVar1 != 0) && (uVar4 = 0, *(char *)(iVar1 + 0xc) != '\0')) {
		do {
		if ((*(byte *)&this->flags & 2) == 0) {
		pMVar2 = (Matrix4 *)0x0;
		}
		else {
		pMVar2 = &this->unkMatrix;
		}
		FUN_001f6120(this->someStructArray[0].array + uVar4,uVar4 * 0x1c + *(int *)(iVar1 + 100),this->field144_0x1524,this->field147_0x1528,pMVar2);
		iVar1 = this->someCnt;
		bVar3 = (char)uVar4 + 1;
		uVar4 = (uint)bVar3;
		}
		 while (bVar3 < *(byte *)(iVar1 + 0xc));
		}
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f6770() {
	/*
	void __fastcall VideoController::FUN_001f6770(VideoController *this){
		int iVar1;
		Matrix4 *pMVar2;
		byte bVar3;
		uint uVar4;
		iVar1 = this->someCnt;
		if ((iVar1 != 0) && (uVar4 = 0, *(char *)(iVar1 + 0xb) != '\0')) {
		do {
		if ((*(byte *)&this->flags & 2) == 0) {
		pMVar2 = (Matrix4 *)0x0;
		}
		else {
		pMVar2 = &this->unkMatrix;
		}
		FUN_001f6380((int)(this->dataArray3[0].array + uVar4),uVar4 * 0x1c + *(int *)(iVar1 + 0x60),this->field144_0x1524,this->field147_0x1528,&pMVar2->m11);
		iVar1 = this->someCnt;
		bVar3 = (char)uVar4 + 1;
		uVar4 = (uint)bVar3;
		}
		 while (bVar3 < *(byte *)(iVar1 + 0xb));
		}
		return;
		}
		
	*/
	return;
}

void VideoController::Pause() {
	/*
	void __fastcall VideoController::Pause(VideoController *this){
		uint *puVar1;
		int *piVar2;
		int *piVar3;
		int iVar4;
		uint i;
		VideoController *videoController;
		piVar2 = (int *)&ENV_CLASS_228[0].field_0x40;
		videoController = this;
		do {
		iVar4 = 0x18;
		piVar3 = piVar2;
		do {
		if ((piVar3[2] != 0) && (piVar3[3] == 0)) {
		FID_conflict:_IDirectSoundBuffer_PlayEx@16(*piVar3,0,0,0);
		do {
		_IDirectSoundBuffer_GetStatus@8(*piVar3,(uint *)&videoController);
		}
		 while (((uint)videoController & 1) != 0);
		piVar3[3] = 1;
		}
		piVar3 = piVar3 + 0xac;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		piVar2 = piVar2 + 0x1028;
		}
		 while ((int)piVar2 < 0x491bc0);
		i = 0;
		do {
		puVar1 = (uint *)((int)PTR_00489a08->field1_0x10 + i + 0x10);
		if ((puVar1[0xd] != 0) && ((*puVar1 & 0x1000) == 0)) {
		DSOUND::IDirectSoundStream_Pause(puVar1[0xd],1);
		}
		i = i + 0xcc;
		*puVar1 = *puVar1 | 0x1000;
		}
		 while (i < 0x330);
		DAT_00489a20 = 1;
		return;
		}
		
	*/
	return;
}

uint VideoController::FUN_001f2a70(uint param_1, uint param_2, byte param_3) {
	/*
	uint __thiscall VideoController::FUN_001f2a70(VideoController *this,uint param_1,int param_2,byte param_3){
		uint uVar1;
		UnkDesc local_10;
		uVar1 = local_10.soundId & 0xfff30000U | param_1 & 0xffff | 0x30000;
		local_10.soundId = uVar1 ^ ((uint)param_3 << 0x14 ^ uVar1) & 0x100000;
		local_10.field3_0xc = 0.0;
		local_10.field1_0x4 = FLOAT_0038639c;
		local_10.field2_0x8 = FLOAT_0038639c;
		uVar1 = PlaySoundTrack(1,&local_10);
		uVar1 = this->flags ^ ((uVar1 & 0xff) << 0xd ^ this->flags) & 0x2000;
		this->flags = uVar1;
		if ((uVar1 & 0x2000) != 0) {
		this->state = 1;
		this->flags = uVar1 & 0xfffffdff | 0x1000;
		this->field13_0x64 = param_2;
		}
		return this->flags >> 0xd & 1;
		}
		
	*/
	return 0;
}

void VideoController::FUN_001f5690() {
	/*
	void __fastcall VideoController::FUN_001f5690(VideoController *this){
		float fVar1;
		FontRenderer *fontRenderer;
		if ((this->flags & 0x200) != 0) {
		if ((this->flags & 0x1000) == 0) {
		FUN_001f5000(this,this->field13_0x64);
		}
		else {
		FUN_001f2b40(this,this->field13_0x64);
		}
		}
		fontRenderer = FontRenderer;
		fVar1 = FLOAT_00386ab4;
		if (((this->flags & 0x1000) == 0) && (0xc < this->field4_0x10)) {
		FontRenderer->originX = FLOAT_00386ab4;
		fontRenderer->originY = fVar1;
		fontRenderer->color = Color_0039f230;
		FontRenderer::DrawText(fontRenderer,0.85,0.12,(this->errorStr).value);
		}
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f5c10() {
	/*
	void __thiscall VideoController::FUN_001f5c10(VideoController *this){
		void *ptr;
		SoundControllerUnkClass *ptr_00;
		this->flags = this->flags | 0x400;
		if (this->state == 2) {
		ptr = (void *)this->someCnt;
		if (ptr != (void *)0x0) {
		FUN_001f41b0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		this->someCnt = 0;
		}
		ptr_00 = this->unkStruct;
		if (ptr_00 != (SoundControllerUnkClass *)0x0) {
		FUN_001f41b0((int)ptr_00);
		VirtualPool::FreeMemory(ptr_00);
		this->unkStruct = (SoundControllerUnkClass *)0x0;
		}
		this->state = 0;
		}
		FUN_001307f0(1,0.0);
		this->field4_0x10 = 0;
		return;
		}
		
	*/
	return;
}

void VideoController::FUN_001f67f0() {
	/*
	void __fastcall VideoController::FUN_001f67f0(VideoController *this){
		undefined4 uVar1;
		uint uVar2;
		Matrix4 *pMVar3;
		if (((byte *)this->field13_0x64 != (byte *)0x0) && ((*(byte *)this->field13_0x64 & 1) == 0)) {
		this->state = 4;
		return;
		}
		if ((this->flags & 0x1000) == 0) {
		if (this->someCnt != 0) {
		if (this->field4_0x10 < 0xd) {
		if ((this->flags & 0x800) != 0) {
		DisplayHint(this);
		}
		}
		else {
		DisplayError(this);
		}
		uVar2 = FUN_001f5c90(this,this->field13_0x64);
		if ((char)uVar2 != '\0') {
		FUN_001f6680(this);
		FUN_001f66f0(this);
		FUN_001f6770(this);
		if ((*(byte *)&this->flags & 2) == 0) {
		pMVar3 = (Matrix4 *)0x0;
		}
		else {
		pMVar3 = &this->unkMatrix;
		}
		FUN_001f5780((int)&this->field_0xe4,this->someCnt + 0x20,this->field144_0x1524,this->field147_0x1528,pMVar3);
		return;
		}
		FUN_001f32c0((int)this);
		FUN_001f2c40(this);
		FUN_001f51c0(this);
		this->state = 5;
		}
		}
		else {
		uVar1 = FUN_0012ded0(1);
		if ((char)uVar1 == '\0') {
		FUN_001f51c0(this);
		this->flags = this->flags & 0xffffefff;
		this->state = 5;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void VideoController::PauseState() {
	/*
	void __fastcall VideoController::PauseState(VideoController *this){
		this->prevState = this->state;
		this->state = 4;
		return;
		}
		
	*/
	return;
}

void VideoController::UnpauseState() {
	/*
	void __fastcall VideoController::UnpauseState(VideoController *this){
		this->state = this->prevState;
		return;
		}
		
	*/
	return;
}

void VideoController::SoundRelated()
{
	/*
	  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (int *)&ENV_CLASS_228[0].field_0x4c;
  do {
    iVar4 = 0x18;
    piVar3 = piVar2;
    do {
      if ((piVar3[-1] != 0) && (*piVar3 != 0)) {
        _IDirectSoundBuffer_Play@16(piVar3[-3],0,0,piVar3[0x73]);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 0xac;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar2 = piVar2 + 0x1028;
  } while ((int)piVar2 < 0x491bcc);
  uVar5 = 0;
  do {
    iVar4 = *(int *)((int)PTR_00489a08->field1_0x10 + uVar5 + 0x44);
    puVar1 = (uint *)((int)PTR_00489a08->field1_0x10 + uVar5 + 0x10);
    if ((iVar4 != 0) && ((*puVar1 & 0x1000) != 0)) {
      DSOUND::IDirectSoundStream_Pause(iVar4,0);
    }
    uVar5 = uVar5 + 0xcc;
    *puVar1 = *puVar1 & 0xffffefff;
  } while (uVar5 < 0x330);
  DAT_00489a20 = 0;
	*/
}

void VideoController::FUN_001f68b0() {
	/*
	void __fastcall VideoController::FUN_001f68b0(VideoController *this){
		switch(this->state) {
		case 1:FUN_001f5690(this);
		return;
		case 3:FUN_001f67f0(this);
		return;
		case 4:if (((byte *)this->field13_0x64 != (byte *)0x0) && ((*(byte *)this->field13_0x64 & 1) == 0)) {
		this->state = this->prevState;
		}
		}
		return;
		}
		
	*/
	return;
}

uint VideoController::FUN_001f4f00(uint param_1, int param_2, uint param_3) {
	/*
	undefined4 __thiscall VideoController::FUN_001f4f00(VideoController *this,undefined4 param_1,int param_2,undefined4 param_3){
		InstanceTransform *transform;
		float fVar1;
		float fVar2;
		float fVar3;
		SoundControllerUnkClass *pSVar4;
		undefined4 uVar5;
		UnkDesc local_10;
		this->field135_0x1504 = 0;
		this->field134_0x1500 = 0xffffffff;
		this->field5_0x14 = param_1;
		this->field6_0x18 = (InstanceContext *)param_2;
		transform = *(InstanceTransform **)(param_2 + 0x18);
		InstanceTransform::FillMatrix(transform);
		fVar1 = (transform->matrix).m12;
		fVar2 = (transform->matrix).m13;
		fVar3 = (transform->matrix).m14;
		(this->unkMatrix).m11 = (transform->matrix).m11;
		(this->unkMatrix).m12 = fVar1;
		(this->unkMatrix).m13 = fVar2;
		(this->unkMatrix).m14 = fVar3;
		fVar1 = (transform->matrix).m22;
		fVar2 = (transform->matrix).m23;
		fVar3 = (transform->matrix).m24;
		(this->unkMatrix).m21 = (transform->matrix).m21;
		(this->unkMatrix).m22 = fVar1;
		(this->unkMatrix).m23 = fVar2;
		(this->unkMatrix).m24 = fVar3;
		fVar1 = (transform->matrix).m32;
		fVar2 = (transform->matrix).m33;
		fVar3 = (transform->matrix).m34;
		(this->unkMatrix).m31 = (transform->matrix).m31;
		(this->unkMatrix).m32 = fVar1;
		(this->unkMatrix).m33 = fVar2;
		(this->unkMatrix).m34 = fVar3;
		fVar1 = (transform->matrix).m42;
		fVar2 = (transform->matrix).m43;
		fVar3 = (transform->matrix).m44;
		(this->unkMatrix).m41 = (transform->matrix).m41;
		(this->unkMatrix).m42 = fVar1;
		(this->unkMatrix).m43 = fVar2;
		(this->unkMatrix).m44 = fVar3;
		this->flags = this->flags | 2;
		this->field12_0x60 = *(int *)(param_2 + 0xb0);
		pSVar4 = (SoundControllerUnkClass *)VirtualPool::AllocateMemory(0x68);
		if (pSVar4 == (SoundControllerUnkClass *)0x0) {
		pSVar4 = (SoundControllerUnkClass *)0x0;
		}
		else {
		pSVar4 = SoundControllerUnkClass::Construct(pSVar4);
		}
		this->someCnt = (int)pSVar4;
		FUN_001f2c80(this,pSVar4,param_3,this->field135_0x1504);
		local_10.field1_0x4 = FLOAT_0038639c;
		local_10.soundId = local_10.soundId & 0xfff30001U | 0x30001;
		local_10.field3_0xc = 0.0;
		this->flags = this->flags & 0xffffe87f;
		this->state = 1;
		local_10.field2_0x8 = local_10.field1_0x4;
		uVar5 = PlaySoundTrack(1,&local_10);
		return CONCAT31((int3)((uint)uVar5 >> 8),1);
		}
		
	*/
	return 0;
}

