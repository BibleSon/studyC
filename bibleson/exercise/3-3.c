#include <stdio.h>

int main()
{
    char number;
    char name[100];
    char position[100];
    double hit;
    int age;

    printf("���ȣ�� �Է��ϼ��� :");
    scanf("%c",&number);
    printf("�̸��� �Է��ϼ��� :");
    scanf("%s",name);
    printf("�������� �Է��ϼ��� :");
    scanf("%s",position);
    printf("Ÿ���� �Է��ϼ��� :");
    scanf("%lf",&hit);
    printf("���̸� �Է��ϼ��� :");
    scanf("%d",&age);
    printf("%c��-%s-%s, Ÿ���� %lf�̰� ���̴� %d���Դϴ�.",number,name,position,hit,age);

    return 0;
}
