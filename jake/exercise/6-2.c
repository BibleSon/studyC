#include <stdio.h>

int main(void)
{
    int age;
    printf("���̸� �Է��ϼ��� : ");
    scanf("%d", &age);
    if (age <= 6 || age >= 70) {
        printf("���������Դϴ�.\n");
    } else {
        printf("������ 3,000���Դϴ�.\n");
    }
    return 0;
}

