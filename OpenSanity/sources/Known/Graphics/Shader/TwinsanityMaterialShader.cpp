#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void TwinsanityMaterialShader::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityMaterialShader * __fastcall TwinsanityMaterialShader::Construct(TwinsanityMaterialShader *this){
		this->shaderProgramCnt = 0;
		this->field9_0x24 = 0;
		return this;
		}
		
	*/
	return;
}

void TwinsanityMaterialShader::DisposeShaderPrograms() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityMaterialShader::DisposeShaderPrograms(TwinsanityMaterialShader *this){
		ShaderProgramAbstract *this_00;
		uint i;
		i = 0;
		if (this->shaderProgramCnt != 0) {
		do {
		this_00 = this->shaderPrograms[i];
		if (this_00 != (ShaderProgramAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		i = i + 1;
		}
		 while (i < this->shaderProgramCnt);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityMaterialShader::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityMaterialShader::Write(TwinsanityMaterialShader *this,MemoryStream *stream){
		uint i;
		i = this->shaderType;
		(*stream->vtable->WriteLong)(stream,(long *)this->field6_0x18);
		(*stream->vtable->WriteInt3)(stream,i);
		(*stream->vtable->WriteInt3)(stream,0);
		(*stream->vtable->WriteInt3)(stream,this->shaderProgramCnt);
		i = 0;
		if (this->shaderProgramCnt != 0) {
		do {
		(*stream->vtable->WriteInt3)(stream,this->shaderPrograms[i]->id);
		(*this->shaderPrograms[i]->vtable->Write)(this->shaderPrograms[i],stream);
		i = i + 1;
		}
		 while (i < this->shaderProgramCnt);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityMaterialShader::FUN_00105840() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityMaterialShader::FUN_00105840(TwinsanityMaterialShader *this){
		uint uVar1;
		ShaderProgramAbstract *pSVar2;
		Vector4 local_20;
		if (this == (TwinsanityMaterialShader *)0x0) {
		pSVar2 = (ShaderProgramAbstract *)0x0;
		}
		else {
		pSVar2 = this->shaderPrograms[0];
		}
		uVar1 = FUN_00105160((int)pSVar2);
		this->field9_0x24 = uVar1;
		if ((pSVar2->flags >> 0x1b & 1) != 0) {
		_D3DDevice_SetTexture@8(0,pSVar2->texture->d3dTexture);
		local_20.x = pSVar2->field51_0x50;
		local_20.y = pSVar2->field52_0x54;
		local_20.z = 0.0;
		local_20.w = 0.0;
		@D3DDevice_SetVertexShaderConstant1Fast@8(100,&local_20);
		FUN_00105230(this->field9_0x24);
		return;
		}
		_D3DDevice_SetTexture@8(0,(D3DTexture *)0x0);
		FUN_00105230(this->field9_0x24);
		return;
		}
		
	*/
	return;
}

void TwinsanityMaterialShader::ReadFromStream(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityMaterialShader::ReadFromStream(TwinsanityMaterialShader *this,MemoryStream *stream){
		int *buffer;
		ShaderProgramB *shaderB;
		ShaderProgramC *shaderC;
		ShaderProgramD *shaderD;
		ShaderProgramE *shaderE;
		ShaderProgramF *shaderF;
		ShaderProgramG *shaderG;
		ShaderProgramI *shaderI;
		ShaderProgramJ *shaderJ;
		ShaderProgramX *shaderX;
		ShaderProgramK *shaderK;
		ShaderProgramL *shaderL;
		ShaderProgramM *shaderM;
		ShaderProgramO *shaderO;
		ShaderProgramP *shaderP;
		ShaderProgramQ *shaderQ;
		ShaderProgramA *shaderA;
		ShaderProgramR *shaderR;
		ShaderProgramS *shaderS;
		ShaderProgramT *shaderT;
		ShaderProgramU *shaderU;
		ShaderProgramV *shaderV;
		ShaderProgramW *shaderW;
		uint i;
		ShaderProgramAbstract *result;
		uint shaderType;
		uint uStack4;
		(*stream->vtable->ReadLong)(stream,&this->field6_0x18);
		(*stream->vtable->ReadUInt)(stream,&shaderType);
		this->shaderType = shaderType;
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		if (stream != (MemoryStream *)0x0) {
		buffer = (int *)VirtualPool::AllocateMemory((size_t)stream);
		(*stream->vtable->Read)(stream,buffer,(uint)stream,1);
		VirtualPool::FreeMemory(buffer);
		}
		(*stream->vtable->ReadUInt)(stream,&this->shaderProgramCnt);
		i = 0;
		if (this->shaderProgramCnt != 0) {
		do {
		(*stream->vtable->ReadUInt)(stream,&uStack4);
		switch(uStack4) {
		case 1:shaderB = (ShaderProgramB *)VirtualPool::AllocateMemory(0x80);
		if (shaderB == (ShaderProgramB *)0x0) break;
		result = (ShaderProgramAbstract *)ShaderProgramB::Construct(shaderB);
		goto LAB_00112372;
		case 2:shaderC = (ShaderProgramC *)VirtualPool::AllocateMemory(0x80);
		if (shaderC != (ShaderProgramC *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramC::Construct(shaderC);
		goto LAB_00112372;
		}
		break;
		case 4:shaderD = (ShaderProgramD *)VirtualPool::AllocateMemory(0x80);
		if (shaderD != (ShaderProgramD *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramD::Construct(shaderD);
		goto LAB_00112372;
		}
		break;
		case 10:shaderE = (ShaderProgramE *)VirtualPool::AllocateMemory(0x80);
		if (shaderE != (ShaderProgramE *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramE::Construct(shaderE);
		goto LAB_00112372;
		}
		break;
		case 0xb:shaderF = (ShaderProgramF *)VirtualPool::AllocateMemory(0x80);
		if (shaderF != (ShaderProgramF *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramF::Construct(shaderF);
		goto LAB_00112372;
		}
		break;
		case 0xc:shaderG = (ShaderProgramG *)VirtualPool::AllocateMemory(0x80);
		if (shaderG != (ShaderProgramG *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramG::Construct(shaderG);
		goto LAB_00112372;
		}
		break;
		case 0xd:shaderI = (ShaderProgramI *)VirtualPool::AllocateMemory(0x80);
		if (shaderI != (ShaderProgramI *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramI::Construct(shaderI);
		goto LAB_00112372;
		}
		break;
		case 0xf:shaderJ = (ShaderProgramJ *)VirtualPool::AllocateMemory(0x80);
		if (shaderJ != (ShaderProgramJ *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramJ::Construct(shaderJ);
		goto LAB_00112372;
		}
		break;
		case 0x10:shaderX = (ShaderProgramX *)VirtualPool::AllocateMemory(0x90);
		if (shaderX != (ShaderProgramX *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramX::Construct(shaderX);
		goto LAB_00112372;
		}
		break;
		case 0x11:shaderK = (ShaderProgramK *)VirtualPool::AllocateMemory(0x90);
		if (shaderK != (ShaderProgramK *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramK::Construct(shaderK);
		goto LAB_00112372;
		}
		break;
		case 0x12:shaderL = (ShaderProgramL *)VirtualPool::AllocateMemory(0x80);
		if (shaderL != (ShaderProgramL *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramL::Construct(shaderL);
		goto LAB_00112372;
		}
		break;
		case 0x13:shaderM = (ShaderProgramM *)VirtualPool::AllocateMemory(0x80);
		if (shaderM != (ShaderProgramM *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramM::Construct(shaderM);
		goto LAB_00112372;
		}
		break;
		case 0x14:shaderO = (ShaderProgramO *)VirtualPool::AllocateMemory(0x80);
		if (shaderO != (ShaderProgramO *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramO::Construct(shaderO);
		goto LAB_00112372;
		}
		break;
		case 0x15:shaderP = (ShaderProgramP *)VirtualPool::AllocateMemory(0x80);
		if (shaderP != (ShaderProgramP *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramP::Construct(shaderP);
		goto LAB_00112372;
		}
		break;
		case 0x16:shaderQ = (ShaderProgramQ *)VirtualPool::AllocateMemory(0x80);
		if (shaderQ != (ShaderProgramQ *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramQ::Construct(shaderQ);
		goto LAB_00112372;
		}
		break;
		case 0x17:shaderA = (ShaderProgramA *)VirtualPool::AllocateMemory(0x290);
		if (shaderA != (ShaderProgramA *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramA::Construct(shaderA);
		goto LAB_00112372;
		}
		break;
		case 0x19:shaderR = (ShaderProgramR *)VirtualPool::AllocateMemory(0x80);
		if (shaderR != (ShaderProgramR *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramR::Construct(shaderR);
		goto LAB_00112372;
		}
		break;
		case 0x1a:shaderS = (ShaderProgramS *)VirtualPool::AllocateMemory(0x2a0);
		if (shaderS != (ShaderProgramS *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramS::Construct(shaderS);
		goto LAB_00112372;
		}
		break;
		case 0x1b:shaderT = (ShaderProgramT *)VirtualPool::AllocateMemory(0x80);
		if (shaderT != (ShaderProgramT *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramT::Construct(shaderT);
		goto LAB_00112372;
		}
		break;
		case 0x1e:shaderU = (ShaderProgramU *)VirtualPool::AllocateMemory(0x80);
		if (shaderU != (ShaderProgramU *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramU::Construct(shaderU);
		goto LAB_00112372;
		}
		break;
		case 0x1f:shaderV = (ShaderProgramV *)VirtualPool::AllocateMemory(0x80);
		if (shaderV != (ShaderProgramV *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramV::Construct(shaderV);
		goto LAB_00112372;
		}
		break;
		case 0x20:shaderW = (ShaderProgramW *)VirtualPool::AllocateMemory(0x80);
		if (shaderW != (ShaderProgramW *)0x0) {
		result = (ShaderProgramAbstract *)ShaderProgramW::Construct(shaderW);
		goto LAB_00112372;
		}
		}
		result = (ShaderProgramAbstract *)0x0;
		LAB_00112372:(*((((ShaderProgramS *)result)->parent).vtable)->Read)(result,stream);
		this->shaderPrograms[i] = result;
		i = i + 1;
		}
		 while (i < this->shaderProgramCnt);
		}
		return;
		}
		
	*/
	return;
}

