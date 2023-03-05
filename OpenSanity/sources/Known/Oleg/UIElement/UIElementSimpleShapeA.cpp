#include "headers/Known/Oleg/UIElement/UIElementSimpleShapeA.h"

#include "headers/Global.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"
UIElementSimpleShapeA::UIElementSimpleShapeA(int cnt, TwinsanityMaterialShader* shader) : UIElementSimpleShape()
{
	Global* GLOBAL = Global::Get();

	float fVar1;
	int iVar2;
	float fVar4;

	fVar1 = GLOBAL->PI_2;
	this->field1_0x1c = Color(1.0f,1.0f,1.0f,1.0f);
	this->field2_0x20 = Color(1.0f, 1.0f, 1.0f, 1.0f);
	this->field3_0x24 = 0;
	this->field4_0x28 = 0;
	(this->field5_0x2c).x = 1.0;
	(this->field5_0x2c).y = 1.0;
	this->field6_0x34 = 0;
	this->field7_0x38 = (int*)0x0;
	this->field8_0x3c = 0;
	this->field9_0x40 = 0;
	fVar4 = 65536.0f / fVar1;
	this->field10_0x44 = 0.0f;
	this->field11_0x48 = 0.0f;
	this->field12_0x4c = fVar4 * fVar1;
	this->field13_0x50 = 0.0;
	this->field15_0x58 = new Vector4[cnt + 1];
	this->field14_0x54 = new Vector2[cnt + 1];
	FUN_00102210(shader);
	FUN_00102060(cnt * 2, this->field15_0x58, this->field14_0x54);
}
UIElementSimpleShapeA::~UIElementSimpleShapeA()
{
	delete this->field15_0x58;
	delete this->field14_0x54;
}
void UIElementSimpleShapeA::FUN_00102060(byte param_1, Vector4* param_2, Vector2* param_3) {
	if ((this->cnt & 0x100U) != 0) {
		delete field2_0x14;
		delete field3_0x18;
	}
	this->cnt = param_1;
	field2_0x14 = param_3;
	field3_0x18 = param_2;
	return;
}
