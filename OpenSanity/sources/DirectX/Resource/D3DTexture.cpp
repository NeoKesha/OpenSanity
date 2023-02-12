#include "headers/DirectX/Resource/D3DTexture.h"

void D3DTexture::GetSurfaceLevel(uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 Library Function - Single Match    _D3DTexture_GetSurfaceLevel2@8      Library: xbox libs 1 0 void D3DTexture::GetSurfaceLevel(D3DTexture *this,uint param_2){
		D3DTexture *pDVar1;
		uint local_c;
		uint local_8;
		uint local_4;
		pDVar1 = this;
		FindSurfaceWithinTexture((int)this,0,param_2,&param_2,&local_4,&local_8,&local_c,&this);
		CreateSurfaceOfTexture(local_c,this,(uint *)pDVar1,param_2);
		return;
		}
		
	*/
	return;
}

