#include "headers/Global.h"

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