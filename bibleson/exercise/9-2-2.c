#include <stdio.h>

int main()
{
    int ary[] = {2,8,15,1,8,10,5,19,19,3,5,6,6,2,8,2,12,16,3,8,17,
        12,5,3,14,13,3,2,17,19,16,8,7,12,19,10,13,8,20,
        16,15,4,12,3,14,14,5,2,12,14,9,8,5,3,18,18,20,4};

    int count[20] = {0};
    int i, n, m, cnt;

    i = sizeof(ary)/sizeof(ary[0]);

    for(m=0;m<i;m++){
        count[ary[m]-1] = count[ary[m]-1] +1;
    }


    for(n=1;n<=20;n++){
        printf("%d - %d��\n",n,count[n-1]);
    }

    return 0;
}
