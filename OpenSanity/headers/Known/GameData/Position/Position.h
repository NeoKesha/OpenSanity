#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class Position {
	public:
		Vector4 position;

		virtual void Write(MemoryStream* stream);
		void Construct(MemoryStream* stream);

};
