#include <stdio.h>

int main()
{

    double a = 1.3;
    double b = 1.7;

    double *pa;
    double *pb;

    double tmp;

    printf("�ٲٱ� ���� a, b�� �� : %.1lf, %.1lf\n",a,b);

    pa = &a;
    pb = &b;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;

    printf("�ٲ� ���� a, b�� �� : %.1lf, %.1lf",a,b);

    return 0;
}
