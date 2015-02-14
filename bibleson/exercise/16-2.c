#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ap, *bp, *cp;
    int i;

    ap = (int *)malloc(12*sizeof(int));
    bp = (int *)malloc(12*sizeof(int));
    cp = (int *)malloc(12*sizeof(int));

    for(i=0;i<12;i++){
        ap[i] = i+1;
    }

    for(i=0;i<12;i++){
        bp[i] = 12-i;
    }

    for(i=0;i<12;i++){
        cp[i] = ap[i] + bp[i];
    }

    for(i=0;i<12;i++){
        printf("%4d",cp[i]);
        if(i%4==3){ printf("\n"); }
    }

    free(ap);
    free(bp);
    free(cp);

    return 0;
}


