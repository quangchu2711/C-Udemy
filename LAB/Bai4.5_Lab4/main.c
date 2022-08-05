#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_var;
    char char_var;
    long long_var;
    long long ll_var;
    float float_var;
    double db_var;
    printf("size of int: %d\n", sizeof(int_var));
    printf("size of char: %d\n", sizeof(char_var));
    printf("size of long: %d\n", sizeof(long_var));
    printf("size of long long: %d\n", sizeof(ll_var));
    printf("size of float: %d\n", sizeof(float_var));
    printf("size of double: %d\n", sizeof(db_var));

    return 0;
}
