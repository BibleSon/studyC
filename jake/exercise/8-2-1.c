#include <stdio.h>

double multi(double a, double b)
{
    return a * b;
}

int main(void)
{
    double a, b;
    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf("%lf%lf", &a, &b);
    printf("�� ���� ���� : %.1lf\n", multi(a, b));
    return 0;
}
