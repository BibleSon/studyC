#include <stdio.h>

int main(void)
{
    int i;
    int age;
    int sum = 0;
    for (i = 0; i < 5; i++) 
    {
        printf("%d. ���̸� �Է��ϼ��� : ", i + 1);
        scanf("%d", &age);
        sum += age;
    }
    printf("�ټ����� ��� ���̴� %.1f�Դϴ�.\n", sum / 5.0f);
    return 0;
}
