#include <stdio.h>
#include <stdlib.h>

int main()
{
    do {
        printf("Nhap so du doan: ");
        int n; scanf("%d", &n);
        if (n == 65)
        {
            printf("\nXin chuc mung ban da doan dung");
            break;
        }
    }while(1);
    return 0;
}
