#include <stdio.h>
int main(void)
{
	char num;
	double bat;
	int age;
	
	printf("���ȣ�� �Է��ϼ��� : ");
    scanf("%c", &num);
	printf("Ÿ���� �Է��ϼ��� : ");
    scanf("%lf", &bat);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	printf("%c�� ������ Ÿ���� %lf�̰� ���̴� %d���Դϴ�.\n", num, bat, age);
	return 0;
}

