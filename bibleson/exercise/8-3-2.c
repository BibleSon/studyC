#include <stdio.h>

double user_pow(double a, int b);

int main()
{
    double a, res;
    int b;

    printf("밑수를 입력하세요 : ");
    scanf("%lf",&a);
    printf("지수를 입력하세요 : ");
    scanf("%d",&b);
    res = user_pow(a,b);
    printf("거듭제곱은 %lf입니다.",res);
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

