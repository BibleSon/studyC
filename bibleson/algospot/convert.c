#include <stdio.h>
#include <string.h>

double num, number;
int n = 1;
char unit[1000];

void input()
{
    scanf("%lf%s",&num,unit);
}

void process()
{
    if(!strcmp(unit,"kg")){
            number = num*2.2046;
            printf("%d %.4lf lb\n",n,number);
    }
    else if(!strcmp(unit,"l")){
            number = num*0.2642;
            printf("%d %.4lf g\n",n,number);
    }
    else if(!strcmp(unit,"lb")){
            number = num*0.4536;
            printf("%d %.4lf kg\n",n,number);
    }
    else if(!strcmp(unit,"g")){
            number = num*3.7854;
            printf("%d %.4lf l\n",n,number);
    }
    n = n+1;
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
