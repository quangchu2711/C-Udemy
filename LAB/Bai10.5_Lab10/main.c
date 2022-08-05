#include <stdio.h>
#include <stdlib.h>

void swap(int *pA, int *pB)
{
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
}

int main()
{
    int a = 4, b = 5;
    printf("Truoc hoan doi a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau hoan doi a = %d, b = %d", a, b);
    return 0;
}
