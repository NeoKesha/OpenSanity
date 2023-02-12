#include "headers/Known/Oleg/UIElement/UIElementSimpleShapeA.h"

#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"
void UIElementSimpleShapeA::FUN_00102060(byte param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementSimpleShapeA::FUN_00102060(UIElementSimpleShapeA *this,undefined param_1,Vector2 *param_2,undefined *param_3){
		if (((this->parent).cnt & 0x100U) != 0) {
		VirtualPool::FreeMemory((this->parent).field2_0x14);
		VirtualPool::FreeMemory((this->parent).field3_0x18);
		}
		(this->parent).cnt = 0;
		*(undefined *)&(this->parent).cnt = param_1;
		(this->parent).field2_0x14 = param_2;
		(this->parent).field3_0x18 = param_3;
		return;
		}
		
	*/
	return;
}

void UIElementSimpleShapeA::Construct(int param_1, TwinsanityMaterialShader* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UIElementSimpleShapeA * __thiscall UIElementSimpleShapeA::Construct(UIElementSimpleShapeA *this,int param_1,TwinsanityMaterialShader *param_2){
		float fVar1;
		int iVar2;
		undefined *puVar3;
		float fVar4;
		UIElementSimpleShape::Construct(&this->parent);
		fVar1 = DAT_003a76a4;
		fVar4 = FLOAT_0038639c;
		(this->parent).parent.vtable = (UIElementAbstract_VTable *)&UIElement_VT_BA;
		this->field1_0x1c = COLOR_WHITE;
		this->field2_0x20 = COLOR_WHITE;
		*(undefined4 *)&this->field_0x24 = 0;
		*(undefined4 *)&this->field_0x28 = 0;
		*(float *)&this->field_0x2c = fVar4;
		*(float *)&this->field_0x30 = fVar4;
		fVar4 = FLOAT_003863a8;
		*(undefined4 *)&this->field_0x34 = 0;
		*(undefined4 *)&this->field_0x38 = 0;
		*(undefined4 *)&this->field_0x3c = 0;
		*(undefined4 *)&this->field_0x40 = 0;
		fVar4 = fVar4 / fVar1;
		iVar2 = (int)(fVar4 * 0.0);
		*(int *)&this->field_0x44 = iVar2;
		*(int *)&this->field_0x48 = iVar2;
		*(int *)&this->field_0x4c = (int)(fVar4 * fVar1);
		*(undefined4 *)&this->field_0x50 = 0;
		puVar3 = (undefined *)VirtualPool::AllocateMemory(param_1 * 0x10 + 0x10);
		this->field52_0x58 = puVar3;
		puVar3 = (undefined *)VirtualPool::AllocateMemory(param_1 * 8 + 8);
		this->field51_0x54 = puVar3;
		UIElementAbstract::FUN_00102210((UIElementAbstract *)this,(int)param_2);
		FUN_00102060(this,(char)param_1 * '\x02',this->field52_0x58,this->field51_0x54);
		return this;
		}
		
	*/
	return;
}

void UIElementSimpleShapeA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UIElementSimpleShapeA * __thiscall UIElementSimpleShapeA::Dispose(UIElementSimpleShapeA *this,byte param_1){
		undefined *ptr;
		ptr = this->field51_0x54;
		(this->parent).parent.vtable = (UIElementAbstract_VTable *)&UIElement_VT_BA;
		VirtualPool::FreeMemory(ptr);
		VirtualPool::FreeMemory(this->field52_0x58);
		UIElementSimpleShape::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

