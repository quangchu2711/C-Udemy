#include <stdio.h>
#include <stdlib.h>

#define YEARS  5
#define MONTHS 12

float rain[YEARS][MONTHS] =
{
    {4.3, 2.0, 2.2, 4.6, 3.4, 5.7, 7.8, 4.9, 2.9, 8.7, 2.9, 7.8},
    {4.3, 2.0, 2.2, 4.6, 3.4, 5.7, 7.8, 4.9, 2.9, 8.7, 2.9, 7.8},
    {4.3, 2.0, 2.2, 4.6, 3.4, 5.7, 7.8, 4.9, 2.9, 8.7, 2.9, 7.8},
    {4.3, 2.0, 2.2, 4.6, 3.4, 5.7, 7.8, 4.9, 2.9, 8.7, 2.9, 7.8},
    {4.3, 2.0, 2.2, 4.6, 3.4, 5.7, 7.8, 4.9, 2.9, 8.7, 2.9, 7.8},
};

int main()
{
    int year, month;
    float subtot, total;
    for (year = 0; year < YEARS; year++)
    {
        for (month = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }
        total += subtot;
        printf("Tong: Luong mua theo nam: %5d \t%15.1f\n", 2012 + year, subtot);
        printf("Tong: Luong mua trung binh theo nam: %5d \t%15.1f\n", 2012 + year, (float)(subtot/YEARS));
        subtot = 0;
        total = 0;
    }
    return 0;
}
