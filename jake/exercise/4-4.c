#include <stdio.h>

int main(void)
{
    int dist, speed;
    double t;
    printf("�Ÿ��� �ӷ��� �Է��ϼ��� : ");
    scanf("%d%d", &dist, &speed);
    t = ((dist * 1.0f) / speed);
    // printf("%d�ð� �ɸ��� %d(km)�� �����ϴ�.\n", dist / speed, dist % speed);
    printf("�ɸ��� �ð��� : %d�ð�, %d��, %.3f���Դϴ�. \n", 
            (int)t, 
            (int)(t * 60 - (int)t * 60), 
            (t * 60 * 60) - (int)(t * 60) * 60);
    return 0;
}
