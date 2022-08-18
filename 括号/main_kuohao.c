#include <stdio.h>
#include <string.h> 

int main()
{
	int b=3;
	int arr[]={1,7,8,9,10};
	int *p=arr;
	*(p++)+=123;  //*p=*p+123=arr[0]=129; p = p + 1;
	printf("%d,%d\n",*p,*(++p));  //8,8
    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

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