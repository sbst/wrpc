#include "wrpc.h"
#include "Info.h"

const char* GetValue(struct SInfo* pInfo)
{
	return pInfo->value;
}

const char* GetHello()
{
	return "Hello";
}