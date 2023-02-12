#pragma once

#include "headers/OpenSanityGlobal.h"

class AnimationBlob {
	public:
		uint size;
		ushort parameter;
		int animationBuffer;

		int CalculateAnimationLength();
		void Write(MemoryStream* stream);
		AnimationBlob* Init(uint* param_1);

};
