#include <stdio.h>

int main()
{
    int his, lit, art, tot;
    double avg;

    printf("역사, 문학, 예능 점수를 입력하세요 : ");
    scanf("%d %d %d",&his,&lit,&art);

    tot = his + lit + art;
    avg = tot/3.0;

    printf("총점은 %d이고 평균은 %lf입니다.",tot,avg);
    return 0;
}
