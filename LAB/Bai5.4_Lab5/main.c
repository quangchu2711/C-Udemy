#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gio_lam, luong_gross, thue, luong_net;
    printf("Nhap so gio lam viec: ");
    scanf("%f", &gio_lam);

    luong_gross = gio_lam > 40 ? gio_lam * 12.0 * 1.5 : gio_lam * 12.0;

    if (luong_gross <= 300.0) thue = luong_gross * 0.15;
    else if (luong_gross > 300.0 && luong_gross <= 450.0) thue = luong_gross * 0.2;
    else thue = luong_gross * 0.25;

    luong_net = luong_gross - thue;

    printf("Luong gross: %.2f\n", luong_gross);
    printf("Thue: %.2f\n", thue);
    printf("Luong net: %.2f\n", luong_net);

    return 0;
}
