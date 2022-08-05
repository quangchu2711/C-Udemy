#include <stdio.h>
#include <stdlib.h>

enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

int main()
{
    enum Company company = GOOGLE;
    printf("%d", company);
    return 0;
}
