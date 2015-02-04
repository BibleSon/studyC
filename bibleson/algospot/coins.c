#include <stdio.h>

int money, m, coin, won, num;

void input()
{
    scanf("%d%d",&won,&num);
    
    for(m=0;m<num;m++)
    {
        scanf("%d",&coin);
        money[m] = coin;
    }
}

void process()
{
    money
}

void output()
{
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        input();
        process();
        output();
    }
    return 0;
}

