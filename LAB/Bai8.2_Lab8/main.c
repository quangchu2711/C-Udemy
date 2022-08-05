#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool kt;
int x1, x2, o1, o2;

char du_lieu[3][3] =
{
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
};

void hien_thi_bang_tro_choi(int x, int y, char ky_tu)
{
    du_lieu[x][y] = ky_tu;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            j == 2 ? printf("|%c|", du_lieu[i][j]): printf("|%c", du_lieu[i][j]);
        }
        printf("\n");
    }
}

bool kiem_tra_tro_choi()
{
	if (du_lieu[0][0] != ' ' && du_lieu[0][0] == du_lieu[0][1] && du_lieu[0][1] == du_lieu[0][2])
		return true; // Kiểm tra hàng ngang thứ 1 trên bàn cờ
	else if (du_lieu[1][0] != ' ' && du_lieu[1][0] == du_lieu[1][1] && du_lieu[1][1] == du_lieu[1][2])
		return true ;// Kiểm tra hàng ngang thứ 2 trên bàn cờ
	else if (du_lieu[2][0] != ' ' && du_lieu[2][0] == du_lieu[2][1] && du_lieu[2][1] == du_lieu[2][2])
		return true; // Kiểm tra hàng ngang thứ 3 trên bàn cờ
	else if (du_lieu[0][0] != ' ' && du_lieu[0][0] == du_lieu[1][0] && du_lieu[1][0] == du_lieu[2][0])
		return true; // Kiểm tra hàng dọc thứ 1 trên bàn cờ
	else if (du_lieu[0][1] != ' ' && du_lieu[0][1] == du_lieu[1][1] && du_lieu[1][1] == du_lieu[2][1])
		return true; // Kiểm tra hàng dọc thứ 2 trên bàn cờ
	else if (du_lieu[0][2] != ' ' && du_lieu[0][2] == du_lieu[1][2] && du_lieu[1][2] == du_lieu[2][2])
		return true; // Kiểm tra hàng dọc thứ 3 trên bàn cờ
	else if (du_lieu[0][0] != ' ' && du_lieu[0][0] == du_lieu[1][1] && du_lieu[1][1] == du_lieu[2][2])
		return true; // Kiểm tra hàng chéo thứ 1 trên bàn cờ
	else if (du_lieu[0][2] != ' ' && du_lieu[0][2] == du_lieu[1][1] && du_lieu[1][1] == du_lieu[2][0])
		return true; // Kiểm tra hàng chéo thứ 2 trên bàn cờ
	else if (du_lieu[0][0] != ' ' && du_lieu[0][1] != ' ' && du_lieu[0][2] != ' ' &&
		du_lieu[1][0] != ' ' && du_lieu[1][1] != ' ' && du_lieu[1][2] != ' ' &&
		du_lieu[2][0] != ' ' && du_lieu[2][1] != ' ' && du_lieu[2][2] != ' ')
		{ // Trường hợp hai người chơi hòa nhau
			kt = true;
			return true;
		}
	return false;
}

void khoi_chay_tro_choi()
{
    kt = false;
    do
    {
        printf("Nhap toa do X(x1, x2):"); scanf("%d %d", &x1, &x2);
        while(x1 < 0 || x2 < 0 || x1 > 2 || x2 > 2 ||  (du_lieu[x1][x2] != ' '))
        {
            printf("[Toa do ngoai pham vi cho phep hoac toa do da duoc nhap]\n");
            printf("Nhap lai toa do X(x1, x2):"); scanf("%d %d", &x1, &x2);
        }
        hien_thi_bang_tro_choi(x1, x2, 'X');
        if(kiem_tra_tro_choi() == true && kt == false)
        {
            printf("\n[Nguoi X chien thang]\n");
            break;
        }
        printf("Nhap toa do O(o1, o2):"); scanf("%d %d", &o1, &o2);
        while(o1 < 0 || o2 < 0 || o1 > 2 || o2 > 2 ||  (du_lieu[o1][o2] != ' '))
        {
            printf("[Toa do ngoai pham vi cho phep hoac toa do da duoc nhap]\n");
            printf("Nhap lai toa do X(x1, x2):"); scanf("%d %d", &o1, &o2);
        }
        if(kiem_tra_tro_choi() == true && kt == false)
        {
            printf("\n[Nguoi O chien thang]\n");
            break;
        }
        if(kiem_tra_tro_choi() == true && kt == true)
        {
            printf("\n[HAI NGUOI HOA NHAU]\n");
            break;
        }
        hien_thi_bang_tro_choi(o1, o2, 'O');
    }
    while(1);
}

int main()
{
    khoi_chay_tro_choi();
    return 0;
}
