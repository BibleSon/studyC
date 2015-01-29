#include <stdio.h>
int main(void)
{
	int kw;
	double basepay = 660;
	double kwperpay = 88.5;
	double tax = 0.09;
	double pay;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &kw);
	pay = (basepay + (kw * kwperpay)) * (1 + tax);
	printf("전기 사용 요금은 %lf원입니다.\n", pay);
	return 0;
}
