#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 100;
    int * pInt = &a;
    *pInt = 101;

    printf("%d", a);
    return 0;
}
