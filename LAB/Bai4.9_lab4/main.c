#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int id, hour_work, hour_res;
    unsigned long month_res;
    printf("Nhap ID nhan vien: "); scanf("%d", &id);
    printf("Nhap so gio lam viec: "); scanf("%d", &hour_work);
    printf("Nhap tien luong moi gio: "); scanf("%d", &hour_res);

    month_res = (long)(hour_work * hour_res);
    printf("ID: %d - Tien luong nhan duoc: %ld", id, month_res);

    return 0;
}
