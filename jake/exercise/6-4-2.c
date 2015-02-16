#include <stdio.h>

int main(void)
{
    double a, b;
    char op;
    printf("수식을 입력하세요 : ");
    scanf("%lf%c%lf", &a, &op, &b);
    switch (op)
    {
        case '+':
            printf("연산결과는 %.2f입니다.\n", a + b);
            break;
        case '-':
            printf("연산결과는 %.2f입니다.\n", a - b);
            break;
        case '*':
            printf("연산결과는 %.2f입니다.\n", a * b);
            break;
        case '/':
            printf("연산결과는 %.2f입니다.\n", a / b);
            break;
    }
    return 0;
}

