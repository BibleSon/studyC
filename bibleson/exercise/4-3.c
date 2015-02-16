#include <stdio.h>

int main()
{
    unsigned int age, day, hour, min, sec;

    printf("몇 살까지 살고 싶습니까?");
    scanf("%d",&age);

    if(age<70){printf("오래사셔야죠^^ 다시 입력해주세요.");}
    else {
        day = 365*age;
        hour = day*24;
        min = hour*60;
        sec = min*60;
        printf("%u일, %u시간, %u분, %u초입니다.",day,hour,min,sec);
    }

    return 0;
}
