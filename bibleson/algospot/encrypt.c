#include <stdio.h>
#include <string.h>

char sen[1000];
char tmp[1000];
int len, m, i;

void input()
{
    memset(tmp, 0, sizeof(tmp));
    scanf("%s",sen);
}

void process()
{
    i = 0;
    len = strlen(sen);
    for(m=0;m<len;m+=2)
    {
        tmp[i] = sen[m];
        i = i+1;
    }
    for(m=1;m<len;m+=2)
    {
        tmp[i] = sen[m];
        i = i+1;
    }
}

void output()
{
    printf("%s\n",tmp);
}

int main(void)
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

        
