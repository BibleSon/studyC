#include <stdio.h>

void line_up(double *pmax, double *pmid, double *pmin)
{
    double t;
    if (*pmax < *pmid) {
        t = *pmax;
        *pmax = *pmid;
        *pmid = t;
    }

    if (*pmax < *pmin) {
        t = *pmax;
        *pmax = *pmin;
        *pmin = t;
    }

    if (*pmid < *pmin) {
        t = *pmid;
        *pmid = *pmin;
        *pmin = t;
    }
}

int main()
{
    double max, mid, min;

    printf("숫자 세 개를 입력하세요 : ");
    scanf("%lf%lf%lf", &max, &mid, &min);

    line_up(&max, &mid, &min);
    printf("큰 수부터 차례로 출력하면 : %lf, %lf, %lf\n", max, mid, min);
    return 0;
}

