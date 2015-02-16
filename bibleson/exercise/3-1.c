#include <stdio.h>

int main()
{
    int kw;
    double cost, totalcost;

    printf("전기 사용량을 입력하세요(kw) :");
    scanf("%d",&kw);

    cost = kw*88.5+660;
    totalcost = cost + (cost*0.09);

    printf("전기 사용 요금은 %lf원 입니다.",totalcost);
    return 0;


}
