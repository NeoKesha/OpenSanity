#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Time/UnkTimePack.h"

class Clock {
	public:
		uint prevTime;
		uint deltaTimeTicks;
		UnkTimePack timeArray[8];
		int fps;
		uint frequencyLow;
		uint frequencyHigh;
		uint startTimestampLow;
		uint startTimestampHigh;
		uint timestampHigh;
		uint timestampLow;

		int field7_0x78;
		int field8_0x7c;
		uint divisions;

		Clock(int fps);

		void FUN_000f7a00(UnkTimePack* timeArray);
		void FUN_000f63f0();
		bool TimeOutCheck(float budget);
		//void Construct(int fps);
		void CalculateDeltaTime();
		void FUN_000f6470(UnkTimePack* timeArray);

};
