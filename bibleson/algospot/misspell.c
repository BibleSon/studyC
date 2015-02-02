#include <stdio.h>
#include <string.h>

int t, len, m, num;
int number = 1;
char sen[1000];

void input()
{
    scanf("%d%s",&num, sen);
}

void process()
{
    len = strlen(sen);
    for(m=num-1;m<len;m++)
    {
        sen[m] = sen [m+1];
    }
}

void output()
{
    printf("%d %s\n",number, sen);
    number = number +1;
}

int main(void)
{
    scanf("%d",&t);
    while(t--)
    {
        input();
        process();
        output();
    }

    return 0;
}


