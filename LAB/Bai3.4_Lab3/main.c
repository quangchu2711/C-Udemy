#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("Ban bao nhieu tuoi:");
    int age;
    scanf("%d", &age);
    printf("Xin chao %s, %d tuoi", argv[1], age);
    return 0;
}
