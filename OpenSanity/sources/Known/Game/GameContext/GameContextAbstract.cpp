#include "headers/Known/Game/GameContext/GameContextAbstract.h"
#include "headers/Global.h"
#include <cmath>

GameContextAbstract::GameContextAbstract() {
	this->profile = 0;
	this->unkField0 = 1.0f;
	this->color = Color(0,0,0,0);
	(this->restrictValue).value = (char*)0x0;
	(this->restrictValue).strLength = 0;
	(this->restrictValue).strSize = 0;
	BuildCosTable();
	return;
}


void GameContextAbstract::DoStuff(int flags) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameContextAbstract::DoStuff(GameContextAbstract *this,int flags){
		ChunkList *chunkList;
		bool isGameState3;
		bool bVar1;
		Clock *clock;
		isGameState3 = GameState == 3;
		if ((char)flags == '\0') {
		if (VideoController != (VideoController *)0x0) {
		VideoController::FUN_001f68b0(VideoController);
		}
		clock = GlobalClock;
		bVar1 = isGameState3;
		chunkList = ChunkList::GetInstance();
		ChunkList::ProcessChunks(chunkList,bVar1,clock);
		if (!isGameState3) {
		UnkClassC::FUN_001e2940(PTR_003e6bf4);
		}
		}
		if (SaveSystem != (SaveSystem *)0x0) {
		 HDD related (*((SaveSystem->parent).vtable)->Method7)(&SaveSystem->parent,(int)&SOME_STATE);
		}
		(*this->vtable->DoGameControllerStuff)((GameContext *)this,flags);
		if (Renderer != (Renderer *)0x0) {
		(*((Renderer->parent).vtable)->UpdateShadersClock)(GlobalClock->timeArray);
		return;
		}
		return;
		}
		
	*/
	return;
}

void GameContextAbstract::BuildCosTable()
{
	Global* GLOBAL = Global::Get();

	for (int i = 0; i < 1024; ++i) {
		float cosValue = cosf(((float)i * 1.5707964f * 0.0009765625f));
		short cosIndex = (short)(cosValue * 4096.0f + 0.5f);
		float sinValue = sinf(((float)i * 1.5707964f * 0.0009765625f));
		short sinIndex = (short)(sinValue * 4096.0f + 0.5f);
		GLOBAL->TRIGONOMETRY_INDEXES[i * 2] = cosIndex;
		GLOBAL->TRIGONOMETRY_INDEXES[i * 2 + 1] = sinIndex;
	}
	return;
}

