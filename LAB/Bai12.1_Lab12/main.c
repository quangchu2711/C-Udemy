#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char* name;
    int salary;

}infor_t;

int main()
{
    infor_t ptr;
    printf("%p- %p", &ptr, ptr.name);
//
//
//    printf("Nhao id nhan vien: ");
//    scanf("%d", &ptr.id);
//    printf("Nhao ten nhan vien: ");
//    scanf("%s", ptr.name);
////    printf("Nhao ss nhan vien: ");
////    scanf("%s", ptr.ss);
//    printf("Nhao luong nhan vien: ");
//    scanf("%d", &ptr.salary);
//
//
//    printf("Thong tin vua nhap: %s - %d - %d", ptr.name, ptr.id, ptr.salary);
    return 0;
}
