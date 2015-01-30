#include <stdio.h>

int main()
{
    int distance, speed, time, rest;

    printf("거리(km)와 속력(km/h)을 입력하세요 :");
    scanf("%d%d",&distance,&speed);

    time = distance/speed;
    rest = distance%speed;

    printf("%d시간 걸리고 %d(km)가 남습니다.",time,rest);

    return 0;
}

