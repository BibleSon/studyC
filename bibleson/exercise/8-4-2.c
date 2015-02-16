#include <stdio.h>

double div()
{
    double num1, num2, res;

    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf",&num1, &num2);
    res = num1 / num2;
    return res;
}



int main()
{
    double res;
    res = div();
    printf("나눗셈의 결과는 : %lf",res);
    return 0;
}
