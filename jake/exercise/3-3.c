#include <stdio.h>
int main(void)
{
    char num;
    char name[20];
    char position[20];
    double bat;
    int age;


    printf("등번호를 입력하세요 : ");
    scanf("%c", &num);
    printf("이름을 입력하세요 : ");
    scanf("%s", name);
    printf("포지션을 입력하세요 : ");
    scanf("%s", position);
    printf("타율을 입력하세요 : ");
    scanf("%lf", &bat);
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);
    printf("%c번-%s-%s, 타율은 %lf이고 나이는 %d살입니다.\n", num, name, position, bat, age);
    return 0;
}

