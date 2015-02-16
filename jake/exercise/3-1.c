#include <stdio.h>
int main(void)
{
	int kw;
	double basecharge = 660;
	double kwpercharge = 88.5;
	double tax = 0.09;
	double charge;
	printf("전기 사용량을 입력하세요(kw) : ");
    scanf("%d", &kw);
	charge = (basecharge + (kw * kwpercharge)) * (1 + tax);
	printf("전기 사용 요금은 %lf원입니다.\n", charge);
	return 0;
}
