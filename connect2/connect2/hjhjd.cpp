#include <iostream>
#include "test.h"

int main()
{
	Connect con;
	con.init_Socket();
	// 1. ������ socket
	// param1: ��ַЭ���� ipv4 ipv6
	// param2: ����Э������ ��ʽ�׽��� ���ݱ�
	// param3: ʹ�þ����ĳ������Э��
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == -1)
	{
		err("socket");
		return -1;
	}

	// 2. ���������������
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
		// ��������������Ϣ

	con.sendMsg(fd, "F:/Friday_class/deepStudy/train_data/t est0/0_KCA25G_Line_1_20220618203232_R009_9_XHN.jpg");

	//���շ�������Ϣ	
    char recvBuf[BUFSIZ];
    memset(recvBuf, 0, sizeof(recvBuf));
    if (!con.recvMsg(fd, recvBuf, sizeof(recvBuf))) {
        return 0;
    }
    printf("���յ�����Ϣ��%s\n", recvBuf);

	Sleep(1000);
	closesocket(fd);

	con.close_Socket();
	return 0;
}
