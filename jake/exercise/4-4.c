#include <stdio.h>

int main(void)
{
    int dist, speed;
    printf("거리(km)와 속력(km/h)을 입력하세요 : ");
    scanf("%d%d", &dist, &speed);
    printf("%d시간 걸리고 %d(km)가 남습니다.\n", dist / speed, dist % speed);
    return 0;
}
