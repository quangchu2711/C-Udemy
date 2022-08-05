#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int * pA = &a;
    int * pB = &b;
    scanf("%d %d", &a, &b);
    (*pA >= *pB) ? printf("so %d lon hon", *pA) : printf("So %d lon hon", *pB);;
    return 0;
}
