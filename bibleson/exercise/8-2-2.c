#include <stdio.h>

double circle (double half)
{
    double res;
    res = 3.14 * (half*half);
    return res;
}

int main()
{
    double half, res;

    printf("�������� �Է��ϼ��� : ");
    scanf("%lf",&half);
    res = circle(half);
    printf("������ : %.3lf�Դϴ�.",res);

    return 0;
}
