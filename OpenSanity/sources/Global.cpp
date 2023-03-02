#include "headers/Global.h"

float Global::TwinSin(float* num)
{
	//Eats value from 0 to 65535
	float cos;
	float sin;
	Trigonometry(num, &cos, &sin);
	return sin;
}

void Global::Trigonometry(float* a, float* cos, float* sin)
{
	Global* GLOBAL = Get();

	float val = *a;
	int idx = (val / 65536.0f) * 1024.0f;
	*cos = GLOBAL->TRIGONOMETRY_INDEXES[idx*2] / 4096.0f;
	*sin = GLOBAL->TRIGONOMETRY_INDEXES[idx*2 + 1] / 4096.0f;
	//TODO: support negative values and values out range
	//TODO: this shit ain't working, made up my own
	//Probably doesn't work since Xbox uses float10
	/*
	uint uVar1;
	uint uVar2;
	uint uVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	uVar1 = (reinterpret_cast<int&>(*a) + 8U) >> 4;
	uVar2 = uVar1 & 0xc00; //sign?
	uVar3 = (reinterpret_cast<int&>(*a) + 8U) & 0xf;
	uVar1 = uVar1 & 0x3ff; //exp?
	if (uVar2 < 0x801) {
		if ((uVar2 == 0x800) || (uVar2 == 0)) {
			uVar3 = uVar3 - 8;
			goto LAB_000d2a5f;
		}
		if (uVar2 != 0x400) goto LAB_000d2a5f;
	}
	else if (uVar2 != 0xc00) goto LAB_000d2a5f;
	uVar1 = 0x400 - uVar1;
	uVar3 = 7 - uVar3;
LAB_000d2a5f:
	fVar5 = (float)(int)GLOBAL->TRIGONOMETRY_INDEXES[uVar1 * 2] * 0.0002441406;
	fVar6 = (float)(int)GLOBAL->TRIGONOMETRY_INDEXES[uVar1 * 2 + 1] * 0.0002441406;
	if (uVar3 == 0) {
		*cos = fVar5;
		*sin = fVar6;
	}
	else {
		fVar4 = GLOBAL->PI_2 * 0.0002441406 * 0.0625 * reinterpret_cast<float&>(uVar3);
		*cos = fVar5 - fVar4 * fVar6;
		*sin = fVar4 * fVar5 + fVar6;
	}
	if (uVar2 == 0x400) {
		*cos = 0.0 - *cos;
	}
	else {
		if (uVar2 == 0x800) {
			*cos = 0.0 - *cos;
			*sin = 0.0 - *sin;
			return;
		}
		if (uVar2 == 0xc00) {
			*sin = 0.0 - *sin;
			return;
		}
	}
	return;
	*/
}

Global::Global() {
	DIRECT3D8 = Direct3DCreate8(D3D_SDK_VERSION);
	LANGUAGE_COUNT = 5;
	LANGUAGE_LIST = new const char* [LANGUAGE_COUNT];
	LANGUAGE_LIST[0] = "English";
	LANGUAGE_LIST[1] = "French";
	LANGUAGE_LIST[2] = "German";
	LANGUAGE_LIST[3] = "Spanish";
	LANGUAGE_LIST[4] = "Italian";
	SCREEN_WIDTH = 640;
	SCREEN_HEIGHT = 480;
	IS_PAL = false;
	INTERLACED_MODE = false;
	GRAPHCIS_ENABLED = true;
	FPS = 60;
	FIXED_DELTA_TIME = 1.0f / (float)FPS;
	IS_WIDESCREEN = true;
	IS_WINDOWED = true;
	D3DEVICE_TYPE = D3DDEVTYPE::D3DDEVTYPE_HAL;

	ZeroMemory(&DS_CAPS, sizeof(DSBCAPS));
	DS_CAPS.dwSize = sizeof(DSBCAPS);

	SYSTEMTIME time;
	FILETIME time2;
	SystemTimeToFileTime(&time, &time2);
	GetSystemTime(&time);
	ENV_INT_114_COPYRIGHT_HASH = (time2.dwLowDateTime >> 0x10 & 0xff) + ENV_INT_114_COPYRIGHT_HASH + (time2.dwLowDateTime >> 8 & 7) * 0xcd6;
	LANGUAGE_SELECTED = LANGUAGE_ENGLISH;
}