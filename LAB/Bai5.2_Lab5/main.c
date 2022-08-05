#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("So chan") : printf("So le");
    return 0;
}
