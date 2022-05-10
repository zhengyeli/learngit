#include <stdio.h>

extern int _start;

int main()
{
    printf("_start is %p\r\n", &_start); 
	return 0;
}