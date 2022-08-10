#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>

#define Log_print(fmt) \
        do \
        { \
            printf("log|%ld|%s\n\r", time(NULL), #fmt); \
        } \
        while (0)

#define Log_print_us(fmt) \
        do \
        { \
            struct timeval tp; \
            gettimeofday(&tp, NULL); \
            printf("log|%ld %ld|%s\n\r", tp.tv_sec, tp.tv_usec, fmt); \
        } \
        while (0)
/**
 * @brief 
 * 
 * @param pin 
 * @param len 
 */
void MyArrayPrint(unsigned char *pin, unsigned int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", pin[i]);
    }
    printf("\n\r");
}

/**
 * @brief 
 * 
 * @param pin 
 * @param len 
 */
void MyArray_Random_Generator(unsigned char *pin, unsigned int len)
{
    for (int i = 0; i < len; i++)
    {
        pin[i] = rand() % 256;
    }
}

/**
 * @brief 
 * 
 * @param pin 
 * @param pout 
 * @param len 
 */
void MySort_MaoPao_Handle(unsigned char *pin, unsigned char *pout, unsigned int len)
{
    memcpy(pout, pin, len);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            // printf("%d %d\n", pout[i], pout[j]);
            if (pout[i] > pout[j])
            {
                pout[i] ^= pout[j];
                pout[j] ^= pout[i];
                pout[i] ^= pout[j];
            }
        }
    }
}

int main()
{
    #define arraylen 65535
    time_t curtime;
    curtime = time(NULL);
    //printf("time %d", curtime);
    unsigned char in[arraylen] = {0};
    unsigned char out[sizeof(in)] = {0};
    MyArray_Random_Generator(in, sizeof(in));
    // MyArrayPrint(in, sizeof(in));
    // Log_print_us("in");
    // MySort_MaoPao_Handle(in, out, sizeof(in));
    // Log_print_us("out");
    // MyArrayPrint(out, sizeof(in));
	return 0;
}