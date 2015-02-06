#include <stdio.h>


int main(void)
{

    double a = 1.3;
    double b = 1.7;

    double *pa;
    double *pb;
    double t;

    pa = &a;
    pb = &b;

    printf("바꾸기 전의 a, b의 값 : %.1lf %.1lf\n", a, b);
    // pa랑 pb만 사용해서 a와 b의 값을 바꾸어라

    t = *pa;
    *pa = *pb;
    *pb = t;

    // process

    printf("바꾼 후의 a, b의 값 : %.1lf %.1lf\n", a, b);
    return 0;
}


