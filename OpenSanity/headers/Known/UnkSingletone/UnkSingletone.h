#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkSingletone {
	public:
		int cnt;
		int poolSize;
		void * pool;
		int field3_0xc;
		int field1_0x4;
		UnkSingletoneElement * collection;

		UnkSingletone();
		UnkSingletone(int cnt, int param_2);
		static UnkSingletone* Get();

};
