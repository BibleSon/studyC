#include <stdio.h>
int main(void)
{
	int kw;
	double basecharge = 660;
	double kwpercharge = 88.5;
	double tax = 0.09;
	double charge;
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
    scanf("%d", &kw);
	charge = (basecharge + (kw * kwpercharge)) * (1 + tax);
	printf("���� ��� ����� %lf���Դϴ�.\n", charge);
	return 0;
}
