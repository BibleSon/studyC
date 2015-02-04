#include <stdio.h>

double user_abs(double abs);

int main()
{
    double abs, res;

    printf("숫자 하나를 입력하세요 : ");
    scanf("%lf",&abs);
    res = user_abs(abs);
    printf("절대값은 %lf입니다.",res);
    return 0;
}

double user_abs(double abs)
{
    double res;

    if(abs >=0){ res = abs; }
    else if(abs < 0) { res = abs * (-1.0); }

    return res;
}

