#include <stdio.h>

extern int _start;

int main()
{
    printf("_start is %p\r\n", &_start); 

    int input[2] = {0};

    /*输入数字会直接退出， 因为%d不接受\n ,getsn拿到\n直接退出*/
    if (scanf("%s", input) != EOF){
        char output[20];
        gets(output);
        printf("进来\n");
        printf("%s", output);
        if (output[0] == '\0')
        {
            printf("第一个是换行\n");
        }
        
    }
    else{
        printf("输入错误\n");
    }
	return 0;
}