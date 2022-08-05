#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main()
{
    char *pStr = "Quang";
    uint8_t len = strlen(pStr);

    while(len > 0)
    {
        printf("%c ", *(pStr+len -1));
        --len;
    }

    return 0;
}
