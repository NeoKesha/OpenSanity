#include "headers/Unknown/AutoClasses/AutoClass25/AutoClass25.h"

#include "headers/Known/Graphics/Renderer/ScreenInfoExt.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"

AutoClass25::AutoClass25() : matrix1(), matrix3() //this calls what is called Construct1
{
	this->ctxPtr = (InstanceContextRefCounter*)0x0;
	this->unkFloat = 1.0;
	(this->vec1).x = 1.0f / 5.0f;
	(this->vec1).y = 1.0f / 5.0f;
	(this->vec1).z = 1.0;
	(this->vec1).w = 1.0;
}

void AutoClass25::FUN_000c5310(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass25::FUN_000c5310(AutoClass25 *this,InstanceContext *ctx){
		InstanceContextRefCounter **this_00;
		InstanceContext *pIVar1;
		InstanceContextRefCounter *pIVar2;
		pIVar1 = (InstanceContext *)this->ctxPtr;
		this_00 = &this->ctxPtr;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = *(InstanceContext **)&pIVar1->parent;
		}
		if (pIVar1 != ctx) {
		InstanceContextSmartPtr::Release(this_00);
		if (ctx == (InstanceContext *)0x0) {
		*this_00 = (InstanceContextRefCounter *)0x0;
		return;
		}
		pIVar2 = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		*this_00 = pIVar2;
		}
		return;
		}
		
	*/
	return;
}

void AutoClass25::FUN_001c6d10(ScreenInfoExt* info) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass25::FUN_001c6d10(AutoClass25 *this,ScreenInfoExt *info){
		Matrix4::Multiply4443(&this->matrix2,&this->matrix1,&this->matrix3);
		Matrix4::Multiply4443(&this->matrix1,&info->matrix2,&this->matrix5);
		Matrix4::Multiply4443(&this->matrix3,&info->matrix2,&this->matrix4);
		return;
		}
		
	*/
	return;
}

void AutoClass25::FUN_001cb0b0(float aspectRatio) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass25::FUN_001cb0b0(AutoClass25 *this,float aspectRatio){
		InstanceTransform *transform;
		bool bVar1;
		InstanceContext *pIVar2;
		InstanceNodeR *pIVar3;
		float fVar3;
		float fVar4;
		pIVar2 = (InstanceContext *)this->ctxPtr;
		if ((pIVar2 != (InstanceContext *)0x0) &&(*(InstanceContext **)&pIVar2->parent != (InstanceContext *)0x0)) {
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		transform = (pIVar2->parent).transform;
		InstanceTransform::FillMatrix(transform);
		pIVar2 = (InstanceContext *)this->ctxPtr;
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		pIVar3 = (InstanceNodeR *)InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),NodeR);
		fVar3 = pIVar3->field3_0x20 * aspectRatio;
		fVar4 = fVar3 - this->unkFloat;
		bVar1 = fVar4 * fVar4 <= FLOAT_003a3ce0;
		FUN_000ef320(transform,4,&(this->matrix2).m11);
		FUN_001c6cb0((int)this,transform);
		if (((*(byte *)&pIVar3->field1_0x18 & 1) != 0) || (bVar1)) {
		this->unkFloat = FLOAT_0038639c / fVar3;
		FUN_001c6ba0(this,(int)pIVar3);
		}
		}
		return;
		}
		
	*/
	return;
}

