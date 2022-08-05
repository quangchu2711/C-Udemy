#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so bat ky tren ban phim: ");
    scanf("%d", &n);
    printf("Bit thu ba la bit: %d", ((n >> 2)&0x00000001));
    return 0;
}
