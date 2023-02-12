#include "headers/Known/Credits.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/Graphics/Font/Font.h"
void Credits::ParseBufferLines(char* buffer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Credits::ParseBufferLines(Credits *this,char *buffer){
		char *currentPtr;
		char **ppcVar1;
		uint i;
		char char;
		this->flags = this->flags & 0xff000000;
		char = *buffer;
		currentPtr = buffer;
		do {
		if (char == '\0') {
		ppcVar1 = (char **)VirtualPool::AllocateMemory((this->flags & 0xfff) << 2);
		i = 0;
		this->lines = ppcVar1;
		if ((this->flags & 0xfff) != 0) {
		do {
		this->lines[i] = buffer;
		char = *buffer;
		while (char != '\0') {
		currentPtr = buffer + 1;
		buffer = buffer + 1;
		char = *currentPtr;
		}
		do {
		currentPtr = buffer + 1;
		buffer = buffer + 1;
		}
		 while (*currentPtr == '\0');
		i = i + 1;
		}
		 while (i < (this->flags & 0xfff));
		}
		return;
		}
		char = *currentPtr;
		if ((char == '\r') && (currentPtr[1] == '\n')) {
		LAB_001a1fb6:*currentPtr = '\0';
		currentPtr[1] = '\0';
		currentPtr = currentPtr + 2;
		LAB_001a1fcd:i = this->flags;
		this->flags = (i + 1 ^ i) & 0xfff ^ i;
		}
		else {
		if (char == '\n') {
		if (currentPtr[1] != '\r') goto LAB_001a1fc9;
		goto LAB_001a1fb6;
		}
		if (char == '\r') {
		LAB_001a1fc9:*currentPtr = '\0';
		currentPtr = currentPtr + 1;
		goto LAB_001a1fcd;
		}
		currentPtr = currentPtr + 1;
		}
		char = *currentPtr;
		}
		 while( true );
		}
		
	*/
	return;
}

void Credits::Construct(Font* font, char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Credits * __thiscall Credits::Construct(Credits *this,Font *font,char *fname){
		float fVar1;
		float fVar2;
		this->font = font;
		MemoryStream::ConstructFile(&this->stream,fname,'\x01');
		fVar2 = FLOAT_0038a934;
		this->field4_0x20 = FLOAT_00386608;
		fVar1 = FLOAT_0038639c;
		this->lineSpacing = fVar2;
		fVar2 = FLOAT_0038a838;
		this->lines = (char **)0x0;
		this->field5_0x24 = fVar1;
		this->field7_0x2c = fVar2;
		this->creditsOffset = fVar1;
		this->flags = 0;
		ParseBufferLines(this,(char *)(this->stream).startPtr);
		return this;
		}
		
	*/
	return;
}

void Credits::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Credits::Dispose(Credits *this){
		VirtualPool::FreeMemory(this->lines);
		this->lines = (char **)0x0;
		MemoryStream::Dispose(&this->stream);
		return;
		}
		
	*/
	return;
}

bool Credits::MoveCredits(SomeState* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall Credits::MoveCredits(Credits *this,SomeState *time){
		uint uVar1;
		float newOffset;
		uVar1 = this->flags;
		newOffset = this->creditsOffset -(float)time->ticks * TimePerTick1 * this->field5_0x24 * this->field4_0x20;
		this->creditsOffset = newOffset;
		if ((uVar1 >> 0xc & 0xfff) < (uVar1 & 0xfff)) {
		newOffset = this->lineSpacing + newOffset;
		if (newOffset < 0.0) {
		this->creditsOffset = newOffset;
		this->flags = ((uVar1 & 0xfffff000) + 0x1000 ^ uVar1) & 0xfff000 ^ uVar1;
		}
		return true;
		}
		if (FLOAT_00386394 < newOffset) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void Credits::DrawCredits(FontRenderer* fontRenderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Credits::DrawCredits(Credits *this,FontRenderer *fontRenderer){
		float fVar1;
		float fVar2;
		uint i;
		float local_4;
		local_4 = this->creditsOffset;
		i = this->flags;
		fontRenderer->field13_0x34 = 3;
		fVar1 = this->field7_0x2c;
		fontRenderer->originY = this->field7_0x2c;
		fVar2 = FLOAT_0038639c;
		fontRenderer->originX = fVar1;
		fontRenderer->font = this->font;
		i = i >> 0xc & 0xfff;
		fontRenderer->color = COLOR_WHITE;
		if (local_4 < fVar2) {
		do {
		if ((this->flags & 0xfff) <= i) {
		return;
		}
		FontRenderer::DrawText(fontRenderer,0.5,local_4,this->lines[i]);
		local_4 = this->lineSpacing + local_4;
		i = i + 1;
		}
		 while (local_4 < FLOAT_0038639c);
		}
		return;
		}
		
	*/
	return;
}

