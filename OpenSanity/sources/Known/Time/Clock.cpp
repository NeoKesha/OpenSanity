#include "headers/Known/Time/Clock.h"
#include "headers/Global.h"
#include "headers/Logging.h"

Clock::Clock(int fps) {
	Global* GLOBAL = Global::Get();
	int iVar2;
	int ticksPerSecond;
	LARGE_INTEGER startTimestamp;
	LARGE_INTEGER frequency;
	iVar2 = 0;
	this->prevTime = 0;
	FUN_000f7a00(this->timeArray);
	this->fps = fps;
	this->startTimestampLow = 0;
	this->startTimestampHigh = 0;
	this->timestampHigh = 0;
	this->timestampLow = 0;
	if (QueryPerformanceFrequency(&frequency)) {
		ticksPerSecond = frequency.LowPart;
	}
	else {
		ticksPerSecond = 0;
	}
	if (!QueryPerformanceCounter(&startTimestamp)) {
		startTimestamp.LowPart = 0;
		startTimestamp.HighPart = 0;
	}
	Logging::LogCheck(ticksPerSecond == 10000000, "Frequency is 10 MHz, Hyper-V might be enabled!", null);
	this->startTimestampLow = startTimestamp.LowPart;
	this->frequencyLow = ticksPerSecond;
	this->frequencyHigh = ticksPerSecond >> 31;
	this->startTimestampHigh = startTimestamp.HighPart;
	this->field7_0x78 = ticksPerSecond / 7373;
	this->field8_0x7c = ticksPerSecond / 7373 >> 31;

	this->divisions = 0;
	while (ticksPerSecond >= 9000) {
		ticksPerSecond = ticksPerSecond >> 1;
		++this->divisions;
	}
	GLOBAL->SOME_STATE.feedbackCode = 3;
	GLOBAL->FLOAT_0039f094 = 1.0f;
	GLOBAL->FLOAT_0039f098 = 1.0f;
	GLOBAL->FLOAT_0039f09c = 1.0f;
	GLOBAL->FLOAT_0039f0a0 = 1.0f;
	GLOBAL->FLOAT_0039f0a4 = 1.0f;
	GLOBAL->FLOAT_0039f0a8 = 1.0f;
	GLOBAL->FLOAT_0039f0ac = 1.0f;
	GLOBAL->FLOAT_0039f0b0 = 1.0f;
	GLOBAL->TICKS_PER_TIME = (float)ticksPerSecond;
	GLOBAL->TIME_PER_TICK_1 = 1.0f / GLOBAL->TICKS_PER_TIME;
	GLOBAL->SOME_STATE.currentTime = (int)(GLOBAL->TICKS_PER_TIME * 0.0f);
	GLOBAL->SOME_STATE.ticks = GLOBAL->SOME_STATE.currentTime;
	for (int i = 0; i < 8; ++i) {
		this->timeArray[i].flags |= 1;
	}
}

void Clock::FUN_000f7a00(UnkTimePack* timeArray)
{
	Global* GLOBAL = Global::Get();
	for (int i = 0; i < 8; ++i) {
		timeArray[i].flags = 2;
		timeArray[i].time1 = GLOBAL->TICKS_PER_TIME * 0.0f;
		timeArray[i].time2 = GLOBAL->TICKS_PER_TIME * 0.0f;
	}
}

void Clock::FUN_000f63f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl Clock::FUN_000f63f0(Clock *this){
		float deltaTime;
		deltaTime = FixedDeltaTime;
		if (FixedDeltaTime <= 0.0) {
		deltaTime = (float)this->deltaTimeTicks * TimePerTick1;
		}
		SOME_STATE.ticks = (int)(TicksPerTime * deltaTime);
		if ((SOME_STATE.feedbackCode & 1U) != 0) {
		if ((SOME_STATE.feedbackCode & 2U) != 0) {
		SOME_STATE.feedbackCode = SOME_STATE.feedbackCode & 0xfffffffd;
		SOME_STATE.currentTime = SOME_STATE.ticks;
		SOME_STATE.ticks = (int)(TicksPerTime * 0.0);
		return;
		}
		SOME_STATE.currentTime = SOME_STATE.currentTime + SOME_STATE.ticks;
		return;
		}
		SOME_STATE.ticks = (int)(TicksPerTime * 0.0);
		return;
		}
		
	*/
	return;
}

