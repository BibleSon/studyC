#include <stdio.h>

double mul(double num1, double num2);

int main()
{
    double result, num1, num2;

    printf("�� ���� ���ڸ� �Է��ϼ��� :");
    scanf("%lf%lf",&num1,&num2);
    result = mul(num1,num2);

    printf("�� ���� ���� : %.1lf",result);
    return 0;
}

double mul(double num1, double num2)
{
    double res;
    res = num1 * num2;
    return res;
}

