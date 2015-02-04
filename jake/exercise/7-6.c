#include <stdio.h>

int main(void)
{
    int n = 0;
    int weight;
    
    while(1)
    {
        printf("계란의 무게를 입력하세요(단위 : g) : ");
        scanf("%d", &weight);
        if (weight >= 300) {
            n++;
        } else {
            continue;
        }

        if (n == 30) {
            printf("계란 한 판을 모두 담았습니다.!\n");
            break;
        } else {
            printf("현재 왕계란의 수 : %d\n", n);
        }
    }
    return 0;
}
