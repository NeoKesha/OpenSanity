#pragma once

#include <stdio.h>

class Logging {
public:
	static void Log(const char* msg);
	template<typename... Args>
	static void LogFormat(const char* format, Args&&... args) {
		printf(format, args...);
	}
	static void LogCheck(bool result, const char* success, const char* failure);
	static void LogUnimplemented(const char* functionName);
};