#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int feet;
    int inch;
}distance_t;

void addDistance (distance_t dst1, distance_t dst2)
{
    distance_t sum = {dst1.feet + dst2.feet, dst1.inch + dst2.inch};
    printf("Tong cua hai khoang cach lan luot la: %d, %d\n", sum.feet, sum.inch);
}

int main()
{
    distance_t dst1 = {13, 14};
    distance_t dst2 = {12, 11};
    addDistance(dst1, dst2);
    return 0;
}
