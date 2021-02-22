#include <arpa/inet.h>
#include <stdio.h>

int main()
{
    char buf[4] = {192,168,50,11};
    int num = *(int *)buf;
    int sum = htonl(num);
    unsigned char *p = &sum;

    printf("%d %d %d %d\n", *p , *(p+1), *(p+2), *(p+3));

    unsigned short a = 0x0102;
    unsigned short b = htons(a);//主机地址转换为网络地址

    printf("%x\n", b);

    return 0;
}