#include <stdio.h>

double user_abs(double n)
{
    if (n < 0)
        return -n;
    else 
        return n;
}

double user_pow(double base, int exp)
{
    int i;
    double result = 1;
    for (i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main(void)
{
    double x;
    printf("x�� ���� �Է��ϼ��� : ");
    scanf("%lf", &x);
    printf("������� %lf�Դϴ�.\n", user_abs(2*user_pow(x, 3) + 3*user_pow(x,2) + 4));
    return 0;
}

