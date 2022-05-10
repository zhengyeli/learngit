#include <stdio.h>
#include <string.h> 

int main()
{
    int a = 1;
    int b = 2;
    printf("\r\n"); //
    printf("%d  %d\n",a,++b); //%u unsigned int
    printf("%d  %d\n",a,b++); //%u unsigned int
    printf("%d  %d\n",a,b); //%u unsigned int
    printf("%d  %d\n",(a,b)); //%u unsigned int
    printf("%d  \n",a,b); //%u unsigned int
    printf("%d  \n",(a,b++)); //%u unsigned int
    printf("%d  \n",(a,b)); //%u unsigned int
	return 0;
}