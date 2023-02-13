#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Renderer/RendererSubStruct.h"
#include "headers/Known/Math/Vector2.h"

class RendererAbstract {
	public:
		RendererSubStruct substruct;
		Vector2 vec;

		RendererAbstract();
		~RendererAbstract();

		virtual void CleanUp();
		virtual void UnkMethod1();
		virtual void UnkMethod2();
		virtual void Render();
		virtual void UnkMethod5();
		virtual void SetXY(Vector2* vec);
		virtual void FUN_00114940();
		virtual void SwapBuffer();

};
