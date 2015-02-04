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
    printf("x의 값을 입력하세요 : ");
    scanf("%lf",&x);
    res = func(x);
    printf("결과값은 %lf입니다.",res);
    return 0;
    
}


