#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/ScreenInfo.h"
#include "headers/Known/Math/Matrix4.h"

class ScreenInfoExt {
	public:
		ScreenInfo screenInfo;
		Matrix4 matrix2;
		ScreenInfoExt();

};
