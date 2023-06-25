#include "test.h"
#include "yayaya.h"

//协议成功通讯封装成功
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

// 发送消息
bool Connect::sendMsg(int fd, const char* msg) {
    int ret = send(fd, msg, strlen(msg) + 1, 0);
    if (ret == -1) {
        err("send msg");
        return false;
    }
    return true;
}

// 接收消息
bool Connect::recvMsg(int fd, char* buf, int bufSize) {
    //printf("buf:%d\n", sizeof(buf)); // 这里的大小为指针的大小
    int len = recv(fd, buf, bufSize, 0);
    if (len > 0) {
        printf("服务端说: %s\n", buf);
        return true;
    }
    else if (len == 0)
    {
        printf("服务器端已经断开了...\n");
    }
    else {
        perror("recv");
    }
    return false;
}