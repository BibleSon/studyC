#include <stdio.h>

int main()
{
    int weight;
    double height, bmi;

    printf("몸무게를 입력하세요(kg) :");
    scanf("%d",&weight);
    printf("키를 입력하세요(m) :");
    scanf("%lf",&height);
    
    bmi = weight/(height*height);

    printf("당신의 BMI는 : %.1lf입니다.",bmi);

    return 0;
}
