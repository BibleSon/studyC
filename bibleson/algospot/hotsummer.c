#include <stdio.h>
int max, t, t1, t2, t3, t4, t5, t6, t7, t8, t9;

void input()
{
    scanf("%d",&max);
    scanf("%d%d%d%d%d%d%d%d%d",&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9);
}

void process()
{
    t = t1+t2+t3+t4+t5+t6+t7+t8+t9;
    if(t<=max)
    {
        printf("YES\n");
    }
    else {printf("NO\n");}
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

