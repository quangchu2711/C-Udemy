#include <stdio.h>
#include <stdlib.h>

int sum(int * pA, int * pB)
{
    return (*pA + *pB);
}

int main()
{
    int a = 4, b = 6;
    printf("sum (%d, %d) = %d", a, b, sum(&a, &b));
    return 0;
}
