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
    printf("���� �� ���� �Է��ϼ��� : ");
    scanf("%lf%lf%lf", &max, &mid, &min);

    line_up(&max, &mid, &min);
    printf("ū ������ ���ʷ� ����ϸ� : %lf, %lf, %lf\n", max, mid, min);
    return 0;
}

