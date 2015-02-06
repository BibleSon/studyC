#include <stdio.h>

double div()
{
    double a, b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf", &a, &b);
    return a / b;
}

int main(void)
{
    printf("나눗셈 결과는 : %lf\n", div());
    return 0;
}

