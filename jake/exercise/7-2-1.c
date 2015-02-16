#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    for(i = 1; i <= 100; i++) {
        if (i % 2 == 1)
            sum += i;
    }
    printf("1부터 100까지 홀수의 합은 : %d\n", sum);
    return 0;
}
