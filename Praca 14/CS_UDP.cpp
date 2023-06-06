#include "CS_UDP.h"
#include <iostream>
#pragma comment(lib, "ws2_32.lib")

CS_UDP::CS_UDP() :m_terminal(false) {
	WORD sockVersion = MAKEWORD(2, 2);
	WSADATA wsaData;
	if (WSAStartup)
}