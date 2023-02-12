#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"

class Credits {
	public:
		uint flags;
		Font * font;
		MemoryStream stream;
		char * * lines;
		float lineSpacing;
		float creditsOffset;

		void ParseBufferLines(char* buffer);
		void Construct(Font* font, char* fname);
		void Dispose();
		bool MoveCredits(SomeState* time);
		void DrawCredits(FontRenderer* fontRenderer);

};
