#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    printf("Nhap nhiet do tu ban phim: ");
    scanf("%d", &temp);
    if (temp < 0) printf("Thoi tiet lanh cong");
    else if (temp >= 0 && temp < 10) printf("Thoi tiet rat lanh");
    else if (temp >= 10 && temp < 20) printf("Thoi tiet lanh");
    else if (temp >= 20 && temp < 30) printf("Thoi tiet tuyet voi");
    else if (temp >= 30 && temp < 40) printf("Thoi tiet nong");
    else printf("Thoi tiet rat nong");
    return 0;
}
