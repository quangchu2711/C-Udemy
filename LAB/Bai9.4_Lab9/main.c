#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nhap chuoi bat ky: ");
    char chuoi[256];
    scanf("%s", chuoi);
   // chuoi[strlen(chuoi)- 1]= '\0';
    int i, j;
    for (i = 0; i < strlen(chuoi); ++i)
    {
        while ( !( (chuoi[i] >= 'a' && chuoi[i] <= 'z') ||  (chuoi[i] >= 'a' && chuoi[i] <= 'z')  ) )
        {
            for (j = i; j < strlen(chuoi); ++j)
            {
                chuoi[j] = chuoi[j+1];
            }
            chuoi[j] = '\0';
        }
    }

    printf("Ket qua: %s", chuoi);
    return 0;
}
