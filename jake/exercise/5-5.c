#include <stdio.h>

int main(void)
{
    char name[100], gender;
    int age;
    double height;
    printf("이름을 입력하세요 : ");
    scanf("%s", name);
    printf("성별을 입력하세요 : ");
    scanf(" %c", &gender);
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);
    printf("키를 입력하세요 : ");
    scanf("%lf", &height);
    printf("이름:%s, 성별:%c, 나이:%d, 키:%.1lf\n", 
            name, gender, age, height);
    return 0;
}

