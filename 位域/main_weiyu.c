#include <stdio.h>
#include <string.h> 

typedef struct{
    unsigned char rezerved:4;

    unsigned char autoScrOff:1;    
}_mystruct;



typedef struct{
    unsigned char rezerved:4;
    unsigned char customLed:1;
    unsigned char wifiLed:2;
    unsigned char autoScrOff:1;    //status bit7 自动息屏开关 bit6-5 wifi指示灯开关 bit4 自定义指示灯

}_mystruct;


void main1(int argc, char **str)
{
    _mystruct mystruct;
    mystruct.rezerved = 0;
    mystruct.customLed = 0;
    mystruct.wifiLed = 0x01;
    mystruct.autoScrOff = 1;
    printf("value is %d\n", mystruct);
    printf("sizeof(mystruct) is %ld\n", sizeof(mystruct));
    printf("sizeof(_mystruct) is %ld\n", sizeof(_mystruct));
    printf("wifiled is %d\n", mystruct.wifiLed);
}

int main()
{
    _mystruct data;
    data.rezerved = 0b1001;
    data.autoScrOff = 0b1;
    printf("\r\n"); //
    printf("%x   %d    %d\n",data,data,&data); //%u unsigned int
    printf("%x   %d    %d\n",data.rezerved,data.rezerved); //%u unsigned int
    printf("%x   %d    %d\n",data.autoScrOff,data.autoScrOff); //%u unsigned int
	return 0;
}