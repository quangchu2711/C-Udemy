#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    for (int i = 4; i >= 0; i--)
    {

        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
