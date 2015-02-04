#include <stdio.h>

int main(void)
{
    int n;
    int i;
    printf("한 개의 단을 입력하세요 : ");
    scanf("%d", &n);

    for (i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
