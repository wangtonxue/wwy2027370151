#include "test.h"
#include "yayaya.h"

//Э��ɹ�ͨѶ��װ�ɹ�
bool Connect::init_Socket() {
    WSADATA wsadata;
    if (0 != WSAStartup(MAKEWORD(2, 2), &wsadata)) {
        err("WSAStartup");
        return false;
    }
    return true;
}

bool Connect::close_Socket()
{
    if (0 != WSACleanup()) {
        err("WSACleanup");
        return false;
    }
    return true;
}

// ������Ϣ
bool Connect::sendMsg(int fd, const char* msg) {
    int ret = send(fd, msg, strlen(msg) + 1, 0);
    if (ret == -1) {
        err("send msg");
        return false;
    }
    return true;
}

// ������Ϣ
bool Connect::recvMsg(int fd, char* buf, int bufSize) {
    //printf("buf:%d\n", sizeof(buf)); // ����Ĵ�СΪָ��Ĵ�С
    int len = recv(fd, buf, bufSize, 0);
    if (len > 0) {
        printf("�����˵: %s\n", buf);
        return true;
    }
    else if (len == 0)
    {
        printf("���������Ѿ��Ͽ���...\n");
    }
    else {
        perror("recv");
    }
    return false;
}