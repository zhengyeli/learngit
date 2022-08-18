#include <stdio.h>

typedef union 
{
    int a;
    char b[4];
}_test_union;

int main()
{
    printf("_test_union : %ld\n", sizeof(_test_union));

    _test_union Value;
    Value.b[0] = 0x01;
    Value.b[1] = 0x10;
    printf("%x %d\n", Value.a, Value.a);

    _test_union Value1;
    Value.a = 0x1234;
    printf("%x %d\n", Value.a, Value.a);
    printf("%x %x\n", Value.b[0], Value.b[1]);
	return 0;
}