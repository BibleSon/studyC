#include <stdio.h>

int main()
{
    double *ap, *bp;
    ap = (double *)malloc(sizeof(double));
    bp = (double *)malloc(sizeof(double));
    
    printf("최고기온과 최저기온을 입력하세요 : ");
    scanf("%lf%lf",ap,bp);
    printf("일교차는 %.1lf도입니다.",*ap - *bp);

    free(ap);
    free(bp);

    return 0;
}
