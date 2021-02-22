#include <stdio.h>
#include <arpa/inet.h>

int main()
{
    unsigned char buf[4]={11, 50, 168, 192};
    int num = *(int *)buf;
    int sum = ntohl(num);//网络地址转换为主机地址
    unsigned char *p = (unsigned char *)&sum;
    printf("%d %d %d %d\n", *p, *(p+1), *(p+2), *(p+3);

    return 0;
}