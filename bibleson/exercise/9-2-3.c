#include <stdio.h>

int main()
{
    int ary[10];
    int tmp, i, m;

    i = sizeof(ary)/sizeof(ary[0]);

    for(m=0;m<i;m++){
        ary[m] = m+1;
        printf("%d\t",ary[m]);
    }
    printf("\n");

    for(m=0;m<(i/2);m++){
        tmp = ary[m];
        ary[m] = ary[i-m-1];
        ary[i-m-1] = tmp;
    }

    for(m=0;m<i;m++){
        printf("%d\t",ary[m]);
    }
    return 0;
}



