#include <stdio.h>
int main()
{
 
	int b=3;
	int arr[]={6,7,8,9,10};
	int *p=arr;
	*(p++)+=123;  //*p=*p+123=arr[0]=129
	printf("%d,%d\n",*p,*(++p));  //8,8
    printf("%d,%d\n",*p,*(++p));  //8,8

	int num = 1;
	printf("%d %d",num,!num);
	return 0;
}