#include <stdio.h>
double func(double x)
{
    double res;
    res = 2*(x*x*x)+3*(x*x)+4;
    if(res >=0){ res = res; }
    else if(res <0){ res = res * (-0.1); }
    return res;
}

int main()
{
    double x, res;
    printf("x�� ���� �Է��ϼ��� : ");
    scanf("%lf",&x);
    res = func(x);
    printf("������� %lf�Դϴ�.",res);
    return 0;

}
