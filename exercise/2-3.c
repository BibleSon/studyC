#include <stdio.h>
int main(void)
{
	int height=168, weight=48, cha;
	cha = height - weight;
	printf("키 : %dcm\n몸무게 : %dkg\n키에서 몸무게를 뺀 값은 %d입니다.\n", height, weight, cha);
	return 0;
}
