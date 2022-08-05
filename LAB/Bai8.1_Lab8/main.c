#include <stdio.h>
#include <stdlib.h>
#define EPSILON 0.0001f

int uoc_chung_lon_nhat(int a, int b)
{
    if (a == 0 || b ==0) return a + b;
    while(a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

float gia_tri_tuyet_doi(float x)
{
    if (x < 0) x *= -1.0;
    return x;
}

float can_bac_hai(float number)
{
    double result = 1.0f;
    while (gia_tri_tuyet_doi(result * result - number) / number >= EPSILON)
        result = (number / result  - result) / 2 + result;
    return result;
}

int main()
{
    printf("UCLN(%d, %d) = %d \n", 8,12, uoc_chung_lon_nhat(8, 12));

    printf("Gia tri tuyet doi: %.2f \n", gia_tri_tuyet_doi(-7.8));

    printf("can bac hai cua %.2f la %.2f", 4.0, can_bac_hai(4.0));
    return 0;
}
