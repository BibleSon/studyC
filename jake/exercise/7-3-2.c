#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    printf("양수를 입력하세요 : ");
    scanf("%d", &n);
    while(n--) {
        printf("*");
        i++;
        if (i % 5 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

