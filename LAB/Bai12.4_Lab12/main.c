#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[25];
    int age;
    char addr[128];
    float gpa;
}infor_t;

enum
{
    INIT,
    INPUT,
    INFOR,
    OUTPUT
};

void handleInput(int *pIndexInfor, infor_t* inforX)
{
    printf("Dien thong tin hoc sinh thu %d\n", *pIndexInfor);
    printf("Nhap ten: \n");
    int index = *pIndexInfor;
    //fgets(inforX[index].name, 25, stdin);
    scanf("%s", inforX[index].name);

    printf("Nhap tuoi: \n");
    scanf("%d", &inforX[index].age);

    printf("Nhap dia chi: \n");
    scanf("%s", inforX[index].addr);

    printf("Nhap gpa: \n");
    scanf("%f", &inforX[index].gpa);
    if (index > 50) *pIndexInfor = 0;
    else *pIndexInfor += 1;
}

void handleInfor(int *pIndexInfor, infor_t* inforX)
{
    char pStr[25];
    int flagSerach = 0;
    int len = *pIndexInfor;

    printf("Nhap ten muon tim kiem: \n");
    scanf("%s", pStr);

    for (int i = 0; i < len; i++)
    {
        if (strcmp(pStr, inforX[i].name) == 0)
        {
            printf("Thong tin cua hoc sinh [%s]: %d tuoi, dia chi: %s, GPA: %f\n", inforX[i].name, inforX[i].age, inforX[i].addr, inforX[i].gpa);
            flagSerach = 1;
        }
    }
    if (flagSerach == 0) printf("Khong tim thay hoc sinh \n");
}

void handleExit(int *pFlagExit, int *pIndexInfor, infor_t* inforX)
{
    int len = *pIndexInfor;
    printf("Danh sach hoc sinh duoc luu: \n");
    for (int i = 0; i < len; i++)
    {
        printf("Hoc sinh [%s]: %d tuoi, dia chi: %s, GPA: %f\n", inforX[i].name, inforX[i].age, inforX[i].addr, inforX[i].gpa);
    }
    *pFlagExit = 1;
}

void inputChoose(int *pflagExit, int* pChoose, int *pIndexInfor, infor_t* inforX)
{
    printf("Hay lua chon: \n");
    printf("[1] Nhap thong tin hoc sinh\n");
    printf("[2] Tim kiem hoc sinh\n");
    printf("[3] Thoat\n");
    scanf("%d", pChoose);

    switch (*pChoose)
    {
        case INPUT:
            handleInput(pIndexInfor, inforX);
            break;
        case INFOR:
            handleInfor(pIndexInfor, inforX);
            break;
        case OUTPUT:
            handleExit(pflagExit, pIndexInfor, inforX);
            break;
        default: printf("\nNhap sai thong tin xin moi nhap lai !");
            break;
    }
}

int main()
{
    int flagExit = 0;
    int indexInfor = 0;
    infor_t infor[100];

    int choose;
    do
    {
       inputChoose(&flagExit, &choose, &indexInfor, infor);
    }while(!flagExit);
    return 0;
}
