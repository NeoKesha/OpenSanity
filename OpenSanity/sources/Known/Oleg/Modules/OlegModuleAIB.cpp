#include "headers/Known/Oleg/Modules/OlegModuleAIB.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Oleg/UIElement/UIElementImage.h"
void OlegModuleAIB::Construct(float param_1, UIElementImage* param_2, byte param_3, uint param_4, uint param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAIB * __thiscall OlegModuleAIB::Construct(OlegModuleAIB *this,float param_1,UIElementImage *param_2,undefined param_3,undefined4 param_4,undefined4 param_5){
		undefined3 in_stack_0000000d;
		OlegModuleAI::Construct(&this->parent,param_1,param_2,_param_3);
		this->field1_0x90 = param_4;
		(this->parent).parent.parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AIB;
		this->field2_0x94 = param_5;
		return this;
		}
		
	*/
	return;
}

void OlegModuleAIB::FUN_000b0f80(FontRenderer* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAIB::FUN_000b0f80(OlegModuleAIB *this,FontRenderer *param_1){
		bool bVar1;
		char *srcStr;
		Font *pFVar2;
		int iVar3;
		uint uVar4;
		float fVar5;
		float fVar6;
		Vector2 local_d4;
		Vector2 local_cc;
		float local_c4;
		float local_c0;
		Color local_bc;
		int local_b8;
		char *local_b4;
		uint local_b0;
		float local_ac;
		float local_a8;
		uint local_a4;
		uint local_a0;
		int local_9c;
		TwinString local_98;
		TwinString local_8c;
		Matrix4 local_80;
		TwinString local_34;
		TwinString local_28;
		TwinString local_1c [2];
		uVar4 = (this->parent).parent.parent.flags;
		if (((~(byte)(uVar4 >> 9) & 1) != 0) && (1 < ((byte)uVar4 & 0xf))) {
		local_cc.x = (this->parent).parent.array[2].x;
		local_bc = (Color)(this->parent).parent.array[0].x;
		local_cc.y = (this->parent).parent.array[2].y;
		local_d4.x = (this->parent).parent.array[6].x;
		local_d4.y = (this->parent).parent.array[6].y;
		local_b0 = uVar4 >> 0xb & 0xf;
		pFVar2 = (Font *)(this->field1_0x90 + 0x78);
		OlegModuleAF::FUN_001a0e30((OlegModuleAF *)this,false,&local_cc);
		OlegModuleAF::FUN_001a0e60((OlegModuleAF *)this,false,&local_d4);
		iVar3 = this->field2_0x94;
		if (((*(uint *)(iVar3 + 8) & 0x1000000) != 0) && ((*(uint *)(iVar3 + 8) & 0x2000000) != 0)) {
		local_b4 = (char *)(this->field1_0x90 + 0x610);
		local_9c = *(int *)(&DAT_0039e020 + (*(uint *)(iVar3 + 0x18) & 0x3f) * 4);
		local_a0 = *(uint *)(iVar3 + 0x18) >> 6 & 0xf;
		local_b8 = local_9c + 0x1e;
		if (local_a0 != 6) {
		local_a0 = local_a0 + 6;
		}
		local_a4 = *(int *)(iVar3 + 0x1c);
		TwinString::Set(&local_28," ");
		TwinString::Set(local_1c,LOCAL_MSG1[local_9c + 0xc1]);
		TwinString::Set(&local_34,"  ");
		local_c4 = local_d4.x;
		local_c0 = local_d4.y;
		local_ac = local_d4.x;
		local_a8 = local_d4.y;
		local_98.value = (char *)0x0;
		local_98.strLength = 0;
		local_98.strSize = 0;
		local_8c.value = (char *)0x0;
		local_8c.strLength = 0;
		local_8c.strSize = 0;
		bVar1 = FUN_001a2b90((int)this,0);
		if (bVar1 == false) {
		FUN_00101ea0(&local_bc,&local_9c,0.75);
		local_c4 = local_c4 * FLOAT_0038c9c4;
		local_c0 = local_c0 * FLOAT_0038b3bc;
		}
		else {
		local_c4 = local_c4 * DAT_003e2dfc * FLOAT_0038c9c4;
		local_c0 = local_c0 * DAT_003e2dfc * FLOAT_0038b3bc;
		}
		fVar6 = FLOAT_00386ab4;
		local_ac = local_ac * FLOAT_00386ab4;
		param_1->color = local_bc;
		local_a8 = local_a8 * fVar6;
		param_1->font = pFVar2;
		Matrix4::Construct1(&local_80);
		iVar3 = (int)((float)local_a4 * TimePerTick1 * FLOAT_0038be00);
		local_a4 = iVar3 / 0x3c;
		uVar4 = iVar3 % 0x3c;
		TwinString::thunk_FUN_000249e0(&local_28,*(uint *)(this->field2_0x94 + 0x18) >> 10 & 0x3f);
		TwinString::thunk_FUN_000249e0(&local_34,(*(byte *)(this->field2_0x94 + 0x1a) & 0x7f) - 1);
		thunk_FUN_000ac380(local_1c,' ','~');
		thunk_FUN_000ac330(&local_98,local_a4);
		srcStr = ":0";
		if (9 < (int)uVar4) {
		srcStr = ":";
		}
		TwinString::Append(&local_98,srcStr);
		thunk_FUN_000ac330(&local_98,uVar4);
		TwinString::thunk_FUN_000249e0(&local_8c,*(uint *)(this->field2_0x94 + 0x18) >> 0x17 & 0x7f);
		TwinString::Append(&local_8c,"%");
		iVar3 = (int)local_b4;
		local_80.m11 = local_c4;
		local_80.m22 = local_c0;
		local_80.m41 = local_cc.x - local_d4.x * FLOAT_0038b3c8;
		local_80.m42 = local_cc.y - local_d4.y * FLOAT_0038abc4;
		FUN_00104260((int)param_1,&local_80.m11,local_b8 * 0x20 + 0xb0c + (int)local_b4,local_b0);
		param_1->field13_0x34 = 6;
		param_1->originX = local_ac;
		param_1->originY = local_a8;
		FontRenderer::DrawText(param_1,local_cc.x,local_cc.y,local_1c[0].value);
		fVar6 = FLOAT_00386ab4;
		local_80.m42 = local_d4.y * FLOAT_0038a934 + local_cc.y;
		local_80.m41 = local_cc.x;
		fVar5 = local_d4.x * FLOAT_00386ab4;
		param_1->field13_0x34 = 0x44;
		param_1->originX = fVar5;
		param_1->originY = local_d4.y * fVar6;
		FontRenderer::DrawText(param_1,local_cc.x,local_80.m42,local_98.value);
		local_80.m41 = local_d4.x * FLOAT_00386608 + local_cc.x;
		FontRenderer::DrawText(param_1,local_80.m41,local_80.m42,local_8c.value);
		local_80.m41 = local_d4.x * FLOAT_0038ab54 + local_cc.x;
		local_80.m11 = local_d4.x * FLOAT_0038c9bc;
		local_80.m42 = local_cc.y - local_d4.y * FLOAT_0038a934;
		local_80.m22 = local_d4.y * FLOAT_0038c9bc;
		FUN_00104260((int)param_1,&local_80.m11,local_a0 * 0x20 + 0xb0c + iVar3,local_b0);
		fVar6 = FLOAT_0038d548;
		fVar5 = local_d4.x * FLOAT_0038d548;
		param_1->field13_0x34 = 0x11;
		param_1->originX = fVar5;
		param_1->originY = local_d4.y * fVar6;
		FontRenderer::DrawText(param_1,local_80.m41,local_80.m42,local_34.value);
		local_80.m11 = local_d4.x * FLOAT_0038abc4;
		local_80.m41 = local_d4.x * FLOAT_0038c850 + local_cc.x;
		local_80.m22 = local_d4.y * FLOAT_0038c9bc;
		local_80.m42 = local_d4.y * FLOAT_0038a934 + local_cc.y;
		FUN_00104260((int)param_1,&local_80.m11,iVar3 + 0xdac,local_b0);
		fVar6 = FLOAT_0038d548;
		param_1->field13_0x34 = 0x30;
		param_1->originX = local_d4.x * fVar6;
		param_1->originY = local_d4.y * fVar6;
		FontRenderer::DrawText(param_1,local_80.m41,local_80.m42,local_28.value);
		TwinString::Dispose(&local_8c);
		TwinString::Dispose(&local_98);
		TwinString::Dispose(&local_34);
		TwinString::Dispose(local_1c);
		TwinString::Dispose(&local_28);
		OlegModuleAbstract::Render((OlegModuleAbstract *)this);
		return;
		}
		local_b4 = LOCAL_MSG1[0x3f];
		bVar1 = FUN_001a2b90((int)this,0);
		if (bVar1 == false) {
		if ((*(byte *)(*(int *)&(this->parent).field_0x8c + 0xc) & 1) == 0) {
		fVar6 = 0.5;
		}
		else {
		fVar6 = 0.75;
		}
		FUN_00101ea0(&local_bc,&local_b8,fVar6);
		}
		else {
		local_d4.x = local_d4.x * DAT_003e2dfc;
		local_d4.y = local_d4.y * DAT_003e2dfc;
		}
		param_1->color = local_bc;
		param_1->font = pFVar2;
		param_1->originX = local_d4.x;
		param_1->originY = local_d4.y;
		param_1->field13_0x34 = 0x22;
		FontRenderer::DrawText(param_1,local_cc.x,local_cc.y,local_b4);
		}
		OlegModuleAbstract::Render((OlegModuleAbstract *)this);
		return;
		}
		
	*/
	return;
}

void OlegModuleAIB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAIB * __thiscall OlegModuleAIB::Dispose(OlegModuleAIB *this,byte param_1){
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

