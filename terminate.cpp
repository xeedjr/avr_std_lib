/**
 * @file	terminate.cpp
 * @author	boy
 * @version 
 * @date	13 ���. 2014 �.
 * @brief
 */

#include <stdlib.h>

extern "C" void __cxa_pure_virtual()
{
	while (true) {}
}

void terminate() {
	while(1){}
	abort();
}
