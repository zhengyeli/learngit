#include <stdio.h>

#define str(x)  #x      // 直接转换为字符串
#define str1(x) str(x)

#define str2(x) str_##x //拼接字符串
#define NUM 999

int main(void){
    int num = 1;
    printf("%s\n", str(num));
    printf("%s\n", str(1));

    printf("%s\n", str1(num));
    printf("%s\n", str1(1));

    printf("%s\n", str(NUM));
    printf("%s\n", str1(NUM));

    printf("%s\n", str1(str2(NUM)));
    printf("%s\n", str(str2(NUM)));
    return 0;
}