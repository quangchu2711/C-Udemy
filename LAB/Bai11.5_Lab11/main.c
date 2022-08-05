#include <stdio.h>
#include <stdlib.h>

void arrSwap(int *pArr1, int len1, int *pArr2, int len2)
{
    int len = len1 <= len2 ? len1 : len2;

    for (int i = 0; i < len; i++)
    {
        int temp = *(pArr1 + i);
        *(pArr1 + i) = *(pArr2 + i);
         *(pArr2 + i) = temp;
    }
}

void arrOutput(int * pArr, const int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        printf("%d ", *(pArr + i));
    }
    printf("\n");
}

int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[3] = {7,8,9};

    printf("Khi chua hoan doi: \n");
    arrOutput(arr1, 6);
    arrOutput(arr2, 3);

    printf("Sau chua hoan doi: \n");
    arrSwap(arr1, 6, arr2, 3);
    arrOutput(arr1, 6);
    arrOutput(arr2, 3);
    return 0;
}
