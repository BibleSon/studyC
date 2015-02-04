#include <stdio.h>

double res_disp(double num)
{
    printf("결과값은 %lf입니다.",num);
}

int main()
{
    double num=3.4;
    res_disp(num);
    return 0;
}

