#include <stdio.h>

int main(void)
{
    int dist, speed;
    double t;
    printf("거리와 속력을 입력하세요 : ");
    scanf("%d%d", &dist, &speed);
    t = ((dist * 1.0f) / speed);
    // printf("%d시간 걸리고 %d(km)가 남습니다.\n", dist / speed, dist % speed);
    printf("걸리는 시간은 : %d시간, %d분, %.3f초입니다. \n", 
            (int)t, 
            (int)(t * 60 - (int)t * 60), 
            (t * 60 * 60) - (int)(t * 60) * 60);
    return 0;
}
