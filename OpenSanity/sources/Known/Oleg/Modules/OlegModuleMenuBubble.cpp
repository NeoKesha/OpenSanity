#include "headers/Known/Oleg/Modules/OlegModuleMenuBubble.h"

#include "headers/Known/Oleg/UIElement/UIElementSimpleShapeA.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"

OlegModuleMenuBubble::OlegModuleMenuBubble(float x, uint arrayLength, byte param_3, byte index1, int index2) : OlegModuleA(x)
{
	this->index2 = index2;
	this->cnt = arrayLength;
	this->field_0x89 = param_3;
	this->index1 = index1;
	this->imageArray = new UIElementSimpleShapeA*[arrayLength];
	for (int i = 0; i < arrayLength; ++i) {
		this->imageArray[i] = null;
	}
}

OlegModuleMenuBubble::~OlegModuleMenuBubble()
{
	for (int i = 0; i < this->cnt; ++i) {
		delete imageArray[i];
	}

	delete imageArray;
}

UIElementSimpleShapeA* OlegModuleMenuBubble::FUN_001a0fd0(int i, TwinsanityMaterialShader* param_2) {
	byte bVar1;
	byte bVar2;
	UIElementSimpleShapeA* image;

	bVar1 = this->index1;
	bVar2 = this->field_0x89;
	image = new UIElementSimpleShapeA((bVar1 + 1) * (uint)bVar2, param_2);
	this->imageArray[i] = image;
	return this->imageArray[i];
}

void OlegModuleMenuBubble::Render(FontRenderer* renderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleMenuBubble::Render(OlegModuleMenuBubble *this,int param_1){
		int iVar1;
		UIElementSimpleShapeA *pUVar2;
		OlegModuleAbstract *this_00;
		bool bVar3;
		uint uVar4;
		float fVar5;
		float fVar6;
		float local_68;
		uint local_64;
		float local_60;
		undefined4 local_5c;
		Vector2 local_58;
		Matrix4 local_50;
		 Menu Bubble uVar4 = (this->parent).parent.flags;
		if (((~(byte)(uVar4 >> 9) & 1) == 0) || (((byte)uVar4 & 0xf) < 2)) goto LAB_001a344d;
		fVar6 = (this->parent).parent.field14_0x30;
		local_64 = uVar4 >> 0xb & 0xf;
		if (fVar6 < 0.0) {
		fVar6 = 0.0 - fVar6;
		}
		if (DAT_003a3910 < fVar6) {
		LAB_001a330c:bVar3 = false;
		}
		else {
		fVar6 = (this->parent).parent.field15_0x34;
		fVar5 = 0.0 - fVar6;
		if (0.0 <= fVar6) {
		fVar5 = fVar6;
		}
		if (DAT_003a3910 < fVar5) goto LAB_001a330c;
		bVar3 = true;
		}
		local_68 = (this->parent).array[0].x;
		if (!bVar3) {
		local_60 = FUN_001a0f20((int)this);
		local_58.x = (this->parent).parent.field14_0x30;
		local_58.y = (this->parent).parent.field15_0x34;
		FUN_00108fc0(&local_68,&local_5c,(uint)(this->parent).parent.field13_0x2c);
		local_58.x = local_58.x * local_60;
		local_58.y = local_58.y * local_60;
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(true,&local_58);
		}
		iVar1 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar1 != 0) {
		fVar6 = *(float *)(iVar1 + 0x10);
		local_58.x = fVar6 * local_58.x;
		local_58.y = local_58.y * fVar6;
		}
		Matrix4::Construct1(&local_50);
		local_50.m41 = local_58.x;
		local_50.m42 = local_58.y;
		}
		uVar4 = 0;
		if ((*(uint *)&this->cnt & 0xff) != 0) {
		do {
		pUVar2 = this->imageArray[uVar4];
		if (pUVar2 != (UIElementSimpleShapeA *)0x0) {
		if (!bVar3) {
		*(float *)(param_1 + 0x10) = local_68;
		FUN_00104260(param_1,&local_50.m11,pUVar2,local_64 - 1);
		}
		*(undefined4 *)(param_1 + 0x10) = COLOR_WHITE;
		FUN_001041d0(param_1,pUVar2,local_64);
		}
		uVar4 = uVar4 + 1;
		}
		 while (uVar4 < (*(uint *)&this->cnt & 0xff));
		}
		LAB_001a344d:this_00 = (this->parent).parent.next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->Render)(this_00,(FontRenderer *)param_1);
		}
		return;
		}
		
	*/
	return;
}

