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

    printf("반지름을 입력하세요 : ");
    scanf("%lf",&half);
    res = circle(half);
    printf("면적은 : %.3lf입니다.",res);

    return 0;
}
