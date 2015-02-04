#include <stdio.h>

int main(void)
{
    int n;
    printf("양수를 입력하세요 : ");
    scanf("%d", &n);
    while(n--)
        printf("*");
    printf("\n");
    return 0;
}
