#include <stdio.h>

int main(void)
{
    int a, b;
    printf("두 정수를 입력하세요 : ");
    scanf("%d%d", &a, &b);
    printf("나눗셈 연산식은 \"%d / %d = %lf\"입니다. \n", a, b, 1.0f * a / b);
    return 0;
}
