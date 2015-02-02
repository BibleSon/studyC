#include <stdio.h>

int main(void)
{
    int age;
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);
    if (age <= 6 || age >= 70) {
        printf("무료입장입니다.\n");
    } else {
        printf("입장료는 3,000원입니다.\n");
    }
    return 0;
}

