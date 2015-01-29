#include <stdio.h>
int main(void)
{
	int history, literature, artistic;
	int sum;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d%d%d", &history, &literature, &artistic);
	sum = history + literature + artistic;
	printf("총점은 %d이고 평균은 %lf입니다.\n", sum, sum / 3.0);
	return 0;
}

