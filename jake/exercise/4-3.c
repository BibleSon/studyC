#include <stdio.h>

int main(void)
{
    unsigned int age;
    unsigned int t;
    printf("�� ����� ��� �ͽ��ϱ�? ");
    scanf("%u", &age);

    printf("%u��, %u�ð�, %u��, %u���Դϴ�.\n", age * 365, age * 365 * 24, age * 365 * 24 * 60, age * 365 * 24 * 60 * 60);
    return 0;
}

