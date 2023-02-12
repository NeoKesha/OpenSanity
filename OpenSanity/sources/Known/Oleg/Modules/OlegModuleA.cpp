#include "headers/Known/Oleg/Modules/OlegModuleA.h"

#include "headers/Known/Math/Vector2.h"
#include "headers/Known/ColorTransparent.h"
void OlegModuleA::FUN_00108ea0(Vector2* vector, uint time, uint val1, uint val2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::FUN_00108ea0(Vector2 *vector,float time,uint val1,uint val2){
		long lVar1;
		float10 fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float extraout_ST0;
		fVar3 = (float)(val1 >> 0x18) * FLOAT_0038dedc;
		fVar4 = (float)(val2 >> 8 & 0xff) * FLOAT_0038dedc;
		fVar6 = (float)(val1 & 0xff) * FLOAT_0038dedc;
		fVar7 = (float)(val1 >> 8 & 0xff) * FLOAT_0038dedc;
		fVar8 = (float)(val1 >> 0x10 & 0xff) * FLOAT_0038dedc;
		fVar5 = (float)(val2 >> 0x10 & 0xff) * FLOAT_0038dedc;
		lVar1 = __ftol2((((float)(val2 & 0xff) * FLOAT_0038dedc - fVar6) * time + fVar6) * FLOAT_00386448);
		fVar4 = ((fVar4 - fVar7) * time + fVar7) * FLOAT_00386448;
		*(char *)&vector->x = (char)lVar1;
		lVar1 = __ftol2(fVar4);
		fVar4 = ((fVar5 - fVar8) * time + fVar8) * FLOAT_00386448;
		*(char *)((int)&vector->x + 1) = (char)lVar1;
		lVar1 = __ftol2(fVar4);
		fVar2 = (float10)FLOAT_0038639c;
		*(char *)((int)&vector->x + 2) = (char)lVar1;
		lVar1 = __ftol2((float)((_extraout_ST0 * (float10)time + (fVar2 - (float10)time) * (float10)fVar3)* (float10)FLOAT_00386448));
		*(char *)((int)&vector->x + 3) = (char)lVar1;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Show(int appearTime, uint disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::Show(OlegModuleA *this,int appearTime,int disappearTime){
		uint state;
		uint flags;
		do {
		flags = (this->parent).flags;
		state = flags;
		if ((flags & 0x100) != 0) {
		state = flags >> 4;
		}
		switch(state & 0xf) {
		case 0:(*((this->parent).vtable)->Shift1)(&this->parent);
		case 1:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeOutLength = disappearTime;
		(this->parent).flags =(3 - (appearTime != 0) & 0xf | 0x10) << 4 | (this->parent).flags & 0xffffff0f;
		break;
		case 2:if (appearTime == 0) {
		(this->parent).flags = flags & 0xffffff3f | 0x130;
		}
		break;
		case 3:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeOutLength = disappearTime;
		(this->parent).flags = (this->parent).flags & 0xffffff3f | 0x130;
		break;
		case 4:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeInLength =(int)((float)appearTime * TimePerTick1 * (this->parent).value * TicksPerTime);
		(this->parent).fadeOutLength = disappearTime;
		(this->parent).flags =(3 - (appearTime != 0) & 0xf | 0x10) << 4 | (this->parent).flags & 0xffffff0f;
		}
		this = (OlegModuleA *)(this->parent).next;
		}
		 while (this != (OlegModuleA *)0x0);
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Hide(int appearTime, int disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::Hide(OlegModuleA *this,int appearTime,int disappearTime){
		uint flags2;
		uint flags1;
		do {
		flags1 = (this->parent).flags;
		flags2 = flags1;
		if ((flags1 & 0x100) != 0) {
		flags2 = flags1 >> 4;
		}
		switch(flags2 & 0xf) {
		case 1:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeOutLength = disappearTime;
		flags1 = (this->parent).flags;
		LAB_001a2837:flags1 = flags1 & 0xffffff1f | 0x110;
		goto LAB_001a2841;
		case 2:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeInLength =(int)((float)appearTime * TimePerTick1 * (this->parent).value * TicksPerTime);
		goto LAB_001a2810;
		case 3:(this->parent).fadeInLength = appearTime;
		LAB_001a2810:(this->parent).fadeOutLength = disappearTime;
		flags1 = ((-(uint)(appearTime != 0) & 3) + 1 | 0x10) << 4 | (this->parent).flags & 0xffffff0f;
		LAB_001a2841:(this->parent).flags = flags1;
		break;
		case 4:if (appearTime == 0) goto LAB_001a2837;
		}
		this = (OlegModuleA *)(this->parent).next;
		if (this == (OlegModuleA *)0x0) {
		return;
		}
		}
		 while( true );
		}
		
	*/
	return;
}

void OlegModuleA::FUN_001a2e30(uint param_1, Vector2* vec1, Vector2* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::FUN_001a2e30(OlegModuleA *this,uint param_1,Vector2 *vec1,Vector2 *vec2){
		this->array[1].y = (float)param_1;
		param_1 = param_1 & 0xffffff;
		this->array[1].x = (float)param_1;
		this->array[5].x = vec1->x;
		this->array[5].y = vec1->y;
		this->array[4].x = vec1->x;
		this->array[4].y = vec1->y;
		this->array[9].x = vec2->x;
		this->array[9].y = vec2->y;
		this->array[8].x = vec2->x;
		this->array[8].y = vec2->y;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::FUN_001a2e90(Color color, ColorTransparent* color2, ColorTransparent* color3, ColorTransparent* color4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::FUN_001a2e90(OlegModuleA *this,Color color,ColorTransparent *color2,ColorTransparent *color3,ColorTransparent *color4){
		float a1;
		float a2;
		Color c1;
		Color c2;
		a1 = color2->alpha;
		c1 = color2->color;
		a2 = color4->alpha;
		c2 = color4->color;
		this->array[1].y = color;
		this->array[1].x = color;
		this->array[5].x = color2->alpha;
		this->array[5].y = (float)color2->color;
		this->array[4].x = a2 + a1;
		this->array[4].y = (float)c2 + (float)c1;
		this->array[9].x = color3->alpha;
		this->array[9].y = (float)color3->color;
		this->array[8].x = color3->alpha;
		this->array[8].y = (float)color3->color;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::UnkFun(Color color1, ColorTransparent* color2, ColorTransparent* color3, ColorTransparent* color4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::UnkFun(OlegModuleA *this,Color color1,ColorTransparent *color2,ColorTransparent *color3,ColorTransparent *color4){
		this->array[1].y = color1;
		color1 = (float)((uint)color1 & 0xffffff);
		this->array[1].x = color1;
		this->array[5].x = color2->alpha;
		this->array[5].y = (float)color2->color;
		this->array[4].x = color4->alpha;
		this->array[4].y = (float)color4->color;
		this->array[9].x = color3->alpha;
		this->array[9].y = (float)color3->color;
		this->array[8].x = 0.0;
		this->array[8].y = 0.0;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::FUN_001a40a0(uint color1, ColorTransparent* param_2, ColorTransparent* param_3, ColorTransparent* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::FUN_001a40a0(OlegModuleA *this,float color1,ColorTransparent *param_2,ColorTransparent *param_3,ColorTransparent *param_4){
		Color CVar1;
		float fVar2;
		float fVar3;
		Color CVar4;
		float fVar5;
		Color CVar6;
		float fVar7;
		float fVar8;
		CVar1 = param_2->color;
		fVar2 = param_2->alpha;
		fVar8 = param_3->alpha * FLOAT_00386ab4 * FLOAT_0039456c;
		fVar7 = (float)param_3->color * FLOAT_00386ab4;
		fVar3 = param_4->alpha;
		CVar4 = param_4->color;
		fVar5 = param_4->alpha;
		CVar6 = param_4->color;
		this->array[1].y = color1;
		this->array[1].x = color1;
		this->array[5].x = fVar2 - fVar8;
		this->array[5].y = (float)CVar1 - fVar7;
		this->array[4].x = fVar3 + (fVar2 - fVar8);
		this->array[4].y = (float)CVar4 + ((float)CVar1 - fVar7);
		this->array[9].x = fVar2 + fVar8;
		this->array[9].y = (float)CVar1 + fVar7;
		this->array[8].x = fVar5 + fVar2 + fVar8;
		this->array[8].y = (float)CVar6 + (float)CVar1 + fVar7;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::FUN_001a41b0(Color param_1, ColorTransparent* param_2, ColorTransparent* param_3, ColorTransparent* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::FUN_001a41b0(OlegModuleA *this,Color param_1,ColorTransparent *param_2,ColorTransparent *param_3,ColorTransparent *param_4){
		Color CVar1;
		float fVar2;
		Color CVar3;
		float fVar4;
		float fVar5;
		fVar5 = FLOAT_00386ab4;
		fVar4 = param_3->alpha;
		CVar1 = param_3->color;
		fVar2 = param_2->alpha;
		CVar3 = param_2->color;
		this->array[1].y = param_1;
		param_3 = (ColorTransparent *)((uint)param_1 & 0xffffff);
		this->array[1].x = (float)param_3;
		fVar4 = fVar4 * fVar5 * FLOAT_0039456c;
		fVar5 = (float)CVar1 * fVar5;
		this->array[5].x = fVar2 - fVar4;
		this->array[5].y = (float)CVar3 - fVar5;
		this->array[4].x = param_4->alpha;
		this->array[4].y = (float)param_4->color;
		this->array[9].x = fVar2 + fVar4;
		this->array[9].y = (float)CVar3 + fVar5;
		this->array[8].x = param_4->alpha;
		this->array[8].y = (float)param_4->color;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleA * __fastcall OlegModuleA::Construct(OlegModuleA *this){
		float fVar1;
		fVar1 = FLOAT_00386ab4;
		(this->parent).field2_0x8.x = FLOAT_00386ab4;
		(this->parent).field2_0x8.y = fVar1;
		(this->parent).value = 0.0;
		(this->parent).next = (OlegModuleAbstract *)0x0;
		(this->parent).spline = (SplineA *)0x0;
		*(undefined4 *)&(this->parent).field_0x28 = 0;
		*(undefined *)&(this->parent).field13_0x2c = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 1) = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 2) = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 3) = 0x7f;
		(this->parent).field14_0x30 = 0.0;
		(this->parent).field15_0x34 = 0.0;
		(this->parent).flags = 0;
		(this->parent).startTime = 0;
		(this->parent).fadeInLength = 0;
		(this->parent).fadeOutLength = 0;
		(this->parent).vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_A;
		(this->parent).flags = 0x1800;
		this->array[1].x = FLOAT_0049648c;
		this->array[1].y = FLOAT_0049648c;
		this->array[4].x = FLOAT_003a3934;
		this->array[4].y = FLOAT_003a3938;
		this->array[5].x = FLOAT_003a3934;
		this->array[5].y = FLOAT_003a3938;
		this->array[8].x = FLOAT_003a393c;
		this->array[8].y = FLOAT_003a3940;
		this->array[9].x = FLOAT_003a393c;
		this->array[9].y = FLOAT_003a3940;
		return this;
		}
		
	*/
	return;
}

void OlegModuleA::Construct_9(float k) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleA * __thiscall OlegModuleA::Construct(OlegModuleA *this,float k){
		(this->parent).field2_0x8.x = k;
		(this->parent).field2_0x8.y = FLOAT_00386ab4;
		(this->parent).value = 0.0;
		(this->parent).next = (OlegModuleAbstract *)0x0;
		(this->parent).spline = (SplineA *)0x0;
		*(undefined4 *)&(this->parent).field_0x28 = 0;
		*(undefined *)&(this->parent).field13_0x2c = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 1) = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 2) = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 3) = 0x7f;
		(this->parent).field14_0x30 = 0.0;
		(this->parent).field15_0x34 = 0.0;
		(this->parent).flags = 0;
		(this->parent).startTime = 0;
		(this->parent).fadeInLength = 0;
		(this->parent).fadeOutLength = 0;
		(this->parent).vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_A;
		(this->parent).flags = 0x1c00;
		this->array[1].x = FLOAT_0049648c;
		this->array[1].y = FLOAT_0049648c;
		this->array[4].x = FLOAT_003a3934;
		this->array[4].y = FLOAT_003a3938;
		this->array[5].x = FLOAT_003a3934;
		this->array[5].y = FLOAT_003a3938;
		this->array[8].x = FLOAT_003a393c;
		this->array[8].y = FLOAT_003a3940;
		this->array[9].x = FLOAT_003a393c;
		this->array[9].y = FLOAT_003a3940;
		return this;
		}
		
	*/
	return;
}

void OlegModuleA::Interpolate1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Interpolate1(OlegModuleA *this){
		float fVar1;
		float fVar2;
		float T;
		FUN_00108ea0(this->array,(this->parent).value,this->array[0].y,this->array[1].y);
		fVar1 = FLOAT_0038639c;
		T = (this->parent).value;
		fVar2 = FLOAT_0038639c - T;
		this->array[2].x = fVar2 * this->array[3].x + T * this->array[5].x;
		this->array[2].y = this->array[3].y * fVar2 + this->array[5].y * T;
		T = (this->parent).value;
		this->array[6].x = this->array[9].x * T + this->array[7].x * (fVar1 - T);
		this->array[6].y = this->array[7].y * (fVar1 - T) + this->array[9].y * T;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Interpolate2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Interpolate2(OlegModuleA *this){
		float fVar1;
		float fVar2;
		float T;
		FUN_00108ea0(this->array,(this->parent).value,this->array[0].y,this->array[1].x);
		fVar1 = FLOAT_0038639c;
		T = (this->parent).value;
		fVar2 = FLOAT_0038639c - T;
		this->array[2].x = fVar2 * this->array[3].x + T * this->array[4].x;
		this->array[2].y = this->array[3].y * fVar2 + this->array[4].y * T;
		T = (this->parent).value;
		this->array[6].x = this->array[8].x * T + this->array[7].x * (fVar1 - T);
		this->array[6].y = this->array[7].y * (fVar1 - T) + this->array[8].y * T;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Shift1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Shift1(OlegModuleA *this){
		this->array[0].x = this->array[1].x;
		this->array[2].x = this->array[4].x;
		this->array[2].y = this->array[4].y;
		this->array[6].x = this->array[8].x;
		this->array[6].y = this->array[8].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Shift2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Shift2(OlegModuleA *this){
		this->array[0].y = this->array[0].x;
		this->array[3].x = this->array[2].x;
		this->array[3].y = this->array[2].y;
		this->array[7].x = this->array[6].x;
		this->array[7].y = this->array[6].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Shift3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Shift3(OlegModuleA *this){
		this->array[0].x = this->array[1].y;
		this->array[2].x = this->array[5].x;
		this->array[2].y = this->array[5].y;
		this->array[6].x = this->array[9].x;
		this->array[6].y = this->array[9].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Shift4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Shift4(OlegModuleA *this){
		this->array[0].y = this->array[0].x;
		this->array[3].x = this->array[2].x;
		this->array[3].y = this->array[2].y;
		this->array[7].x = this->array[6].x;
		this->array[7].y = this->array[6].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Shift5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Shift5(OlegModuleA *this){
		this->array[0].x = this->array[1].x;
		this->array[2].x = this->array[4].x;
		this->array[2].y = this->array[4].y;
		this->array[6].x = this->array[8].x;
		this->array[6].y = this->array[8].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Shift6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleA::Shift6(OlegModuleA *this){
		this->array[0].x = this->array[1].y;
		this->array[2].x = this->array[5].x;
		this->array[2].y = this->array[5].y;
		this->array[6].x = this->array[9].x;
		this->array[6].y = this->array[9].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleA * __thiscall OlegModuleA::Dispose(OlegModuleA *this,byte flag){
		(this->parent).vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void OlegModuleA::Dispose_19(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleA * __thiscall OlegModuleA::Dispose(OlegModuleA *this,byte param_1){
		(this->parent).vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

