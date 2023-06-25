#ifndef _YAYAYA_H_
#define _YAYAYA_H

#include<WinSock2.h> // windows平台网络库头文件
#include<WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib") // 库文件

#include<stdbool.h>
#include<stdio.h>

// 服务器端口
#define PORT 8888 // [0, 65536)

// 封装错误提示
#define err(errMsg) printf("[line:%d] %s failed code %d\n", __LINE__, errMsg, WSAGetLastError());

// 初始化socket
bool init_Socket();
// 关闭socket
bool close_Socket();

// 发送消息
bool sendMsg(int fd, const char* msg);

// 接收消息
bool recvMsg(int fd, char* buf, int bufSize);


#endif // !_TCPSOCKET_H_
