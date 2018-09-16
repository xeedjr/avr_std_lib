/**
 * @file	terminate.cpp
 * @author	boy
 * @version 
 * @date	13 дек. 2014 г.
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
