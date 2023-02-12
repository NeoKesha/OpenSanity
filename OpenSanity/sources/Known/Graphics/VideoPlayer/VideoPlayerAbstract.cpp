#include "headers/Known/Graphics/VideoPlayer/VideoPlayerAbstract.h"

VideoPlayerAbstract::VideoPlayerAbstract() {
	(this->fmvName).value = (char*)0x0;
	(this->fmvName).strLength = 0;
	(this->fmvName).strSize = 0;
	this->flags = 0;
	this->flags = 0x400;
}

VideoPlayerAbstract::~VideoPlayerAbstract() {

}

void VideoPlayerAbstract::SetFlag() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall VideoPlayerAbstract::SetFlag(VideoPlayerAbstract *this){
		this->flags = this->flags | 0x80;
		return;
		}
		
	*/
	return;
}

void VideoPlayerAbstract::ResetFlag() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall VideoPlayerAbstract::ResetFlag(VideoPlayerAbstract *this){
		this->flags = this->flags & 0xffffff7f;
		return;
		}
		
	*/
	return;
}

