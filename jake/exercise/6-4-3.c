#include <stdio.h>

int main(void)
{
    char code;
    double usage;
    double base;
    double kwperfee;
    double tax;

    printf("�ڵ��ȣ�� �Է��ϼ���(1������, 2�����, 3������) : ");
    scanf("%c", &code);
    switch (code)
    {
        case '1':
            base = 1130;
            kwperfee = 127.8;
            tax = 0.09;
            break;
        case '2':
            base = 660;
            kwperfee = 88.5;
            tax = 0.08;
            break;
        case '3':
            base = 370;
            kwperfee = 52.0;
            tax = 0.05;
            break;
    }
    printf("���� ��뷮�� �Է��ϼ��� : ");
    scanf("%lf", &usage);
    printf("�������� %d���Դϴ�.\n", (int)((base + (usage * kwperfee)) * (1 + tax)));
    return 0;
}
