#pragma once

#include "headers/OpenSanityGlobal.h"

class MemoryStream {
	public:
		uint flags;
		byte * startPtr;
		byte * currentPtr;
		size_t length;

		static void ReadInt2(MemoryStream* stream, uint param_2);
		virtual void WriteInt(uint param_2);
		uint FUN_0020d520(size_t param_1);
		virtual MemoryStream* Contruct2(uint param_1, byte param_2, ushort param_3);
		void Construct(void* memptr, size_t length, byte flag, short param_4);
		void Dispose();
		virtual void Write(byte* data, uint length);
		uint OpenFile(char* fname, char param_2);
		virtual void WriteStreamTo(uint len, MemoryStream* destination);
		void WriteStreamTo_9(MemoryStream* destination);
		MemoryStream* ConstructFile(char* fname, char mode);
		virtual void FUN_0020fde0(char* fname);
		virtual void Read(int* outArray, uint length, uint var);
		virtual bool EndOfStream();
		void Dispose_14(byte param_1);
		virtual void ReadUInt(uint* out);
		virtual size_t GetPosition();
		virtual void SeekBackwards(uint unused, int amount);
		static void EmptyFunction();
		static bool IsInvalid();
		virtual size_t GetLength();
		virtual void Rewind();
		virtual void SeekEnd();
		virtual void SeekForward(int amount);
		virtual void SeekFromStart(int amount);
		virtual void ReadLong(int* outArray);
		virtual void ReadFloat(float outArray);
		virtual void ReadByte(byte* outArray);
		virtual void ReadInt2_28(int* param_1);
		virtual void ReadInt3(int* param_1);
		virtual void ReadShort(short* outArray);
		virtual void ReadByte2(byte* outArray);
		virtual void ReadInt5(int* param_1);
		virtual void ReadShort2(short* param_1);
		virtual void ReadByte3(byte* param_1);
		virtual void WriteLong(long* value);
		virtual void WriteFloat(float param_2);
		virtual void WriteByte(byte value);
		virtual void WriteInt_38(int param_2);
		virtual void WriteInt_39(int param_2);
		virtual void WriteShort(short value);
		virtual void WriteByte2(byte value);
		virtual void WriteInt_42(short value);
		virtual void WriteInt_43(short value);
		virtual void WriteShort_44(short param_2);
		virtual void WriteByte3(byte param_2);
		int* FUN_0020d740(int* param_1);

};
