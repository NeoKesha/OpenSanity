#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class AiPosition {
	public:
		Vector4 position;
		short nodeType;

		bool FUN_00176890(UnkFamily27Wrapper* wrapper);
		void Construct(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);

};
