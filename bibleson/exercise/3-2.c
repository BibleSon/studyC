#include <stdio.h>

int main()
{
    char number;
    double hit;
    int age;

    printf("���ȣ�� �Է��ϼ��� :");
    scanf("%c",&number);
    printf("Ÿ���� �Է��ϼ��� :");
    scanf("%lf",&hit);
    printf("���̸� �Է��ϼ��� :");
    scanf("%d",&age);
    printf("%c�� ������ Ÿ���� %lf�̰� ���̴� %d���Դϴ�.",number,hit,age);
    return 0;
}
