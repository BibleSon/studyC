#include <stdio.h>
#include <string.h>

int j;
int n;
char str[80 + 1];
void input()
{
    scanf("%d", &n);
    scanf("%s", str);
}

void process()
{
    int i;
    int len = strlen(str);
    for(i = n - 1; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
    str[len-1] = '\0';
}

void output()
{
    printf("%d %s\n", j++, str);
}

int main(void)
{
    int t;
    j = 1;
    scanf("%d", &t);
    while (t--)
    {
       input();
       process();
       output();
    }

    return 0;
}
