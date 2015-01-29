#include <stdio.h>

int main()
{
	double year = 365.2422;

	int day, hour, min, sec;
	int g1, g2, g3;

	g1 = year*24*60*60;
	sec = g1%60;
	g2 = g1/60;
	min = g2%60;
	g3 = g2/60;
	hour = g3%24;
	day = g3/24;

	printf("1년은 %d일, %d시간, %d분, %d초입니다.",day,hour,min,sec);
	return 0;
}
