#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
}COMPANY;

int main()
{
    COMPANY gg = GOOGLE;
    COMPANY face = FACEBOOK;
    COMPANY xe = XEROX;
    COMPANY ya = YAHOO;
    COMPANY ebay = EBAY;
    COMPANY micro = MICROSOFT;

    printf("value GOOGLE: %d\n", gg);
    printf("value FACEBOOK: %d\n", face);
    printf("value XEROX: %d\n", xe);
    printf("value YAHOO: %d\n", ya);
    printf("value EBAY: %d\n", ebay);
    printf("value MICROSOFT: %d\n", micro);

    return 0;
}
