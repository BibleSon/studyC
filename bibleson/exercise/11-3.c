#include <stdio.h>
double min(double *p_ary, int m);

int main()
{
    int m;
    double res;
    double ary[] = {1.5, 20.1, 16.4, 2.3, 3.5};
    
    m = sizeof(ary)/sizeof(ary[0]);

    res = min(ary, m);

    printf("배열의 최소값 : %.1lf",res);

    return 0;
}

double min(double *p_ary, int m)
{
    int i;
    double res;

    res = *p_ary;
    
    for(i=1;i<m;i++){
        if(res > p_ary[i]){ res = p_ary[i]; }
    }

    return res;
}

