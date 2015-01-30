#include <stdio.h>

int main()
{
    char name[100];
    char sex;
    int age;
    double height;

    printf("이름을 입력하세요 :");
    scanf("%s",name);
    printf("성별을 입력하세요 :");
    scanf(" %c",&sex);
    printf("나이를 입력하세요 :");
    scanf("%d",&age);
    printf("키를 입력하세요 :");
    scanf("%lf",&height);
    printf("이름:%s, 성별:%c, 나이:%d, 키:%.1lf",name,sex,age,height);

    return 0;

}

