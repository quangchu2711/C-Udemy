#include <stdio.h>

int main()
{
    int n = 5;
    int a[n];
    a[0]= 5;
    n += 1;
    printf("%d", a[0]);
    a[5] = 10;
    printf("\na[5]: %d", a[5]);

    return 0;
}
