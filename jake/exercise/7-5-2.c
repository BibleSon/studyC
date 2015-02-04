#include <stdio.h>

int main(void)
{
    int i;
    int j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 2; j <= 8; j+=3)
        {
            printf("%d * %d = %2d   ", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}

