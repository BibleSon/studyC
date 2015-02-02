#include <stdio.h>
#include <string.h>

char str[100 + 1];

void input () 
{
    scanf("%s", str);
}

void process() 
{
    int len;
    int i;
    len = strlen(str);
    for (i = 0; i < len; i+=2) {
        printf("%c", str[i]);
    }

    for (i = 1; i < len; i+=2) {
        printf("%c", str[i]);
    }

    printf("\n");
}

void output() 
{
}


int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        input();
        process();
        output();
    }
    return 0;
}
