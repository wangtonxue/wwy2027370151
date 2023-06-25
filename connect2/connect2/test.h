#ifndef _TEST_H_
#define _TEST_H_

#include<WinSock2.h> // windows平台网络库头文件
#include<WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib") // 库文件

#include<stdbool.h>
#include<stdio.h>

// 服务器端口
#define PORT 8888 // [0, 65536)

// 封装错误提示
#define err(errMsg) printf("[line:%d] %s failed code %d\n", __LINE__, errMsg, WSAGetLastError());

class Connect {
public:
    bool init_Socket();
    bool close_Socket();
    bool sendMsg(int fd, const char* msg);
    bool recvMsg(int fd, char* buf, int bufSize);
};


#endif // !_TEST_H_
