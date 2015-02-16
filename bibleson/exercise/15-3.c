#include <stdio.h>

void exchange(double *, double *);
void func(void (*)(double *, double *), double, double);

int main()
{
    double a=10, b=20;

    func(exchange, a, b);
    return 0;
}

void func(void (*exchange) (double * ap, double * bp), double a1, double b1)
{
    printf("바꾸기 전의 a, b의 값 : %lf, %lf",a1, b1);

    exchange(&a1, &b1);

    printf("\n바꾼 훈의 a, b의 값 : %lf, %lf",a1, b1);
}

void exchange(double *ap, double *bp)
{
    double tmp;

    tmp = *ap;
    *ap = *bp;
    *bp = tmp;
}
