#include <stdio.h>
#include <stdlib.h>

int tinh_do_dai_chuoi(char *s)
{
    int do_dai = 0;
    while(*s != '\0')
    {
        do_dai += 1;
        ++s;
    }
    return do_dai;
}

int main()
{
    char name[] = "Quang";
    printf("Ten chuoi %s\n:", name);
    printf("Do dai cua chuoi la: %d", tinh_do_dai_chuoi(name));
    return 0;
}
