#include <stdio.h>

int main()
{
    double ary[] = {1.5, 20.1, 16.4, 2.3, 3.5};

    double *p_ary = ary;
    int m, i;
    double tmp;
 
    m = sizeof(ary)/sizeof(ary[0]);

    for(i=0;i<(m/2);i++){
        tmp = *(p_ary+i);
        *(p_ary+i) = *(p_ary + (m-i-1));
        *(p_ary + (m-i-1)) = tmp;
    }

    for(i=0;i<m;i++){
        printf("%.1lf ",*(p_ary +i));
    }

    
    return 0;

}
