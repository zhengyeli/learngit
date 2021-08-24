#include "stdio.h"

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

char Govee_Utils_GetBccCode(char *data, char len)
{
    unsigned char bcc = 0, i;
    for(i = 0; i < len; i++) {
        bcc ^= data[i];
    }
    return bcc;
}

int func1(){
    printf("1\n");
}

int *func2(){
    printf("2\n");
}

void main(){

data[0] = 1;
data[1] = 1;
data[2] = 1;
data[3] = 0;
data[4] = 1;
data[5] = 0;

//char a = Govee_Utils_GetBccCode(data, 19);
int i = 0;
/*for (; i < 10 ; i++){
    if(data[i] != 1){
        printf("%d ",i);
        break;
        
    }
}*/

handle1 = func1;
handle2 = func2;

}


