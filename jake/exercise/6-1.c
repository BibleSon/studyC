#include <stdio.h>

int main(void)
{
    int n;
    printf("정수값을 입력하세요 : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("절대값은 %d입니다.\n", n * -1);
    } else {
        printf("절대값은 %d입니다.\n", n);
    }

    return 0;
}

