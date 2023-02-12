#include "headers/Logging.h"
#include <stdio.h>
#include <unordered_set>

void Logging::Log(const char* msg) {
	printf("%s\n", msg);
}

void Logging::LogCheck(bool result, const char* success, const char* failure) {
	if (result) {
		if (success != 0) {
			printf("%s\n", success);
		}
	}
	else {
		if (failure != 0) {
			printf("%s\n", failure);
		}
	}
}

void Logging::LogUnimplemented(const char* functionName)
{
	static std::unordered_set<const char*> warned;
	if (warned.find(functionName) == warned.end()) {
		printf("NONIMPLEMENTED: %s\n", functionName);
		warned.insert(functionName);
	}
}
