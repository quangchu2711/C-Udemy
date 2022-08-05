#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nhap so bat ky tu ban phim: ");
    int n;
    scanf("%d", &n);
    n = (1 << 4) | n;
    printf("Ket qua: %d", n);
    return 0;
}
