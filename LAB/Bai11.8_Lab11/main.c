#include <stdio.h>
#include <stdlib.h>


int factorialNumber(int n)
{
    if (n == 1)
        return 1;
    return n * factorialNumber(n - 1);
}

int main()
{
    printf("Giai thua cua %d la %d\n", 5, factorialNumber(5));
    return 0;
}
