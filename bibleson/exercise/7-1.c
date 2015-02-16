#include <stdio.h>

int main()
{
    int num, total;

    num = 0;
    total = 0;

    while(num>=0)
    {
        printf("양수를 입력하세요 :");
        scanf("%d",&num);
        total = total + num;
        printf("지금까지 입력된 값의 합: %d\n",total);
    }

    return 0;
}
