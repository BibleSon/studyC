#include <stdio.h>

int main(void)
{
    double F, C;
    double cm, inch;
    printf("화씨 온도를 입력하세요 : ");
    scanf("%lf", &F);
    C = 5/9.0*(F-32);
    printf("섭씨 온도는 %.1lf도 입니다.\n", C);

    printf("센티미터 길이를 입력하세요 : ");
    scanf("%lf", &cm);
    inch = cm / 2.54;
    printf("인치로 계산하면 %.1lf인치 입니다\n", inch);

    return 0;
}

