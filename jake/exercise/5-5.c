#include <stdio.h>

int main(void)
{
    char name[100], gender;
    int age;
    double height;
    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", name);
    printf("������ �Է��ϼ��� : ");
    scanf(" %c", &gender);
    printf("���̸� �Է��ϼ��� : ");
    scanf("%d", &age);
    printf("Ű�� �Է��ϼ��� : ");
    scanf("%lf", &height);
    printf("�̸�:%s, ����:%c, ����:%d, Ű:%.1lf\n", 
            name, gender, age, height);

    return 0;
}

