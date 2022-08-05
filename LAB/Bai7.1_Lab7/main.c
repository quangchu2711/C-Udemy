#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {0, 1, 2};
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
