#include <stdio.h>

double calc(double radius)
{
    return radius * radius * 3.14;
}

int main(void)
{
    double radius;
    printf("�������� �Է��ϼ��� : ");
    scanf("%lf", &radius);
    printf("������ : %.3lf�Դϴ�.\n", calc(radius));
    return 0;
}
