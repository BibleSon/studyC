#include <stdio.h>

double multi(double a, double b)
{
    return a * b;
}

int main(void)
{
    double a, b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf", &a, &b);
    printf("두 수의 곱은 : %.1lf\n", multi(a, b));
    return 0;
}
