#include <stdio.h>

int main(void)
{
    double a, b;
    char op;
    printf("������ �Է��ϼ��� : ");
    scanf("%lf%c%lf", &a, &op, &b);
    switch (op)
    {
        case '+':
            printf("�������� %.2f�Դϴ�.\n", a + b);
            break;
        case '-':
            printf("�������� %.2f�Դϴ�.\n", a - b);
            break;
        case '*':
            printf("�������� %.2f�Դϴ�.\n", a * b);
            break;
        case '/':
            printf("�������� %.2f�Դϴ�.\n", a / b);
            break;
    }
    return 0;
}

