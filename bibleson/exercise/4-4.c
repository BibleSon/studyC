#include <stdio.h>

int main()
{
    int distance, speed, time, rest;

    printf("�Ÿ�(km)�� �ӷ�(km/h)�� �Է��ϼ��� :");
    scanf("%d%d",&distance,&speed);

    time = distance/speed;
    rest = distance%speed;

    printf("%d�ð� �ɸ��� %d(km)�� �����ϴ�.",time,rest);

    return 0;
}

