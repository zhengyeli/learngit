#include <stdio.h>
#include <string.h> 

typedef struct{
    unsigned char rezerved:4;

    unsigned char autoScrOff:1;    
}_mystruct;

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