#include <stdio.h>

double user_abs(double abs);

int main()
{
    double abs, res;

    printf("���� �ϳ��� �Է��ϼ��� : ");
    scanf("%lf",&abs);
    res = user_abs(abs);
    printf("���밪�� %lf�Դϴ�.",res);
    return 0;
}

double user_abs(double abs)
{
    double res;

    if(abs >=0){ res = abs; }
    else if(abs < 0) { res = abs * (-1.0); }

    return res;
}
