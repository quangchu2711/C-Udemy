#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, year_num, week_mum, day_num;
    printf("Input: ");
    scanf("%d", &input);
    year_num = input/365;
    week_mum = input/7;
    day_num = input;

    printf("%d nam %d tuan %d ngay", year_num, week_mum, day_num);

    return 0;
}
