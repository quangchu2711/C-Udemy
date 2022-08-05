#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Nhap hai so tu ban phim: ");
    scanf("%f %f", &a, &b);
    if (a != (int)a || b != (int)b)
    {
        printf("so nhap vao khong phai la so nguyen\n");
    }
    else printf("so nhap vao la so nguyen\n");

    a < b ? printf("So a nho hon so b") : printf("So b nho hon so a");

    return 0;
}
