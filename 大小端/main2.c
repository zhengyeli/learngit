#include <stdio.h>
#include <string.h>

int main()
{
	__int32_t b = 0x00102001; 

	__uint8_t arr[]={0,0x10,0x20,0x01};

    //memcpy(arr,&b,2);
    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("arr[%d]:0x%x,addr:%d\n",i,arr[i],&arr[i]); 
    }
    printf("\n");  

    __uint8_t *p_b = &b;
    __uint8_t *p_a = arr;
    *p_a++ = *p_b++;
    *p_a++ = *p_b++;
    *p_a++ = *p_b++;
    *p_a++ = *p_b++;
    p_b = &b;
    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("p_b[%d]:0x%x,addr:%d\n",i,*(p_b+i),(p_b+i)); 
    }
    printf("\n");  

    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("arr[%d]:0x%x,addr:%d\n",i,arr[i],&arr[i]); 
    }
    printf("\n");
	return 0;
}