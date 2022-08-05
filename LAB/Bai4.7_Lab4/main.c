#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
    printf("Nhap 4 so: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("Ket qua: %.3f", (float)((a + b + c + d)/4));
    return 0;
}
