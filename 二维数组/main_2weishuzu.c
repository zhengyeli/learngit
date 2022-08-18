#include <stdio.h>
#include <string.h> 

int main()
{
    int data[2][3] = {0x2002,3,4,5,6,7};
    int *p = data;
    int *p1 = data[0];
    char *p2 = &data[0];

    printf("\r\n"); //
    printf("%d   %d   %d\n",data,data + 1,data[0]); //%u unsigned int
    printf("%d   %d   %d\n",*data,*(data + 1),*data[0]); //%u unsigned int
    printf("%d   %d   %d\n",data[0]+1,data[0]+1,*(data[0]+1)); //%u unsigned int
    printf("\r\n"); //

    printf("%d   %d   %d\n",p,p1,p2); //%u unsigned int
    printf("%d   %d   %d\n",*p,*p1,*p2); //%u unsigned int
	return 0;
}