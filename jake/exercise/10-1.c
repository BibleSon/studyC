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

    printf("�ٲٱ� ���� a, b�� �� : %.1lf %.1lf\n", a, b);
    // pa�� pb�� ����ؼ� a�� b�� ���� �ٲپ��

    t = *pa;
    *pa = *pb;
    *pb = t;

    // process

    printf("�ٲ� ���� a, b�� �� : %.1lf %.1lf\n", a, b);
    return 0;
}


