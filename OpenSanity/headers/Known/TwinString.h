#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinString {
	public:
		char * value;
		int strLength;
		uint strSize;

		TwinString();
		~TwinString();

		TwinString* Set(const char* str);
		void SetValue(const char* string);
		bool SetCdRomVolume();

		void ToLower();
		TwinString* FUN_000249e0(uint param_1);
		void ToUpper();
		int StrDiff(const char* other);
		int StrDiffParseStr(const char* key, TwinString* outString);
		int StrDiffParseFloat(const char* key, float* outFloat);
		int StrParseInt(const char* key, int* outInt);
		TwinString* Concatenate(TwinString* dst, char* str);
		uint FUN_00135e40(char* str);
		bool FUN_001572d0(int length);
		void ParseIntInternal(uint number, int length);
		void** FUN_00157630(float param_1);
		TwinString* ParseInt(uint number);
		TwinString* AppendInt(uint param_1);
		void AppendVariant(char* str);
		TwinString* Copy(char* other);
		TwinString* Append(char* srcStr);
		void ReadFromFile(MemoryStream* memoryStream);
		void Write(MemoryStream* stream);
		
		void ReplaceByStrBeforeC(TwinString* str, char c);
		static TwinString* FUN_00158ec0(TwinString* param_1, int param_2, uint param_3);
		TwinString* FUN_00158fb0(int param_2, uint param_3);
		
		static TwinString* Split(TwinString* result, TwinString* delimiter, TwinString** outStrings);
		int FindSubstringEndPos(int StartIndex, char* stringToFind);
		bool SubstringRelated(char* substring);
		uint Replace(char* substring, char* replaceWith);
		bool FUN_0015a9a0(TwinString* str);
		TwinString* CopyFromCharArray(char* other);
		
		TwinString* Copy_32(TwinString* param_1);

};
