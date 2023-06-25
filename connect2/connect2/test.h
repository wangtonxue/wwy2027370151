#ifndef _TEST_H_
#define _TEST_H_

#include<WinSock2.h> // windowsƽ̨�����ͷ�ļ�
#include<WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib") // ���ļ�

#include<stdbool.h>
#include<stdio.h>

// �������˿�
#define PORT 8888 // [0, 65536)

// ��װ������ʾ
#define err(errMsg) printf("[line:%d] %s failed code %d\n", __LINE__, errMsg, WSAGetLastError());

class Connect {
public:
    bool init_Socket();
    bool close_Socket();
    bool sendMsg(int fd, const char* msg);
    bool recvMsg(int fd, char* buf, int bufSize);
};


#endif // !_TEST_H_
