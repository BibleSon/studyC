#include <stdio.h>
int main()
{
    int num, abs;

    printf("정수값을 입력하세요 :");
    scanf("%d", &num);

    if(num<0) { abs = num*(-1); }
    else if(num>=0) { abs = num; } 

    printf("절대값은 %d입니다.",abs);

    return 0;
}
