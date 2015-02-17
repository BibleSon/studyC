#include <stdio.h>

extern char grd;

void input_score(int *k, int *e, int *m)
{
    printf("세 과목의 점수를 입력 하세요 : ");
    scanf("%d%d%d", k, e, m);
}

int total(int k, int e, int m)
{
    return k + e + m;
}

double grade(int t)
{
    if(t/3.0 >= 90){ grd = 'A'; }
    else if(t/3.0 >= 80){ grd = 'B'; }
    else if(t/3.0 >= 70){ grd = 'C'; }
    else { grd = 'F'; }

    return t / 3.0;
}

