#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Templates/TwinArray.h"
#include "headers/Templates/TwinArrayIterator.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Math/Vector2.h"

class RendererAbstract {
	public:
		TwinArray<FontRenderer> renderArray;
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
