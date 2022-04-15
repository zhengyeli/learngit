#include <stdio.h>
#include <string.h> 

union main3
{
    /* data */
	__int32_t a;  //-1
    __int8_t b;  //-1
}union_def;

int main()
{

    union main3 data;
    data.a = 0x04030201;
    printf("\r\n"); //
    printf("%x   %d    %d\n",data,data,&data); //%u unsigned int
    printf("%x   %d    %d\n",data.a,data.a,&data.a); //%u unsigned int
    printf("%x   %d    %d\n",data.b,data.b,&data.b); //%u unsigned int

    __uint8_t *num = &data;
    printf("%x   %d    %d\n",*num,*num,num); //%u unsigned int
	return 0;
}