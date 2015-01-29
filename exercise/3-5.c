#include <stdio.h>

int main()
{
	int time, hour, min, sec, g1;

	time = 32767;

	sec = time%60;
	g1 = time/60;
	min = g1%60;
	hour = g1/60;

	printf("%d초는 %d시간, %d분, %d초입니다.",time,hour,min,sec);

	return 0;
}

