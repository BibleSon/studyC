#include <stdio.h>

int main()
{
    double ary[] = {1.5, 20.1, 16.4, 2.3, 3.5};
    int m, i;
    double tot, avg;

    tot = 0;

    m = sizeof(ary)/sizeof(ary[0]);

    for(i=0;i<m;i++){
        tot = tot + *(&ary[0] + i);
    }

    avg = tot / m;

    printf("Æò±Õ°ª : %.2lf",avg);
    return 0;

}
