#include <stdio.h>
#include <string.h> 

int main()
{
    char a = -1;
    unsigned char ua = -2;

    printf("\r\n"); //
    printf("%x  %d\n",a,a); //%u unsigned int
    printf("%x  %d\n",ua,ua); //%u unsigned int
    int d = ua;
    unsigned int uc = ua;

    printf("%x  %d\n",d,d); //%u unsigned int
    printf("%04x  %d\n",uc,uc); //%u unsigned int

    unsigned int ud = 2444 - 2445;
    
    unsigned int num1 = ud + 1;
    int num = ud + 1;

    printf("%x  %u\n",ud,ud); //%u unsigned int
    
    printf("%x  %u\n",num1,num1); //%u unsigned int
    printf("%08x  %d\n",num,num); //%u unsigned int
	return 0;
}