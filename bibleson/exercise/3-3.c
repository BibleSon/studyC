#include <stdio.h>

int main()
{
	char number;
	char name[100];
	char position[100];
	double hit;
	int age;

	printf("등번호를 입력하세요 :");
	scanf("%c",&number);
	printf("이름을 입력하세요 :");
	scanf("%s",name);
	printf("포지션을 입력하세요 :");
	scanf("%s",position);
	printf("타율을 입력하세요 :");
	scanf("%lf",&hit);
	printf("나이를 입력하세요 :");
	scanf("%d",&age);
	printf("%c번-%s-%s, 타율은 %lf이고 나이는 %d살입니다.",number,name,position,hit,age);

	return 0;
}
