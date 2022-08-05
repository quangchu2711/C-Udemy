#include <stdio.h>
#include <math.h>

int main()
{
    int cnt = 0;
    int a[7] = {1, 2, 3, 4, 5, 6
     ,7};

    for (int i = 0; i < 7; i++)
    {
         cnt = 0;
        if (a[i] == 1) continue;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0) ++cnt;
        }
        if (cnt == 2)
        {
            printf("So nguyen to: a[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}
