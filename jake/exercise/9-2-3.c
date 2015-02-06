#include <stdio.h>

int main(void)
{
    int size;
    int i, t;
    int ary[] = {
        1,2,3,4,5};

    size = sizeof(ary)/sizeof(int);
    for (i = 0; i < size/2; i++)
    {
        t = ary[size-1-i];
        ary[size-1-i] = ary[i];
        ary[i] = t;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
    return 0;
}
