#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/VideoPlayer/VideoPlayerAbstract.h"

class VideoPlayer : public VideoPlayerAbstract {
	public:
		IDirect3DSurface8* res1;
		IDirect3DSurface8* res2;
		uint width;
		uint height;
		IDirect3DSurface8* fullScreenTexture1;
		IDirect3DSurface8* fullScreenTexture2;

		void* field1_0x1c;
		void* field2_0x20;
		int field3_0x24;
		int field4_0x28;
		void* field7_0x34;
		int field20_0x68;
		int field12_0x48;
		int field13_0x4c;
		int field14_0x50;
		int field15_0x54;
		int field16_0x58;
		int field17_0x5c;
		int field8_0x38;
		int field9_0x3c;
		int field10_0x40;
		int field11_0x44;

		VideoPlayer();

		bool SetVideoInfo(char* fname, uint audioTrackIndex, byte param_3, uint param_4, uint param_5);
		bool FUN_002097f0();
		virtual bool NextFrame();
		virtual bool InitVideo();
		void Dispose(byte flag);
		bool ProcessVideoPlayerFSM();
		virtual int CleanUp();
		static void Swap();
		static void EmptyFunction();
		static void EmptyFunction_10();

};
