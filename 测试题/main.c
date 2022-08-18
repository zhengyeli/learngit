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