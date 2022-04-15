#include "stdio.h"
#include "folder/fun.h"

#define MAX_MACRO(a,b) ((a)>(b)?(a):(b))

int *handle1;
int *handle2;

int MAX_FUNC(int a,int b) {
printf("a: %u\n",a);
printf("b: %u\n",b);
return ((a)>(b)?(a):(b));

}

int testFunc()
{
unsigned int a = 1;
int b = -1;

unsigned char a1 = 50;
char b1 = -10;


printf(" MACRO: max of a and b is: %u\n",MAX_MACRO(a,b));
printf("FUNC : max of a and b is: %u\n",MAX_FUNC(a,b));

printf(" MACRO: max of a and b is: %u\n",MAX_MACRO(a1,b1));
printf("FUNC : max of a and b is: %u\n",MAX_FUNC(a1,b1));
return 0;
}

char data[20] = {0};

int func1(){
    printf("1\n");
}

int *func2(){
    printf("2\n");
}

typedef struct{
    unsigned char rezerved:4;
    unsigned char customLed:1;
    unsigned char wifiLed:2;
    unsigned char autoScrOff:1;    //status bit7 自动息屏开关 bit6-5 wifi指示灯开关 bit4 自定义指示灯

}_mystruct;


void main(int argc, char **str)
{

data[0] = 0x33;
data[1] = 0x01;
data[2] = 0x10;
data[3] = 0;
data[4] = 0;
data[5] = 0;

//data[19] = Govee_Utils_GetBccCode1(data, 19);
#if 1
_mystruct mystruct;
mystruct.rezerved = 0;
mystruct.customLed = 0;
mystruct.wifiLed = 0x01;
mystruct.autoScrOff = 1;
printf("value is %d\n", mystruct);
printf("sizeof(mystruct) is %ld\n", sizeof(mystruct));
printf("sizeof(_mystruct) is %ld\n", sizeof(_mystruct));
printf("wifiled is %d\n", mystruct.wifiLed);

#endif


//printf("%s",str[0]);
//printf("%d",str[1][1] - '0');

unsigned char result = 128;
__uint16_t sum, sum1;
//sum = result * 256;
sum1 = result >> 8;

printf("result is %x\n",sum1);
printf("result is %d",sum1);

int a;

int b;

printf("result is %x\n",sum1);
printf("result is %d",sum1);

int c;
int d;
int e;
printf("result is %d",sum1);
int f;
}



#include <stdio.h>
int main()
{
 
	int b=3;
	int arr[]={6,7,8,9,10};
	int *p=arr;
	*(p++)+=123;  //*p=*p+123=arr[0]=129
	printf("%d,%d\n",*p,*(++p));  //8,8
	return 0;
}