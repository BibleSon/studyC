#include <stdio.h>
int main(void)
{
    char num;
    char name[20];
    char position[20];
    double bat;
    int age;


    printf("���ȣ�� �Է��ϼ��� : ");
    scanf("%c", &num);
    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", name);
    printf("�������� �Է��ϼ��� : ");
    scanf("%s", position);
    printf("Ÿ���� �Է��ϼ��� : ");
    scanf("%lf", &bat);
    printf("���̸� �Է��ϼ��� : ");
    scanf("%d", &age);
    printf("%c��-%s-%s, Ÿ���� %lf�̰� ���̴� %d���Դϴ�.\n", num, name, position, bat, age);
    return 0;
}

