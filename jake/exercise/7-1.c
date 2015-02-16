#include <stdio.h>

int main(void)
{
    int n = 1;
    int sum = 0;
    while(1) {
        printf("양수를 입력하세요 : ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }
        sum += n;
        printf("지금까지 입력된 값의 합 : %d\n", sum);
    }
    return 0;
}
