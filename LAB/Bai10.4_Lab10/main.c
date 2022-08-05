#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nhap so thu nhat\n");
    int a; scanf("%d", &a);
    printf("Nhap so thu hai\n");
    int b; scanf("%d", &b);
    int * pA = &a;
    int * pB = &b;
    printf("Tong hai so %d va %d la %d\n", *pA, *pB, (*pA + *pB));
    return 0;
}
