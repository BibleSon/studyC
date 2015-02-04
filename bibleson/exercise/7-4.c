#include <stdio.h>

int main()
{
    int tot, i, age;
    double avg;

    tot = 0;

    for(i=1;i<=5;i++)
    {
        printf("%d. 나이를 입력하세요 : ",i);
        scanf("%d",&age);
        tot = tot + age;
    }
    avg = tot/5.0;
    printf("다섯명의 평균 나이는 %.1lf입니다.",avg);

    return 0;
}

