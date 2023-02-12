#include "headers/Known/Game/GameContext/GameContextAbstract.h"

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
	/*
	  long cosIndex;
  long sinIndex;
  float10 cosValue;
  unkbyte10 extraout_ST0;
  float10 sinValue;
  int i;
  
  i = 0;
  do {
    cosValue = (float10)fcos((float10)i * (float10)FLOAT_0039eeb0 * (float10)0.0009765625);
    cosIndex = __ftol2((float)(cosValue * (float10)4096.0 + (float10)0.5));
    sinValue = (float10)fsin(extraout_ST0);
    TRIGONOMETRY_INDEXES[i * 2] = (short)cosIndex;
    sinIndex = __ftol2((float)(sinValue * (float10)4096.0 + (float10)0.5));
    TRIGONOMETRY_INDEXES[i * 2 + 1] = (short)sinIndex;
    i = i + 1;
  } while (i < 0x401);
	*/
}

