#include <stdio.h>

int main(void)
{
    char gender;
    int weight;
    int height;
    double bmi;
    printf("성별을 입력하세요(m/f) : ");
    scanf("%c", &gender);
    printf("몸무게를 입력하세요(kg) : ");
    scanf("%d", &weight);
    printf("키를 입력하세요(cm) : ");
    scanf("%d", &height);
    
    bmi = weight / ((height / 100.0f) * (height / 100.0f));

    printf("당신의 BMI는 : %.1f입니다.\n", bmi);
    if (gender == 'm')
    {
        if (bmi < 20.0f) {
            printf("저체중입니다.\n");
        } else if (bmi < 25.0f) {
            printf("표준체중입니다.\n");
        } else {
            printf("과체중입니다.\n");
        }
    } else if (gender == 'f')
    {
        if (bmi < 18.5f) {
            printf("저체중입니다.\n");
        } else if (bmi < 25.0f) {
            printf("표준체중입니다.\n");
        } else {
            printf("과체중입니다.\n");
        }
    }
    
    return 0;
}
