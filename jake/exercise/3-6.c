#include <stdio.h>
int main(void)
{
	double year = 365.2422;
	int ss = year * 60 * 60 * 24;
	int d, h, m, s;

	d = ss / 60 / 60 / 24;
	h = (ss / 60 / 60) % 24;
	m = (ss / 60 % 60);
	s = ss % 60;
	printf("1년은 %d일, %d시간, %d분, %d초입니다.\n", d, h, m, s);
	return 0;
}

