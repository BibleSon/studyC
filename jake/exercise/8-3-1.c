#include <stdio.h>

double user_abs(double n);

int main(void)
{
    double n;
    printf("숫자 하나를 입력하세요 : ");
    scanf("%lf", &n);
    printf("절대값은 %lf입니다.\n", user_abs(n));
    return 0;
}

double user_abs(double n)
{
    if (n < 0)
        return -n;
    else 
        return n;
}

