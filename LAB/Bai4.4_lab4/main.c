#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minute;
    printf("Nhap so phut: ");
    scanf("%d", &minute);
    int day_num = minute/60/24;
    int year_num = day_num/365;
    printf("%d nam %d ngay", year_num, day_num);
    return 0;
}
