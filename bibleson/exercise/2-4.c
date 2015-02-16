#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("두 정수값을 입력하세요 :");
    scanf("%d%d",&num1,&num2);
    num3 = num1 + num2;
    printf("두 정수의 합은 %d입니다.",num3);

    return 0;
}


