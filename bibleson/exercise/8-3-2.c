#include <stdio.h>

double user_pow(double a, int b);

int main()
{
    double a, res;
    int b;

    printf("�ؼ��� �Է��ϼ��� : ");
    scanf("%lf",&a);
    printf("������ �Է��ϼ��� : ");
    scanf("%d",&b);
    res = user_pow(a,b);
    printf("�ŵ������� %lf�Դϴ�.",res);
    return 0;
}

double user_pow(double a, int b)
{
    double res=1;
    int i;

    for(i=0;i<b;i++){
        res = res*a;
    }
    return res;
}

