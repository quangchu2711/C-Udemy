#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Quang di hoc ";
    char s2[] = "hoc";

    int n = 0;
    int m = 0;
    int check = 0;
    // bien luu giu do dai cua chuoi can tim kiem
    int len = strlen(s2);

    while(s1[n] != '\0') {

      if(s1[n] == s2[m]) {    // neu ky tu dau tien la giong nhau

         // tiep tuc tim kiem
         while(s1[n] == s2[m]  && s1[n] !='\0') {
            n++;
            m++;
         }

         // Neu day ky tu nay co do dai bang chuoi tim kiem
         if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {

            // Chuc mung ban da tim ra chuoi can tim
            check = 1;
         }
      }
      n++; // reset bien dem.
    }

    check == 1 ? printf("Co chuoi con") : printf("Khong co chuoi con");

   return 0;
}
