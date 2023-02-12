#pragma once

class Logging {
public:
	static void Log(const char* msg);
	static void LogCheck(bool result, const char* success, const char* failure);
	static void LogUnimplemented(const char* functionName);
};