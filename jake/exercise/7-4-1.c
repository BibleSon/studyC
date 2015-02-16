#include <stdio.h>

int main(void)
{
    int i;
    int age;
    int sum = 0;
    for (i = 0; i < 5; i++) 
    {
        printf("%d. 나이를 입력하세요 : ", i + 1);
        scanf("%d", &age);
        sum += age;
    }
    printf("다섯명의 평균 나이는 %.1f입니다.\n", sum / 5.0f);
    return 0;
}
