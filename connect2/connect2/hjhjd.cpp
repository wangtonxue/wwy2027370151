#include <iostream>
#include "test.h"

int main()
{
	Connect con;
	con.init_Socket();
	// 1. 创建空 socket
	// param1: 地址协议族 ipv4 ipv6
	// param2: 传输协议类型 流式套接字 数据报
	// param3: 使用具体的某个传输协议
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == -1)
	{
		err("socket");
		return -1;
	}

	// 2. 与服务器建立连接
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);
	inet_pton(AF_INET, "192.168.8.126", &addr.sin_addr.S_un.S_addr);

	int ret = connect(fd, (sockaddr*)&addr, sizeof(addr));
	if (ret == -1)
	{
		err("connect");
		return -1;
	}

	int number = 0;
		// 给服务器发送消息

	con.sendMsg(fd, "F:/Friday_class/deepStudy/train_data/t est0/0_KCA25G_Line_1_20220618203232_R009_9_XHN.jpg");

	//接收服务器消息	
    char recvBuf[BUFSIZ];
    memset(recvBuf, 0, sizeof(recvBuf));
    if (!con.recvMsg(fd, recvBuf, sizeof(recvBuf))) {
        return 0;
    }
    printf("接收到的消息：%s\n", recvBuf);

	Sleep(1000);
	closesocket(fd);

	con.close_Socket();
	return 0;
}
