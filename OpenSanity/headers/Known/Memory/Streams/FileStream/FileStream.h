#pragma once

#include "headers/OpenSanityGlobal.h"

class FileStream {
	public:
		HANDLE handle;
		int errorNumber;

		FileStream();
		~FileStream();
		virtual void OpenFile(const char* fname, int fmode);
		virtual int IsInvalid();
		FileStream* ReOpenFile2(const char* fname, int param_2);
		void CloseFile();
		virtual bool EndOfStream();
		static int ReadLineByLine(size_t length, char* buffer, char** outStrings);
		virtual int Read(byte* buffer, size_t size);
		virtual size_t GetLength();
		virtual uint Write(byte* buffer, size_t size);
		virtual unsigned int  GetPosition();
		virtual unsigned int  Rewind();
		virtual unsigned int  SeekEnd();
		virtual unsigned int  SeekForward(long length);
		virtual unsigned int  SeekFromStart(long length);
		virtual void ReadLong(byte* buffer);
		virtual void ReadFloat(byte* buffer);
		virtual void ReadByte(byte* buff);
		virtual void ReadInt2(byte* buffer);
		virtual void ReadInt3(byte* buffer);
		virtual void ReadShort(byte* buffer);
		virtual void ReadByte2(byte* buffer);
		virtual void ReadUInt(byte* buffer);
		virtual void ReadInt5(byte* buffer);
		virtual void ReadShort2(byte* param_1);
		virtual void ReadByte3(byte* param_1);
		virtual void WriteLong(long value);
		virtual void WriteFloat(float value);
		virtual void WriteByte(byte value);
		virtual void WriteInt3(int value);
		virtual void WriteInt2(int value);
		virtual void WriteShort(short value);
		virtual void WriteByte2(byte value);
		virtual void WriteInt5(int value);
		virtual void WriteUInt(uint value);
		virtual void WriteShort2(short value);
		virtual void WriteByte3(byte value);
		virtual int ReadCheck(byte* buffer, uint size, bool check);

};
