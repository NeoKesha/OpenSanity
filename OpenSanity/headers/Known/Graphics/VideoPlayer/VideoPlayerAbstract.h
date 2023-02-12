#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class VideoPlayerAbstract {
	public:
		uint flags;
		TwinString fmvName;

		VideoPlayerAbstract();
		~VideoPlayerAbstract();

		virtual void SetFlag();
		virtual void ResetFlag();

};
