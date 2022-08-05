#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool arraySearch (int * pArr, const int arrLen, int *pValue)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (*(pArr + i) == *pValue)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    printf("Nhap chieu dai cua mang: ");
    int n; scanf("%d", &n);
    int a[n];
    arrInput(a, n);

    arrOutput(a, n);

    printf("\nNhap phan tu muon tim kiem trong mang: ");
    int xValue; scanf("%d", &xValue);

    bool value = arraySearch(a, n, &xValue);
    (value == true) ? printf("Da tim thay") : printf("Khong tim thay");

    return 0;
}
