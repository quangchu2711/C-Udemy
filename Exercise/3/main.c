#include <stdio.h>
#include <string.h>

#define K 5

char* decodingCircularShiftSequence (char *pStr)
{
    for (int i = 0; i < strlen(pStr); i++)
    {
        if (pStr[i] > 64 && pStr[i] < 91)
        {
            int X = ((int)(pStr[i]) - 65);
            printf("[%d] \n", X);
            int res = (X - K + 26) % 26;
            pStr[i] = (char)(res + 65);
        }
        else if (pStr[i] > 96 && pStr[i] < 123)
        {
            int X = ((int)(pStr[i]) - 97);
            printf("[%d] \n", X);
            int res = (X - K + 26) % 26;
            pStr[i] = (char)(res + 97);
        }
    }
    return pStr;
}

int main()
{
    char x = '\0';
    printf("Ky tu: %d\n", x);
    char str[] = "BFNKSLZDjjS";
    printf("DEOCDE: %s", decodingCircularShiftSequence(str) );

    return 0;
}
