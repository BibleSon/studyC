#include <stdio.h>

int main(void)
{
    int a, b;
    printf("�� ������ �Է��ϼ��� : ");
    scanf("%d%d", &a, &b);
    printf("������ ������� \"%d / %d = %lf\"�Դϴ�. \n", a, b, 1.0f * a / b);
    return 0;
}
