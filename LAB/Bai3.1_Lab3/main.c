#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    a = 4.12;
    b = 2.23;
    printf("Chu vi cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f\n", a, b, (a+b)*2);
    printf("Dien tich cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f", a, b, a * b);
    return 0;
}
