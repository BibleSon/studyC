#include <stdio.h>
void line_up(double *max, double *mid, double *min)
{
    double tmp;

    if(*max < *mid) { 
        tmp = *max;
        *max = *mid;
        *mid = tmp;
    }
    if(*max < *min){
        tmp = *max;
        *max = *min;
        *min =tmp;
    }
    if(*mid < *min){
        tmp = *mid;
        *mid = *min;
        *min = tmp;
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
