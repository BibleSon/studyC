#include <stdio.h>

int main()
{
    char name[100];
    char sex;
    int age;
    double height;

    printf("�̸��� �Է��ϼ��� :");
    scanf("%s",name);
    printf("������ �Է��ϼ��� :");
    scanf(" %c",&sex);
    printf("���̸� �Է��ϼ��� :");
    scanf("%d",&age);
    printf("Ű�� �Է��ϼ��� :");
    scanf("%lf",&height);
    printf("�̸�:%s, ����:%c, ����:%d, Ű:%.1lf",name,sex,age,height);

    return 0;

}
