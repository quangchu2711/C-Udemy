#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 4;
    float b = 5.6;
    char c = 'c';

    int * pInt = NULL;
    float * pFloat = NULL;
    char * pChar = NULL;

    pInt = &a;
    pFloat = &b;
    pChar = &c;

    printf("Dia chi va gia tri con pInt: %p - %d\n", pInt, *pInt);
    printf("Dia chi va gia tri con pFloat: %p - %f\n", pInt, *pFloat);
    printf("Dia chi va gia tri con pChar: %p - %c\n", pInt, *pChar);

    return 0;
}
