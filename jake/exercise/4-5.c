#include <stdio.h>

int main(void)
{
    double F, C;
    double cm, inch;
    printf("ȭ�� �µ��� �Է��ϼ��� : ");
    scanf("%lf", &F);
    C = 5/9.0*(F-32);
    printf("���� �µ��� %.1lf�� �Դϴ�.\n", C);

    printf("��Ƽ���� ���̸� �Է��ϼ��� : ");
    scanf("%lf", &cm);
    inch = cm / 2.54;
    printf("��ġ�� ����ϸ� %.1lf��ġ �Դϴ�\n", inch);

    return 0;
}

