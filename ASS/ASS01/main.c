#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.14159;

bool xet_dieu_kien_tao_tam_giac(int a, int b, int c)
{
    if (((a + b) > c && ((a + c) > b) && ((b + c) > a))) return true;
    else return false;
}

void tim_goc_cua_tam_giac(double canhAB, double canhAC, double canhBC, double *gocA, double *gocB, double *gocC)
{
    //Tim goc theo don vi rad
    *gocA = acos(  (pow(canhAC, 2) + pow(canhAB, 2) - pow(canhBC, 2)) / (2 * canhAB * canhAC)  );
    *gocB = acos(  (pow(canhAB, 2) + pow(canhBC, 2) - pow(canhAC, 2)) / (2 * canhAB * canhBC)  );
    *gocC = acos(  (pow(canhAC, 2) + pow(canhBC, 2) - pow(canhAB, 2)) / (2 * canhAC * canhBC)  );

    //Doi don vi tu rad sang do
    *gocA = *gocA * 180 /  PI;
    *gocB = *gocB * 180 /  PI;
    *gocC = *gocC * 180 /  PI;
}

void ket_luan_tam_giac(double gocA, double gocB, double gocC)
{
    //Lam tron 2 chu so thap phan
    gocA = round(gocA * 100)/100;
    gocB = round(gocB * 100)/100;
    gocC = round(gocC * 100)/100;

    //So sanh tim ket qua
    if(gocA == 90.0 || gocB == 90.0 || gocC == 90.0)
    {
        if(gocA ==gocB || gocA ==gocC || gocB ==gocC)
        {
            printf("[Day la tam giac vuong can]");
        }
        else printf("[Day la tam giac vuong]");
    }
    else if(gocA ==gocB && gocB ==gocC)
    {
        printf ("[Day la tam giac deu]");
    }
    else if(gocA ==gocB || gocA ==gocC || gocB ==gocC)
    {
        printf("[Day la tam giac can]");
    }
    else if(gocA > 90.0 || gocB > 90.0 || gocC > 90.0)
        printf("[Day la tam giac tu]");
    else
        printf("[Day la tam giac nhon]");
}

double dien_tich_tam_giac(double a, double b, double c)
{
    double s, p;
    p = (a + b + c) / 2.0;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

int main()
{
    //Khai bao toa do cua 3 diem
    double x1,x2,x3,y1,y2,y3, gocA, gocB, gocC;

    //Nhap cac toa do cua tam giac
    printf("Nhap toa do A: "); scanf("%lf %lf", &x1, &y1);
    printf("Nhap toa do B: "); scanf("%lf %lf", &x2, &y2);
    printf("Nhap toa do C: "); scanf("%lf %lf", &x3, &y3);

    //Tinh toan cac canh cua 1 tam giac
    double ab = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    double bc = sqrt(pow((x3-x2), 2) + pow((y3-y2), 2));
    double ac = sqrt(pow((x1-x3), 2) + pow((y1-y3), 2));

    //Kiem tra dieu kien tao tam giac
    if (xet_dieu_kien_tao_tam_giac(ab, bc, ac) == false)
    {
        printf("[Khong the tao mot tam giac]");
        return 0;
    }
    printf("[Tao mot tam giac thanh cong]");

    //Xu ly va hien thi do dai cac canh va cac goc cua tam giac
    tim_goc_cua_tam_giac(ab, ac, bc, &gocA, &gocB, &gocC);
    printf("\n[Tam giac ABC co]: AB = %.2lf, AC = %.2lf, BC = %.2lf, goc A = %.2lf, goc B = %.2lf, goc C = %.2lf\n", ab, ac, bc, gocA, gocB, gocC);

    //Dua ra ket luon tam giac ABC
    ket_luan_tam_giac(gocA, gocB, gocC);

    //Hien thi dien tich tam giac
    printf("\n[Dien tich tam giac: %.2lf]", dien_tich_tam_giac(ab, ac, bc));

    //Tinh duong cao cua tam giac
    printf("\n[Duong cao tam giac tu dinh A: %.2lf]", dien_tich_tam_giac(ab, ac, bc)/ bc);
    printf("\n[Duong cao tam giac tu dinh B: %.2lf]", dien_tich_tam_giac(ab, ac, bc)/ ac);
    printf("\n[Duong cao tam giac tu dinh C: %.2lf]", dien_tich_tam_giac(ab, ac, bc)/ ab);

    //Tinh duong trung tuyen tam giac
    printf("\n[Duong trung tuyen tam giac tu dinh A: %.2lf]", sqrt(((pow(ab, 2) + pow(ac, 2))/2.0) - (pow(bc, 2)/4.0)));
    printf("\n[Duong trung tuyen tam giac tu dinh B: %.2lf]", sqrt(((pow(ab, 2) + pow(bc, 2))/2.0) - (pow(ac, 2)/4.0)));
    printf("\n[Duong trung tuyen tam giac tu dinh C: %.2lf]", sqrt(((pow(ac, 2) + pow(bc, 2))/2.0) - (pow(ab, 2)/4.0)));
    return 0;
}
