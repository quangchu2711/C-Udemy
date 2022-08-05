#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
    printf("Nhap 4 so: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("Ket qua: %.3lf %.3lf %.3lf %.3lf ", (double)(a*a), (double)(b*b), (double)(c*c), (double)(d*d));
    return 0;
}
