#include <stdio.h>

int main(void)
{
    int num, star, res;
    num = 0;
    star = 1;

    printf("양수를 입력하세요 :");
    scanf("%d",&num);

    while(star<=num)
    {
        res = star%5;
        if(res != 0){
            printf("*");
        }
        else if(res == 0){
            printf("*\n");
        }
        star = ++star;
    }
    return 0;
}

