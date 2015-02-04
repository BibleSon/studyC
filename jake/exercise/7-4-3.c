#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 9; i++)
    {
        printf("%2d *%2d = %2d  ", 7, i, 7 * i);
        if (i % 3 == 0) {
            printf("\n");
        }
    }
    return 0;
}

