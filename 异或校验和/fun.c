#include "fun.h"

char Govee_Utils_GetBccCode1(char *data, char len)
{
    unsigned char bcc = 0, i;
    for(i = 0; i < len; i++) {
        bcc ^= data[i];
    }
    return bcc;
}