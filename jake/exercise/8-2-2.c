#include <stdio.h>

double calc(double radius)
{
    return radius * radius * 3.14;
}

int main(void)
{
    double radius;
    printf("반지름을 입력하세요 : ");
    scanf("%lf", &radius);
    printf("면적은 : %.3lf입니다.\n", calc(radius));
    return 0;
}
