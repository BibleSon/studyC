#include <stdio.h>

int main(void)
{
    int n;
    printf("�������� �Է��ϼ��� : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("���밪�� %d�Դϴ�.\n", n * -1);
    } else {
        printf("���밪�� %d�Դϴ�.\n", n);
    }

    return 0;
}

