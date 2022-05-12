#include <stdio.h>
#include <stdarg.h>  

int myprintf(const char *fmt, ...){
    long *p = (long *)&fmt;
    // int abc = 0;
    //int ab[10] = {0};
    // long *p1 = (long *)&fmt;
    // printf("func adress %p\n", __func__);
    printf("fmt is %p\n", fmt);
    printf("&fmt is %p\n", &fmt);    
    printf("p is %p\n", p);
    printf("&p is %p\n", &p);
    // printf("%p\n", p1);
    // printf("%p\n", &p1);
    //printf("sizeof(fmt) = %d\n", sizeof(fmt)); // 8
    //printf("sizeof(int) = %d\n", sizeof(int)); // 4
    p = p + 4;

    printf("%p %d\n", p, *p);
    p++;
    printf("%p %d\n", p, *p);
    p++;
    printf("%p %d\n", p, *p);


    // int* pfmt = NULL;  
    // va_list vp;  
    // int vargch = 0; 
    
    // va_start(vp, fmt); 
    // printf("\n%p\n",vp); 
    // vargch = va_arg(vp, int); 
    //     printf("\n%p\n",vp); 
    // printf("\n%d\n",vargch); 

    // vargch = va_arg(vp, int); 
    //     printf("\n%p\n",vp); 
    // printf("\n%d\n",vargch); 
    // va_end(vp);
    // int i = 1;
    // while (i < 20)
    // {
    //     printf("%x ", *(p + i));
    //     i++;
    // }
}

int my(int a, int b, int c){
    int *p1 = &a;
    printf("%p %p %p \n",&a, &b, &c); //0x7ffc71b6531c 0x7ffc71b65318 0x7ffc71b65314
    printf("%p %d \n",p1, *p1); //0x7ffc71b6531c
    p1 = p1 - 1;
    printf("%p %d \n",p1, *p1); //0x7ffc71b65318 20 
    p1 = p1 - 1;
    printf("%p %d \n",p1, *p1); //0x7ffc71b65314 30 
    // for (int i = 0; i < 20; i++){
    //     printf("%d ", *(p1 = p1 + 1));
    // }
}

int main()
{
    int a = 0xaa;
    int b = 0xbb;
    char *str = "123432432%d\n";
    printf("%p %p\n", str, &str);
    myprintf(str, a, b, 0xcc, 0xdd);

    //my(10, 20, 30);

	return 0;
}