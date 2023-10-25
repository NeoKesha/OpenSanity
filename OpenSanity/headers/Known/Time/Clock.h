#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Time/UnkTimePack.h"

class Clock {
	public:
		uint prevTime; //each tick added deltaTime?
		uint deltaTimeTicks; //should be around 93-94
		UnkTimePack timeArray[8];
		int fps; //60
		uint divisions;
		uint frequencyLow;
		uint frequencyHigh;
		int field7_0x78;
		int field8_0x7c;
		uint startTimestampLow;
		uint startTimestampHigh;
		uint timestampLow;
		uint timestampHigh;

		Clock(int fps);

		void FUN_000f7a00(UnkTimePack* timeArray);
		void FUN_000f63f0();
		bool TimeOutCheck(float budget);
		//void Construct(int fps);
		void CalculateDeltaTime();
		void FUN_000f6470(UnkTimePack* timeArray);

};
