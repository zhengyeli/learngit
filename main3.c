#include <stdio.h>
#include <string.h> 


int main()
{
    //__int32_t -2,147,483,648 to 2,147,483,647
	__int32_t n1 = 0xffffffff;  //-1
	__int32_t g2147483647 = 0x7fffffff;  //(2^32-1)/2
	__int32_t n = 0x7fffffff + 1;  //-2,147,483,648

    printf("%x   %d\n",n1,n1);

    unsigned int b = (unsigned int)n1;

    printf("%x   %u\n",b,b); //%u unsigned int
    printf("%x   %d\n",b,b); //%d int

// 测试负数移位结果
	__int16_t num = -1024;  //
    __int16_t m = num >> 8;
    __uint8_t um = num >> 8;
    __int16_t um1 = um << 8;
    printf("\r\n"); //
    printf("%x   %d\n",num,num); //%u unsigned int
    printf("%x   %d\n",m,m); //%d int
    printf("%x   %d\n",um,um); //%d int
    printf("%x   %d\n",um1,um1); //%d int
	return 0;
}