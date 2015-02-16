#include <stdio.h>

int main()
{
    int d1, d2;
    printf("두 정수를 입력하세요 :");
    scanf("%d%d",&d1,&d2);



    printf("나눗셈 연산식은 \"%d / %d = %lf\"입니다.",d1,d2,(double)d1/d2);

    return 0;
}
