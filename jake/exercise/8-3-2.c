#include <stdio.h>

double user_pow(double base, int exp)
{
    int i;
    double result = 1;
    for(i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main(void)
{
    double base;
    int exp;
    printf("�ؼ��� �Է��ϼ��� : ");
    scanf("%lf", &base);
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &exp);
    printf("�ŵ������� %lf�Դϴ�.\n", user_pow(base, exp));
    return 0;
}

