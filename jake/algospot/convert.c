#include <stdio.h>
#include <string.h>

int c;
double a;
char unit[10];

void input() 
{
    scanf("%lf%s", &a, unit);
}

void process()
{
    if (!strcmp(unit, "kg"))
    {
        printf("%d %.4lf lb\n", c++, a * 2.2046);
    }
    else if (!strcmp(unit, "lb"))
    {
        printf("%d %.4lf kg\n", c++, a * 0.4536);
    }

    else if (!strcmp(unit, "g"))
    {
        printf("%d %.4lf l\n", c++, a * 3.7854);
    }

    else if (!strcmp(unit, "l"))
    {
        printf("%d %.4lf g\n", c++, a * 0.2642);
    }
}


void output()
{
}

int main(void)
{
    int t;
    c = 1;
    scanf("%d", &t);
    while(t--)
    {
        input();
        process();
        output();
    }
    return 0;
}

