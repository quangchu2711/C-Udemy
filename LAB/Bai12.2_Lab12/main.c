#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int date;
    int month;
}dateofBirth_t;

typedef struct
{
//    char name[45];
    char* name;

    int id;
    int salary;
    dateofBirth_t dateOfBirth;
}infor_t;

//infor_t ptr;
//
//printf("Nhao id nhan vien: ");
//scanf("%d", &ptr.id);
//printf("Nhao ten nhan vien: ");
//scanf("%s", ptr.name);
//printf("Nhao luong nhan vien: ");
//scanf("%d", &ptr.salary);
//
//
//printf("Thong tin vua nhap: %s - %d - %d", ptr.name, ptr.id, ptr.salary);


int main()
{
    infor_t ptr;
    ptr.name = (char*) malloc(100 * sizeof(char));
    printf("Nhap ten nhan vien: ");
    scanf("%s", ptr.name);

    printf("Nhao id nhan vien: ");
    scanf("%d", &ptr.id);

    printf("Nhao ngay sinh nhan vien: ");
    scanf("%d", &ptr.dateOfBirth.date);

    printf("Nhao thang sinh nhan vien: ");
    scanf("%d", &ptr.dateOfBirth.month);

    printf("Nhao luong nhan vien: ");
    scanf("%d", &ptr.salary);

    printf("Thong tin vua nhap: %s- %d - %d - %d - %d", ptr.name, ptr.id, ptr.salary, ptr.dateOfBirth.date, ptr.dateOfBirth.month);
    free(ptr.name);
    return 0;

}
