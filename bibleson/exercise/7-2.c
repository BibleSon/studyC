#include <stdio.h>

int main()
{
    int num, total;
    num = 1;
    total = 0;

    while(num<101)
    {
        total = total + num;
        num = num + 2;
    }
    printf("1부터 100까지 홀수의 합은 : %d",total);

    return 0;
}


