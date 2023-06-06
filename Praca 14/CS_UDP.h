#pragma once
#include <winsock2.h>

class CS_UDP {
public:
	CS_UDP();
	void SendMsg(const char sendBuf[]);
	void RecMsg();
	~CS_UDP();
private:
	SOCKET m_sServer;
	struct sockaddr_in m_SocAddrClient;
	bool m_terminal;
};