#include <stdio.h>
int main(void)
{
	char num;
	double bat;
	int age;
	
	printf("등번호를 입력하세요 : ");
    scanf("%c", &num);
	printf("타율을 입력하세요 : ");
    scanf("%lf", &bat);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("%c번 선수의 타율은 %lf이고 나이는 %d살입니다.\n", num, bat, age);
	return 0;
}

