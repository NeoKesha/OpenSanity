#pragma once
#include "ForwardDeclaration.h"
#include "headers/Logging.h"
#include <d3dx8.h>
#include <dsound.h>

#define null (nullptr)

typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef byte byte1;

const int LANGUAGE_ENGLISH = 1;
const int LANGUAGE_JAPANESE = 2;
const int LANGUAGE_GERMAN = 3;
const int LANGUAGE_FRENCH = 4;
const int LANGUAGE_SPANISH = 5;
const int LANGUAGE_ITALIAN = 6;
const int LANGUAGE_KOREAN = 7;
const int LANGUAGE_TCHINESE = 8;
const int LANGUAGE_PORTUGUESE = 9;

enum UIPresetIndex {
	
};

enum Keys {

};

enum FMVIndex {

};

enum ComponentId {

};

enum GameState {
	STATE0,
	STATE1,
	STATE2,
	STATE3,
	STATE4,
	STATE5
};

class UnkGlobalStruct {
public:
	int field0_0x0 = 2;
	int field1_0x4 = 2;
	int field2_0x8 = 0;
	int field3_0xc = 1;
	int field4_0x10 = 0;
	int field5_0x14 = 0;
	int field6_0x18 = 0;
	int field7_0x1c = 1;
	int field8_0x20 = 1;
	int field9_0x24 = 1;
	int field10_0x28 = 0;
	int field11_0x2c = 0;
	int field12_0x30 = 0;
	int field13_0x34 = 0;
	int field14_0x38 = 0;
	int field15_0x3c = 0;
	int field16_0x40 = 0;
	int field17_0x44 = 0;
	int field18_0x48 = 0;
	int field19_0x4c = 0;
	int field20_0x50 = 0;
	int field21_0x54 = 4;
	int field22_0x58 = 2;
};

class ParticleInstance {
public: 
	//Fields correspond to order of fields in Ghidra project, but unnamed
	int field_0x0;
	int field_0x4;
	short short1;
	short short2;
	short short3;
	short short4;
	short short5;
	short short6;
	int num1;
	char str[16];
	int num2;
	int num3;
	float fval1;
	short short7;
	short short8;
	float fval2;
	float fval3;
	short short9;
	byte data[14];
};