#include <stdio.h>

double mul(double num1, double num2);

int main()
{
    double result, num1, num2;

    printf("두 개의 숫자를 입력하세요 :");
    scanf("%lf%lf",&num1,&num2);
    result = mul(num1,num2);

    printf("두 수의 곱은 : %.1lf",result);
    return 0;
}

double mul(double num1, double num2)
{
    double res;
    res = num1 * num2;
    return res;
}

