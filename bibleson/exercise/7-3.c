#include <stdio.h>

int main()
{
    int star, num;
    star = 1;

    printf("양수를 입력하세요 :");
    scanf("%d",&num);

    while(star<=num)
    {
        printf("*");
        star = ++star;
    }
    return 0;
}
