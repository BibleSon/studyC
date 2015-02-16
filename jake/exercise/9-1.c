#include <stdio.h>

int main(void)
{
    int arr[5];
    int max;
    int i;
    printf("다섯 개의 숫자를 입력하세요 : ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }


    printf("가장 큰 값은 : %d입니다.\n", max);
    return 0;
}

