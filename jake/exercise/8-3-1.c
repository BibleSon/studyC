#include <stdio.h>

double user_abs(double n);

int main(void)
{
    double n;
    printf("���� �ϳ��� �Է��ϼ��� : ");
    scanf("%lf", &n);
    printf("���밪�� %lf�Դϴ�.\n", user_abs(n));
    return 0;
}

double user_abs(double n)
{
    if (n < 0)
        return -n;
    else 
        return n;
}

