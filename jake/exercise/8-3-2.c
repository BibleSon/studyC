#include <stdio.h>

double user_pow(double base, int exp)
{
    int i;
    double result = 1;
    for(i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main(void)
{
    double base;
    int exp;
    printf("밑수를 입력하세요 : ");
    scanf("%lf", &base);
    printf("지수를 입력하세요 : ");
    scanf("%d", &exp);
    printf("거듭제곱은 %lf입니다.\n", user_pow(base, exp));
    return 0;
}

