#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Nhap hai so: ");
    scanf("%f %f", &a, &b);
    printf("Ket qua: %.3f", (float)(a/b));
    return 0;
}
