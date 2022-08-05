#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so bat ky tu ban phim:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("So chan %d \n", i);
        }
    }
    return 0;
}
