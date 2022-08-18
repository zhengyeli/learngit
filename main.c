#include <stdio.h>

int function(void)
{
    int haha;
    printf("%s\n", __FUNCTION__);
    printf("%d\n", __LINE__);
    // return NULL;
}

int main()
{
    printf("%d\n", __LINE__);
    printf("%d\n", function());
	return 0;
}