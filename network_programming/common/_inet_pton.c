#include <stdio.h>
#include <arpa/inet.h>

int main()
{
    char buf[] = "192.168.50.11";
    unsigned int num = 0;
    inet_pton(AF_INET, buf, &num);//4bytes
    unsigned char *p = (unsigned char *)&num;
    printf("%d %d %d %d\n", *p, *(p+1), *(p+2), *(p+3));

    char ip[16] = "";
    printf("%s\n", inet_ntop(AF_INET, &num, ip, 16));

    return 0;
}