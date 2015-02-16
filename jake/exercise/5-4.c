#include <stdio.h>

int main(void)
{
    double w, h;
    printf("몸무게를 입력하세요(kg) : ");
    scanf("%lf", &w);
    printf("키를 입력하세요(m) : ");
    scanf("%lf", &h);
    printf("당신의 BMI는 : %.1f입니다.\n", w / (h*h));
    return 0;
}