bool Clock::TimeOutCheck(float budget) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall Clock::TimeOutCheck(Clock *this,float budget){
		uint ticksPerFrame;
		int iVar1;
		uint deltaLow;
		uint deltaHight;
		uint uVar2;
		uint uVar3;
		bool bVar4;
		uint timestampHigh;
		int timestampLow;
		uint ticks;
		ticksPerFrame = this->frequencyLow / (uint)this->fps;
		ticks = (uint)((float)this->frequencyLow * budget);
		uVar2 = (int)ticks >> 0x1f;
		iVar1 = _QueryPerformanceCounter@4(&timestampHigh);
		if (iVar1 == 0) {
		timestampHigh = 0;
		timestampLow = 0;
		}
		deltaHight = timestampHigh - this->timestampHigh;
		deltaLow = (timestampLow - this->timestampLow) - (uint)(timestampHigh < (uint)this->timestampHigh);
		uVar3 = this->field8_0x7c + (uint)CARRY4(this->field7_0x78,ticksPerFrame);
		if (uVar3 <= deltaLow) {
		if (uVar3 < deltaLow) goto LAB_000f66a8;
		do {
		if (deltaHight <= this->field7_0x78 + ticksPerFrame) break;
		LAB_000f66a8:do {
		bVar4 = deltaHight < ticksPerFrame;
		deltaHight = deltaHight - ticksPerFrame;
		deltaLow = deltaLow - bVar4;
		}
		 while (uVar3 < deltaLow);
		}
		 while (uVar3 <= deltaLow);
		}
		deltaLow = -(uint)(ticksPerFrame < deltaHight) - deltaLow;
		if ((uVar2 <= deltaLow) && ((uVar2 < deltaLow || (ticks < ticksPerFrame - deltaHight)))) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void Clock::CalculateDeltaTime() {
	LARGE_INTEGER timestamp;
	
	if (!QueryPerformanceCounter(&timestamp)) {
		timestamp.HighPart = 0;
		timestamp.LowPart = 0;
	}
	
	uint time = timestamp.LowPart - this->startTimestampLow;
	time = time << this->divisions;
	this->timestampHigh = timestamp.HighPart;
	this->timestampLow = timestamp.LowPart;
	if (this->prevTime <= time) {
		this->deltaTimeTicks = time - this->prevTime;
	}
	Global* GLOBAL = Global::Get();
	float dt = this->deltaTimeTicks / GLOBAL->TICKS_PER_TIME;
	this->prevTime = time;
	FUN_000f63f0();
	FUN_000f6470(this->timeArray);
	return;
}

void Clock::FUN_000f6470(UnkTimePack* timeArray) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Clock::FUN_000f6470(UnkTimePack *this,Clock *param_2){
		int iVar1;
		UnkTimePack *piVar2;
		uint uVar2;
		uint uVar3;
		float fVar4;
		iVar1 = param_2->deltaTimeTicks;
		piVar2 = (UnkTimePack *)&this->time2;
		uVar3 = 0;
		do {
		fVar4 = FixedDeltaTime;
		if (FixedDeltaTime <= 0.0) {
		fVar4 = (float)iVar1 * TimePerTick1;
		}
		uVar2 = (uint)(TicksPerTime * fVar4 * *(float *)((int)&FLOAT_0039f094 + uVar3));
		if ((*(byte *)&piVar2[-1].time1 & 1) == 0) {
		uVar2 = (uint)(TicksPerTime * 0.0);
		LAB_000f64ec:piVar2->flags = uVar2;
		}
		else {
		if ((*(byte *)&piVar2[-1].time1 & 2) == 0) {
		piVar2[-1].time2 = piVar2[-1].time2 + uVar2;
		goto LAB_000f64ec;
		}
		piVar2[-1].time2 = uVar2;
		piVar2->flags = (int)(TicksPerTime * 0.0);
		piVar2[-1].time1 = piVar2[-1].time1 & 0xfffffffd;
		}
		uVar3 = uVar3 + 4;
		piVar2 = piVar2 + 1;
		if (0x1f < uVar3) {
		return;
		}
		}
		 while( true );
		}
		
	*/
	return;
}

