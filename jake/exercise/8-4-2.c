#include <stdio.h>

double div()
{
    double a, b;
    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf("%lf%lf", &a, &b);
    return a / b;
}

int main(void)
{
    printf("������ ����� : %lf\n", div());
    return 0;
}
