#include <stdio.h>

int main()
{
    int num, i, res;
    i = 1;

    printf("한 개의 단을 입력하세요 :");
    scanf("%d",&num);

    while(i<10)
    {
        res = num * i;
        printf("%d * %d = %d\n",num,i,res);
        i = i+1;
    }

    return 0;
}
