#include <stdio.h>
void mul(double *, double *);

int main()
{
    double num1, num2;

    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf",&num1,&num2);
    mul(&num1,&num2);
    printf("두 수의 곱은 : %.2lf",num1);
    return 0;
}

void mul(double *num1, double *num2)
{
    *num1 = (*num1) * (*num2);
}
