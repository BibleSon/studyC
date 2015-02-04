#include <stdio.h>

int main(void)
{
    int next, res, i;

    for(i=1;i<=9;i++)
    {
        res = 7 * i;
        next = i%3;

        if(next != 0){
            printf(" 7 * %d = %2d", i, res);
        }
        else if( next == 0){
            printf(" 7 * %d = %1d\n", i, res);
        }
    }
    return 0;
}

