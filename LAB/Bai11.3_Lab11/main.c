#include <stdio.h>
#include <stdlib.h>

 int a[100], n;

void arrInput(int * pArr, const int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", pArr+ i);
    }
}

void arrOutput(int * pArr, const int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        printf("\n a[%d] = %d", i, *(pArr + i));
    }
}

int arrMax(int * pArr, const int arrLen, int *pMaxValue)
{
    *pMaxValue = *pArr;
    for (int i = 1; i < arrLen; i++)
    {
        if (*(pArr + i) > *pMaxValue)
        {
            *pMaxValue = *(pArr + i);
        }
    }
    return *pMaxValue;
}

int main()
{

    printf("Nhap chieu dai cua mang: ");
    scanf("%d", &n);

    arrInput(a, n);

    arrOutput(a, n);
    int value = arrMax(a, n, &value);
    printf("\n Phan tu lon nhat trong mang: %d", value);
    return 0;
}
