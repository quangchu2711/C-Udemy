#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool compareStr(char * pS1, char * pS2)
{
    int len = strlen(pS1);
    int cnt = 0;
    while (*pS1)
    {
        if (*pS1 == *pS2) ++cnt;
        ++pS1;
        ++pS2;
    }
    bool res = (cnt == len) ? true : false;
    return res;
}

int main()
{
    printf("%d", compareStr("Quang", "Quang"));
    return 0;
}
