#include <stdio.h>

double div()
{
    double num1, num2, res;

    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf("%lf%lf",&num1, &num2);
    res = num1 / num2;
    return res;
}



int main()
{
    double res;
    res = div();
    printf("�������� ����� : %lf",res);
    return 0;
}
