#include <stdio.h>

double get_next(double *);
double get_before(double *);

double res;
int i;

int main()
{
    double ary[] = {0.1, 0.3, 0.5, 0.7, 0.9};
    res = ary[0];

    printf("nextȣ�� : %.1lf\n",res);
    get_next(ary);
    printf("nextȣ�� : %.1lf\n",res);
    get_next(ary);
    printf("beforeȣ�� : %.1lf\n",res);
    get_before(ary);
    printf("beforeȣ�� : %.1lf\n",res);

    return 0;
}

double get_next(double *ap)
{
    i++;
    res = ap[i];
    return res;
}

double get_before(double *ap)
{
    i--;
    res = ap[i];
    return res;
}
