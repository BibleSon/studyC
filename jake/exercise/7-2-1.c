#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    for(i = 1; i <= 100; i++) {
        if (i % 2 == 1)
            sum += i;
    }
    printf("1���� 100���� Ȧ���� ���� : %d\n", sum);
    return 0;
}
